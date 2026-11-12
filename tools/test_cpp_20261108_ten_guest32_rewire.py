#!/usr/bin/env python3
"""Original-address guest32 models: strict C++17 and synthetic oracle tests.

No retail XBE or original game code is required or executed. The private XBE
verification is scripts/verify_20261108_ten_guest32_rewire_xbe.py.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
import re
import shutil
import subprocess
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = 'metadata/20261108_ten_guest32_rewire.json'
TEST_CPP = 'tools/fixtures/test_20261108_ten_guest32_rewire.txt'


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=Path, default=ROOT)
    parser.add_argument('--include-overlay', type=Path, default=None)
    args = parser.parse_args()
    root = args.root.resolve()
    compiler = shutil.which('clang++')
    if not compiler:
        raise RuntimeError('Clang++ is required for this gate')
    manifest = json.loads((root / MANIFEST).read_text())
    if len(manifest['cases']) != 10:
        raise AssertionError('Exact verified batch identity changed')
    inventory = {}
    with (root / 'metadata/bulk_13694_inventory.csv').open(newline='', encoding='utf-8-sig') as stream:
        for row in csv.DictReader(stream):
            inventory[row['entry'].lower()] = row['original_body_sha256'].upper()
    files = []
    checks = 0
    for record in manifest['cases']:
        name = record['entry'].lower()
        source = root / record['source']
        content = source.read_bytes()
        if inventory[name] != record['original_body_sha256']:
            raise AssertionError('Original retail provenance changed: ' + name)
        if hashlib.sha256(content).hexdigest() != record['source_sha256']:
            raise AssertionError('Current source SHA-256 mismatch: ' + name)
        if record['original_body_sha256'].encode() not in content:
            raise AssertionError('Original source body label lost: ' + name)
        if b'ABI_UNVERIFIED' not in content or b'NOT_NATIVE_LINKED' not in content:
            raise AssertionError('Overclaiming an unverified function: ' + name)
        # Each source mutation must be rejected by the same pinned-source gate.
        mutant = bytearray(content)
        index = len(mutant) // 2
        mutant[index] ^= 1
        if hashlib.sha256(mutant).hexdigest() == record['source_sha256']:
            raise AssertionError('Source corruption was accepted')
        checks += 1
        files.append(source)
    inc = ['-I', str(root / 'include')]
    if args.include_overlay:
        inc = ['-I', str(args.include_overlay.resolve()), *inc]
    with tempfile.TemporaryDirectory(prefix='bf_ten_guest32_') as temp:
        temp_path = Path(temp)
        for opt in ('-O0', '-O2'):
            for source in files:
                result = subprocess.run(
                    [compiler, '-std=c++17', opt, '-fsyntax-only',
                     '-Werror=pointer-to-int-cast', *inc, str(source)],
                    capture_output=True, text=True, timeout=30)
                if result.returncode:
                    raise AssertionError(f'Isolated C++17 {opt} failed {source}: {result.stderr}')
            output = temp_path / ('models_' + opt[2:])
            command = [compiler, '-std=c++17', '-x', 'c++', opt, '-Werror=pointer-to-int-cast',
                       *inc, str(root / TEST_CPP), *map(str, files), '-o', str(output)]
            result = subprocess.run(command, capture_output=True, text=True, timeout=90)
            if result.returncode:
                raise AssertionError(f'Build failure {opt}: {result.stderr}')
            ran = subprocess.run([str(output)], capture_output=True, text=True, timeout=60)
            if ran.returncode or 'PASS 6400 synthetic' not in ran.stdout:
                raise AssertionError(f'Memory-trace mismatch {opt}: {ran.stdout}\n{ran.stderr}')
            print(f'{opt}: {ran.stdout.strip()}')
        # Actual behavioral negative: alter one verified flag byte, rebuild, and
        # require the independent x86 trace oracle to reject the program.
        target = files[0]
        original = target.read_text()
        old = 'edx + UINT32_C(0x25)'
        if original.count(old) != 1:
            raise AssertionError('Negative control preimage drift')
        changed = original.replace(old, 'edx + UINT32_C(0x26)')
        altered = temp_path / target.name
        altered.write_text(changed)
        alt_files = [altered if p == target else p for p in files]
        bad_bin = temp_path / 'corrupted_model'
        command = [compiler, '-std=c++17', '-x', 'c++', '-O0', *inc, str(root / TEST_CPP),
                   *map(str, alt_files), '-o', str(bad_bin)]
        result = subprocess.run(command, capture_output=True, text=True, timeout=90)
        if result.returncode:
            raise AssertionError('Negative control failed to compile: ' + result.stderr)
        ran = subprocess.run([str(bad_bin)], capture_output=True, text=True, timeout=60)
        if ran.returncode == 0:
            raise AssertionError('Corrupted flag read falsely passed independent oracle')
    print(f'PASS ten isolated C++17 sources, 12800 O0/O2 guest-memory traces, '
          f'{checks} pinned-source corruption controls, 1 executable behavioral negative')
    print('Original Xbox ABI / guest stack / native linkage / gameplay: UNVERIFIED')


if __name__ == '__main__':
    main()
