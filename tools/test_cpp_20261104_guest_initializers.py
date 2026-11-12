#!/usr/bin/env python3
"""Export-evidenced guest DWORD repairs, not execution of canonical game code.

The optional BF_REA_EVIDENCE_ARCHIVE and BF_FUNCTION_EXPORT_ARCHIVE recheck
three complete private byte exports and four FunctionExport identities.
No original XBE or complete _atexit machine body is reauthenticated here.
"""
from __future__ import annotations

import copy
import csv
import hashlib
import io
import json
import os
from pathlib import Path
import re
import shutil
import struct
import subprocess
import tempfile
import unittest
import zipfile

from body_hash_labels import read_body_digest
from source_layout import relative_source_path

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = ROOT / 'metadata/cpp_20261104_guest_initializers.json'
MANIFEST_SHA = 'd66a70ab9ebc052266638955ea78133344bef7568587bf918c59db0c3619226d'
XBE_SHA = 'B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721'


def sha(data):
    return hashlib.sha256(data).hexdigest()


def reverse_source(source, case):
    if sha(source.encode()) != case['source_after_sha256']:
        raise ValueError('repaired source SHA256 changed')
    original = source
    for edit in reversed(case['replacements']):
        if edit['count'] != 1 or original.count(edit['after']) != 1:
            raise ValueError('replacement count changed')
        original = original.replace(edit['after'], edit['before'], 1)
    raw = original.encode()
    blob = hashlib.sha1(b'blob ' + str(len(raw)).encode() + b'\0' + raw).hexdigest()
    if sha(raw) != case['source_before_sha256'] or blob != case['preimage_git_blob']:
        raise ValueError('source reversal exceeds the exact preimage')
    forward = original
    for edit in case['replacements']:
        if forward.count(edit['before']) != 1:
            raise ValueError('forward replacement count changed')
        forward = forward.replace(edit['before'], edit['after'], 1)
    if forward != source:
        raise ValueError('forward/reverse source round trip changed')
    return original


def raw_at(window, address):
    if int(window['address'], 16) != address:
        raise ValueError('instruction boundary changed')
    return bytes.fromhex(window['bytes'])


def mov_register_immediate(raw):
    if len(raw) != 5 or not 0xb8 <= raw[0] <= 0xbf:
        raise ValueError('expected MOV r32,imm32')
    return raw[0] - 0xb8, struct.unpack('<I', raw[1:])[0]


def mov_absolute_register(raw):
    if len(raw) == 5 and raw[0] == 0xa3:
        return struct.unpack('<I', raw[1:])[0], 0
    if len(raw) == 6 and raw[0] == 0x89 and raw[1] & 0xc7 == 0x05:
        return struct.unpack('<I', raw[2:])[0], (raw[1] >> 3) & 7
    raise ValueError('expected absolute DWORD MOV from a register')


def direct_call(window, site, target):
    raw = raw_at(window, site)
    if (len(raw) != 5 or raw[0] != 0xe8 or
            (site + 5 + struct.unpack('<i', raw[1:])[0]) & 0xffffffff != target):
        raise ValueError('direct call target changed')


