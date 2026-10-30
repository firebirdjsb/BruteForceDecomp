#!/usr/bin/env python3
"""Check Xbox _longjmp guest record and isolated C11; XBE opcode checks are opt-in."""

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

SOURCE = Path('src/main_unclassified/band_002e/0x002eb90c.c')
XBE_SHA = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
BODY_SHA = 'EB9846504952BF5D0DA8596CC2DBA74F18ACBC29BA3238E7C6446BF59D3E844D'
# Authenticated from original user-provided XBE. Never assume XBE exists in CI.
WINDOWS = {
    0x002EB90C: '8b5c2404',       # first guest stack argument -> EBX
    0x002EB910: '8b2b',           # saved EBP at +0x00
    0x002EB912: '8b7318',         # SEH frame at +0x18
    0x002EB915: '643b3500000000', # FS:[0] guest SEH comparison
    0x002EB92C: '8d4320',         # probe address at +0x20
    0x002EB939: '8b4320',         # cookie at +0x20
    0x002EB943: '8b4324',         # callback at +0x24
    0x002EB94F: '8b431c',         # unwind level at +0x1c
    0x002EB95E: '8b4314',         # EAX = saved EIP before helper
    0x002EB968: '8b5a04',         # restore EBX
    0x002EB96B: '8b7a08',         # restore EDI
    0x002EB96E: '8b720c',         # restore ESI
    0x002EB971: '8b442408',       # second incoming stack argument
    0x002EB975: '83f801',         # CMP EAX,1
    0x002EB978: '83d000',         # ADC EAX,0 (zero becomes one)
    0x002EB97B: '8b6210',         # restore guest ESP
    0x002EB97E: '83c404',         # discard guest return word
    0x002EB981: 'ff6214',         # indirect JMP saved guest EIP
    0x002EF9DF: '894304',         # helper saves EAX
    0x002EF9E2: '896b0c',         # helper saves EBP
    0x002953AA: '6a01',           # caller pushes longjmp value 1
    0x002953AC: '50',             # caller pushes context
}
REQUIRED = (
    'Entry: 0x002eb90c',
    'Input x86 body SHA-256: ' + BODY_SHA,
    'STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED',
    'typedef struct bf_xbox_jump_context',
    'uint32_t saved_ebp;', 'uint32_t saved_ebx;',
    'uint32_t saved_edi;', 'uint32_t saved_esi;',
    'uint32_t saved_esp;', 'uint32_t saved_eip;',
    'uint32_t seh_frame;', 'uint32_t unwind_level;',
    'uint32_t unwind_cookie;', 'uint32_t unwind_callback;',
    '_Static_assert(sizeof(bf_xbox_jump_context) == 0x28',
    'offsetof(bf_xbox_jump_context, seh_frame) == 0x18',
    'offsetof(bf_xbox_jump_context, unwind_cookie) == 0x20',
    'offsetof(bf_xbox_jump_context, unwind_callback) == 0x24',
    'iVar1 = __env->seh_frame;',
    'iVar3 = __rt_probe_read4_4(&__env->unwind_cookie);',
    '__env->unwind_cookie != 0x56433230',
    '__local_unwind2(iVar1,__env->unwind_level);',
    'pcVar2 = (code *)(uintptr_t)__env->unwind_callback;',
    '(*(code *)(uintptr_t)__env->saved_eip)();',
    'The existing draft call below does not model those register effects.',
)

def verify_source(s):
    missing = [item for item in REQUIRED if item not in s]
    if missing:
        raise ValueError('guest jump context/source contract mismatch: ' + repr(missing))
    if 'void _longjmp(__jmp_buf_tag' in s:
        raise ValueError('glibc-specific jump record reintroduced')

def guest_bytes(data, va, count):
    base = struct.unpack_from('<I', data, 0x104)[0]
    sections = struct.unpack_from('<I', data, 0x11c)[0]
    table = struct.unpack_from('<I', data, 0x120)[0] - base
    for i in range(sections):
        _, address, mem_size, raw, stored = struct.unpack_from('<IIIII', data, table + 0x38*i)
        if address <= va and va+count <= address + min(mem_size, stored):
            offset = raw + va - address
            return data[offset:offset+count]
    raise ValueError('XBE section unavailable for ' + hex(va))

def verify_xbe(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError('XBE SHA-256 mismatch: not the authenticated original')
    for va, encoded in WINDOWS.items():
        expected = bytes.fromhex(encoded)
        if guest_bytes(data, va, len(expected)) != expected:
            raise ValueError('original instruction mismatch at ' + hex(va))
    for call_va, target in (
        (0x002EB91F, 0x002EF8FC), (0x002EB930, 0x002EF9EA),
        (0x002EB954, 0x002EF93E), (0x002EB961, 0x002EF9D2),
        (0x002953AD, 0x002EB90C),
    ):
        call = guest_bytes(data, call_va, 5)
        if call[0] != 0xe8 or call_va+5+struct.unpack('<i', call[1:])[0] != target:
            raise ValueError('original CALL target mismatch at ' + hex(call_va))
    print('Authenticated XBE: 22 opcode windows, 5 direct CALL targets PASS')

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument('--xbe', type=Path)
    args = parser.parse_args()
    s = (args.root / SOURCE).read_text(encoding='utf-8')
    verify_source(s)
    for mutant in (
        s.replace('uint32_t seh_frame;', 'uint64_t seh_frame;'),
        s.replace('offsetof(bf_xbox_jump_context, unwind_cookie) == 0x20',
                  'offsetof(bf_xbox_jump_context, unwind_cookie) == 0x1c'),
        s.replace('iVar1 = __env->seh_frame;', 'iVar1 = __env->saved_ebp;'),
        s.replace('(*(code *)(uintptr_t)__env->saved_eip)();',
                  '(*(code *)(uintptr_t)__env->saved_esp)();'),
    ):
        try:
            verify_source(mutant)
        except ValueError:
            pass
        else:
            raise RuntimeError('negative source mutation escaped regression check')
    clang = shutil.which('clang')
    if clang is None:
        raise RuntimeError('Clang is required')
    flags = ['-std=c11', '-fsyntax-only', '-ferror-limit=5',
             '-Wno-implicit-function-declaration', '-Wno-int-conversion',
             '-Wno-incompatible-pointer-types', '-Wno-pointer-to-int-cast',
             '-Wno-int-to-pointer-cast', '-Wno-return-type',
             '-Wno-deprecated-non-prototype']
    for opt in ('-O0', '-O2'):
        cmd = [clang, *flags, opt, '-I', str(args.root/'include'), str(args.root/SOURCE)]
        result = subprocess.run(cmd, text=True, capture_output=True)
        if result.returncode:
            raise RuntimeError('isolated C11 ' + opt + ' failed: ' + result.stderr)
        print('isolated Clang C11 ' + opt + ': PASS')
    if args.xbe:
        verify_xbe(args.xbe)
    else:
        print('Original XBE not supplied: opcode verification SKIPPED in CI')
    print('Guest record storage verified; native SEH/register restore/EIP jump UNVERIFIED')

if __name__ == '__main__':
    main()
