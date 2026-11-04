#!/usr/bin/env python3
"""Four byte-evidenced DWORD stores, not guest mapping or game execution.

BF_REPO_ROOT/BF_OVERLAY_ROOT allow review without editing the checkout.
Optional BF_GHIDRA_ALL_JSONL rechecks the four pinned private export records.
Only tiny public opcode evidence is decoded; no game instruction is executed.
"""
from __future__ import annotations

import copy
import csv
import hashlib
import json
import os
from pathlib import Path
import shutil
import struct
import subprocess
import sys
import tempfile
import unittest

ROOT = Path(os.environ.get('BF_REPO_ROOT', Path(__file__).resolve().parents[1]))
OVERLAY = Path(os.environ.get('BF_OVERLAY_ROOT', ROOT))
sys.path.insert(0, str(ROOT / 'tools'))
from source_layout import relative_source_path

MANIFEST = 'metadata/cpp_20261104_four_guest_constants.json'
MANIFEST_SHA = '763c39fa5cbaed412b68c46bf92665c5a3b23af5a679cc3a730630b2a9f0b8e9'
XBE_SHA = 'B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721'
EXPECTED = (
    (0x0030f7d0, 0x00401050, 0x0039e3a0),
    (0x0030f7e0, 0x00401054, 0x0039e538),
    (0x0030f7f0, 0x00401058, 0x0039e3a0),
    (0x0030f820, 0x00401360, 0x0039e3a0),
)


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def source_path(relative):
    candidate = OVERLAY / relative
    return candidate if candidate.is_file() else ROOT / relative


def decode_body(raw):
    # x86-32 C7 /0, mod=00 r/m=101, absolute disp32, imm32; C3 near RET.
    # Reject alternate addressing, registers, widths, prefixes and RET n.
    if len(raw) != 11 or raw[:2] != b'\xc7\x05' or raw[10:] != b'\xc3':
        raise ValueError('expected exact absolute DWORD imm32 store and plain RET')
    return struct.unpack('<II', raw[2:10])


def validate_case(case):
    matches = [row for row in EXPECTED if case['entry'] == f'0x{row[0]:08x}']
    if len(matches) != 1:
        raise ValueError('unexpected original entry')
    entry, destination, value = matches[0]
    raw = bytes.fromhex(case['body_bytes_hex'])
    if decode_body(raw) != (destination, value):
        raise ValueError('decoded destination or guest DWORD value changed')
    if sha(raw).upper() != case['original_body_sha256']:
        raise ValueError('original body SHA256 changed')
    if (case['body_byte_count'] != 11 or case['instruction_count'] != 2 or
            case['body_range'] != {'start': f'0x{entry:08x}',
                'end_inclusive': f'0x{entry + 10:08x}', 'length': 11} or
            case['store_address'] != f'0x{entry:08x}' or
            case['return_address'] != f'0x{entry + 10:08x}'):
        raise ValueError('body range or instruction boundary changed')
    if (case['destination_guest_address'] != f'0x{destination:08x}' or
            case['stored_guest_word'] != f'0x{value:08x}'):
        raise ValueError('source address/value annotation differs from byte operands')
    expected_edit = {
        'before': f'PTR_PTR_{destination:08x} = (undefined *)&PTR_LAB_{value:08x};',
        'after': f'PTR_PTR_{destination:08x} = UINT32_C(0x{value:08x});',
        'count': 1,
    }
    if case['replacement'] != expected_edit:
        raise ValueError('source replacement differs from decoded store')
    if case['source'] != relative_source_path(ROOT, case['entry']).as_posix():
        raise ValueError('canonical source path changed')
    if case['listing_review'] != {'issues': [], 'flow_override': 'NONE',
            'length_override': False, 'fallthrough_override': False}:
        raise ValueError('listing quarantine state changed')