def validate_evidence(manifest):
    """Decode only observed instruction forms; reject changes to any operand."""
    if [c['entry'] for c in manifest['cases']] != ['0x0009e8b0', '0x000388b0']:
        raise ValueError('caller identities changed')
    if [c['entry'] for c in manifest['callees']] != ['0x0008f6a0', '0x002ea4bf']:
        raise ValueError('callee identities changed')
    expected_stores = [
        (0x9e8cb, 0x9e8db, 0x4a7470), (0x9e8cb, 0x9e8e5, 0x4a746c),
        (0x9e8e0, 0x9e904, 0x4a7468), (0x9e8ea, 0x9e924, 0x4a7488),
        (0x9e8e0, 0x9e929, 0x4a7480), (0x9e8ea, 0x9e92f, 0x4a7484),
    ]
    stores = manifest['dword_stores']
    if len(stores) != len(expected_stores):
        raise ValueError('exactly six guest DWORD stores required')
    for item, (producer_site, store_site, destination) in zip(stores, expected_stores):
        reg, value = mov_register_immediate(raw_at(item['producer'], producer_site))
        actual_destination, actual_reg = mov_absolute_register(raw_at(item['store'], store_site))
        if destination != actual_destination or reg != actual_reg:
            raise ValueError('store register/address disagrees with producer')
        expected = f'_DAT_{destination:08x} = UINT32_C(0x{value:08x});'
        if item['source_statement'] != expected:
            raise ValueError('source DWORD disagrees with decoded machine value')
    expected_callbacks = [
        ('0x0009e8b0', 0x9e8ef, 0x9e93e, 0x9e943),
        ('0x000388b0', 0x388e3, 0x388e8, 0x388ed),
    ]
    if len(manifest['callback_calls']) != 2:
        raise ValueError('exactly two guest callback words required')
    for item, (owner, push, call, cleanup) in zip(manifest['callback_calls'], expected_callbacks):
        raw = raw_at(item['push'], push)
        if item['owner_entry'] != owner or len(raw) != 5 or raw[0] != 0x68:
            raise ValueError('expected PUSH imm32 callback')
        value = struct.unpack('<I', raw[1:])[0]
        if item['source_statement'] != f'_atexit(UINT32_C(0x{value:08x}));':
            raise ValueError('source callback differs from original DWORD')
        direct_call(item['call'], call, 0x2ea4bf)
        if raw_at(item['caller_cleanup'], cleanup) != b'\x83\xc4\x04' or cleanup != call + 5:
            raise ValueError('expected caller cleanup of one DWORD')
    item = manifest['guest_handoff']
    if item['owner_entry'] != '0x000388b0':
        raise ValueError('guest handoff owner changed')
    if raw_at(item['entry_eax_capture'], 0x388b2) != b'\x8b\xf8':
        raise ValueError('expected entry EAX captured in EDI')
    if raw_at(item['push'], 0x388f8) != b'\x57':
        raise ValueError('expected pushed EDI DWORD')
    reg, value = mov_register_immediate(raw_at(item['esi_producer'], 0x388f9))
    if reg != 6:
        raise ValueError('expected ESI producer')
    expected = f'FUN_0008f6a0(UINT32_C(0x{value:08x}), static_cast<std::uint32_t>(in_EAX));'
    if item['source_statement'] != expected:
        raise ValueError('source handoff disagrees with decoded ESI/EDI operands')
    direct_call(item['call'], 0x388fe, 0x8f6a0)
    if raw_at(item['caller_cleanup'], 0x38903) != b'\x83\xc4\x04':
        raise ValueError('expected guest handoff caller cleanup')
    windows = manifest['callees'][0]['instruction_windows']
    if len(windows) != 3:
        raise ValueError('callee contract window count changed')
    for window, address, raw in zip(windows, [0x8f6a0, 0x8f6a5, 0x8f6de],
                                     [b'\x8b\x46\x04', b'\x53\x8b\x5c\x24\x08', b'\x5b\xc3']):
        if raw_at(window, address) != raw:
            raise ValueError('existing ESI/stack DWORD contract changed')
    # These declarations must match real existing definitions, not inferred ABIs.
    if [c['signature'] for c in manifest['callees']] != [
            'void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0)',
            'int __cdecl _atexit(undefined4 callback_guest_word)']:
        raise ValueError('existing source signatures changed')


def all_windows(manifest):
    for item in manifest['dword_stores']:
        yield '0x0009e8b0', item['producer']
        yield '0x0009e8b0', item['store']
    for item in manifest['callback_calls']:
        for key in ('push', 'call', 'caller_cleanup'):
            yield item['owner_entry'], item[key]
    item = manifest['guest_handoff']
    for key in ('entry_eax_capture', 'push', 'esi_producer', 'call', 'caller_cleanup'):
        yield item['owner_entry'], item[key]
    for item in manifest['callees'][0]['instruction_windows']:
        yield '0x0008f6a0', item


