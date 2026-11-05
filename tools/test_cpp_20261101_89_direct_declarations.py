#!/usr/bin/env python3
"""Exact-source declaration gates and real partial host linking, never Xbox ABI proof."""
from __future__ import annotations
import hashlib
import json
import re
import shutil
import subprocess
import tempfile
import unittest
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
from body_hash_labels import read_body_digest
from source_layout import source_path

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = ROOT / 'metadata/cpp_20261101_89_direct_declarations.json'
DATA = json.loads(MANIFEST.read_text())
CASES = {r['caller']: r for r in DATA['callers']}
NOTE = '/* Source-matched declarations; original direct calls checked. Xbox ABI_UNVERIFIED. */\n'

# Independently reviewed source-only declaration added after the 89-call manifest.
# Pin BOTH the newer full source and the original manifest preimage; never
# accept arbitrary callee drift as evidence of an unchanged original function.
INDEPENDENT_CALLEE_ADDITIONS = {
    '0x0015b9d0': (
        'f1afaa60039d01addf0a7f451835a495e09a6bdf5e45a2a2c5ae09f1d2c06128',
        '/* Source-matched callee draft declarations; Xbox ABI remains ABI_UNVERIFIED. */\n'
        'extern void FUN_0010bc40(void);\n',
    ),
    # The later retail-EAX return repair added only this exact declaration to
    # a callee referenced by the older 89-edge manifest. Preserve both hashes.
    '0x0027e5f0': (
        '1a5267027edf88debb630ee5978aafbdfd132bf7f86fd9592026dfed832d43ad',
        '/* Original E8 call and callee EAX preservation verified; Xbox ABI_UNVERIFIED. */\n'
        'extern int FUN_0027e580(void);\n',
    ),
}

def strip_pinned_independent_addition(entry, text):
    if entry not in INDEPENDENT_CALLEE_ADDITIONS:
        return text
    full_sha, block = INDEPENDENT_CALLEE_ADDITIONS[entry]
    if hashlib.sha256(text.encode()).hexdigest() != full_sha:
        raise AssertionError('independent callee source drift: ' + entry)
    if text.count(block) != 1:
        raise AssertionError('missing or duplicate independent declaration: ' + entry)
    return text.replace(block, '', 1)

# Only these two historical callee images were changed by the independently
# reviewed counter WORD package. Its immutable manifest pins both full images
# and one exact extern substitution per callee, not a general type rewrite.
COUNTER_CALLEES = ('0x00385d45', '0x00385d64')
COUNTER_MANIFEST_SHA = 'f21931924ea7c42ccde29b00284942e8321f84fc3ad3da0d8f71e641b120ba69'


def pinned_counter_cases(root=ROOT):
    import verify_cpp_20261105_counter_word_widths as counter
    with (root / counter.NAME).open('rb') as stream:
        raw = stream.read(1024*1024+1)
    if hashlib.sha256(raw).hexdigest() != COUNTER_MANIFEST_SHA:
        raise AssertionError('reviewed counter manifest bytes differ')
    doc = counter.load_bytes(raw)
    selected = {}
    for entry in COUNTER_CALLEES:
        matches = [case for case in doc['cases'] if case['entry'] == entry]
        historical = {target['source_sha256'] for row in CASES.values()
                      for target in row['callees'] if target['entry'] == entry}
        if len(matches) != 1 or historical != {matches[0]['source_before_sha256']}:
            raise AssertionError('counter predecessor does not equal historical callee: ' + entry)
        selected[entry] = matches[0]
    return selected


def project_pinned_counter_callee(entry, raw, root=ROOT):
    if entry not in COUNTER_CALLEES:
        return raw
    if not isinstance(raw, bytes):
        raise AssertionError('counter projection requires exact raw source bytes')
    import verify_cpp_20261105_counter_word_widths as counter
    case = pinned_counter_cases(root)[entry]
    if hashlib.sha256(raw).hexdigest() == case['source_before_sha256']:
        return raw
    # restore rejects everything except the complete approved postimage, then
    # checks exact substitution reversal, preimage SHA/Git blob and roundtrip.
    return counter.restore(case, raw)


def block(row):
    return NOTE + ''.join('extern ' + s + ';\n' for s in row['declarations'])

def preimage(entry):
    raw = source_path(ROOT, entry).read_bytes()
    text = project_pinned_counter_callee(entry, raw).decode()
    if entry in CASES:
        addition = block(CASES[entry])
        if text.count(addition) != 1:
            raise AssertionError('missing or duplicate declaration block: ' + entry)
        text = text.replace(addition, '', 1)
    return strip_pinned_independent_addition(entry, text)

