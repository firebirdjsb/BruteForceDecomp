#!/usr/bin/env python3
"""Apply/check 49 original-XBE-backed 32-bit literal words in isolated C11 drafts.

This is an evidence-limited syntax correction, not host-callable pointers,
linked callbacks, Xbox ABI recovery, or a playable/1:1 runtime claim.
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
import tempfile
from pathlib import Path

from source_layout import source_path

XBE_SHA256 = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
FLAGS = ['-std=c11', '-fsyntax-only', '-ferror-limit=3',
         '-Wno-implicit-function-declaration', '-Wno-int-conversion',
         '-Wno-incompatible-pointer-types', '-Wno-pointer-to-int-cast',
         '-Wno-int-to-pointer-cast', '-Wno-return-type',
         '-Wno-deprecated-non-prototype']
FIELDS = ('entry', 'label', 'kind', 'source_git_blob_sha', 'result_sha256',
          'proof_instruction_va', 'proof_mnemonic')


def original_xbe_reader(path: Path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA256 or data[:4] != b'XBEH':
        raise ValueError('Unexpected original XBE SHA256 or magic')
    base, = struct.unpack_from('<I', data, 0x104)
    count, table = struct.unpack_from('<II', data, 0x11c)
    offset = table - base
    if not 1 <= count <= 128 or offset < 0 or offset + 56*count > len(data):
        raise ValueError('Invalid original XBE section table')
    sections = [struct.unpack_from('<6I', data, offset + i*56)
                for i in range(count)]

    def read(va: int, n: int) -> bytes:
        for _flags, address, virtual_size, raw, raw_size, _name in sections:
            delta = va - address
            if 0 <= delta and delta + n <= min(virtual_size, raw_size):
                return data[raw+delta:raw+delta+n]
        raise ValueError(f'Original XBE address is not backed: 0x{va:08x}')
    return read


def prove_instruction(read, row):
    """Decode one anchored instruction from the SHA-256-verified retail XBE."""
    objdump = shutil.which('objdump')
    if objdump is None:
        raise RuntimeError('objdump required for --xbe instruction verification')
    address = int(row['proof_instruction_va'], 16)
    guest = int(row['label'][-8:], 16)
    original = read(address, 24)
    with tempfile.TemporaryDirectory(prefix='bf_guest_word_') as directory:
        binary = Path(directory) / 'insn.bin'
        binary.write_bytes(original)
        run = subprocess.run(['objdump', '-D', '-b', 'binary', '-m', 'i386',
                              '-M', 'intel', f'--adjust-vma={address}', str(binary)],
                             capture_output=True, text=True, check=True)
    lines = [line for line in run.stdout.splitlines()
             if re.match(r'^\s*[0-9a-f]+:', line)]
    if not lines or not re.match(rf'^\s*{address:x}:\s', lines[0]):
        raise ValueError(f'Original instruction anchor mismatch: {row["entry"]}')
    if not re.search(rf'\b{re.escape(row["proof_mnemonic"])}\s', lines[0]):
        raise ValueError(f'Original instruction mnemonic mismatch: {row["entry"]}')
    if not re.search(rf'0x0*{guest:x}\b', lines[0], re.IGNORECASE):
        raise ValueError(f'Original instruction immediate mismatch: {row["entry"]}')


def run(root: Path, manifest: Path, xbe: Path | None, apply: bool, verify: bool):
    with manifest.open(encoding='utf-8', newline='') as stream:
        rows = list(csv.DictReader(stream))
    if len(rows) != 49 or not set(FIELDS).issubset(rows[0]):
        raise ValueError('Expected 49 reviewed, uniquely identified guest immediate rows')
    read_xbe = original_xbe_reader(xbe) if xbe else None
    seen = set()
    pending = []
    paths = []
    for row in rows:
        entry, label, kind = row['entry'], row['label'], row['kind']
        if not re.fullmatch(r'0x[0-9a-f]{8}', entry) or entry in seen:
            raise ValueError(f'Invalid or duplicate entry: {entry}')
        seen.add(entry)
        if kind == 'guest_label' and re.fullmatch(r'LAB_[0-9a-f]{8}', label):
            old = '&' + label
        elif kind == 'guest_utf16_literal' and re.fullmatch(r'u_[A-Za-z0-9_]+_[0-9a-f]{8}', label):
            old = label
        elif kind == 'guest_callback_address' and label == 'FUN_00012080':
            old = label
        else:
            raise ValueError(f'Unreviewed pseudo-symbol: {entry} {label}')
        new = f'(uintptr_t)0x{int(label[-8:], 16):08x}U'
        if read_xbe is not None:
            prove_instruction(read_xbe, row)
            if kind == 'guest_utf16_literal':
                word = read_xbe(int(label[-8:], 16), 4)
                if word[1] != 0 or word[3] != 0:
                    raise ValueError(f'Not the original UTF16 literal: {entry}')
            if kind == 'guest_callback_address':
                read_xbe(int(label[-8:], 16), 8)
        path = source_path(root, entry)
        source = path.read_text(encoding='utf-8')
        if f'Entry: {entry},' not in source or not re.search(
                r'Input x86 body SHA-256: [0-9A-F]{64}', source):
            raise ValueError(f'Original function identity missing: {entry}')
        source_blob = hashlib.sha1(('blob '+str(len(source.encode('utf-8')))+'\0').encode()
                                   + source.encode('utf-8')).hexdigest()
        result_hash = hashlib.sha256(source.encode('utf-8')).hexdigest()
        if result_hash == row['result_sha256']:
            if source.count(new) != 1 or source.count(old) != 0:
                raise ValueError(f'Edited source expression drift: {entry}')
        elif source_blob == row['source_git_blob_sha']:
            if source.count(old) != 1 or source.count(new) != 0:
                raise ValueError(f'Original source expression drift: {entry}')
            pending.append((path, source.replace(old, new)))
        else:
            raise ValueError(f'Unexpected source hash; abort entire batch: {entry}')
        paths.append(path)
    if verify and pending and not apply:
        raise ValueError(f'{len(pending)} original sources not yet repaired')
    if apply:
        for path, text in pending:
            path.write_text(text, encoding='utf-8')
    if verify:
        clang = shutil.which('clang')
        if clang is None:
            raise RuntimeError('Clang required for focused verification')
        for path in paths:
            text = path.read_bytes()
            entry = path.stem
            row = next(row for row in rows if row['entry'] == entry)
            if hashlib.sha256(text).hexdigest() != row['result_sha256']:
                raise ValueError(f'Edited source digest mismatch: {entry}')
            proc = subprocess.run([clang, *FLAGS, '-I', str(root / 'include'), str(path)],
                                  capture_output=True, text=True, timeout=60)
            if proc.returncode:
                raise ValueError(f'Clang C11 failure {entry}: {proc.stderr[:600]}')
    print(f'{len(rows)} guest32 immediate words checked; '
          f'{len(pending)} sources required replacement; '
          f'XBE evidence: {"verified" if xbe else "not supplied"}; '
          f'Clang: {"verified" if verify else "not requested"}')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument('--manifest', type=Path)
    parser.add_argument('--xbe', type=Path)
    parser.add_argument('--apply', action='store_true')
    parser.add_argument('--verify', action='store_true')
    args = parser.parse_args()
    root = args.root.resolve()
    run(root, args.manifest or root/'metadata/verified_guest_immediate_words.csv',
        args.xbe, args.apply, args.verify)
