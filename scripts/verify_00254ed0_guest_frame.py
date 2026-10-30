#!/usr/bin/env python3
"""Verify 0x00254ED0 guest outword, 264-byte buffer, and virtual call sites.

The original retail XBE is required for --xbe and is never checked into Git.
The source-only test runs in CI. Native guest32 address translation, virtual
method prototypes, and whole-function runtime equivalence are NOT established.
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

XBE_SHA = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
BODY_SHA = 'e6eb10cdf096227ced44786b44789baff8237970ab4f215f6efbeb77e9843f51'
START, END = 0x00254ED0, 0x00254F56
SITES = {
    0x00254ED0:'81ec0c010000',   # sub esp,0x10c
    0x00254ED6:'8d4c2404',       # &buffer[0]
    0x00254EDA:'51',             # first output buffer pointer
    0x00254EDB:'c70700000000',   # zero *EDI
    0x00254EE3:'56',             # ESI object
    0x00254EE4:'ff500c',         # virtual +0x0c
    0x00254EE7:'f644240410',     # test buffer[0] bit 4
    0x00254EEE:'57',             # EDI output pointer
    0x00254EEF:'c70700000000',   # zero *EDI
    0x00254EF7:'56',             # ESI object
    0x00254EF8:'ff521c',         # virtual +0x1c
    0x00254F04:'8b06',           # load ESI vtable
    0x00254F06:'8d4c2400',       # &guest output DWORD at ESP
    0x00254F0A:'51',             # push output address
    0x00254F0B:'56',             # push ESI object
    0x00254F0C:'c744240800000000', # zero guest outword
    0x00254F14:'ff5010',         # virtual +0x10
    0x00254F17:'8b442400',       # reload guest interface DWORD
    0x00254F1B:'8b10',           # dereference interface vtable
    0x00254F1D:'6a00',           # fourth argument 0
    0x00254F1F:'6a00',           # third argument 0
    0x00254F21:'6800020000',     # length 0x200
    0x00254F26:'8d4c2414',       # buffer+4 (ESP after three pushes)
    0x00254F2A:'51',             # push buffer+4
    0x00254F2B:'50',             # push interface object
    0x00254F2C:'ff5234',         # virtual +0x34
    0x00254F2F:'8b442400',       # reload guest interface
    0x00254F33:'85c0',           # conditional release
    0x00254F37:'8b10',           # load vtable
    0x00254F39:'50',             # push interface
    0x00254F3A:'ff5208',         # virtual release +8
    0x00254F3D:'b805400080',     # E_FAIL
    0x00254F42:'81c40c010000',   # restore original frame
    0x00254F48:'c20400',         # RET 4
    0x00254F4B:'33c0',           # success = 0
    0x00254F4D:'81c40c010000',
    0x00254F53:'c20400',
    # Independent caller: ESI is loaded, EDI is address of its output.
    0x00254FC3:'8b742410',
    0x00254FC7:'57',
    0x00254FC8:'8d7c2410',
    0x00254FCC:'e8fffeffff',
}
FLAGS = ('-std=c11', '-fsyntax-only', '-ferror-limit=3',
         '-Wno-implicit-function-declaration', '-Wno-int-conversion',
         '-Wno-incompatible-pointer-types', '-Wno-pointer-to-int-cast',
         '-Wno-int-to-pointer-cast', '-Wno-return-type',
         '-Wno-deprecated-non-prototype')


def check_source(s):
    if ('Entry: 0x00254ed0,' not in s or
        'Input x86 body SHA-256: '+BODY_SHA.upper() not in s or
        'ABI_UNVERIFIED' not in s):
        raise ValueError('Source provenance or ABI caveat missing')
    code = re.sub(r'/\*.*?\*/|//[^\n]*', '', s, flags=re.S)
    required = (
        'uint32_t guest_interface_word;',
        'uint8_t temporary_bytes[264];',
        '_Static_assert(sizeof(bf_00254ed0_guest_frame) == 0x10c,',
        '_Static_assert(offsetof(bf_00254ed0_guest_frame, temporary_bytes) == 4,',
        '(**(code **)(*unaff_ESI + 0xc))(unaff_ESI, guest_frame.temporary_bytes);',
        '(guest_frame.temporary_bytes[0] & 0x10) != 0',
        '(**(code **)(*unaff_ESI + 0x1c))(unaff_ESI, unaff_EDI)',
        'guest_frame.guest_interface_word = 0;',
        '(**(code **)(*unaff_ESI + 0x10))(unaff_ESI, &guest_frame.guest_interface_word);',
        'int *guest_interface = (int *)(uintptr_t)guest_frame.guest_interface_word;',
        '(guest_interface, guest_frame.temporary_bytes + 4, 0x200, 0, 0);',
        'if (guest_frame.guest_interface_word != 0)',
        '(**(code **)(*guest_interface + 8))(guest_interface);',
        'return 0x80004005;',
    )
    for token in required:
        if code.count(token) != 1:
            raise ValueError('Guest frame or call contract changed: '+token)
    if code.count('(**(code **)(*guest_interface + 0x34))') != 1:
        raise ValueError('Missing original +0x34 dispatch')
    if re.search(r'\bstack0x[0-9a-fA-F]+\b', code):
        raise ValueError('Unresolved Ghidra stack address remains')
    if re.search(r'\bguest_frame\.temporary_bytes\s*\[\s*0\s*\]\s*=(?!=)', code):
        raise ValueError('Invented buffer initialization')
    if 'if (guest_interface != 0)' in code:
        raise ValueError('Invented pre-0x34 null guard')
    if '(**(code **)(*unaff_ESI + 0x34))' in code:
        raise ValueError('Wrong object for +0x34 virtual call')


def reader(data):
    if data[:4] != b'XBEH':
        raise ValueError('Not an XBE')
    base = struct.unpack_from('<I', data, 0x104)[0]
    count, table_va = struct.unpack_from('<II', data, 0x11c)
    table = table_va-base
    if not 0 < count < 128 or table < 0 or table+count*56 > len(data):
        raise ValueError('Invalid XBE section table')
    sections = [struct.unpack_from('<IIIII', data, table+i*56)
                for i in range(count)]
    def read(va, n):
        for _, start, vsize, raw, rsize in sections:
            if start <= va and va+n <= start+min(vsize, rsize):
                off = raw+va-start
                if off+n <= len(data):
                    return data[off:off+n]
        raise ValueError('Unmapped XBE address '+hex(va))
    return read


def check_xbe(data):
    if hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError('Pinned XBE SHA-256 mismatch')
    read = reader(data)
    if hashlib.sha256(read(START, END-START)).hexdigest() != BODY_SHA:
        raise ValueError('Original function body SHA-256 mismatch')
    for va, op in SITES.items():
        if read(va, len(op)//2) != bytes.fromhex(op):
            raise ValueError('Original instruction mismatch at '+hex(va))
    disp = struct.unpack('<i', read(0x00254FCD, 4))[0]
    if 0x00254FD1+disp != START:
        raise ValueError('Direct caller edge changed')
    # XBE negative control at the second LEA's original mapped byte.
    base = struct.unpack_from('<I', data, 0x104)[0]
    count, table_va = struct.unpack_from('<II', data, 0x11c)
    for i in range(count):
        _, start, vsize, raw, rsize = struct.unpack_from(
            '<IIIII', data, table_va-base+i*56)
        if start <= 0x00254F26 < start+min(vsize, rsize):
            offset = raw+0x00254F26-start
            break
    else:
        raise ValueError('XBE mutation address not mapped')
    changed = bytearray(data)
    changed[offset] ^= 1
    if reader(changed)(0x00254F26, 4) == bytes.fromhex(SITES[0x00254F26]):
        raise ValueError('XBE mutation escaped instruction check')


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[1])
    p.add_argument('--xbe', type=Path)
    a = p.parse_args()
    root = a.root.resolve()
    source_path = root/'src/main_unclassified/band_0025/0x00254ed0.c'
    source = source_path.read_text()
    check_source(source)
    for before, after in (
        ('uint8_t temporary_bytes[264];', 'uint8_t temporary_bytes[260];'),
        ('temporary_bytes) == 4,', 'temporary_bytes) == 8,'),
        ('guest_frame.temporary_bytes + 4', 'guest_frame.temporary_bytes'),
        ('guest_frame.guest_interface_word = 0;', 'guest_frame.guest_interface_word = 1;'),
        ('if (guest_frame.guest_interface_word != 0)', 'if (guest_frame.guest_interface_word == 0)'),
        ('(*guest_interface + 8)', '(*guest_interface + 4)'),
    ):
        changed = source.replace(before, after)
        if changed == source:
            raise ValueError('Negative control failed to change source')
        try:
            check_source(changed)
        except ValueError:
            pass
        else:
            raise ValueError('Invalid source mutation accepted: '+before)
    clang = shutil.which('clang')
    if not clang:
        raise RuntimeError('Clang unavailable')
    for opt in ('-O0', '-O2'):
        result = subprocess.run([clang, *FLAGS, opt, '-I', str(root/'include'),
                                 str(source_path)], capture_output=True,
                                text=True, timeout=60)
        if result.returncode:
            raise ValueError(f'Clang {opt} failed:\n{result.stderr[-2400:]}')
    if a.xbe:
        check_xbe(a.xbe.read_bytes())
    print('PASS: 0x00254ED0 pinned XBE frame, 41 instruction sites, direct caller, '
          'source/XBE negative controls, Clang O0/O2; XBE '+
          ('verified' if a.xbe else 'not supplied')+
          '; guest32 memory mapping, register ABI and runtime UNVERIFIED')

if __name__ == '__main__':
    main()
