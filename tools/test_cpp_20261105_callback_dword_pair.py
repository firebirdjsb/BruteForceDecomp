#!/usr/bin/env python3
"""Public fail-closed checks and initialized DWORD-only fixtures, not callers."""
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

import verify_cpp_20261105_callback_dword_pair as evidence

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


def fixture(statement):
    # This is real initialized, aligned uint32_t array storage. It substitutes
    # the unverified integer address binding and never calls either game draft.
    # It does not model a native code* object or claim guest memory integration.
    return r'''#include <cstdint>
#include <cstddef>
int main() {
    static_assert(sizeof(std::uint32_t)==4,"DWORD width");
    const std::uint32_t initial[]={0,1,0x7fffffffu,0x80000000u,0xffffffffu,0x55aa55aau};
    for(auto seed:initial) {
        std::uint32_t words[6];
        for(std::size_t i=0;i<6;++i)words[i]=seed ^ (0x9e3779b9u*static_cast<std::uint32_t>(i+1));
        std::uint32_t before[6];
        for(std::size_t i=0;i<6;++i)before[i]=words[i];
        std::uint32_t *destination=&words[2];
        STATEMENT
        for(std::size_t i=0;i<6;++i)
            if(words[i]!=(i==2?UINT32_C(0x0034c826):before[i]))return 42;
    }
    return 0;
}
'''.replace('STATEMENT', statement)


class CallbackDWORDPairTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.doc = evidence.load_manifest(ROOT)
        cls.compiler = shutil.which('clang++')
        if cls.compiler is None:
            raise RuntimeError('clang++ is required; strict checks cannot be skipped')

    def compile(self, source, opt, extra=()):
        command = [self.compiler, '-std=c++17', opt, '-Werror=pointer-to-int-cast',
                   '-ferror-limit=0', '-I', str(ROOT/'include'), '-x', 'c++', '-']
        command += list(extra) if extra else ['-fsyntax-only']
        return subprocess.run(command, input=source, text=True, capture_output=True, timeout=60)

    def test_exact_sources_provenance_and_reversal(self):
        evidence.verify_source(ROOT, self.doc)
        for case in self.doc['cases']:
            source = (ROOT/case['source']).read_text()
            old = evidence.restore(case, source)
            self.assertEqual(evidence.apply(case, old), source)
            for mutant in [source+'\n', source.replace('ABI_UNVERIFIED', 'ABI_VERIFIED', 1),
                           source.replace('*(uint32_t *)', '*(uint64_t *)', 1),
                           source.replace('UINT32_C(0x0034c826)', 'UINT32_C(0x0034c827)', 1),
                           source.replace(evidence.AFTER, evidence.AFTER.replace('+ 0x10', '+ 0x14'), 1),
                           source.replace('extern void FUN_0034c826(int param_1);', '', 1),
                           source.replace('FUN_0034c826(param_1);', 'FUN_0034c826(0);', 1)]:
                with self.assertRaises(ValueError):
                    evidence.restore(case, mutant)

    def test_o0_o2_strict_syntax_and_objects_and_restored_failure(self):
        with tempfile.TemporaryDirectory() as temp:
            for case in self.doc['cases']:
                source = (ROOT/case['source']).read_text()
                old = evidence.restore(case, source)
                for opt in ('-O0', '-O2'):
                    for extra in ((), ('-c', '-o', str(Path(temp)/(case['entry']+opt+'.o')))):
                        result = self.compile(source, opt, extra)
                        self.assertEqual(result.returncode, 0, result.stderr)
                    negative = self.compile(old, opt)
                    self.assertNotEqual(negative.returncode, 0)
                    self.assertIn("assigning to 'code *'", negative.stderr)
                    self.assertIn('different number of parameters (0 vs 1)', negative.stderr)

    def test_all_manifest_fields_and_instruction_bytes_fail_closed(self):
        count = byte_count = 0
        for path, value in leaves(self.doc):
            changed = not value if isinstance(value, bool) else value+1 if isinstance(value, int) else value+'!'
            mutant = alter(self.doc, path, changed)
            with self.assertRaises(ValueError):
                evidence.validate_contract(mutant)
            with self.assertRaises(ValueError):
                evidence.load_bytes((json.dumps(mutant, indent=2)+'\n').encode())
            count += 1
        for index, case in enumerate(self.doc['cases']):
            for key in ('entry_load', 'store'):
                for offset in range(len(bytes.fromhex(case[key]['bytes']))):
                    raw = bytearray.fromhex(case[key]['bytes']); raw[offset] ^= 1
                    with self.assertRaises(ValueError):
                        evidence.validate_contract(alter(self.doc, ('cases', index, key, 'bytes'), raw.hex()))
                    byte_count += 1
        for mutant in [dict(self.doc, extra='forged'), dict(self.doc, cases=self.doc['cases']*2)]:
            with self.assertRaises(ValueError):
                evidence.validate_contract(mutant)
        for raw in ('{"x":1,"x":2}', '{"x":NaN}', '{"x":Infinity}'):
            with self.assertRaises(ValueError):
                evidence.strict_json(raw)
        self.assertEqual(byte_count, 22)
        print('Metadata controls:', count, 'leaf mutations and', byte_count, 'instruction-byte mutations')

    def test_existing_decoder_rejects_non_dword_memory_immediates(self):
        self.assertEqual(evidence.mov_memory_imm32(bytes.fromhex('c7401026c83400')), 0x0034c826)
        for bad in ('66c7401026c8', 'c6401026', 'c7c026c83400', 'c7481026c83400',
                    'c7401026c834', 'c7401026c8340000', 'c74426c83400'):
            with self.assertRaises(ValueError):
                evidence.mov_memory_imm32(bytes.fromhex(bad))

    def test_initialized_guarded_four_byte_operand_only(self):
        # Pull the reviewed RHS from each source. Replace only the unresolved
        # integer-address lvalue with an initialized, typed test destination.
        statements = set()
        for case in self.doc['cases']:
            source = (ROOT/case['source']).read_text()
            statement = next(line.strip() for line in source.splitlines() if line.strip() == evidence.AFTER)
            statements.add(statement.replace('*(uint32_t *)(param_1 + 0x10)', '*destination'))
        self.assertEqual(len(statements), 1)
        statement = statements.pop()
        variants = [('positive', statement, 0),
                    ('wrong-value', statement.replace('0x0034c826', '0x0034c827'), 42),
                    ('zero-value', statement.replace('0x0034c826', '0'), 42),
                    ('wrong-offset', statement.replace('*destination', 'destination[1]'), 42),
                    ('wide-write', statement+' destination[1]=0;', 42),
                    ('short-write', '*destination=(*destination & 0xffff0000u)|0xc826u;', 42)]
        with tempfile.TemporaryDirectory() as temp:
            for opt in ('-O0', '-O2'):
                for name, operation, expected in variants:
                    exe = Path(temp)/(name+opt)
                    result = self.compile(fixture(operation), opt, ('-Wall', '-Wextra', '-Werror', '-o', str(exe)))
                    self.assertEqual(result.returncode, 0, result.stderr)
                    result = subprocess.run([str(exe)], capture_output=True, text=True, timeout=20)
                    self.assertEqual(result.returncode, expected, name+opt+result.stderr)

    def test_ci_gate_is_additive(self):
        ci = (ROOT/'.github/workflows/cpp-compatibility-audit.yml').read_text()
        self.assertEqual(ci.count('        run: python3 tools/test_cpp_20261105_callback_dword_pair.py\n'), 1)
        self.assertIn('        run: python3 tools/verify_cpp_guest_address_literals.py --root .\n', ci)

    def test_private_complete_body_replay_and_mutations(self):
        if PRIVATE_EXPORT is None:
            self.skipTest('optional private body replay not requested')
        from capstone import Cs, CS_ARCH_X86, CS_MODE_32
        decoder = Cs(CS_ARCH_X86, CS_MODE_32); decoder.detail = True
        records = evidence.read_records(PRIVATE_EXPORT, self.doc)
        count = 0
        for case in self.doc['cases']:
            record = records[case['entry']]
            evidence.validate_record(record, case, decoder)
            changes = [(('entry',), '00000000'), (('name',), 'forged'),
                       (('body_ranges', 0, 'start'), '00000000'),
                       (('body_ranges', 0, 'length'), 1),
                       (('body_ranges', 0, 'bytes_hex'), '00'+record['body_ranges'][0]['bytes_hex'][2:]),
                       (('program_memory_body_sha256',), '0'*64),
                       (('instructions', 0, 'address'), '00000000'),
                       (('instructions', 0, 'bytes_hex'), '00'),
                       (('instructions', 0, 'parsed_length'), 1),
                       (('instructions', 0, 'flow_override'), 'CALL_RETURN'),
                       (('instructions', 0, 'is_length_overridden'), True),
                       (('instructions', 0, 'is_fallthrough_overridden'), True),
                       (('instructions', 0, 'flows'), ['00000000']),
                       (('instructions', 0, 'fallthrough'), None),
                       (('instructions', 0, 'flow_type'), 'TERMINATOR'),
                       (('instructions',), record['instructions'][:-1])]
            for path, value in changes:
                with self.assertRaises(ValueError):
                    evidence.validate_record(alter(record, path, value), case, decoder)
                count += 1
        print('Private replay: 2 full bodies, 63 bytes,', count, 'corruption controls; no complete-XBE reauthentication')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--private-export', type=Path)
    parser.add_argument('--tooldeps', type=Path)
    args, remaining = parser.parse_known_args()
    PRIVATE_EXPORT = args.private_export
    if args.tooldeps:
        sys.path.insert(0, str(args.tooldeps))
    unittest.main(argv=[sys.argv[0], *remaining])
