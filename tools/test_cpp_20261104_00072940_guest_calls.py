#!/usr/bin/env python3
"""Nine byte-evidenced ESI/stack handoffs, not execution of the game caller.

Public tests pin compact evidence and exact source reversal. Reauthentication of
the private full bodies is a separate check; no private executable is required.
"""
from __future__ import annotations

import copy
import csv
import hashlib
import json
from pathlib import Path
import re
import shutil
import struct
import subprocess
import tempfile
import unittest

from body_hash_labels import read_body_digest
from source_layout import relative_source_path

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = ROOT / 'metadata/cpp_20261104_00072940_guest_calls.json'
MANIFEST_SHA = '8adb90bf21d169ef75cad50cc18d1fc5b0f95d308183344ea1fddb195abc1180'
CALLS = re.compile(r'^\s*(FUN_0008f6a0\(.*\);)$', re.M)


def sha(data):
    return hashlib.sha256(data).hexdigest()


def decode_esi_lea(encoded):
    """Decode only the two observed x86 LEA ESI,[EDI(+EBX*8)+disp8] forms."""
    raw = bytes.fromhex(encoded)
    if len(raw) not in (3, 4) or raw[0] != 0x8d:
        raise ValueError('expected LEA with disp8')
    modrm = raw[1]
    if modrm >> 6 != 1 or (modrm >> 3) & 7 != 6:
        raise ValueError('expected ESI destination and disp8 addressing')
    base, scale = modrm & 7, 0
    if base == 4:
        if len(raw) != 4:
            raise ValueError('missing SIB')
        sib = raw[2]
        base = sib & 7
        if (sib >> 3) & 7 != 3 or sib >> 6 != 3:
            raise ValueError('expected EBX index scaled by eight')
        scale = 8
    elif len(raw) != 3:
        raise ValueError('unexpected extra byte')
    if base != 7:
        raise ValueError('expected EDI base')
    displacement = struct.unpack('b', raw[-1:])[0]
    if displacement < 0:
        raise ValueError('outside the observed positive displacement scope')
    return scale, displacement


def lea_expression(scale, displacement):
    expression = 'static_cast<std::uint32_t>(unaff_EDI)'
    if scale:
        expression += ' + static_cast<std::uint32_t>(unaff_EBX) * UINT32_C(8)'
    return expression + f' + UINT32_C(0x{displacement:x})'


def validate_edges(manifest):
    edges = manifest['edges']
    if len(edges) != 9:
        raise ValueError('exactly nine original calls required')
    sites = []
    for index, edge in enumerate(edges):
        address = int(edge['call']['address'], 16)
        raw = bytes.fromhex(edge['call']['bytes'])
        if len(raw) != 5 or raw[0] != 0xe8:
            raise ValueError('expected direct E8')
        target = (address + 5 + struct.unpack('<i', raw[1:])[0]) & 0xffffffff
        if target != 0x0008f6a0:
            raise ValueError('wrong E8 destination')
        if (int(edge['push']['address'], 16) != address - 2 or
                edge['push']['bytes'] != '6a00' or edge['guest_word_0'] != 0):
            raise ValueError('expected one pushed zero DWORD')
        if (int(edge['caller_cleanup']['address'], 16) != address + 5 or
                edge['caller_cleanup']['bytes'] != '83c404'):
            raise ValueError('expected caller cleanup of four bytes')
        producers = edge['esi_producers']
        operands = [decode_esi_lea(item['bytes']) for item in producers]
        if index < 8:
            if len(producers) != 1 or 'source_bindings' in edge:
                raise ValueError('expected one direct ESI producer')
            producer = producers[0]
            if int(producer['address'], 16) + len(bytes.fromhex(producer['bytes'])) != address - 4:
                raise ValueError('ESI producer must precede the conditional skip and push')
            expression = lea_expression(*operands[0])
        else:
            # The four preexisting branches merge with ESI represented by iVar1.
            if len(producers) != 4 or len(edge.get('source_bindings', [])) != 4:
                raise ValueError('four common-tail ESI producers required')
            for (scale, displacement), binding in zip(operands, edge['source_bindings']):
                match = re.fullmatch(r'iVar1 = unaff_EDI \+ (0x[0-9a-f]+|[0-9]+);', binding)
                if scale or not match or int(match[1], 0) != displacement:
                    raise ValueError('branch source binding disagrees with LEA bytes')
            expression = 'static_cast<std::uint32_t>(iVar1)'
        if edge['source_call'] != f'FUN_0008f6a0({expression}, UINT32_C(0));':
            raise ValueError('call expression disagrees with decoded operand handoff')
        sites.append(address)
    if sites != sorted(set(sites)):
        raise ValueError('call sites must be unique and ordered')