def validate_private_record(record, item, manifest):
    if int(record['entry'], 16) != int(item['entry'], 16) or record.get('instructions_truncated', False):
        raise ValueError('private instruction identity/completeness changed')
    instructions = record.get('instructions', record.get('head_instructions', []))
    if len(instructions) != item['instruction_count']:
        raise ValueError('private instruction count changed')
    memory = {}
    for instruction in instructions:
        start = int(instruction['address'], 16)
        raw = bytes.fromhex(instruction['bytes_from_ghidra'])
        if not raw:
            raise ValueError('empty instruction')
        for offset, value in enumerate(raw):
            address = start + offset
            if address in memory:
                raise ValueError('overlapping instruction bytes')
            memory[address] = value
    addresses = []
    for span in item['body_ranges']:
        start, end = (int(span[k], 16) for k in ('start', 'end_inclusive'))
        if end - start + 1 != span['length']:
            raise ValueError('body range length changed')
        addresses.extend(range(start, end + 1))
    if addresses != sorted(set(addresses)) or set(memory) != set(addresses) or len(addresses) != item['body_byte_count']:
        raise ValueError('private bytes do not cover the exact body ranges')
    if sha(bytes(memory[address] for address in addresses)).upper() != item['original_body_sha256']:
        raise ValueError('private full-body digest changed')
    for entry, window in all_windows(manifest):
        if entry == item['entry']:
            start, raw = int(window['address'], 16), bytes.fromhex(window['bytes'])
            if bytes(memory[start + i] for i in range(len(raw))) != raw:
                raise ValueError('public window differs from the full private body')


def load_private_records(archive, manifest):
    if sha(archive) != manifest['evidence']['archive_sha256']:
        raise ValueError('private REA archive digest changed')
    result = {}
    with zipfile.ZipFile(io.BytesIO(archive)) as bundle:
        for item in manifest['cases'] + manifest['callees']:
            if not item['export_body_bytes_rechecked']:
                continue
            record = json.loads(bundle.read(item['private_record']))
            if 'private_collection' in item:
                records = [r for r in record[item['private_collection']]
                           if int(r['entry'], 16) == int(item['entry'], 16)]
                if len(records) != 1:
                    raise ValueError('private collection entry is not unique')
                record = records[0]
            validate_private_record(record, item, manifest)
            result[item['entry']] = record
    return result


def validate_range_exports(archive, manifest):
    if sha(archive) != manifest['evidence']['range_export_sha256']:
        raise ValueError('private FunctionExport archive digest changed')
    with zipfile.ZipFile(io.BytesIO(archive)) as bundle:
        for item in manifest['cases'] + manifest['callees']:
            records = [json.loads(line) for line in bundle.read(item['body_range_source']).decode().splitlines()]
            records = [r for r in records if int(r['entry'], 16) == int(item['entry'], 16)]
            if len(records) != 1:
                raise ValueError('export function identity not unique')
            r = records[0]
            if (r['body_ranges'] != item['body_ranges'] or r['body_address_count'] != item['body_byte_count'] or
                    r['ghidra_memory_sha256'].upper() != item['original_body_sha256']):
                raise ValueError('export range/body identity changed')