def reverse_source(source, case):
    validate_case(case)
    if sha(source.encode()) != case['source_after_sha256']:
        raise ValueError('repaired source SHA256 changed')
    edit = case['replacement']
    if source.count(edit['after']) != 1 or edit['before'] in source:
        raise ValueError('replacement occurrence changed')
    original = source.replace(edit['after'], edit['before'], 1)
    raw = original.encode()
    blob = hashlib.sha1(b'blob ' + str(len(raw)).encode() + b'\0' + raw).hexdigest()
    if sha(raw) != case['source_before_sha256'] or blob != case['preimage_git_blob']:
        raise ValueError('reversed source differs from exact preimage')
    if original.count(edit['before']) != 1 or original.replace(edit['before'], edit['after'], 1) != source:
        raise ValueError('source forward/reverse round trip changed')
    return original


def validate_private_record(record, case):
    validate_case(case)
    entry = int(case['entry'], 16)
    raw = bytes.fromhex(case['body_bytes_hex'])
    if (int(record['entry'], 16) != entry or record['name'] != f'FUN_{entry:08x}' or
            record['is_thunk'] or record['body_byte_count'] != 11 or
            record['instruction_count'] != 2 or len(record['body_ranges']) != 1 or
            len(record['instructions']) != 2 or
            record['program_memory_body_sha256'] != case['original_body_sha256']):
        raise ValueError('private function identity or completeness changed')
    span = record['body_ranges'][0]
    if (int(span['start'], 16) != entry or int(span['end_inclusive'], 16) != entry + 10 or
            span['length'] != 11 or bytes.fromhex(span['bytes_hex']) != raw):
        raise ValueError('private full body differs from pinned exact range')
    for item, offset, expected, mnemonic, flow, fallthrough in zip(
            record['instructions'], (0, 10), (raw[:10], raw[10:]), ('MOV', 'RET'),
            ('FALL_THROUGH', 'TERMINATOR'), (f'{entry + 10:08x}', None)):
        if (int(item['address'], 16) != entry + offset or
                bytes.fromhex(item['bytes_hex']) != expected or
                item['length'] != len(expected) or item['parsed_length'] != len(expected) or
                item['is_length_overridden'] or item['is_fallthrough_overridden'] or
                item['flow_override'] != 'NONE' or item['flows'] != [] or
                item['flow_type'] != flow or item['fallthrough'] != fallthrough or
                item['mnemonic'] != mnemonic or not item['listing_metadata_is_analyzed_not_byte_proof']):
            raise ValueError('private instruction boundaries, bytes or listing flags changed')


def synthetic_record(case):
    """Public-validator control only; does not stand in for a real export."""
    entry = int(case['entry'], 16)
    raw = bytes.fromhex(case['body_bytes_hex'])
    instructions = []
    for offset, data, mnemonic, flow, fallthrough in (
            (0, raw[:10], 'MOV', 'FALL_THROUGH', f'{entry + 10:08x}'),
            (10, raw[10:], 'RET', 'TERMINATOR', None)):
        instructions.append({'address': f'{entry + offset:08x}', 'bytes_hex': data.hex(),
            'length': len(data), 'parsed_length': len(data), 'mnemonic': mnemonic,
            'listing_metadata_is_analyzed_not_byte_proof': True,
            'is_length_overridden': False, 'is_fallthrough_overridden': False,
            'flow_override': 'NONE', 'flows': [], 'flow_type': flow, 'fallthrough': fallthrough})
    return {'entry': f'{entry:08x}', 'name': f'FUN_{entry:08x}', 'is_thunk': False,
        'body_byte_count': 11, 'instruction_count': 2,
        'program_memory_body_sha256': case['original_body_sha256'],
        'body_ranges': [{'start': f'{entry:08x}', 'end_inclusive': f'{entry + 10:08x}',
                         'length': 11, 'bytes_hex': raw.hex()}], 'instructions': instructions}


