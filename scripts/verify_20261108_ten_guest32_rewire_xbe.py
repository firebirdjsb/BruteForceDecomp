#!/usr/bin/env python3
"""Private retail-XBE evidence check for ten address-labeled guest32 models.

Must be run only with the user's original retail XBE, outside the repository.
Authenticates each complete function-body hash, exact read/write opcode sequence,
branch landing boundaries and RET cleanup. No Xbox code is executed.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import re
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'scripts'))
from verify_nine_cpp_call_edges_xbe import sections, file_offset


def verify(xbe_path: Path) -> dict:
    manifest = json.loads((ROOT / 'metadata/20261108_ten_guest32_rewire.json').read_text())
    xbe = xbe_path.read_bytes()
    if hashlib.sha256(xbe).hexdigest().upper() != manifest['original_xbe_sha256']:
        raise AssertionError('Original XBE authentication failed')
    layout = sections(xbe)
    checked = 0
    verified_branches = 0
    verified_returns = 0
    negative_controls = 0
    for row in manifest['cases']:
        addr = int(row['entry'], 16)
        length = row['original_body_length']
        body = xbe[file_offset(layout, addr, length):][:length]
        digest = hashlib.sha256(body).hexdigest().upper()
        if digest != row['original_body_sha256']:
            raise AssertionError(f"Original function body mismatch: {row['entry']}")
        source = (ROOT / row['source']).read_bytes()
        if hashlib.sha256(source).hexdigest() != row['source_sha256']:
            raise AssertionError(f"Edited function source differs: {row['entry']}")
        if row['original_body_sha256'].encode() not in source:
            raise AssertionError('Original body label lost')
        if row['kind'] == 'linked_record_rewire':
            expected = bytes.fromhex('8b41088b108951088b1053')
            flag = row['byte_flag_offset']
            flag_insn = bytes((0x8a, 0x5a, flag)) if flag < 128 else bytes((0x8a, 0x9a, flag, 0, 0, 0))
            assert body.startswith(expected) and flag_insn in body
            assert body.count(bytes.fromhex('c20400')) == 3
            # Every path returns with callee stack-purge 4 and restores saved EBX.
            assert body.count(bytes.fromhex('5bc20400')) == 3
        elif row['kind'] == 'sentinel_update':
            assert body.startswith(bytes.fromhex('518b08894c240057'))
            assert bytes.fromhex('8b1530743800') in body
            assert body.endswith(bytes.fromhex('59c3'))
        else:
            assert body.startswith(bytes.fromhex('568b7424088b461c'))
            assert bytes.fromhex('b867666666f7e9') in body
            assert body.count(bytes.fromhex('5ec21800')) == 2
        # Decode with objdump only for the private evidence check; no binary is saved.
        with tempfile.TemporaryDirectory(prefix='bf_xbe_decode_') as private_dir:
            private_body = Path(private_dir) / 'body.bin'
            private_body.write_bytes(body)
            disassembly = subprocess.run(
                ['objdump', '-D', '-b', 'binary', '-mi386', '-Mintel',
                 f'--adjust-vma=0x{addr:x}', str(private_body)],
                check=True, stdout=subprocess.PIPE).stdout.decode()
        parsed = []
        for line in disassembly.splitlines():
            m = re.match(r'^\s*([0-9a-f]+):\s+(?:[0-9a-f]{2}\s+)+\s+([a-z][a-z0-9]*)\s*(.*)', line)
            if m:
                parsed.append((int(m.group(1), 16), m.group(2), m.group(3).strip()))
        addresses = {site for site, _, _ in parsed}
        if not parsed or parsed[0][0] != addr or not any(name.startswith('ret') for _, name, _ in parsed):
            raise AssertionError('No complete instruction decode')
        for site, op, args in parsed:
            if op.startswith('call'):
                raise AssertionError(f'Unexpected original outgoing CALL at {site:#x}')
            if op.startswith('j'):
                target = args.split()[0]
                if not target.startswith('0x'):
                    raise AssertionError(f'Unable to decode branch target at {site:#x}')
                if int(target, 16) not in addresses:
                    raise AssertionError(f'Branch at {site:#x} leaves recorded body')
                verified_branches += 1
            if op.startswith('ret'):
                verified_returns += 1
                if row['ret_pop'] and args != f'0x{row["ret_pop"]:x}':
                    raise AssertionError('RET cleanup differs')
        # Every bit flip of the captured original body must invalidate its hash.
        for i in range(len(body)):
            altered = bytearray(body)
            altered[i] ^= 1
            if hashlib.sha256(altered).hexdigest().upper() == digest:
                raise AssertionError('Mutated retail bytes accepted')
            negative_controls += 1
        checked += len(body)
    return {'complete_xbe_bodies': len(manifest['cases']), 'body_bytes': checked,
            'verified_branch_targets': verified_branches, 'return_sites': verified_returns,
            'byte_corruption_controls': negative_controls,
            'original_xbox_abi': 'UNVERIFIED', 'native_linkage': 'UNVERIFIED'}


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--xbe', type=Path, required=True)
    args = parser.parse_args()
    print('PASS ' + json.dumps(verify(args.xbe), sort_keys=True))
