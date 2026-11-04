#!/usr/bin/env python3
"""Pin one original ESI-to-EAX handoff; never execute the original caller.

Full-body private export replay is separate. These tests pin short byte windows,
the existing source interfaces and exact source reversal, then exercise only an
initialized synthetic DWORD transfer through a capture-only stand-in.
"""
from __future__ import annotations

import argparse
import copy
import csv
import hashlib
import json
from pathlib import Path
import re
import shutil
import struct
import subprocess
import sys
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
MANIFEST_OVERRIDE = None
SOURCE_OVERRIDE = None
MANIFEST_SHA = '179da50023241e1bc76c0840e2a3657e87e98641f6ea4c3cd97f5b68f6a31e24'
MANIFEST_NAME = 'cpp_20261104_0003f0e0_eax_handoff.json'


def sha(data):
    return hashlib.sha256(data).hexdigest()


def decode_register_mov(encoded):
    raw = bytes.fromhex(encoded)
    if len(raw) != 2 or raw[0] != 0x8b or raw[1] >> 6 != 3:
        raise ValueError('expected DWORD register-to-register MOV')
    return (raw[1] >> 3) & 7, raw[1] & 7


def decode_dword_read(encoded):
    raw = bytes.fromhex(encoded)
    if len(raw) != 3 or raw[0] != 0x8b or raw[1] >> 6 != 1 or raw[1] & 7 == 4:
        raise ValueError('expected DWORD read from base plus disp8, without SIB')
    return (raw[1] >> 3) & 7, raw[1] & 7, struct.unpack('b', raw[-1:])[0]


def validate_contract(manifest):
    case, callee = manifest['case'], manifest['callee']
    if case['entry'] != '0x0003f0e0' or callee['entry'] != '0x000120f0':
        raise ValueError('unexpected original function identity')
    caller_windows = case['instruction_windows']
    target_windows = callee['instruction_windows']
    caller_addresses = [0x3f0e0, 0x3f0e1, 0x3f0e3, 0x3f0e5, 0x3f0ea, 0x3f12d, 0x3f133]
    callee_addresses = [0x120f0, 0x120f3, 0x120f5, 0x120f9, 0x12130, 0x12132, 0x12133, 0x12136]
    if [int(w['address'], 16) for w in caller_windows] != caller_addresses:
        raise ValueError('caller window identity/order mismatch')
    if [int(w['address'], 16) for w in target_windows] != callee_addresses:
        raise ValueError('callee window identity/order mismatch')
    caller = {int(w['address'], 16): w['bytes'] for w in caller_windows}
    target = {int(w['address'], 16): w['bytes'] for w in target_windows}
    if decode_register_mov(caller[0x3f0e1]) != (0, 6):
        raise ValueError('caller must move ESI into EAX')
    if caller[0x3f0e0] != '53' or caller[0x3f0e3] != '33db':
        raise ValueError('EBX save/clear between entry and call changed')
    raw = bytes.fromhex(caller[0x3f0e5])
    if len(raw) != 5 or raw[0] != 0xe8:
        raise ValueError('expected direct E8 call')
    if (0x3f0e5 + 5 + struct.unpack('<i', raw[1:])[0]) & 0xffffffff != 0x120f0:
        raise ValueError('wrong call destination')
    if caller[0x3f0ea] != '3bc3':
        raise ValueError('caller full-EAX comparison changed')
    if caller[0x3f12d] != 'c20400' or caller[0x3f133] != 'c20400':
        raise ValueError('caller own stack-argument cleanup changed')
    if (target[0x120f0], target[0x120f3], target[0x120f5]) != ('83ec08', '33c9', '894c2400'):
        raise ValueError('callee prologue before incoming EAX read changed')
    if decode_dword_read(target[0x120f9]) != (2, 0, 8):
        raise ValueError('callee must read DWORD [incoming EAX+8] into EDX')
    if decode_register_mov(target[0x12130]) != (0, 6):
        raise ValueError('callee full EAX return producer changed')
    if (target[0x12132], target[0x12133], target[0x12136]) != ('5e', '83c408', 'c3'):
        raise ValueError('callee must restore ESI, release locals and use plain RET')
    if case['old_call'] != 'FUN_000120f0();' or case['new_call'] != 'FUN_000120f0(unaff_ESI);':
        raise ValueError('source expression does not model the decoded ESI handoff')
    if case['existing_declaration'] != 'extern uint32_t FUN_000120f0(int32_t in_EAX);':
        raise ValueError('existing caller declaration changed')
    if callee['existing_definition_signature'] != 'uint32_t FUN_000120f0(int32_t in_EAX)':
        raise ValueError('existing callee definition signature changed')