def fixture(manifest, mutation=None):
    """Run only newly authored initialized scalars and capture mocks."""
    statements = [i['source_statement'] for i in manifest['dword_stores']]
    statements += [i['source_statement'] for i in manifest['callback_calls']]
    statements += [manifest['guest_handoff']['source_statement']]
    if mutation is not None:
        position, old, new = mutation
        if statements[position].count(old) != 1:
            raise ValueError('fixture mutation target ambiguous')
        statements[position] = statements[position].replace(old, new, 1)
    return r'''
#include <cstdint>
#include <cstring>
#include <type_traits>
static std::uint32_t callback_words[2], callback_count, captured_esi, captured_word, call_count;
static int __cdecl _atexit(std::uint32_t word) {
    if (callback_count >= 2) return -1;
    callback_words[callback_count++] = word; return 0;
}
static void FUN_0008f6a0(std::uint32_t esi, std::uint32_t word) {
    captured_esi = esi; captured_word = word; ++call_count;
}
static int run(std::uint32_t bits) {
    int in_EAX = 0; std::memcpy(&in_EAX, &bits, sizeof(bits));
    std::uint32_t _DAT_004a7470=0xa5a5a5a5, _DAT_004a746c=0xa5a5a5a5,
                  _DAT_004a7468=0xa5a5a5a5, _DAT_004a7488=0xa5a5a5a5,
                  _DAT_004a7480=0xa5a5a5a5, _DAT_004a7484=0xa5a5a5a5;
    callback_words[0]=callback_words[1]=0xa5a5a5a5; callback_count=0;
    captured_esi=0xa5a5a5a5; captured_word=~bits; call_count=0;
''' + '\n'.join('    ' + s for s in statements) + r'''
    if (_DAT_004a7470!=0x0038df04 || _DAT_004a746c!=0x0038df04 ||
        _DAT_004a7468!=0x0038def4 || _DAT_004a7488!=0x0038def0 ||
        _DAT_004a7480!=0x0038def4 || _DAT_004a7484!=0x0038def0) return 1;
    if (callback_count!=2 || callback_words[0]!=0x00310440 || callback_words[1]!=0x0030de90) return 2;
    if (call_count!=1 || captured_esi!=0x004a8848 || captured_word!=bits) return 3;
    return 0;
}
int main() {
    static_assert(sizeof(int)==4 && sizeof(std::uint32_t)==4, "DWORD fixture");
    static_assert(std::is_same<decltype(&_atexit), int (*)(std::uint32_t)>::value,
                  "capture-only raw-word interface; not a native callback ABI");
    const std::uint32_t boundary[] = {0,1,2,0x7ffffffe,0x7fffffff,0x80000000,0x80000001,0xfffffffe,0xffffffff};
    for (auto bits : boundary) if (int error=run(bits)) return error;
    std::uint32_t state=0x4d595df4;
    for (unsigned i=0; i<20000; ++i) {
        state=state*1664525u+1013904223u;
        if (int error=run(state)) return error;
    }
    return 0;
}
'''


class GuestInitializerTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.manifest = json.loads(MANIFEST.read_text())
        cls.compiler = shutil.which('clang++')

    def compile(self, path, *flags):
        if not self.compiler:
            self.skipTest('clang++ unavailable; no compiler result claimed')
        return subprocess.run([self.compiler, '-std=c++17', '-I', str(ROOT/'include'),
                               *flags, str(path)], capture_output=True, text=True, timeout=60)

    def test_exact_source_body_identity_and_existing_contracts(self):
        self.assertEqual(sha(MANIFEST.read_bytes()), MANIFEST_SHA)
        m = self.manifest
        self.assertEqual(m['original_xbe_sha256'], XBE_SHA)
        self.assertFalse(m['original_xbe_reauthenticated'])
        self.assertFalse(m['original_game_functions_executed'])
        self.assertEqual([i['export_body_bytes_rechecked'] for i in m['cases']+m['callees']], [True,True,True,False])
        with (ROOT/'metadata/bulk_13694_inventory.csv').open() as stream:
            inventory = {row['entry']: row['original_body_sha256'] for row in csv.DictReader(stream)}
        for item in m['cases'] + m['callees']:
            self.assertEqual(item['source'], relative_source_path(ROOT, item['entry']).as_posix())
            source = (ROOT/item['source']).read_text()
            self.assertEqual(read_body_digest(source), (item['original_body_sha256'], False))
            self.assertEqual(item['original_body_sha256'], inventory[item['entry']])
            self.assertIn('ABI_UNVERIFIED', source)
            self.assertEqual(sum(r['length'] for r in item['body_ranges']), item['body_byte_count'])
        for case in m['cases']:
            source = (ROOT/case['source']).read_text()
            reverse_source(source, case)
            self.assertIn('extern ' + m['callees'][1]['signature'] + ';', source)
        for callee in m['callees']:
            source = (ROOT/callee['source']).read_text()
            self.assertEqual(sha(source.encode()), callee['source_sha256'])
            self.assertIn(' '.join(callee['signature'].split())+' {', ' '.join(source.split()))
        # All model-return handling and unresolved caller live-ins stay untouched.
        self.assertIn('undefined4 *unaff_ESI;', (ROOT/m['cases'][0]['source']).read_text())
        self.assertIn('int in_EAX;', (ROOT/m['cases'][1]['source']).read_text())
        for item in m['dword_stores']:
            self.assertIn(item['source_statement'], (ROOT/m['cases'][0]['source']).read_text())
        for item in m['callback_calls']:
            case = next(c for c in m['cases'] if c['entry'] == item['owner_entry'])
            self.assertIn(item['source_statement'], (ROOT/case['source']).read_text())
        self.assertIn(m['guest_handoff']['source_statement'], (ROOT/m['cases'][1]['source']).read_text())

    def test_source_reversal_and_each_edit_corruption_controls(self):
        for case in self.manifest['cases']:
            source = (ROOT/case['source']).read_text()
            for altered in (source+'\n', source.replace('ABI_UNVERIFIED', 'ABI_VERIFIED', 1)):
                with self.assertRaises(ValueError): reverse_source(altered, case)
            for field in ('source_before_sha256', 'source_after_sha256', 'preimage_git_blob'):
                mutant = copy.deepcopy(case); mutant[field] = '0'*len(mutant[field])
                with self.assertRaises(ValueError): reverse_source(source, mutant)
            for i in range(len(case['replacements'])):
                for field in ('before','after'):
                    mutant = copy.deepcopy(case); mutant['replacements'][i][field] += ' '
                    with self.assertRaises(ValueError): reverse_source(source, mutant)
                changed = source.replace(case['replacements'][i]['after'], case['replacements'][i]['before'], 1)
                with self.assertRaises(ValueError): reverse_source(changed, case)

    def test_instruction_decode_and_every_byte_address_corruption(self):
        validate_evidence(self.manifest)
        windows = list(all_windows(self.manifest))
        for i, (_, window) in enumerate(windows):
            original = bytes.fromhex(window['bytes'])
            for offset in range(len(original)):
                mutant = copy.deepcopy(self.manifest)
                selected = list(all_windows(mutant))[i][1]
                changed = bytearray(original); changed[offset] ^= 1; selected['bytes'] = changed.hex()
                with self.subTest(window=i, byte=offset), self.assertRaises(ValueError): validate_evidence(mutant)
            mutant = copy.deepcopy(self.manifest)
            selected = list(all_windows(mutant))[i][1]
            selected['address'] = hex(int(selected['address'],16)+1)
            with self.assertRaises(ValueError): validate_evidence(mutant)
        for category in ('dword_stores','callback_calls'):
            for i in range(len(self.manifest[category])):
                mutant = copy.deepcopy(self.manifest)
                mutant[category][i]['source_statement'] += ' '
                with self.assertRaises(ValueError): validate_evidence(mutant)
        mutant = copy.deepcopy(self.manifest)
        mutant['guest_handoff']['source_statement'] = mutant['guest_handoff']['source_statement'].replace('in_EAX', 'param_1')
        with self.assertRaises(ValueError): validate_evidence(mutant)

    def test_complete_sources_and_original_failures_at_o0_o2(self):
        with tempfile.TemporaryDirectory() as temp:
            for case in self.manifest['cases']:
                path = ROOT/case['source']; original = Path(temp)/(case['entry']+'.cpp')
                original.write_text(reverse_source(path.read_text(), case))
                for opt in ('-O0','-O2'):
                    with self.subTest(entry=case['entry'], opt=opt):
                        good = self.compile(path, opt, '-fsyntax-only', '-Werror=pointer-to-int-cast')
                        self.assertEqual(good.returncode, 0, good.stderr)
                        obj = self.compile(path, opt, '-c', '-o', str(Path(temp)/'source.o'))
                        self.assertEqual(obj.returncode, 0, obj.stderr)
                        bad = self.compile(original, opt, '-fsyntax-only', '-ferror-limit=0', '-Werror=pointer-to-int-cast')
                        self.assertNotEqual(bad.returncode, 0)
                        self.assertEqual(bad.stderr.count('error:'), case['original_error_count'], bad.stderr)
                        self.assertEqual(bad.stderr.count("error: use of undeclared identifier '_atexit'"), 1)
                        if case['entry'] == '0x0009e8b0':
                            self.assertEqual(bad.stderr.count('error: incompatible pointer to integer conversion'), 6)
                        else:
                            self.assertEqual(bad.stderr.count("error: no matching function for call to 'FUN_0008f6a0'"), 1)

    def test_initialized_dword_and_callback_capture_with_runtime_negative_controls(self):
        validate_evidence(self.manifest)
        for case in self.manifest['cases']:
            reverse_source((ROOT/case['source']).read_text(), case)
        mutations = [(None,0)]
        for i, item in enumerate(self.manifest['dword_stores']):
            literal = re.search(r'0x[0-9a-f]{8}', item['source_statement'])[0]
            mutations.append(((i,literal,f'0x{int(literal,16)^1:08x}'),1))
        mutations += [((6,'0x00310440','0x00310441'),2), ((7,'0x0030de90','0x0030de91'),2),
                      ((8,'0x004a8848','0x004a8849'),3), ((8,'static_cast<std::uint32_t>(in_EAX)',
                                                       'static_cast<std::uint32_t>(in_EAX) ^ UINT32_C(1)'),3)]
        with tempfile.TemporaryDirectory() as temp:
            for i, (mutation, expected) in enumerate(mutations):
                source = Path(temp)/f'fixture{i}.cpp'; source.write_text(fixture(self.manifest, mutation))
                for opt in ('-O0','-O2'):
                    executable = Path(temp)/f'fixture{i}{opt}'
                    built = self.compile(source, opt, '-Wall','-Wextra','-Werror','-pedantic-errors','-o',str(executable))
                    self.assertEqual(built.returncode,0,built.stderr)
                    result = subprocess.run([str(executable)],capture_output=True,timeout=20)
                    self.assertEqual(result.returncode,expected,result.stderr)

    def test_optional_private_exports_and_corruption_controls(self):
        rea_path, export_path = os.environ.get('BF_REA_EVIDENCE_ARCHIVE'), os.environ.get('BF_FUNCTION_EXPORT_ARCHIVE')
        if not rea_path or not export_path:
            self.skipTest('Both private exports not supplied; no private full-body recheck in this run')
        rea, export = Path(rea_path).read_bytes(), Path(export_path).read_bytes()
        records = load_private_records(rea,self.manifest)
        validate_range_exports(export,self.manifest)
        self.assertEqual(set(records),{'0x0009e8b0','0x000388b0','0x0008f6a0'})
        with self.assertRaises(ValueError): load_private_records(rea+b'\0',self.manifest)
        with self.assertRaises(ValueError): validate_range_exports(export+b'\0',self.manifest)
        for item in self.manifest['cases']+self.manifest['callees']:
            if item['entry'] not in records: continue
            record = records[item['entry']]
            for field in ('original_body_sha256','body_byte_count'):
                mutant = copy.deepcopy(item)
                mutant[field] = '0'*64 if field=='original_body_sha256' else item[field]+1
                with self.assertRaises(ValueError): validate_private_record(record,mutant,self.manifest)
            mutant = copy.deepcopy(item); mutant['body_ranges'][0]['length'] += 1
            with self.assertRaises(ValueError): validate_private_record(record,mutant,self.manifest)
            for kind in ('byte','missing','duplicate'):
                mutant = copy.deepcopy(record)
                instructions = mutant.get('instructions',mutant.get('head_instructions'))
                if kind=='byte':
                    raw=bytearray.fromhex(instructions[0]['bytes_from_ghidra']);raw[0]^=1
                    instructions[0]['bytes_from_ghidra']=raw.hex()
                elif kind=='missing': instructions.pop()
                else: instructions[-1] = copy.deepcopy(instructions[0])
                with self.assertRaises(ValueError): validate_private_record(mutant,item,self.manifest)
            mutant=copy.deepcopy(self.manifest)
            for entry, window in all_windows(mutant):
                if entry==item['entry']:
                    raw=bytearray.fromhex(window['bytes']);raw[0]^=1;window['bytes']=raw.hex();break
            with self.assertRaises(ValueError): validate_private_record(record,item,mutant)


if __name__ == '__main__':
    unittest.main()