def fixture(statements):
    # Only extracted assignments run. Globals are deliberately synthetic array
    # cells and decoys, not mappings for any Xbox address or canonical function.
    prelude = '''#include <cstdint>
#include <cstddef>
static_assert(sizeof(std::uint32_t) == 4, "DWORD fixture width");
static std::uint32_t words[6];
static std::uint32_t PTR_LAB_0039e3a0;
static std::uint32_t PTR_LAB_0039e538;
'''
    for i, (_, address, _) in enumerate(EXPECTED):
        prelude += f'#define PTR_PTR_{address:08x} words[{i + 1}]\n'
    for i, statement in enumerate(statements):
        prelude += f'__attribute__((noinline)) static void probe_{i}() {{ {statement} }}\n'
    return prelude + '''
int main() {
    void (*const probes[4])() = {probe_0, probe_1, probe_2, probe_3};
    const std::uint32_t values[4] = {0x0039e3a0U, 0x0039e538U, 0x0039e3a0U, 0x0039e3a0U};
    const std::uint32_t seeds[] = {0U, 0xffffffffU, 0xa5a5a5a5U, 0x01020304U, 0x0039e3a0U};
    for (std::uint32_t seed : seeds) {
        for (unsigned which = 0; which < 4; ++which) {
            std::uint32_t before[6];
            for (unsigned i = 0; i < 6; ++i) before[i] = words[i] = (0xdead0000U + 31U * i) ^ seed;
            PTR_LAB_0039e3a0 = 0x61728394U ^ seed;
            PTR_LAB_0039e538 = 0xc1d2e3f4U ^ seed;
            // Repeat the store to check idempotence as well as initial contents.
            for (unsigned repeat = 0; repeat < 2; ++repeat) {
                probes[which]();
                for (unsigned i = 0; i < 6; ++i) {
                    const std::uint32_t expected = i == which + 1 ? values[which] : before[i];
                    if (words[i] != expected) return 1;
                }
                if (PTR_LAB_0039e3a0 != (0x61728394U ^ seed) ||
                    PTR_LAB_0039e538 != (0xc1d2e3f4U ^ seed)) return 2;
            }
        }
    }
    return 0;
}
'''


class FourGuestConstantsTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.manifest = json.loads(source_path(MANIFEST).read_text())
        cls.cases = cls.manifest['cases']

    def compiler(self):
        compiler = shutil.which('clang++')
        if compiler is None:
            self.skipTest('clang++ unavailable; no compilation or synthetic execution result claimed')
        return compiler

    def compile(self, source, *flags):
        return subprocess.run([self.compiler(), '-std=c++17', '-pedantic-errors',
            '-I', str(ROOT / 'include'), *flags, str(source)],
            text=True, capture_output=True, timeout=60)

    def test_manifest_identity_boundaries_and_historical_overlap(self):
        self.assertEqual(sha(source_path(MANIFEST).read_bytes()), MANIFEST_SHA)
        self.assertEqual(self.manifest['original_xbe_sha256'], XBE_SHA)
        for flag in ('original_xbe_reauthenticated', 'original_game_bytes_executed', 'guest_memory_mapping_verified'):
            self.assertIs(self.manifest[flag], False)
        self.assertEqual([c['entry'] for c in self.cases], [f'0x{e:08x}' for e, _, _ in EXPECTED])
        self.assertEqual(self.manifest['historical_manifest_overlap']['matching_manifests'], [])
        for path in (ROOT / 'metadata').rglob('*.json'):
            if path.relative_to(ROOT).as_posix() == MANIFEST:
                continue
            text = path.read_text().lower()
            self.assertFalse(any(f'{entry:08x}' in text for entry, _, _ in EXPECTED),
                             f'new overlap needs explicit composition: {path.name}')

    def test_exact_source_reversal_and_inventory_body_identity(self):
        with (ROOT / 'metadata/bulk_13694_inventory.csv').open(newline='', encoding='utf-8-sig') as stream:
            inventory = {r['entry'].lower(): r for r in csv.DictReader(stream)}
        for case in self.cases:
            with self.subTest(entry=case['entry']):
                source = source_path(case['source']).read_text()
                old = reverse_source(source, case)
                self.assertIn('Entry: ' + case['entry'], source)
                self.assertIn('Input x86 body SHA-256: ' + case['original_body_sha256'], source)
                self.assertIn('ABI_UNVERIFIED', source)
                self.assertEqual(inventory[case['entry']]['original_body_sha256'].upper(), case['original_body_sha256'])
                if ROOT != OVERLAY:
                    self.assertEqual(old, (ROOT / case['source']).read_text())
                for bad in (source + '\n', source.replace('ABI_UNVERIFIED', 'ABI_VERIFIED'), old):
                    with self.assertRaises(ValueError):
                        reverse_source(bad, case)
                for field in ('source_before_sha256', 'source_after_sha256', 'preimage_git_blob'):
                    changed = copy.deepcopy(case)
                    changed[field] = '0' * len(changed[field])
                    with self.assertRaises(ValueError):
                        reverse_source(source, changed)

    def test_opcode_decoder_and_each_body_byte_mutation(self):
        for case in self.cases:
            validate_case(case)
            body = bytes.fromhex(case['body_bytes_hex'])
            for offset in range(11):
                mutant = copy.deepcopy(case)
                raw = bytearray(body)
                raw[offset] ^= 1
                mutant['body_bytes_hex'] = raw.hex()
                # Recompute the mutant digest: operand/opcode checks must reject
                # it independently, rather than relying solely on SHA mismatch.
                mutant['original_body_sha256'] = sha(raw).upper()
                with self.subTest(entry=case['entry'], byte=offset), self.assertRaises(ValueError):
                    validate_case(mutant)
            for raw in (body[:-1], body + b'\x90', b'\x66' + body, body[:-1] + b'\xc2\x00\x00'):
                with self.assertRaises(ValueError):
                    decode_body(raw)

    def test_address_value_identity_range_and_source_operand_mutations(self):
        for case in self.cases:
            mutations = []
            for field in ('entry', 'store_address', 'return_address', 'destination_guest_address', 'stored_guest_word'):
                mutant = copy.deepcopy(case)
                mutant[field] = f'0x{int(mutant[field], 16) + 1:08x}'
                mutations.append(mutant)
            for field in ('body_byte_count', 'instruction_count'):
                mutant = copy.deepcopy(case); mutant[field] += 1; mutations.append(mutant)
            for field in ('start', 'end_inclusive', 'length'):
                mutant = copy.deepcopy(case)
                mutant['body_range'][field] = (12 if field == 'length' else '0x00000000')
                mutations.append(mutant)
            for field in ('before', 'after', 'count'):
                mutant = copy.deepcopy(case)
                mutant['replacement'][field] = (2 if field == 'count' else mutant['replacement'][field] + ' ')
                mutations.append(mutant)
            mutant = copy.deepcopy(case); mutant['source'] += '.bak'; mutations.append(mutant)
            mutant = copy.deepcopy(case); mutant['original_body_sha256'] = '0' * 64; mutations.append(mutant)
            mutant = copy.deepcopy(case); mutant['listing_review']['flow_override'] = 'RETURN'; mutations.append(mutant)
            for i, mutant in enumerate(mutations):
                with self.subTest(entry=case['entry'], mutation=i), self.assertRaises(ValueError):
                    validate_case(mutant)

    def test_private_validator_completeness_flags_and_byte_controls(self):
        for case in self.cases:
            record = synthetic_record(case)
            validate_private_record(record, case)
            mutations = []
            mutant = copy.deepcopy(record); mutant['instructions'].pop(); mutations.append(mutant)
            mutant = copy.deepcopy(record); mutant['instructions'][1] = copy.deepcopy(mutant['instructions'][0]); mutations.append(mutant)
            mutant = copy.deepcopy(record); mutant['body_ranges'][0]['bytes_hex'] = '00' * 11; mutations.append(mutant)
            mutant = copy.deepcopy(record); mutant['body_ranges'][0]['start'] = '00000000'; mutations.append(mutant)
            mutant = copy.deepcopy(record); mutant['entry'] = '00000000'; mutations.append(mutant)
            mutant = copy.deepcopy(record); mutant['is_thunk'] = True; mutations.append(mutant)
            for index in (0, 1):
                for field, value in (('flow_override', 'RETURN'), ('is_length_overridden', True),
                        ('is_fallthrough_overridden', True), ('address', '00000000'),
                        ('parsed_length', 99), ('length', 99), ('bytes_hex', '90'),
                        ('flows', ['00000000']), ('fallthrough', '00000000')):
                    mutant = copy.deepcopy(record); mutant['instructions'][index][field] = value; mutations.append(mutant)
            for i, mutant in enumerate(mutations):
                with self.subTest(entry=case['entry'], mutation=i), self.assertRaises(ValueError):
                    validate_private_record(mutant, case)

    def test_complete_sources_syntax_and_objects_o0_o2(self):
        with tempfile.TemporaryDirectory() as temp:
            for i, case in enumerate(self.cases):
                for opt in ('-O0', '-O2'):
                    for mode in ('syntax', 'object'):
                        flags = ['-fsyntax-only'] if mode == 'syntax' else ['-c', '-o', str(Path(temp) / f'{i}{opt}.o')]
                        with self.subTest(entry=case['entry'], opt=opt, mode=mode):
                            result = self.compile(source_path(case['source']), opt, *flags)
                            self.assertEqual(result.returncode, 0, result.stderr)

    def test_original_pointer_to_integer_negative_controls_o0_o2(self):
        with tempfile.TemporaryDirectory() as temp:
            for i, case in enumerate(self.cases):
                path = Path(temp) / f'original_{i}.cpp'
                path.write_text(reverse_source(source_path(case['source']).read_text(), case))
                for opt in ('-O0', '-O2'):
                    for mode in ('syntax', 'object'):
                        flags = ['-fsyntax-only'] if mode == 'syntax' else ['-c', '-o', str(Path(temp) / f'{i}{opt}.o')]
                        with self.subTest(entry=case['entry'], opt=opt, mode=mode):
                            result = self.compile(path, opt, *flags)
                            self.assertNotEqual(result.returncode, 0)
                            self.assertIn(case['expected_original_error'], result.stderr)
                            self.assertEqual(result.stderr.count('error:'), 1, result.stderr)

    def test_initialized_synthetic_store_sentinels_and_wrong_store_controls(self):
        statements = []
        for case in self.cases:
            text = source_path(case['source']).read_text()
            reverse_source(text, case)
            statements.append(next(line.strip() for line in text.splitlines() if line.strip() == case['replacement']['after']))
        variants = [('repaired', statements, 0)]
        for i, (_, destination, value) in enumerate(EXPECTED):
            bad_statements = (
                f'PTR_PTR_{destination:08x} = UINT32_C(0x{value ^ 1:08x});',
                f'PTR_PTR_{EXPECTED[(i + 1) % 4][1]:08x} = UINT32_C(0x{value:08x});',
                f'*reinterpret_cast<unsigned char*>(&PTR_PTR_{destination:08x}) = 0x{value & 255:02x};',
                '(void)0;',
            )
            for name, statement in zip(('value', 'destination', 'partial_byte', 'missing'), bad_statements):
                changed = statements.copy(); changed[i] = statement
                variants.append((f'{i}_{name}', changed, 1))
        with tempfile.TemporaryDirectory() as temp:
            for name, source_statements, expected in variants:
                path = Path(temp) / (name + '.cpp'); path.write_text(fixture(source_statements))
                for opt in ('-O0', '-O2'):
                    with self.subTest(variant=name, opt=opt):
                        output = Path(temp) / (name + opt)
                        result = self.compile(path, opt, '-Wall', '-Wextra', '-Werror', '-o', str(output))
                        self.assertEqual(result.returncode, 0, result.stderr)
                        result = subprocess.run([str(output)], capture_output=True, timeout=10)
                        self.assertEqual(result.returncode, expected, result.stderr)

    def test_optional_private_records(self):
        path = os.environ.get('BF_GHIDRA_ALL_JSONL')
        if not path:
            self.skipTest('private Ghidra export not provided; public byte/source tests remain independent')
        with Path(path).open('rb') as stream:
            for case in self.cases:
                pin = case['private_record']
                stream.seek(pin['jsonl_byte_offset'])
                raw = stream.read(pin['jsonl_byte_length'])
                self.assertEqual(len(raw), pin['jsonl_byte_length'])
                self.assertEqual(sha(raw), pin['jsonl_record_sha256'])
                validate_private_record(json.loads(raw), case)


if __name__ == '__main__':
    unittest.main()
