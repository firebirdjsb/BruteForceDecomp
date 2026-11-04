#!/usr/bin/env python3
"""SHA-gated byte/word-offset C++17 syntax repairs; NOT Xbox ABI certification."""
import argparse
import hashlib
import json
from pathlib import Path
import re
import shutil
import struct
import subprocess

from cpp_memory_call_declarations import restore_for_byte_offset_ledger

EXPECTED_XBE = 'B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721'


def git_blob_sha(text):
    data = text.encode('utf-8')
    return hashlib.sha1(b'blob ' + str(len(data)).encode() + b'\0' + data).hexdigest()


def mapped(data, address, size):
    base = struct.unpack_from('<I', data, 0x104)[0]
    count, table = struct.unpack_from('<II', data, 0x11c)
    for i in range(count):
        _, va, memory, offset, stored = struct.unpack_from('<IIIII', data, table - base + 56*i)
        if va <= address and address+size <= va+min(memory, stored):
            return data[offset+address-va:offset+address-va+size]
    raise ValueError('Unmapped XBE address '+hex(address))


def check_original_xbe(data, cases):
    if hashlib.sha256(data).hexdigest().upper() != EXPECTED_XBE:
        raise ValueError('Wrong original retail XBE')
    for case in cases:
        address = int(case['entry'], 16)
        body = mapped(data, address, case['body_length'])
        if hashlib.sha256(body).hexdigest().upper() != case['original_body_sha256']:
            raise ValueError('Original body mismatch '+case['entry'])
        site = int(case['site'], 16)
        opcode = bytes.fromhex(case['instruction'])
        if mapped(data, site, len(opcode)) != opcode:
            raise ValueError('Original instruction mismatch '+case['entry'])
        corrupted = bytearray(opcode)
        corrupted[-1] ^= 1
        if bytes(corrupted) == mapped(data, site, len(opcode)):
            raise ValueError('Instruction mutation escaped '+case['entry'])


def check_probe(compiler, case):
    entry = case['entry']
    if entry == '0x0034c538':
        prefix = '#include <cstdint>\nuint32_t DAT_00356a30=0;\nvoid probe(){'
    else:
        typ = 'void' if entry in ('0x002e0650', '0x002e7b00') else ('long long' if entry == '0x002f8a4b' else 'uint32_t')
        variable = re.search(r'\(int\)(\w+)', case['before']).group(1)
        prefix = '#include <cstdint>\nvoid probe(' + typ + ' *' + variable + '){'
    for opt in ('-O0', '-O2'):
        for name, expression, expected in (('original', case['before'], False), ('repaired', case['after'], True)):
            code = prefix + '(void)*(unsigned char*)' + expression + ';}\n'
            p = subprocess.run([compiler, '-std=c++17', '-fsyntax-only', '-Werror=pointer-to-int-cast', opt, '-x', 'c++', '-'],
                               input=code, text=True, capture_output=True, timeout=30)
            if (p.returncode == 0) != expected:
                raise ValueError(f'Clang {entry} {opt} {name}: {p.stderr[-500:]}')


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument('--xbe', type=Path)
    parser.add_argument('--probes-only', action='store_true')
    args = parser.parse_args()
    manifest = json.loads((args.root/'metadata/cpp_20261101_byte_offset_20.json').read_text())
    cases = manifest['cases']
    if manifest['original_xbe_sha256'] != EXPECTED_XBE or len(cases) != 20 or len({c['entry'] for c in cases}) != 20:
        raise ValueError('Manifest identity changed')
    compiler = shutil.which('clang++')
    if not compiler:
        raise ValueError('Clang++17 is required')
    for case in cases:
        if not args.probes_only:
            path = args.root/case['path']
            text = path.read_text(encoding='utf-8')
            # Compose only the separately SHA-pinned later call declarations.
            # The original byte-offset manifest and preimage hashes stay fixed.
            text = restore_for_byte_offset_ledger(args.root, case, text)
            before, after = case['before'], case['after']
            if text.count(after) != 1 or before in text or 'ABI_UNVERIFIED' not in text:
                raise ValueError('Source edit changed '+case['entry'])
            preimage = text.replace(after, before, 1)
            if git_blob_sha(preimage) != case['preimage_git_blob']:
                raise ValueError('Unreviewed source modification '+case['entry'])
            if 'Input x86 body SHA-256: '+case['original_body_sha256'] not in text:
                raise ValueError('Original provenance changed '+case['entry'])
        check_probe(compiler, case)
    if args.xbe:
        check_original_xbe(args.xbe.read_bytes(), cases)
    print('PASS 20 SHA-gated source edits; 80 focused Clang++17 positive/negative probes; XBE recheck '+('PASS' if args.xbe else 'not supplied'))
    print('Syntax and instruction facts only: ABI_UNVERIFIED; no native linkage/gameplay claim')


if __name__ == '__main__':
    main()
