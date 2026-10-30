#!/usr/bin/env python3
"""Check 0x0026ADD0's x86 FLOAT32-to-guest-DWORD call contract.

CI has no copyrighted XBE. With --xbe, additionally verify the user's exact
binary, complete function-body digest, instruction bytes and float constants.
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
import tempfile

ENTRY = 0x0026ADD0
BODY_END = 0x0026AEF1  # exclusive, includes RET 04 00 at 0x26AEEE
XBE_SHA = 'B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721'
BODY_SHA = '4DE0F586D14CF57E07622A06ADCCBC2015C79ECD0D0CD964E44C681C677389B0'
PATH = 'src/main_unclassified/band_0026/0x0026add0.c'
FLAGS = ['-std=c11', '-fsyntax-only', '-ferror-limit=3',
         '-Wno-implicit-function-declaration', '-Wno-int-conversion',
         '-Wno-incompatible-pointer-types', '-Wno-pointer-to-int-cast',
         '-Wno-int-to-pointer-cast', '-Wno-return-type',
         '-Wno-deprecated-non-prototype']


def check_source(s):
    required = [
        'Entry: 0x0026add0', 'Input x86 body SHA-256: ' + BODY_SHA,
        'piStack_c = piVar4;', 'FUN_00280100(&piStack_c);',
        'float tenth = *(float *)(iVar2 + 0x18) * 0.1f;',
        'float eight_tenths = *(float *)(iVar2 + 0x18) * 0.8f;',
        'uint32_t tenth_bits;', 'uint32_t eight_tenths_bits;',
        'memcpy(&tenth_bits, &tenth, sizeof tenth_bits);',
        'memcpy(&eight_tenths_bits, &eight_tenths, sizeof eight_tenths_bits);',
    ]
    for item in required:
        if s.count(item) != 1:
            raise ValueError('missing/duplicated source contract: ' + item)
    if not re.search(r'FUN_00234b30\(iVar2,piVar4,local_8,tenth_bits,\s*'
                     r'eight_tenths_bits,\s*tenth_bits,0,&param_1\)', s):
        raise ValueError('original 8-word call order or float bits changed')
    if 'piStack_c = (int *)(' in s or 'fStack_4' in s:
        raise ValueError('pointer cast or promoted float argument reintroduced')


def xbe_va(b, va, size):
    if b[:4] != b'XBEH':
        raise ValueError('not an XBE')
    base = struct.unpack_from('<I', b, 0x104)[0]
    count = struct.unpack_from('<I', b, 0x11c)[0]
    section_table = struct.unpack_from('<I', b, 0x120)[0]
    if not 1 <= count <= 128:
        raise ValueError('invalid section count')
    table_offset = section_table - base
    for i in range(count):
        pos = table_offset + i * 0x38
        if pos < 0 or pos + 20 > len(b):
            raise ValueError('invalid section table')
        _, addr, virtual_size, raw_addr, raw_size = struct.unpack_from('<IIIII', b, pos)
        if addr <= va and va + size <= addr + min(virtual_size, raw_size):
            at = raw_addr + va - addr
            if at + size > len(b):
                raise ValueError('section raw bytes out of bounds')
            return b[at:at + size]
    raise ValueError('VA not in XBE raw section: ' + hex(va))


def check_xbe(p):
    b = p.read_bytes()
    if hashlib.sha256(b).hexdigest().upper() != XBE_SHA:
        raise ValueError('original user XBE SHA-256 mismatch')
    if hashlib.sha256(xbe_va(b, ENTRY, BODY_END - ENTRY)).hexdigest().upper() != BODY_SHA:
        raise ValueError('complete 0x0026ADD0 x86 body SHA-256 mismatch')
    windows = {
        0x26AE70: 'd94518',       # FLD DWORD [EBP+18]
        0x26AE77: 'd80df04f3a00', # FMUL DWORD [003A4FF0]
        0x26AE84: 'd95c2418',     # FSTP DWORD [ESP+18]
        0x26AE88: '8b442418',     # MOV EAX,[ESP+18]
        0x26AE8F: '50',           # PUSH EAX
        0x26AE90: 'd80d14503a00', # FMUL DWORD [003A5014]
        0x26AE96: 'd95c2424',     # FSTP DWORD [ESP+24]
        0x26AE9A: '8b4c2424',     # MOV ECX,[ESP+24]
        0x26AE9E: '51',           # PUSH ECX
        0x26AE9F: '50',           # PUSH EAX again
        0x26AEA3: 'e8889cfcff',   # direct CALL 0x00234B30
    }
    for va, raw in windows.items():
        expected = bytes.fromhex(raw)
        if xbe_va(b, va, len(expected)) != expected:
            raise ValueError('original instruction window mismatch at ' + hex(va))
    for va, value in [(0x003A4FF0, 0x3DCCCCCD), (0x003A5014, 0x3F4CCCCD)]:
        if struct.unpack('<I', xbe_va(b, va, 4))[0] != value:
            raise ValueError('original x87 scalar constant mismatch')
    print('PASS: original XBE SHA, complete 0x0026ADD0 body SHA, 11 x86 windows, two f32 constants')


def check_compiler(root):
    clang = shutil.which('clang')
    if not clang:
        raise ValueError('Clang required')
    subprocess.run([clang, *FLAGS, '-I', str(root / 'include'), str(root / PATH)],
                   check=True, capture_output=True, text=True)
    harness = r'''
#include <stdint.h>
#include <string.h>
#include <assert.h>
static uint32_t word(float x) { uint32_t v; memcpy(&v, &x, sizeof v); return v; }
int main(void) {
    assert(word(1.0f * 0.1f) == 0x3DCCCCCDu);
    assert(word(1.0f * 0.8f) == 0x3F4CCCCDu);
    assert(word(-1.0f * 0.1f) == 0xBDCCCCCDu);
    assert(word(-1.0f * 0.8f) == 0xBF4CCCCDu);
    assert(word(0.0f * 0.1f) == 0u);
    assert(word(0.0f * 0.8f) == 0u);
    return 0;
}
'''
    with tempfile.TemporaryDirectory() as d:
        p = Path(d) / 'float_words.c'
        p.write_text(harness)
        for opt in ('-O0', '-O2'):
            exe = Path(d) / ('float_words' + opt[1:])
            subprocess.run([clang, '-std=c11', '-Wall', '-Wextra', '-Werror',
                            opt, str(p), '-o', str(exe)], check=True, capture_output=True)
            subprocess.run([str(exe)], check=True, capture_output=True)
    print('PASS: isolated Clang C11 and O0/O2 32-bit float word tests')


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument('--xbe', type=Path, help='user-owned original XBE; never upload to CI')
    args = ap.parse_args()
    root = args.root.resolve()
    source = (root / PATH).read_text()
    check_source(source)
    # Negative controls: fail closed when bit-copy, call order, or source label drift.
    for old, new in [
        ('0.1f;', '0.1;'),
        ('memcpy(&tenth_bits, &tenth, sizeof tenth_bits);', 'tenth_bits = (uint32_t)tenth;'),
        ('eight_tenths_bits,\n                           tenth_bits', 'tenth_bits,\n                           eight_tenths_bits'),
        ('piStack_c = piVar4;', 'piStack_c = 0;'),
        ('Input x86 body SHA-256: ' + BODY_SHA, 'Input x86 body SHA-256: UNKNOWN'),
    ]:
        if old not in source:
            raise ValueError('negative-control fixture no longer matches')
        try:
            check_source(source.replace(old, new, 1))
        except ValueError:
            pass
        else:
            raise ValueError('negative control was accepted')
    check_compiler(root)
    if args.xbe:
        check_xbe(args.xbe)
    else:
        print('XBE not supplied to CI: original instruction verification unavailable here')
    print('PASS: source call-word order and five negative controls; guest ABI/runtime unverified')


if __name__ == '__main__':
    main()