def fixture(manifest):
    """Only initialized scalar expressions and a capture mock execute."""
    rows, offsets, scales = [], [], []
    for index, edge in enumerate(manifest['edges']):
        rows.append(f'case {index}: {edge["source_call"]} break;')
        scale, offset = decode_esi_lea(edge['esi_producers'][0]['bytes'])
        offsets.append(str(offset))
        scales.append(str(scale))
    tails = [str(decode_esi_lea(p['bytes'])[1]) for p in manifest['edges'][-1]['esi_producers']]
    return r'''
#include <cstdint>
#include <cstring>
#include <cassert>
static std::uint32_t captured_esi, captured_word, captures;
static void FUN_0008f6a0(std::uint32_t esi, std::uint32_t word) {
    captured_esi = esi; captured_word = word; ++captures;
}
static std::int32_t signed_bits(std::uint32_t word) {
    std::int32_t result; std::memcpy(&result, &word, sizeof(result)); return result;
}
static void run(unsigned ordinal, std::uint32_t edi, std::uint32_t ebx, unsigned branch) {
    static const unsigned offsets[] = {''' + ','.join(offsets) + r'''};
    static const unsigned scales[] = {''' + ','.join(scales) + r'''};
    static const unsigned tails[] = {''' + ','.join(tails) + r'''};
    const unsigned displacement = ordinal == 8 ? tails[branch] : offsets[ordinal];
    const std::uint64_t wide = std::uint64_t(edi) + std::uint64_t(ebx) * scales[ordinal] + displacement;
    const std::uint32_t expected = static_cast<std::uint32_t>(wide % UINT64_C(0x100000000));
    const std::int32_t unaff_EDI = signed_bits(edi), unaff_EBX = signed_bits(ebx);
    // Model the already-selected guest ESI bits, not the caller's preexisting
    // signed-addition expressions, which still have unresolved overflow behavior.
    const std::int32_t iVar1 = signed_bits(expected);
    captured_esi = ~expected; captured_word = 0xa5a5a5a5; captures = 0;
    switch (ordinal) {
''' + '\n'.join(rows) + r'''
    default: assert(false);
    }
    assert(captures == 1 && captured_esi == expected && captured_word == 0);
}
int main() {
    static_assert(sizeof(std::uint32_t) == 4 && sizeof(std::int32_t) == 4, "DWORDs");
    const std::uint32_t boundary[] = {0,1,6,7,0x7fffff9b,0x7fffffff,0x80000000,
        0xffffff9b,0xffffff9c,0xffffffcb,0xffffffcc,0xfffffffe,0xffffffff};
    for (unsigned i = 0; i < 9; ++i)
        for (std::uint32_t edi : boundary) for (std::uint32_t ebx : boundary)
            for (unsigned branch = 0; branch < 4; ++branch) run(i, edi, ebx, branch);
    std::uint32_t state = 0x4d595df4;
    for (unsigned sample = 0; sample < 20000; ++sample) {
        state = state * 1664525u + 1013904223u; const auto edi = state;
        state = state * 1664525u + 1013904223u; const auto ebx = state;
        for (unsigned i = 0; i < 9; ++i) run(i, edi, ebx, sample & 3);
    }
}
'''


class GuestCallTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.manifest = json.loads(MANIFEST.read_text())
        cls.case = cls.manifest['case']
        cls.path = ROOT / cls.case['source']
        cls.compiler = shutil.which('clang++')

    def original(self):
        source = self.path.read_text()
        self.assertEqual(sha(source.encode()), self.case['source_after_sha256'])
        self.assertEqual(CALLS.findall(source), [e['source_call'] for e in self.manifest['edges']])
        original = CALLS.sub(lambda m: m[0].replace(m[1], self.case['old_call']), source)
        self.assertEqual(sha(original.encode()), self.case['source_before_sha256'])
        for binding in self.manifest['edges'][-1]['source_bindings']:
            self.assertIn(binding, original)
        return original

    def compile(self, path, *flags):
        if not self.compiler:
            self.skipTest('clang++ unavailable; no compiler result claimed')
        return subprocess.run([self.compiler, '-std=c++17', '-I', str(ROOT/'include'),
                               *flags, str(path)], capture_output=True, text=True, timeout=60)

    def test_exact_source_and_body_provenance(self):
        self.assertEqual(sha(MANIFEST.read_bytes()), MANIFEST_SHA)
        self.assertFalse(self.manifest['original_xbe_reauthenticated'])
        self.assertFalse(self.manifest['original_game_functions_executed'])
        with (ROOT/'metadata/bulk_13694_inventory.csv').open() as stream:
            inventory = {row['entry']: row['original_body_sha256'] for row in csv.DictReader(stream)}
        for item in (self.case, self.manifest['callee']):
            self.assertEqual(item['source'], relative_source_path(ROOT, item['entry']).as_posix())
            source = (ROOT/item['source']).read_text()
            self.assertEqual(read_body_digest(source), (item['original_body_sha256'], False))
            self.assertEqual(item['original_body_sha256'], inventory[item['entry']])
            self.assertIn('ABI_UNVERIFIED', source)
            self.assertEqual(sum(r['length'] for r in item['body_ranges']), item['body_byte_count'])
        callee = self.manifest['callee']
        self.assertEqual(sha((ROOT/callee['source']).read_bytes()), callee['source_sha256'])
        self.original()

    def test_decoded_instruction_contracts(self):
        validate_edges(self.manifest)
        # Callee reads ESI+4, saves EBX then reads the first incoming DWORD,
        # restores EBX and performs a plain return. No guessed native prototype.
        self.assertEqual(self.manifest['callee']['instruction_windows'], [
            {'address':'0x0008f6a0','bytes':'8b4604'},
            {'address':'0x0008f6a5','bytes':'538b5c2408'},
            {'address':'0x0008f6de','bytes':'5bc3'}])

    def test_instruction_and_expression_mutation_controls(self):
        for index in range(9):
            for key, bad in [('call','e800000000'), ('push','6a01'), ('caller_cleanup','83c408')]:
                mutant = copy.deepcopy(self.manifest)
                mutant['edges'][index][key]['bytes'] = bad
                with self.assertRaises(ValueError): validate_edges(mutant)
            mutant = copy.deepcopy(self.manifest)
            mutant['edges'][index]['source_call'] = mutant['edges'][index]['source_call'].replace('UINT32_C(0)', 'UINT32_C(1)')
            with self.assertRaises(ValueError): validate_edges(mutant)
            for producer_index, producer in enumerate(self.manifest['edges'][index]['esi_producers']):
                for byte_index in range(len(bytes.fromhex(producer['bytes']))):
                    mutant = copy.deepcopy(self.manifest)
                    raw = bytearray.fromhex(producer['bytes']); raw[byte_index] ^= 1
                    mutant['edges'][index]['esi_producers'][producer_index]['bytes'] = raw.hex()
                    with self.assertRaises(ValueError): validate_edges(mutant)
        mutant = copy.deepcopy(self.manifest)
        mutant['edges'][-1]['source_bindings'][0] = 'iVar1 = unaff_EDI + 99;'
        with self.assertRaises(ValueError): validate_edges(mutant)

    def test_complete_source_and_original_negative_at_o0_o2(self):
        with tempfile.TemporaryDirectory() as temp:
            before = Path(temp)/'before.cpp'; before.write_text(self.original())
            for opt in ('-O0', '-O2'):
                good = self.compile(self.path, opt, '-fsyntax-only')
                self.assertEqual(good.returncode, 0, good.stderr)
                obj = self.compile(self.path, opt, '-c', '-o', str(Path(temp)/'source.o'))
                self.assertEqual(obj.returncode, 0, obj.stderr)
                bad = self.compile(before, opt, '-fsyntax-only', '-ferror-limit=0')
                self.assertNotEqual(bad.returncode, 0)
                self.assertEqual(bad.stderr.count("error: no matching function for call to 'FUN_0008f6a0'"), 9)
                self.assertEqual(bad.stderr.count('error:'), 9)

    def test_initialized_expression_capture_and_modulo32(self):
        validate_edges(self.manifest)
        self.original()  # The harness expressions must be the actual source calls.
        with tempfile.TemporaryDirectory() as temp:
            source = Path(temp)/'fixture.cpp'; source.write_text(fixture(self.manifest))
            for opt in ('-O0', '-O2'):
                exe = Path(temp)/'fixture'
                built = self.compile(source, opt, '-Wall', '-Wextra', '-Werror', '-o', str(exe))
                self.assertEqual(built.returncode, 0, built.stderr)
                self.assertEqual(subprocess.run([str(exe)], timeout=20).returncode, 0)


if __name__ == '__main__':
    unittest.main()