def fixture(call):
    return r'''
#include <cstdint>
#include <cstring>
#include <type_traits>
#include <cassert>
static std::uint32_t captured, count;
static std::uint32_t FUN_000120f0(std::int32_t in_EAX) {
    std::memcpy(&captured, &in_EAX, sizeof(captured)); ++count; return 0;
}
static void check(std::uint32_t bits) {
    int unaff_ESI;
    std::memcpy(&unaff_ESI, &bits, sizeof(unaff_ESI));
    captured = ~bits; count = 0;
''' + call + r'''
    assert(count == 1 && captured == bits);
}
int main() {
    static_assert(std::is_same<int, std::int32_t>::value, "existing source signed DWORD type");
    static_assert(sizeof(int) == sizeof(std::uint32_t), "preserve all four bytes");
    const std::uint32_t boundaries[] = {0,1,0xff,0x100,0xffff,0x10000,0x7fffffff,
        0x80000000,0xffffff00,0xfffffffe,0xffffffff};
    for (std::uint32_t value : boundaries) check(value);
    for (unsigned bit = 0; bit < 32; ++bit) { check(1u << bit); check(~(1u << bit)); }
    std::uint32_t state = 0xa511e9b3;
    for (unsigned sample = 0; sample < 1000000; ++sample) {
        state ^= state << 13; state ^= state >> 17; state ^= state << 5;
        check(state);
    }
}
'''


class EaxHandoffTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        sys.path.insert(0, str(ROOT/'tools'))
        from body_hash_labels import read_body_digest
        from source_layout import relative_source_path
        cls.read_body_digest = staticmethod(read_body_digest)
        cls.relative_source_path = staticmethod(relative_source_path)
        cls.manifest_path = MANIFEST_OVERRIDE or ROOT/'metadata'/MANIFEST_NAME
        cls.manifest = json.loads(cls.manifest_path.read_text())
        cls.case = cls.manifest['case']
        cls.path = SOURCE_OVERRIDE or ROOT/cls.case['source']
        cls.compiler = shutil.which('clang++')

    def original(self):
        source = self.path.read_text()
        self.assertEqual(sha(source.encode()), self.case['source_after_sha256'])
        self.assertEqual(source.count(self.case['new_call']), 1)
        self.assertEqual(source.count('FUN_000120f0('), 2)
        self.assertEqual(source.count(self.case['existing_declaration']), 1)
        self.assertIn('  int unaff_ESI;\n', source)
        original = source.replace(self.case['new_call'], self.case['old_call'], 1)
        self.assertEqual(sha(original.encode()), self.case['source_before_sha256'])
        return original

    def compile(self, path, *flags):
        if not self.compiler:
            self.skipTest('clang++ unavailable; no compiler result claimed')
        return subprocess.run([self.compiler, '-std=c++17', '-I', str(ROOT/'include'),
                               *flags, str(path)], capture_output=True, text=True, timeout=60)

    def test_exact_sources_interfaces_and_body_provenance(self):
        self.assertEqual(sha(self.manifest_path.read_bytes()), MANIFEST_SHA)
        self.assertFalse(self.manifest['original_xbe_reauthenticated'])
        self.assertFalse(self.manifest['original_game_functions_executed'])
        with (ROOT/'metadata/bulk_13694_inventory.csv').open() as stream:
            inventory = {row['entry']: row['original_body_sha256'] for row in csv.DictReader(stream)}
        for item in (self.case, self.manifest['callee']):
            self.assertEqual(item['source'], self.relative_source_path(ROOT, item['entry']).as_posix())
            source = (self.path if item is self.case else ROOT/item['source']).read_text()
            self.assertEqual(self.read_body_digest(source), (item['original_body_sha256'], False))
            self.assertEqual(item['original_body_sha256'], inventory[item['entry']])
            self.assertEqual(sum(r['length'] for r in item['body_ranges']), item['body_byte_count'])
        callee = self.manifest['callee']
        callee_bytes = (ROOT/callee['source']).read_bytes()
        self.assertEqual(sha(callee_bytes), callee['source_sha256'])
        self.assertIn(callee['existing_definition_signature']+'\n{', callee_bytes.decode())
        self.original()

    def test_instruction_decoding_and_source_expression(self):
        validate_contract(self.manifest)

    def test_mutation_controls(self):
        for collection in ('case', 'callee'):
            for index, window in enumerate(self.manifest[collection]['instruction_windows']):
                for byte_index in range(len(bytes.fromhex(window['bytes']))):
                    mutant = copy.deepcopy(self.manifest)
                    raw = bytearray.fromhex(window['bytes']); raw[byte_index] ^= 1
                    mutant[collection]['instruction_windows'][index]['bytes'] = raw.hex()
                    with self.assertRaises(ValueError): validate_contract(mutant)
                mutant = copy.deepcopy(self.manifest)
                mutant[collection]['instruction_windows'][index]['address'] = hex(int(window['address'],16)+1)
                with self.assertRaises(ValueError): validate_contract(mutant)
        for expression in ('FUN_000120f0(0);', 'FUN_000120f0(unaff_ESI + 1);', 'FUN_000120f0(in_EAX);'):
            mutant = copy.deepcopy(self.manifest); mutant['case']['new_call'] = expression
            with self.assertRaises(ValueError): validate_contract(mutant)
        for collection, key in [('case','existing_declaration'), ('callee','existing_definition_signature')]:
            mutant = copy.deepcopy(self.manifest)
            mutant[collection][key] = mutant[collection][key].replace('int32_t in_EAX', 'uint32_t in_EAX')
            with self.assertRaises(ValueError): validate_contract(mutant)

    def test_complete_positive_and_original_negative_at_o0_o2(self):
        with tempfile.TemporaryDirectory() as temp:
            before = Path(temp)/'before.cpp'; before.write_text(self.original())
            for opt in ('-O0', '-O2'):
                good = self.compile(self.path, opt, '-fsyntax-only')
                self.assertEqual(good.returncode, 0, good.stderr)
                obj = self.compile(self.path, opt, '-c', '-o', str(Path(temp)/'source.o'))
                self.assertEqual(obj.returncode, 0, obj.stderr)
                bad = self.compile(before, opt, '-fsyntax-only', '-ferror-limit=0')
                self.assertNotEqual(bad.returncode, 0)
                self.assertEqual(bad.stderr.count("error: no matching function for call to 'FUN_000120f0'"), 1)
                self.assertEqual(bad.stderr.count('error:'), 1)

    def test_initialized_signed_dword_transfer_at_o0_o2(self):
        validate_contract(self.manifest)
        self.original()
        with tempfile.TemporaryDirectory() as temp:
            source = Path(temp)/'fixture.cpp'; source.write_text(fixture(self.case['new_call']))
            for opt in ('-O0', '-O2'):
                exe = Path(temp)/'fixture'
                built = self.compile(source, opt, '-Wall', '-Wextra', '-Werror', '-o', str(exe))
                self.assertEqual(built.returncode, 0, built.stderr)
                self.assertEqual(subprocess.run([str(exe)], timeout=20).returncode, 0)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(add_help=False)
    parser.add_argument('--root', type=Path, default=ROOT)
    parser.add_argument('--manifest', type=Path)
    parser.add_argument('--candidate-source', type=Path)
    options, rest = parser.parse_known_args()
    ROOT = options.root.resolve()
    MANIFEST_OVERRIDE = options.manifest
    SOURCE_OVERRIDE = options.candidate_source
    unittest.main(argv=[sys.argv[0], *rest])
