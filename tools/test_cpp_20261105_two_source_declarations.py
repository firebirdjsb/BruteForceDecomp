#!/usr/bin/env python3
"""Fail-closed source-only declarations; compile drafts but never execute them."""
from __future__ import annotations
import argparse
import copy
import csv
import io
import json
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
import unittest

import verify_cpp_20261105_two_source_declarations as evidence

ROOT = Path(__file__).resolve().parents[1]
PRIVATE_EXPORT = None


def leaves(value, path=()):
    if isinstance(value, dict):
        for key, child in value.items():
            yield from leaves(child, path+(key,))
    elif isinstance(value, list) and value:
        for key, child in enumerate(value):
            yield from leaves(child, path+(key,))
    else:
        yield path, value


def alter(doc, path, value):
    result = copy.deepcopy(doc); node = result
    for key in path[:-1]:
        node = node[key]
    node[path[-1]] = value
    return result


def changed(value):
    if isinstance(value, bool):
        return not value
    if isinstance(value, int):
        return value+1
    if isinstance(value, str):
        return value+'!'
    return ['forged']


class TwoSourceDeclarationTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.doc = evidence.load_manifest(ROOT)
        cls.compiler = shutil.which('clang++')
        if cls.compiler is None:
            raise RuntimeError('clang++ is required; strict source checks cannot be skipped')

    def compile(self, source, opt, output=None):
        cmd = [self.compiler, '-std=c++17', opt, '-Werror=pointer-to-int-cast',
               '-Werror=float-conversion', '-Werror=implicit-int-float-conversion',
               '-ferror-limit=0', '-I', str(ROOT/'include'), '-x', 'c++', '-']
        cmd += ['-c', '-o', str(output)] if output else ['-fsyntax-only']
        return subprocess.run(cmd, input=source, text=True, capture_output=True, timeout=60)

    def test_exact_sources_and_reversal(self):
        evidence.verify_source(ROOT, self.doc)
        for case in self.doc['cases']:
            source = (ROOT/case['source']).read_text(); old = evidence.restore(case, source)
            self.assertEqual(evidence.apply(case, old), source)
            self.assertEqual(source.replace(case['added_declaration_block'], '', 1), old)
            mutants = [source+'\n', source.replace('ABI_UNVERIFIED', 'ABI_VERIFIED', 1),
                source.replace(case['source_declaration'], case['source_declaration'].replace('extern int', 'extern void'), 1),
                source.replace(case['source_call'], case['source_call'].replace('param_1,param_2', 'param_2,param_1'), 1),
                source.replace(case['source_call'], case['source_call'].replace('param_1,param_2', 'param_1,param_2,0'), 1),
                source.replace('return;', 'return 0;', 1),
                source.replace(case['definition_signature'], case['definition_signature'].replace('void FUN_', 'int FUN_'), 1),
                source.replace(case['added_declaration_block'], '', 1),
                source.replace('These mismatches remain;', 'These mismatches are fixed;', 1)]
            for mutant in mutants:
                self.assertNotEqual(mutant, source)
                with self.assertRaises(ValueError):
                    evidence.restore(case, mutant)
            for mutant in (old+'\n', old.replace('\n', '\r\n'), old.replace('\n', '\r\n', 1)):
                with self.assertRaises(ValueError):
                    evidence.apply(case, mutant)

    def test_strict_o0_o2_separate_combined_syntax_objects_and_negatives(self):
        positive = negative = 0
        with tempfile.TemporaryDirectory() as temp:
            for case, dep in zip(self.doc['cases'], self.doc['dependencies']):
                source = (ROOT/case['source']).read_text(); old = evidence.restore(case, source)
                callee = (ROOT/dep['source']).read_text(); symbol = dep['label']
                combined = source+'\n'+callee+f'''\n#include <type_traits>
static_assert(sizeof(int)==4 && sizeof(undefined4)==4,"existing host/guest scalar width");
static_assert(std::is_same<decltype(&{symbol}),int (*)(int,int)>::value,"exact callee draft type only");
static_assert(std::is_same<decltype(&{case['label']}),void (*)(undefined4,undefined4)>::value,"unchanged caller draft type");
'''
                for opt in ('-O0', '-O2'):
                    for name, text in (('caller', source), ('callee', callee), ('combined', combined)):
                        for kind in ('syntax', 'object'):
                            output = Path(temp)/(case['entry']+opt+name+'.o') if kind == 'object' else None
                            result = self.compile(text, opt, output)
                            self.assertEqual(result.returncode, 0, result.stderr)
                            if output:
                                self.assertGreater(output.stat().st_size, 0)
                            positive += 1
                    declaration = case['source_declaration']
                    for name, text, required in (
                        ('removed', old, "use of undeclared identifier '"+symbol+"'"),
                        ('return-type', combined.replace(declaration, declaration.replace('extern int', 'extern void'), 1), None),
                        ('pointer-parameter', combined.replace(declaration, declaration.replace('int param_1', 'int *param_1'), 1), None),
                        ('wrong-arity', combined.replace(declaration, declaration.replace('int param_1,int param_2', 'int param_1'), 1), None)):
                        result = self.compile(text, opt)
                        self.assertNotEqual(result.returncode, 0, name+opt)
                        if required:
                            self.assertIn(required, result.stderr)
                        negative += 1
        self.assertEqual((positive, negative), (24, 16))
        print('Compile-only checks: 24 O0/O2 positive syntax/objects and 16 rejected controls; no linking or execution')

    def test_dependencies_and_selected_inventory_fail_closed(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            targets = [i['source'] for i in self.doc['cases']+self.doc['dependencies']]
            targets += [i['path'] for i in self.doc['headers']+self.doc['validation_support_files']]
            targets += ['metadata/bulk_13694_inventory.csv']
            for path in targets:
                dest = root/path; dest.parent.mkdir(parents=True, exist_ok=True); shutil.copyfile(ROOT/path, dest)
            evidence.verify_source(root, self.doc)
            for path in targets[:-1]:
                target = root/path; raw = target.read_bytes(); target.write_bytes(raw+b'\n')
                with self.assertRaises(ValueError):
                    evidence.verify_source(root, self.doc)
                target.write_bytes(raw)
            # read_text() would normalize CRLF and falsely preserve a source
            # fingerprint. Every caller/callee/header/support pin uses raw bytes.
            for path in targets[:-1]:
                target = root/path; raw = target.read_bytes()
                self.assertGreater(raw.count(b'\n'), 1)
                for mutant in (raw.replace(b'\n', b'\r\n'), raw.replace(b'\n', b'\r\n', 1)):
                    target.write_bytes(mutant)
                    self.assertNotEqual(evidence.sha(target.read_bytes()), evidence.sha(raw))
                    with self.assertRaises(ValueError):
                        evidence.verify_source(root, self.doc)
                target.write_bytes(raw)
            evidence.verify_source(root, self.doc)
            inventory = root/'metadata/bulk_13694_inventory.csv'; raw = inventory.read_text()
            for case in self.doc['cases']:
                for token, replacement in ((case['historical_inventory_row']['c_sha256'], '0'*64),
                                           (case['original_body_sha256'], '0'*64)):
                    inventory.write_text(raw.replace(token, replacement, 1))
                    with self.assertRaises(ValueError):
                        evidence.verify_source(root, self.doc)
                inventory.write_text(raw)
            rows = list(csv.DictReader(io.StringIO(raw)))
            rows.append(rows[0]); stream = io.StringIO(); writer = csv.DictWriter(stream, fieldnames=rows[0]);
            writer.writeheader(); writer.writerows(rows); inventory.write_text(stream.getvalue())
            with self.assertRaises(ValueError):
                evidence.verify_source(root, self.doc)
            inventory.write_text(raw); evidence.verify_source(root, self.doc)

    def test_all_public_metadata_and_instruction_bytes_are_immutable(self):
        metadata_count = byte_count = 0
        for path, value in leaves(self.doc):
            mutant = alter(self.doc, path, changed(value))
            with self.assertRaises(ValueError):
                evidence.validate_contract(mutant)
            with self.assertRaises(ValueError):
                evidence.load_bytes((json.dumps(mutant, indent=2)+'\n').encode())
            metadata_count += 1
        for section in ('cases', 'dependencies'):
            for n, item in enumerate(self.doc[section]):
                for address, window in item['instruction_windows'].items():
                    for pos in range(len(bytes.fromhex(window['bytes']))):
                        raw = bytearray.fromhex(window['bytes']); raw[pos] ^= 1
                        with self.assertRaises(ValueError):
                            evidence.validate_contract(alter(self.doc, (section,n,'instruction_windows',address,'bytes'), raw.hex()))
                        byte_count += 1
        self.assertEqual(byte_count, 86)
        for mutant in (dict(self.doc, extra='forged'), dict(self.doc, cases=self.doc['cases']*2)):
            with self.assertRaises(ValueError):
                evidence.validate_contract(mutant)
        for raw in ('{"x":1,"x":2}', '{"x":NaN}', '{"x":Infinity}'):
            with self.assertRaises(ValueError):
                evidence.strict_json(raw)
        with self.assertRaises(ValueError):
            evidence.load_bytes(b' '*(1024*1024+1))
        print('Public controls:', metadata_count, 'metadata leaves and', byte_count, 'individual instruction-byte mutations')

    def test_narrow_call_and_branch_decoders(self):
        for item in self.doc['cases']+self.doc['dependencies']:
            for call in item['direct_calls']:
                self.assertEqual(evidence.direct_call(int(call['address'],16), call['bytes']), int(call['target'],16))
                raw = bytearray.fromhex(call['bytes']); raw[1] ^= 1
                self.assertNotEqual(evidence.direct_call(int(call['address'],16), raw.hex()), int(call['target'],16))
            for branch in item['branches']:
                self.assertEqual(evidence.short_branch(int(branch['address'],16), branch['bytes']), int(branch['target'],16))
        for raw in ('e8', 'ff1500000000', 'e900000000', 'e80000000000'):
            with self.assertRaises(ValueError):
                evidence.direct_call(0x1d1a94, raw)
        for raw in ('74', 'eb00', '0f8400000000', '740000'):
            with self.assertRaises(ValueError):
                evidence.short_branch(0x1e2a8f, raw)
        self.assertEqual(evidence.short_branch(0x1e2aa5, '75ea'), 0x1e2a91)

    def test_additive_ci_preserves_existing_nearby_gates(self):
        ci = (ROOT/'.github/workflows/cpp-compatibility-audit.yml').read_text()
        self.assertEqual(ci.count(evidence.CI_ADDITION), 1)
        for gate in ('verify_cpp_guest_address_literals.py --root .', 'test_cpp_20261105_literal_declaration_pair.py',
                     'test_cpp_20261105_callback_dword_pair.py', 'test_cpp_20261105_global_dword_six.py',
                     'test_cpp_20261105_00023a80_literal_pair.py'):
            self.assertIn('        run: python3 tools/'+gate+'\n', ci)

    def test_private_full_bodies_index_and_record_corruption(self):
        if PRIVATE_EXPORT is None:
            self.skipTest('optional private complete-body replay not requested')
        from capstone import Cs, CS_ARCH_X86, CS_MODE_32
        decoder = Cs(CS_ARCH_X86, CS_MODE_32); decoder.detail = True
        records = evidence.read_records(PRIVATE_EXPORT, self.doc)
        with (PRIVATE_EXPORT/'validation.json').open() as stream:
            index = {i['entry']:i for i in evidence.strict_json(stream.read())['functions']}
        record_count = byte_count = index_count = independent_count = 0
        for item in self.doc['cases']+self.doc['dependencies']:
            record = records[item['entry']]; evidence.validate_record(record, item, decoder)
            row = index[item['entry'][2:]]; evidence.validate_index_row(row, item)
            # Every private record/index leaf, including untrusted display text,
            # is frozen by its canonical checksum. No metadata can be substituted.
            for path, value in leaves(row):
                with self.assertRaises(ValueError):
                    evidence.validate_index_row(alter(row, path, changed(value)), item)
                index_count += 1
            for path, value in leaves(record):
                with self.assertRaises(ValueError):
                    evidence.validate_record(alter(record, path, changed(value)), item, decoder)
                record_count += 1
            for path in (('body_ranges',0,'bytes_hex'), *[('instructions',n,'bytes_hex') for n in range(len(record['instructions']))]):
                node = record
                for key in path:
                    node = node[key]
                for pos in range(len(bytes.fromhex(node))):
                    raw = bytearray.fromhex(node); raw[pos] ^= 1
                    mutant = alter(record, path, raw.hex())
                    with self.assertRaises(ValueError):
                        evidence.validate_record(mutant, item, decoder)
                    # Exercise the byte/coverage checks independently of the
                    # outer record pin; the real immutable manifest is untouched.
                    probe_item = dict(item, private_export_record_sha256=evidence.canonical_sha(mutant))
                    with self.assertRaises(ValueError):
                        evidence.validate_record(mutant, probe_item, decoder)
                    byte_count += 1; independent_count += 1
            for n, ins in enumerate(record['instructions']):
                for key, value in [('address','00000000'), ('length',100), ('parsed_length',100),
                        ('flow_override','CALL_RETURN'), ('is_length_overridden',True),
                        ('is_fallthrough_overridden',True), ('listing_metadata_is_analyzed_not_byte_proof',False),
                        ('flows',['ffffffff']), ('fallthrough','ffffffff'), ('flow_type','FORGED_FLOW')]:
                    mutant = alter(record, ('instructions',n,key), value)
                    probe_item = dict(item, private_export_record_sha256=evidence.canonical_sha(mutant))
                    with self.assertRaises(ValueError):
                        evidence.validate_record(mutant, probe_item, decoder)
                    independent_count += 1
            for mutant in (dict(record, forged=True), dict(record, instructions=record['instructions'][:-1])):
                with self.assertRaises(ValueError):
                    evidence.validate_record(mutant, item, decoder)
            with self.assertRaises(ValueError):
                evidence.validate_record(records[next(e for e in records if e != item['entry'])], item, decoder)
        self.assertEqual(byte_count, 296)
        self.assertEqual(independent_count, 956)
        print('Private replay: 4 bodies, 148 bytes, 66 instructions;', record_count,
              'record leaves,', byte_count, 'byte controls,', index_count,
              'index leaves, and', independent_count, 'independent structural/byte/flow controls')

    def test_private_reader_rejects_duplicate_index_and_truncation(self):
        if PRIVATE_EXPORT is None:
            self.skipTest('optional private complete-body replay not requested')
        with (PRIVATE_EXPORT/'validation.json').open() as stream:
            index = evidence.strict_json(stream.read())
        with tempfile.TemporaryDirectory() as temp:
            folder = Path(temp); index_path = folder/'validation.json'
            (folder/'functions.jsonl').write_bytes(b'{}\n')
            index_path.write_text(json.dumps(index))
            with self.assertRaisesRegex(ValueError, 'truncated'):
                evidence.read_records(folder, self.doc)
            duplicate = copy.deepcopy(index); duplicate['functions'][-1] = duplicate['functions'][0]
            index_path.write_text(json.dumps(duplicate))
            with self.assertRaisesRegex(ValueError, 'duplicate'):
                evidence.read_records(folder, self.doc)
            index_path.write_text('{"functions":[],"functions":[]}')
            with self.assertRaisesRegex(ValueError, 'duplicate JSON key'):
                evidence.read_records(folder, self.doc)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--private-export', type=Path)
    parser.add_argument('--tooldeps', type=Path)
    args, remaining = parser.parse_known_args()
    PRIVATE_EXPORT = args.private_export
    if args.tooldeps:
        sys.path.insert(0, str(args.tooldeps))
    unittest.main(argv=[sys.argv[0], *remaining])
