#!/usr/bin/env python3
"""Verify two additional 0x000ff730 incoming DWORD-address callers.

Without --xbe: source invariants and isolated host C11 syntax only.
With --xbe: retail image identity, original bodies, LEA, call edges and
callee's 4-byte read/write. Does not prove native guest/host ABI or linkage.
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
import shutil
import struct
import subprocess

XBE_SHA = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
# entry, end (exclusive), original body SHA, LEA address, LEA opcode,
# call address, expected entry stack slot, guest RET operand.
CASES = (
    (0x000E0350, 0x000E039E, '282079256055a6be17c291e284511da7e0fa0cd1b23580552a79a34eec66d3fa',
     0x000E0365, '8d44241c', 0x000E036D, 12, 12),
    (0x002213B0, 0x002213F7, '8c2ebf3f2bf497349e4b6a782c15136b9dca62269b1d795fa61c5a176acdcd21',
     0x002213CE, '8d4c2414', 0x002213D6, 8, 8),
)
CALLEE_SHA = 'a7efb135b6b23f930db5c6ab5eb5937ea2372d6fa711ba4af6834f004d03753d'
FLAGS = ('-std=c11', '-fsyntax-only', '-ferror-limit=3',
         '-Wno-implicit-function-declaration', '-Wno-int-conversion',
         '-Wno-incompatible-pointer-types', '-Wno-pointer-to-int-cast',
         '-Wno-int-to-pointer-cast', '-Wno-return-type',
         '-Wno-deprecated-non-prototype')

def path(root, entry):
    return root / f'src/main_unclassified/band_{entry >> 16:04x}/0x{entry:08x}.c'

def source_check(root):
    clang = shutil.which('clang')
    if not clang:
        raise ValueError('clang is required')
    for entry, _, digest, _, _, _, slot, _ in CASES:
        src = path(root, entry)
        text = src.read_text(encoding='utf-8')
        arg = 'guest_stack_word_3' if slot == 12 else 'guest_stack_word_2'
        signature = ('undefined4 * FUN_000e0350(int param_1,undefined4 *param_2,undefined4 guest_stack_word_3)'
                     if slot == 12 else
                     'void FUN_002213b0(undefined4 guest_stack_word_1,undefined4 guest_stack_word_2)')
        required = (f'Entry: 0x{entry:08x}', f'Input x86 body SHA-256: {digest.upper()}',
                    'ABI_UNVERIFIED', signature, f'&{arg})', 'FUN_000ff730(')
        for token in required:
            if token not in text:
                raise ValueError(f'{entry:#x}: missing source invariant {token}')
        if f'&stack0x{slot:08x}' in text:
            raise ValueError(f'{entry:#x}: unresolved guest stack address')
        proc = subprocess.run([clang, *FLAGS, '-I', str(root / 'include'), str(src)],
                              capture_output=True, text=True, timeout=30)
        if proc.returncode:
            raise ValueError(f'{entry:#x}: Clang syntax failed: {proc.stderr[:1000]}')

def xbe_check(data, identity=True):
    if identity and (hashlib.sha256(data).hexdigest() != XBE_SHA or data[:4] != b'XBEH'):
        raise ValueError('original retail XBE identity mismatch')
    def read(va, n):
        # Both original function bodies are in the executable section with
        # VA-to-raw offset 0x10000, verified by the full body SHA checks.
        start = va - 0x10000
        if start < 0 or start + n > len(data):
            raise ValueError('unmapped original XBE span')
        return data[start:start+n]
    def expect(va, op):
        b = bytes.fromhex(op)
        if read(va, len(b)) != b:
            raise ValueError(f'original opcode mismatch at {va:#x}')
    def direct_call(va, target):
        if read(va, 1) != b'\xe8':
            raise ValueError(f'not a near call at {va:#x}')
        displacement = struct.unpack('<i', read(va + 1, 4))[0]
        if (va + 5 + displacement) & 0xffffffff != target:
            raise ValueError(f'wrong call target at {va:#x}')
    for entry, end, digest, lea, op, call, slot, cleanup in CASES:
        if hashlib.sha256(read(entry, end-entry)).hexdigest() != digest:
            raise ValueError(f'original body hash mismatch at {entry:#x}')
        expect(lea, op)
        direct_call(call, 0x000FF730)
        expect(end-3, 'c2'+struct.pack('<H', cleanup).hex())
    # The 0x002213b0 second guest argument is also loaded into ECX for
    # 0x00221af0; that callee cleans its one pushed argument (RET 4).
    expect(0x002213B4, '8b4c2410')
    direct_call(0x002213C0, 0x00221AF0)
    expect(0x00221DD1, 'c20400')
    # 0x000e0350's first and second incoming guest slots are also read.
    expect(0x000E0352, '8b6c2410')
    expect(0x000E0357, '8b742410')
    if hashlib.sha256(read(0x000FF730, 0x69)).hexdigest() != CALLEE_SHA:
        raise ValueError('node allocator original body mismatch')
    for va, op in ((0x000FF777, '8b4d14'), (0x000FF77A, '8b11'),
                   (0x000FF77C, '895008'), (0x000FF796, 'c21000')):
        expect(va, op)

def main():
    p = argparse.ArgumentParser()
    p.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[1])
    p.add_argument('--xbe', type=Path)
    a = p.parse_args()
    source_check(a.root)
    if a.xbe:
        data = a.xbe.read_bytes()
        xbe_check(data)
        bad = bytearray(data)
        bad[0x002213CE-0x10000] ^= 1
        try:
            xbe_check(bad, identity=False)
        except ValueError:
            pass
        else:
            raise ValueError('XBE mutation negative control failed')
    print('PASS: two incoming guest DWORD slots, two original body hashes, '
          'two direct allocator edges, source invariants and focused Clang C11')
    print('LIMITATION: implicit register ABI, guest memory, native linking and '
          'runtime behavior remain unverified')

if __name__ == '__main__':
    main()
