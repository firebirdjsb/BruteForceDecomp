#!/usr/bin/env python3
"""Repair only original-XBE-verified SEH handler immediates in C11 drafts.

Manifest values were checked against the user's retail Brute Force XBE SHA-256.
The optional --xbe check repeats byte verification; CI has no copyrighted XBE.
This fixes isolated C11 syntax, NOT Xbox SEH/FS register emulation or ABI.
"""
from __future__ import annotations

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()


import argparse
import csv
import hashlib
import re
import shutil
import struct
import subprocess
from pathlib import Path

XBE_SHA256 = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
FLAGS = ['-std=c11', '-fsyntax-only', '-ferror-limit=3',
         '-Wno-implicit-function-declaration', '-Wno-int-conversion',
         '-Wno-incompatible-pointer-types', '-Wno-pointer-to-int-cast',
         '-Wno-int-to-pointer-cast', '-Wno-return-type',
         '-Wno-deprecated-non-prototype']


def xbe_reader(path: Path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA256 or data[:4] != b'XBEH':
        raise ValueError('Original retail XBE hash or magic mismatch')
    base, = struct.unpack_from('<I', data, 0x104)
    count, table_va = struct.unpack_from('<II', data, 0x11c)
    table_off = table_va - base
    if not 1 <= count <= 256 or table_off < 0 or table_off + 56*count > len(data):
        raise ValueError('Invalid XBE section table')
    sections = [struct.unpack_from('<6I', data, table_off + 56*i)
                for i in range(count)]

    def read(va: int, size: int) -> bytes:
        for _flags, section_va, virtual_size, raw_offset, raw_size, _name in sections:
            delta = va - section_va
            if 0 <= delta and delta + size <= min(virtual_size, raw_size):
                return data[raw_offset+delta:raw_offset+delta+size]
        raise ValueError(f'XBE address not file backed: 0x{va:08x}')
    return read


def run(root: Path, manifest: Path, xbe: Path | None, apply: bool, verify: bool) -> None:
    rows = list(csv.DictReader(manifest.open(newline='', encoding='utf-8')))
    if not rows or set(rows[0]) != {'entry', 'handler_guest_va'}:
        raise ValueError('Expected entry,handler_guest_va manifest')
    read_xbe = xbe_reader(xbe) if xbe is not None else None
    seen = set()
    changes = []
    paths = []
    for row in rows:
        entry, handler = row['entry'], row['handler_guest_va']
        if not re.fullmatch(r'0x[0-9a-f]{8}', entry) or not re.fullmatch(r'0x[0-9a-f]{8}', handler):
            raise ValueError(f'Invalid guest address: {row}')
        if entry in seen:
            raise ValueError(f'Duplicate entry: {entry}')
        seen.add(entry)
        if read_xbe is not None:
            expected = b'\x68' + struct.pack('<I', int(handler, 16))
            actual = read_xbe(int(entry, 16) + 5, 5)
            if actual != expected:
                raise ValueError(f'Original XBE PUSH immediate mismatch: {entry}')
        path = root / 'src' / 'main_unclassified' / ('band_' + entry[2:6]) / (entry + '.c')
        source = path.read_text(encoding='utf-8')
        if f'Entry: {entry},' not in source or not re.search(r'Input x86 body SHA-256: [0-9A-F]{64}', source):
            raise ValueError(f'Original source identity missing: {entry}')
        old = f'puStack_c = &LAB_{handler[2:]};'
        replacement = (f'/* Original entry+5: push {handler}; guest SEH handler VA, not a host symbol. */\n'
                       f'  puStack_c = (undefined1 *)(uintptr_t){handler}U;')
        if source.count(replacement) == 1 and source.count(old) == 0:
            pass  # idempotent verification of an already repaired function
        elif source.count(old) == 1 and source.count(replacement) == 0:
            if verify:
                raise ValueError(f'Unrepaired function: {entry}')
            changes.append((path, source.replace(old, replacement)))
        else:
            raise ValueError(f'Unreviewed/ambiguous source change: {entry}')
        paths.append(path)
    # Transactional validation: no source writes until all manifest rows pass.
    if apply:
        for path, revised in changes:
            path.write_text(revised, encoding='utf-8')
    if verify:
        clang = shutil.which('clang')
        if clang is None:
            raise RuntimeError('Clang is required for syntax verification')
        for path in paths:
            p = subprocess.run([clang, *FLAGS, '-I', str(root / 'include'), str(path)],
                               capture_output=True, text=True, timeout=60)
            if p.returncode:
                raise ValueError(f'C11 syntax failed: {path.name}: {p.stderr[:500]}')
    print(f'{len(rows)} source identities checked; {len(changes)} need changes; '
          f'XBE byte verification: {"passed" if read_xbe else "not supplied"}; '
          f'C11 verification: {"passed" if verify else "not requested"}')


if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[1])
    p.add_argument('--manifest', type=Path)
    p.add_argument('--xbe', type=Path, help='Local original retail XBE; never commit it')
    p.add_argument('--apply', action='store_true')
    p.add_argument('--verify', action='store_true')
    args = p.parse_args()
    root = args.root.resolve()
    manifest = args.manifest or root / 'metadata' / 'verified_seh_immediates.csv'
    run(root, manifest, args.xbe, args.apply, args.verify)
