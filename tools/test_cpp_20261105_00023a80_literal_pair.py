#!/usr/bin/env python3
"""Fail-closed operand checks; execute only initialized isolated-store fixtures."""
from __future__ import annotations
import argparse
import copy
import json
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
import unittest

import verify_cpp_20261105_00023a80_literal_pair as evidence

ROOT = Path(__file__).resolve().parents[1]
PRIVATE_EXPORT = None


def leaves(value, path=()):
    if isinstance(value, dict):
        for key, child in value.items():
            yield from leaves(child, path+(key,))
    elif isinstance(value, list):
        for key, child in enumerate(value):
            yield from leaves(child, path+(key,))
    else:
        yield path, value


def alter(doc, path, value):
    out = copy.deepcopy(doc); node = out
    for key in path[:-1]:
        node = node[key]
    node[path[-1]] = value
    return out


def fixture(statements):
    # Fresh actual uint32_t storage for EACH extracted store. EAX here is only
    # the name of a local pointer, not a guest-register contract or mapping.
    # Check every word, including guards before/after both possible slots.
    steps = []
    for statement, (_, displacement, value) in zip(statements, evidence.TUPLES):
        steps.append(r'''{
            std::uint32_t words[8], expected[8];
            for(std::size_t i=0;i<8;++i) {
                words[i]=seed ^ (0x9e3779b9u*static_cast<std::uint32_t>(i+1));
                expected[i]=words[i];
            }
            [[maybe_unused]] std::uint32_t *in_EAX=&words[2];
            STATEMENT
            expected[INDEX]=UINT32_C(VALUE);
            for(std::size_t i=0;i<8;++i)if(words[i]!=expected[i])return 42;
        }'''.replace('STATEMENT', statement).replace('INDEX', str(2+displacement//4))
            .replace('VALUE', f'0x{value:08x}'))
    return r'''#include <cstdint>
#include <cstddef>
int main() {
    static_assert(sizeof(std::uint32_t)==4,"DWORD width");
    const std::uint32_t seeds[]={0,1,0x7fffffffu,0x80000000u,0xffffffffu,0x55aa55aau};
    for(auto seed:seeds) {
        STEPS
    }
    return 0;
}
'''.replace('STEPS', '\n        '.join(steps))


class LiteralPairTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.doc = evidence.load_manifest(ROOT)
        cls.compiler = shutil.which('clang++')
        if cls.compiler is None:
            raise RuntimeError('clang++ is required; strict checks cannot be skipped')

    def compile(self, source, opt, extra=()):
        command = [self.compiler, '-std=c++17', '-pedantic-errors', opt,
                   '-Werror=pointer-to-int-cast', '-ferror-limit=0',
                   '-I', str(ROOT/'include'), '-x', 'c++', '-']
        command += list(extra) if extra else ['-fsyntax-only']
        return subprocess.run(command, input=source, text=True, capture_output=True, timeout=60)

    def test_exact_source_reversal_and_preserved_quarantine(self):
        evidence.verify_source(ROOT, self.doc)
        case = self.doc['cases'][0]; source = (ROOT/case['source']).read_text()
        old = evidence.restore(case, source)
        self.assertEqual(evidence.apply(case, old), source)
        self.assertEqual(evidence.sha(old.encode()), case['historical_quarantine']['source_sha256'])
        mutants = [source+'\n', source.replace('ABI_UNVERIFIED', 'ABI_VERIFIED', 1),
                   source.replace('extern uint32_t PTR_FUN_003a479c;', 'extern uint64_t PTR_FUN_003a479c;', 1),
                   source.replace(case['signature'], 'void FUN_00023a80(void)', 1),
                   source.replace('undefined4 *in_EAX;', 'undefined4 *in_EAX = nullptr;', 1),
                   source.replace('uVar1 = *in_EDX;', 'uVar1 = 0;', 1),
                   source.replace('in_EAX[5] = uVar1;', '', 1)]
        for edit in case['edits']:
            mutants.extend([source.replace(edit['after'], edit['before'], 1),
                            source.replace(edit['after'], '', 1),
                            source.replace(edit['after'], edit['after'].replace('UINT32_C', 'UINT64_C'), 1),
                            source.replace(edit['after'], edit['after'].replace(edit['immediate_guest_value'], '0'), 1)])
        for mutant in mutants:
            with self.assertRaises(ValueError):
                evidence.restore(case, mutant)

    def test_o0_o2_strict_syntax_objects_and_restored_failure(self):
        case = self.doc['cases'][0]; source = (ROOT/case['source']).read_text()
        old = evidence.restore(case, source)
        with tempfile.TemporaryDirectory() as temp:
            for opt in ('-O0', '-O2'):
                obj = Path(temp)/('repaired'+opt+'.o')
                old_obj = Path(temp)/('preimage'+opt+'.o')
                for repaired_flags, old_flags in (((), ()),
                        (('-c', '-o', str(obj)), ('-c', '-o', str(old_obj)))):
                    result = self.compile(source, opt, repaired_flags)
                    self.assertEqual(result.returncode, 0, result.stderr)
                    negative = self.compile(old, opt, old_flags)
                    self.assertNotEqual(negative.returncode, 0)
                    self.assertEqual(negative.stderr.count('error:'), 2, negative.stderr)
                    self.assertEqual(negative.stderr.count('error: incompatible pointer to integer conversion'), 2)
                self.assertGreater(obj.stat().st_size, 0)
                self.assertFalse(old_obj.exists())
        print('Strict C++17 O0/O2: 4 syntax/object passes and 4 exact two-error preimage failures')

    def test_manifest_fields_and_independent_instruction_tuples_fail_closed(self):
        count = byte_count = 0
        for path, value in leaves(self.doc):
            changed = not value if isinstance(value, bool) else value+1 if isinstance(value, int) else value+'!'
            mutant = alter(self.doc, path, changed)
            with self.assertRaises(ValueError):
                evidence.validate_contract(mutant)
            with self.assertRaises(ValueError):
                evidence.load_bytes((json.dumps(mutant, indent=2)+'\n').encode())
            count += 1
        for index, edit in enumerate(self.doc['cases'][0]['edits']):
            evidence.validate_edit(edit, evidence.TUPLES[index])
            for key, value in edit.items():
                mutant = dict(edit, **{key: value+1 if isinstance(value, int) else value+'!'})
                with self.assertRaises(ValueError):
                    evidence.validate_edit(mutant, evidence.TUPLES[index])
            for offset in range(len(bytes.fromhex(edit['bytes']))):
                raw = bytearray.fromhex(edit['bytes']); raw[offset] ^= 1
                with self.assertRaises(ValueError):
                    evidence.validate_contract(alter(self.doc, ('cases', 0, 'edits', index, 'bytes'), raw.hex()))
                with self.assertRaises(ValueError):
                    evidence.validate_edit(dict(edit, bytes=raw.hex()), evidence.TUPLES[index])
                byte_count += 1
        for mutant in [dict(self.doc, extra='forged'), dict(self.doc, cases=self.doc['cases']*2),
                       alter(self.doc, ('cases', 0, 'edits'), self.doc['cases'][0]['edits'][::-1]),
                       alter(self.doc, ('cases', 0, 'edits'), [])]:
            with self.assertRaises(ValueError):
                evidence.validate_contract(mutant)
        for raw in ('{"x":1,"x":2}', '{"x":NaN}', '{"x":Infinity}'):
            with self.assertRaises(ValueError):
                evidence.strict_json(raw)
        self.assertEqual(byte_count, 13)
        print('Public controls:', count, 'manifest leaves and', byte_count, 'independently rejected store-byte mutations')

    def test_existing_decoder_rejects_non_dword_memory_immediates(self):
        for edit in self.doc['cases'][0]['edits']:
            raw = bytes.fromhex(edit['bytes'])
            self.assertEqual(evidence.mov_memory_imm32(raw), int(edit['immediate_guest_value'], 16))
            for bad in (b'\x66'+raw, b'\xc6'+raw[1:], b'\xc7\xc0'+raw[-4:],
                        bytes((raw[0], raw[1]|8))+raw[2:], raw[:-1], raw+b'\0'):
                with self.assertRaises(ValueError):
                    evidence.mov_memory_imm32(bad)

    def test_initialized_isolated_stores_and_all_guard_words(self):
        case = self.doc['cases'][0]; source = (ROOT/case['source']).read_text()
        statements = [line.strip() for line in source.splitlines()
                      if line.strip() in {e['after'] for e in case['edits']}]
        self.assertEqual(statements, [e['after'] for e in case['edits']])
        variants = [('positive', statements, 0)]
        for position, (_, displacement, value) in enumerate(evidence.TUPLES):
            target = '*in_EAX' if displacement == 0 else 'in_EAX[1]'
            statement = statements[position]; index = 2+displacement//4
            alternatives = [
                ('wrong-value', statement.replace(f'0x{value:08x}', f'0x{value^1:08x}')),
                ('zero-value', statement.replace(f'0x{value:08x}', '0')),
                ('wrong-offset', statement.replace(target, f'words[{index+1}]')),
                ('missing-store', ';'),
                ('short-write', f'{target}=({target}&0xffff0000u)|UINT32_C(0x{value&0xffff:04x});'),
                # Defined two-DWORD effect, not an invalid uint64_t alias.
                ('wide-write', statement+f' words[{index+1}]=0;'),
            ]
            for name, replacement in alternatives:
                mutant = statements.copy(); mutant[position] = replacement
                variants.append((f'{position}-{name}', mutant, 42))
        with tempfile.TemporaryDirectory() as temp:
            for opt in ('-O0', '-O2'):
                for name, operations, expected in variants:
                    exe = Path(temp)/(name+opt)
                    result = self.compile(fixture(operations), opt,
                                          ('-Wall', '-Wextra', '-Werror', '-o', str(exe)))
                    self.assertEqual(result.returncode, 0, result.stderr)
                    result = subprocess.run([str(exe)], capture_output=True, text=True, timeout=20)
                    self.assertEqual(result.returncode, expected, name+opt+result.stderr)
        print('Initialized stores: 6 seeds, all 8 words after each store; 2 positive and 24 negative O0/O2 runs')

    def test_ci_gate_is_additive(self):
        ci = (ROOT/'.github/workflows/cpp-compatibility-audit.yml').read_text()
        self.assertEqual(ci.count('        run: python3 tools/test_cpp_20261105_00023a80_literal_pair.py\n'), 1)
        self.assertIn('        run: python3 tools/test_cpp_20261105_global_dword_six.py\n', ci)
        self.assertIn('        run: python3 tools/verify_cpp_guest_address_literals.py --root .\n', ci)

    def test_private_complete_body_replay_and_corruption(self):
        if PRIVATE_EXPORT is None:
            self.skipTest('optional private body replay not requested')
        from capstone import Cs, CS_ARCH_X86, CS_MODE_32
        decoder = Cs(CS_ARCH_X86, CS_MODE_32); decoder.detail = True
        case = self.doc['cases'][0]
        record = evidence.read_records(PRIVATE_EXPORT, self.doc)[case['entry']]
        evidence.validate_record(record, case, decoder)
        changes = [(('entry',), '00000000'), (('name',), 'forged'), (('is_thunk',), True),
                   (('body_ranges', 0, 'start'), '00000000'),
                   (('body_ranges', 0, 'end_inclusive'), '00000000'),
                   (('body_ranges', 0, 'length'), 1),
                   (('body_byte_count',), 1), (('instruction_count',), 1),
                   (('program_memory_body_sha256',), '0'*64),
                   (('instructions',), record['instructions'][:-1])]
        for index, ins in enumerate(record['instructions']):
            changes.extend([(('instructions', index, 'address'), '00000000'),
                            (('instructions', index, 'bytes_hex'), '00'),
                            (('instructions', index, 'length'), ins['length']+1),
                            (('instructions', index, 'parsed_length'), ins['parsed_length']+1),
                            (('instructions', index, 'flow_override'), 'CALL_RETURN'),
                            (('instructions', index, 'is_length_overridden'), True),
                            (('instructions', index, 'is_fallthrough_overridden'), True),
                            (('instructions', index, 'flows'), ['00000000']),
                            (('instructions', index, 'fallthrough'), '00000000'),
                            (('instructions', index, 'flow_type'), 'FORGED')])
        original = bytearray.fromhex(record['body_ranges'][0]['bytes_hex'])
        for index in range(len(original)):
            raw = original.copy(); raw[index] ^= 1
            changes.append((('body_ranges', 0, 'bytes_hex'), raw.hex()))
        for path, value in changes:
            with self.assertRaises(ValueError):
                evidence.validate_record(alter(record, path, value), case, decoder)
        self.assertEqual(len(changes), 617)
        print('Private replay: 147 complete bytes, 46 boundaries, all flow metadata; 617 corruption controls')

    def test_private_index_rejects_corruption(self):
        if PRIVATE_EXPORT is None:
            self.skipTest('optional private index replay not requested')
        case = self.doc['cases'][0]
        record = evidence.read_records(PRIVATE_EXPORT, self.doc)[case['entry']]
        raw = (json.dumps(record)+'\n').encode()
        row = {'entry':case['entry'][2:], 'canonical_hash_match':True,
               'byte_and_instruction_validation_pass':True, 'issues':[],
               'uncovered_body_byte_count':0, 'first_uncovered_addresses':[],
               'prefetch_listing_disagreements':[], 'canonical_body_sha256':case['original_body_sha256'],
               'program_memory_body_sha256':case['original_body_sha256'],
               'body_byte_count':case['body_byte_count'], 'instruction_count':case['instruction_count'],
               'jsonl_byte_offset':0, 'jsonl_byte_length':len(raw)}
        changes = {'canonical_hash_match':False, 'byte_and_instruction_validation_pass':False,
                   'issues':['flow_override'], 'uncovered_body_byte_count':1,
                   'first_uncovered_addresses':['00023a80'], 'prefetch_listing_disagreements':['forged'],
                   'canonical_body_sha256':'0'*64, 'program_memory_body_sha256':'0'*64,
                   'body_byte_count':1, 'instruction_count':1, 'jsonl_byte_offset':-1,
                   'jsonl_byte_length':len(raw)+1}
        with tempfile.TemporaryDirectory() as temp:
            folder = Path(temp); (folder/'functions.jsonl').write_bytes(raw)
            index = folder/'validation.json'
            index.write_text(json.dumps({'functions':[row]}))
            self.assertEqual(evidence.read_records(folder, self.doc)[case['entry']], record)
            for key, value in changes.items():
                index.write_text(json.dumps({'functions':[dict(row, **{key:value})]}))
                with self.assertRaises(ValueError):
                    evidence.read_records(folder, self.doc)
            index.write_text(json.dumps({'functions':[row,row]}))
            with self.assertRaises(ValueError):
                evidence.read_records(folder, self.doc)
        print('Private index: 13 quarantined/count/hash/bounds/duplicate controls')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--private-export', type=Path)
    parser.add_argument('--tooldeps', type=Path)
    args, remaining = parser.parse_known_args()
    PRIVATE_EXPORT = args.private_export
    if args.tooldeps:
        sys.path.insert(0, str(args.tooldeps))
    unittest.main(argv=[sys.argv[0], *remaining])
