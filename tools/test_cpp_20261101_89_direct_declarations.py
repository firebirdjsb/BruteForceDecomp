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

def block(row):
    return NOTE + ''.join('extern ' + s + ';\n' for s in row['declarations'])

def preimage(entry):
    text = source_path(ROOT, entry).read_text()
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
