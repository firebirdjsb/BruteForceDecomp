#!/usr/bin/env python3
"""Verify the 0x0014B290 guest DWORD-to-RCPSS repair, not whole-function ABI.

CI: python3 scripts/verify_0014b290_rcpss_bits.py --root .
Local: python3 scripts/verify_0014b290_rcpss_bits.py --root . --xbe /path/to/default.xbe
The original game binary must never be checked into Git.
"""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

import argparse
import hashlib
from pathlib import Path
import re
import shutil
import struct
import subprocess

SOURCE = Path('src/main_unclassified/band_0014/0x0014b290.c')
ENTRY = 0x0014B290
BODY_SIZE = 0x17E  # through original RET 8 at 0x0014B40B
BODY_SHA = 'B7D4ECBEEB100D2A3E8F842824D1B55854BE8FC4A9CE4EA7847F195109C43A7E'
XBE_SHA = 'B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721'
INSTRUCTIONS = {
    0x0014B2C4: '8b54246c',      # mov edx,[esp+0x6c], second incoming DWORD
    0x0014B2F6: '89542414',      # mov [esp+0x14],edx, preserve all four bits
    0x0014B2FE: 'f30f10442414',  # movss xmm0,[esp+0x14]
    0x0014B304: 'f30f53c0',      # rcpss xmm0,xmm0 (approximate SSE reciprocal)
    0x0014B310: '0fc6c000',      # shufps xmm0,xmm0,0 (broadcast low lane)
    0x0014B318: '0f59c1',        # mulps xmm0,xmm1
    0x0014B40B: 'c20800',        # ret 8; does not establish all register inputs
}
FLAGS = ('-std=c11', '-fsyntax-only', '-ferror-limit=3',
         '-Wno-implicit-function-declaration', '-Wno-int-conversion',
         '-Wno-incompatible-pointer-types', '-Wno-pointer-to-int-cast',
         '-Wno-int-to-pointer-cast', '-Wno-return-type',
         '-Wno-deprecated-non-prototype')


def read_guest(data, va, size):
    if data[:4] != b'XBEH':
        raise ValueError('Not an XBE')
    base, = struct.unpack_from('<I', data, 0x104)
    count, table_va = struct.unpack_from('<II', data, 0x11c)
    table = table_va - base
    if not 0 < count < 128 or table < 0 or table + count * 56 > len(data):
        raise ValueError('Invalid XBE section table')
    for i in range(count):
        _, section_va, vsize, raw_off, raw_size = struct.unpack_from('<IIIII', data, table + 56 * i)
        if section_va <= va and va + size <= section_va + min(vsize, raw_size):
            off = raw_off + va - section_va
            if off + size > len(data):
                raise ValueError('XBE section exceeds file')
            return data[off:off + size]
    raise ValueError(f'Unmapped XBE address {va:#x}')


def check_xbe(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest().upper() != XBE_SHA:
        raise ValueError('Wrong original XBE SHA-256')
    if hashlib.sha256(read_guest(data, ENTRY, BODY_SIZE)).hexdigest().upper() != BODY_SHA:
        raise ValueError('Original x86 function-body hash mismatch')
    for va, encoded in INSTRUCTIONS.items():
        if read_guest(data, va, len(encoded) // 2) != bytes.fromhex(encoded):
            raise ValueError(f'Original instruction mismatch at {va:#x}')


def check_source(source):
    for marker in (f'Entry: 0x{ENTRY:08x}', f'Input x86 body SHA-256: {BODY_SHA}',
                   'ABI_UNVERIFIED', '#include <xmmintrin.h>'):
        if marker not in source:
            raise ValueError('Missing provenance or SSE header: ' + marker)
    body = re.sub(r'/\*.*?\*/|//[^\n]*', '', source, flags=re.S)
    if len(re.findall(r'\bfloat\s+rcp_divisor\s*;', body)) != 1:
        raise ValueError('Missing one float storage word')
    if body.count('memcpy(&rcp_divisor, &param_2, sizeof rcp_divisor);') != 1:
        raise ValueError('Original guest DWORD must be reinterpreted, not numerically converted')
    if body.count('fStack_40 = _mm_cvtss_f32(_mm_rcp_ss(_mm_set_ss(rcp_divisor)));') != 1:
        raise ValueError('Missing scalar approximate RCPSS result')
    if 'auVar2' in body or 'ZEXT416' in body or re.search(r'\brcpss\s*\(', body):
        raise ValueError('Unrepaired Ghidra pseudo-SIMD storage')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument('--xbe', type=Path)
    args = parser.parse_args()
    root = args.root.resolve()
    source_path = root / SOURCE
    source = source_path.read_text(encoding='utf-8')
    check_source(source)
    for old, new in (
        ('&param_2, sizeof rcp_divisor', '&param_1, sizeof rcp_divisor'),
        ('memcpy(&rcp_divisor, &param_2, sizeof rcp_divisor);', 'rcp_divisor = (float)param_2;'),
        ('_mm_rcp_ss(', '_mm_sqrt_ss('),
    ):
        changed = source.replace(old, new)
        if changed == source:
            raise ValueError('Negative control did not change the source')
        try:
            check_source(changed)
        except ValueError:
            pass
        else:
            raise ValueError('Incorrect guest DWORD or opcode passed negative control')
    clang = shutil.which('clang')
    if clang is None:
        raise RuntimeError('Clang required for focused C11 check')
    result = subprocess.run((clang, *FLAGS, '-I', str(root / 'include'), str(source_path)),
                            capture_output=True, text=True, timeout=60)
    if result.returncode:
        raise ValueError('Focused C11 syntax failure:\n' + result.stderr[:2500])
    if args.xbe:
        check_xbe(args.xbe)
    print('PASS: 0x0014B290 guest DWORD bit-cast, approximate RCPSS, negative controls, '
          'and focused Clang C11; original XBE ' + ('verified' if args.xbe else 'not supplied'))
    print('LIMITATION: upper XMM lanes, guest register ABI, x87 and full behavior unverified')


if __name__ == '__main__':
    main()
