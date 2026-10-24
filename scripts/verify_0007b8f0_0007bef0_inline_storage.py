#!/usr/bin/env python3
"""Evidence-limited checks for two original-XBE inline-string stack references.

Without --xbe, CI checks original labels, source operands, negative regression,
and isolated Clang syntax. With --xbe, also checks retail XBE SHA-256 and
original instruction bytes. This does NOT establish Ghidra body-block hashes,
guest/host pointer layout, Xbox ABI, native linking, or runtime equivalence.
"""
from __future__ import annotations
import argparse
import hashlib
import re
import shutil
import struct
import subprocess
from pathlib import Path

XBE_SHA256 = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
SITES = {
    0x0007B8F0: (
        'EBC5EC5E3DA785B79CC024981B18AB33C6B2423C96B156E8CABB734078286FFC',
        (0x0007B99B, 0x0007B9B9, 0x0007B9DA), 0x0007B976, 0x0007B93C),
    0x0007BEF0: (
        '7ACFF4D25901F845BCEF97CF073CE104090C7C0B8D51A7068945A5C8FF381D2A',
        (0x0007BF9B, 0x0007BFB9, 0x0007BFDA), 0x0007BF76, 0x0007BF3C),
}
FLAGS = ('-std=c11', '-fsyntax-only', '-ferror-limit=5',
         '-Wno-implicit-function-declaration', '-Wno-int-conversion',
         '-Wno-incompatible-pointer-types', '-Wno-pointer-to-int-cast',
         '-Wno-int-to-pointer-cast', '-Wno-return-type',
         '-Wno-deprecated-non-prototype')


def check_source(entry: int, source: str) -> None:
    digest, sites, _, _ = SITES[entry]
    if (f'Entry: 0x{entry:08x},' not in source or
            f'Input x86 body SHA-256: {digest}' not in source or
            'ABI_UNVERIFIED' not in source):
        raise ValueError(f'Original provenance/status changed 0x{entry:08x}')
    uncommented = re.sub(r'/\*.*?\*/|//[^\n]*', '', source, flags=re.S)
    if ('&stack0xffffffbc' in uncommented or
            uncommented.count('puVar6 = (undefined1 *)local_3c;') != 2 or
            'undefined4 *******local_3c [3];' not in uncommented):
        raise ValueError(f'Inline storage address mapping regressed 0x{entry:08x}')
    if any(f'0x{site:08x}' not in source for site in sites):
        raise ValueError(f'Missing original instruction evidence 0x{entry:08x}')


def check_xbe(path: Path) -> None:
    raw = path.read_bytes()
    if raw[:4] != b'XBEH' or hashlib.sha256(raw).hexdigest() != XBE_SHA256:
        raise ValueError('Wrong original XBE header or SHA-256')
    base, = struct.unpack_from('<I', raw, 0x104)
    count, table = struct.unpack_from('<II', raw, 0x11c)
    if not 0 < count <= 128:
        raise ValueError('Invalid XBE section count')
    sections = []
    for i in range(count):
        offset = table - base + i * 0x38
        if not 0 <= offset <= len(raw)-20:
            raise ValueError('Invalid XBE section table offset')
        _, va, vsize, file_off, rawsize = struct.unpack_from('<5I', raw, offset)
        sections.append((va, min(vsize, rawsize), file_off))

    def read(va: int, n: int) -> bytes:
        for start, size, file_off in sections:
            if start <= va and va+n <= start+size and file_off+va-start+n <= len(raw):
                return raw[file_off+va-start:file_off+va-start+n]
        raise ValueError(f'Unmapped XBE virtual address 0x{va:08x}')

    for entry, (_, lea_sites, edi_site, capacity_site) in SITES.items():
        if read(entry, 5) != bytes.fromhex('83ec405356'):
            raise ValueError(f'Unexpected stack prologue 0x{entry:08x}')
        if read(capacity_site, 8) != bytes.fromhex('8b4424248b4c2410'):
            raise ValueError(f'Unexpected pointer/capacity load 0x{capacity_site:08x}')
        if read(edi_site, 4) != bytes.fromhex('8d7c2414'):
            raise ValueError(f'Unexpected LEA after push EDI 0x{edi_site:08x}')
        for site in lea_sites:
            if read(site, 4) != bytes.fromhex('8d442410'):
                raise ValueError(f'Unexpected inline storage LEA 0x{site:08x}')
    # Full Ghidra body hash verification requires the original block map.


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument('--xbe', type=Path)
    ap.add_argument('--xbe-only', action='store_true')
    args = ap.parse_args()
    if args.xbe:
        check_xbe(args.xbe)
    if not args.xbe_only:
        clang = shutil.which('clang')
        if not clang:
            raise RuntimeError('Clang required')
        for entry in SITES:
            path = args.root / 'src' / 'main_unclassified' / 'band_0007' / f'0x{entry:08x}.c'
            source = path.read_text(encoding='utf-8')
            check_source(entry, source)
            try:
                check_source(entry, source.replace('puVar6 = (undefined1 *)local_3c;',
                                                   'puVar6 = &stack0xffffffbc;', 1))
            except ValueError:
                pass
            else:
                raise ValueError(f'Negative regression unexpectedly accepted 0x{entry:08x}')
            p = subprocess.run([clang, *FLAGS, '-I', str(args.root/'include'), str(path)],
                               capture_output=True, text=True, timeout=60)
            if p.returncode:
                raise ValueError(f'Clang C11 failed 0x{entry:08x}: {p.stderr[:1500]}')
    print('PASS: two source entries, six LEAs, two EDI-adjusted LEAs, '
          'two capacity/pointer loads; '
          f'XBE {"checked" if args.xbe else "not supplied"}; ABI unverified')


if __name__ == '__main__':
    main()
