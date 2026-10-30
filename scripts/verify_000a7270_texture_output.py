#!/usr/bin/env python3
"""Check 0xA7270 interface output alias and host C11, optionally against XBE."""

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

SOURCE = Path('src/main_unclassified/band_000a/0x000a7270.c')
XBE_SHA = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
BODY_SHA = '6993D005A7CD766339F2DA45BBF80D34763504BA4D301D6B50212F80AE6A19BF'
WINDOWS = {
    0x000A7270: '83ec4c',       # 0x4c-byte stack frame
    0x000A7273: '5356',         # saved EBX, ESI
    0x000A7394: '8d542410',     # LEA EDX,[ESP+0x10] -> S-0x44
    0x000A739E: '895c2418',     # zero the same output slot
    0x000A73A5: 'ff5110',       # interface vtable slot 0x10
    0x000A73AC: '8b442458',     # first incoming argument S+4
    0x000A73B1: '8b442414',     # read output slot after PUSH
    0x000A73DF: '8b442458',     # first incoming argument S+4
    0x000A73E3: '80a014010000fe', # AND BYTE [EAX+0x114],0xfe
}


def verify_source(source):
    required = [
        'Entry: 0x000a7270',
        'Input x86 body SHA-256: ' + BODY_SHA,
        'STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED',
        'uint local_48 [2];',
        '(piStack_4c,s_23_23_INamedTexture_004060e0,&local_48[1])',
        'FUN_000a7160(local_48[1]);',
        '*(byte *)(param_1 + 0x114) = *(byte *)(param_1 + 0x114) & 0xfe;',
    ]
    if any(item not in source for item in required):
        raise ValueError('0xA7270 original stack/value provenance mismatch')
    if '&stack0xffffffb0' in source or 'FUN_000a7160(local_8)' in source:
        raise ValueError('decompiler stack alias regression')


def get_bytes(xbe, va, n):
    base = struct.unpack_from('<I', xbe, 0x104)[0]
    count = struct.unpack_from('<I', xbe, 0x11c)[0]
    table = struct.unpack_from('<I', xbe, 0x120)[0] - base
    for index in range(count):
        _, section_va, memory_size, raw, stored = struct.unpack_from('<IIIII', xbe, table + 0x38*index)
        if section_va <= va and va+n <= section_va+min(memory_size,stored):
            pos = raw+va-section_va
            return xbe[pos:pos+n]
    raise ValueError('XBE section did not contain ' + hex(va))


def verify_xbe(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError('provided XBE SHA256 does not match original')
    for va, hexdigits in WINDOWS.items():
        expected = bytes.fromhex(hexdigits)
        if get_bytes(data, va, len(expected)) != expected:
            raise ValueError('original opcode window mismatched at ' + hex(va))
    call = get_bytes(data, 0x000A73B5, 5)
    if call[0] != 0xe8 or 0x000A73BA + struct.unpack('<i',call[1:])[0] != 0x000A7160:
        raise ValueError('original FUN_000A7160 call destination mismatched')
    print('Authenticated XBE: 9 opcode windows and 0xA7160 CALL PASS')


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument('--xbe', type=Path)
    args = ap.parse_args()
    source = (args.root/SOURCE).read_text(encoding='utf-8')
    verify_source(source)
    for mutant in (source.replace('&local_48[1]', '&local_48[0]', 1),
                   source.replace('FUN_000a7160(local_48[1])', 'FUN_000a7160(local_8)'),
                   source.replace('*(byte *)(param_1 + 0x114)', '*(byte *)(local_8 + 0x114)', 1)):
        try:
            verify_source(mutant)
        except ValueError:
            pass
        else:
            raise RuntimeError('mutated stack alias escaped regression detection')
    clang = shutil.which('clang')
    if clang is None:
        raise RuntimeError('Clang required')
    flags = ['-std=c11','-fsyntax-only','-ferror-limit=3',
             '-Wno-implicit-function-declaration','-Wno-int-conversion',
             '-Wno-incompatible-pointer-types','-Wno-pointer-to-int-cast',
             '-Wno-int-to-pointer-cast','-Wno-return-type','-Wno-deprecated-non-prototype']
    for opt in ('-O0','-O2'):
        result = subprocess.run([clang,*flags,opt,'-I',str(args.root/'include'),str(args.root/SOURCE)],
                                text=True,capture_output=True)
        if result.returncode:
            raise RuntimeError(f'isolated C11 {opt}: {result.stderr}')
        print('isolated C11 ' + opt + ': PASS')
    if args.xbe is not None:
        verify_xbe(args.xbe)
    else:
        print('Original XBE unavailable in CI: source-only regression checks')
    print('Full original guest ABI and native behavior remain UNVERIFIED')

if __name__ == '__main__':
    main()