def run(argv, **kwargs):
    result = subprocess.run(argv, capture_output=True, text=True, timeout=60, **kwargs)
    if result.returncode:
        raise AssertionError(result.stderr)
    return result

class DeclarationBatch(unittest.TestCase):
    def test_independent_callee_reconciliation_negative_controls(self):
        entry = '0x0015b9d0'
        current = source_path(ROOT, entry).read_bytes().decode()
        original = strip_pinned_independent_addition(entry, current)
        self.assertEqual(hashlib.sha256(original.encode()).hexdigest(),
                         'e113046418ddb4814cc32559717835c3925d132d04decb2697597844a6fbeb49')
        self.assertEqual(read_body_digest(current), read_body_digest(original))
        full_sha, block = INDEPENDENT_CALLEE_ADDITIONS[entry]
        self.assertEqual(hashlib.sha256(current.encode()).hexdigest(), full_sha)
        for corrupted in (
            current.replace('extern void FUN_0010bc40(void);',
                            'extern int FUN_0010bc40(void);', 1),
            current.replace('FUN_0010bc40();', 'FUN_0010bc40(1);', 1),
            current.replace(block, '', 1),
            current.replace(block, block + block, 1),
        ):
            with self.subTest(mutated_sha=hashlib.sha256(corrupted.encode()).hexdigest()):
                with self.assertRaises(AssertionError):
                    strip_pinned_independent_addition(entry, corrupted)

    def test_later_eax_return_declaration_negative_controls(self):
        entry = '0x0027e5f0'
        current = source_path(ROOT, entry).read_bytes().decode()
        original = strip_pinned_independent_addition(entry, current)
        self.assertEqual(hashlib.sha256(original.encode()).hexdigest(),
                         '3152cd3f4064b6d6b91ca8d95fe9e3d8e30255fb0521103d71618d12d8b3d1c7')
        self.assertEqual(read_body_digest(current), read_body_digest(original))
        full_sha, block = INDEPENDENT_CALLEE_ADDITIONS[entry]
        self.assertEqual(hashlib.sha256(current.encode()).hexdigest(), full_sha)
        for corrupted in (
            current.replace(block, '', 1),
            current.replace(block, block + block, 1),
            current.replace('extern int FUN_0027e580(void);',
                            'extern void FUN_0027e580(void);', 1),
            current.replace('FUN_0027e580();', 'FUN_0027e580(1);', 1),
        ):
            with self.subTest(mutated_sha=hashlib.sha256(corrupted.encode()).hexdigest()):
                with self.assertRaises(AssertionError):
                    strip_pinned_independent_addition(entry, corrupted)

    def test_reviewed_counter_callee_projection_and_negative_controls(self):
        import verify_cpp_20261105_counter_word_widths as counter
        cases = pinned_counter_cases()
        source_controls = manifest_controls = 0
        for entry, case in cases.items():
            raw = source_path(ROOT, entry).read_bytes()
            before = project_pinned_counter_callee(entry, raw)
            after = counter.apply(case, before)
            self.assertIn(raw, (before, after))
            self.assertEqual(hashlib.sha256(before).hexdigest(), case['source_before_sha256'])
            self.assertEqual(hashlib.sha256(after).hexdigest(), case['source_after_sha256'])
            self.assertEqual(project_pinned_counter_callee(entry, before), before)
            self.assertEqual(project_pinned_counter_callee(entry, after), before)
            self.assertEqual(read_body_digest(before.decode()), read_body_digest(after.decode()))
            self.assertEqual(project_pinned_counter_callee('0x00385df0', after), after)
            with self.assertRaises(AssertionError):
                project_pinned_counter_callee(entry, after.decode())
            for source, declaration in ((before, case['edits'][0]['before'].encode()),
                                        (after, case['edits'][0]['after'].encode())):
                mutants = [source+b'\n', source.replace(b'\n',b'\r\n'),
                           source.replace(b'\n',b'\r\n',1), b'\xef\xbb\xbf'+source,
                           source[:-1], source.replace(declaration,b'',1),
                           source.replace(declaration,declaration+b'\n'+declaration,1),
                           source.replace(declaration,declaration.replace(b'uint',b'int'),1),
                           source.replace(b'ABI_UNVERIFIED',b'ABI_VERIFIED',1),
                           source.replace(b'param_1 <=',b'param_1 <',1),
                           source.replace(b'return bVar1;',b'return true;',1),
                           source.replace(b'(ushort param_1)',b'(uint param_1)',1)]
                for mutant in mutants:
                    self.assertNotEqual(mutant, source)
                    with self.assertRaises((AssertionError, ValueError)):
                        project_pinned_counter_callee(entry, mutant)
                    source_controls += 1
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary); path = root / counter.NAME
            path.parent.mkdir(parents=True)
            original = (ROOT / counter.NAME).read_bytes()
            variants = [original+b'\n', original.replace(b'\n',b'\r\n'), original[:-1],
                        b'{"cases":[],"cases":[]}', b'{"cases":NaN}', b'{"cases":Infinity}']
            for key in ('source_before_sha256', 'source_after_sha256', 'entry', 'source', 'preimage_git_blob'):
                changed = json.loads(original); changed['cases'][-1][key] += '!'
                variants.append(json.dumps(changed).encode())
            changed = json.loads(original); changed['cases'][-1]['edits'][0]['after'] = 'extern uint32_t DAT_004a8fe6;'
            variants.append(json.dumps(changed).encode())
            for mutant in variants:
                path.write_bytes(mutant)
                for entry in COUNTER_CALLEES:
                    with self.assertRaises((AssertionError, ValueError)):
                        project_pinned_counter_callee(entry, source_path(ROOT, entry).read_bytes(), root)
                    manifest_controls += 1
            path.write_bytes(original)
            self.assertEqual(pinned_counter_cases(root), cases)
        print('Exact counter predecessor projection: 2 old/current image pairs;',
              source_controls, 'raw-source and', manifest_controls, 'manifest corruption controls')

    def test_exact_preimages_body_labels_and_existing_definitions(self):
        self.assertEqual(len(CASES), 89)
        self.assertEqual(sum(len(r['declarations']) for r in CASES.values()), 168)
        self.assertEqual(sum(len(r['calls']) for r in CASES.values()), 217)
        for entry, row in CASES.items():
            with self.subTest(entry=entry):
                text = preimage(entry)
                self.assertEqual(hashlib.sha256(text.encode()).hexdigest(), row['source_before_sha256'])
                self.assertEqual(read_body_digest(text), (row['body_sha256'].upper(), False))
                self.assertIn('Entry: ' + entry, text)
                self.assertIn('ABI_UNVERIFIED', text)
                for target in row['callees']:
                    callee = preimage(target['entry'])
                    self.assertEqual(hashlib.sha256(callee.encode()).hexdigest(), target['source_sha256'])
                    self.assertEqual(read_body_digest(callee), (target['body_sha256'].upper(), False))
                    self.assertRegex(callee, re.escape(target['signature']) + r'\s*\{')

    def test_strict_cpp17_o0_o2_and_missing_declaration_negatives(self):
        clang = shutil.which('clang++')
        self.assertIsNotNone(clang, 'strict Clang++17 is required')
        def check(entry):
            source = source_path(ROOT, entry)
            argv = [clang, '-std=c++17', '-x', 'c++', '-I', str(ROOT / 'include'), '-fsyntax-only']
            for opt in ('-O0', '-O2'):
                run([*argv, opt, str(source)])
            bad = subprocess.run([*argv, '-'], input=preimage(entry), capture_output=True,
                                 text=True, timeout=60)
            if bad.returncode == 0 or 'use of undeclared identifier' not in bad.stderr:
                raise AssertionError('declaration-removal negative failed: ' + entry)
        with ThreadPoolExecutor(max_workers=8) as pool:
            list(pool.map(check, CASES))

    def test_partial_link_with_actual_callee_sources(self):
        clang, nm = shutil.which('clang++'), shutil.which('nm')
        self.assertIsNotNone(clang)
        self.assertIsNotNone(nm)
        targets = DATA['partial_host_link_definitions']
        self.assertEqual(len(targets), 30)
        entries = sorted(set(CASES) | set(targets))
        with tempfile.TemporaryDirectory() as tmp:
            objects = {entry: Path(tmp) / (entry + '.o') for entry in entries}
            def compile_one(entry):
                run([clang, '-std=c++17', '-O0', '-c', '-I', str(ROOT / 'include'),
                     str(source_path(ROOT, entry)), '-o', str(objects[entry])])
            with ThreadPoolExecutor(max_workers=8) as pool:
                list(pool.map(compile_one, entries))
            linked = Path(tmp) / 'partial_host_link.o'
            # Relocatable link permits unrelated unresolved game/platform dependencies.
            # No stubs, synthetic implementations, execution, or Xbox ABI credit.
            run([clang, '-r', *map(str, objects.values()), '-o', str(linked)])
            unresolved = run([nm, '-C', '-u', str(linked)]).stdout
            defined = run([nm, '-C', '--defined-only', str(linked)]).stdout
            for entry in targets:
                symbol = 'FUN_' + entry[2:] + '('
                self.assertNotIn(symbol, unresolved)
                self.assertIn(symbol, defined)

if __name__ == '__main__':
    unittest.main()
