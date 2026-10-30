#!/usr/bin/env python3
"""Pin the source-level 0x84DA0 guest stack alias, optionally checking XBE bytes.

Does not establish original virtual call signatures, guest stack byte lifetime,
or 1:1 behavior. The original XBE must never be committed to this repository.
"""
import argparse
import hashlib
from pathlib import Path

SOURCE = 'src/main_unclassified/band_0008/0x00084da0.cpp'
XBE_HASH = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
BODY_HASH = '2064015e6961bbfeca8aaefbe2ebdbb2681f02ab670e4e7a5f22af8fb0872237'
BODY_ENTRY = 0x00084DA0
BODY_SIZE = 0xD8
# All offsets are original Xbox virtual addresses (XBE section 0 mapping).
OPCODES = {
    0x00084E14: '8a442414',  # read previous guest stack byte
    0x00084E1E: '88442414',  # write modified byte
    0x00084E22: '8d442414',  # first pointer, [ESP+14]
    0x00084E26: '897c2418',  # clear word +4
    0x00084E2A: '897c241c',  # clear word +8
    0x00084E2E: '897c2420',  # clear word +12
    0x00084E32: '897c2424',  # clear word +16
    0x00084E43: '8d442414',  # second pointer, same [ESP+14]
}
REQUIRED = (
    'Entry: 0x00084da0',
    'Input x86 body SHA-256: ' + BODY_HASH.upper(),
    'undefined4 guest_local_words[5];',
    'guest_local_words[1] = 0;',
    'guest_local_words[2] = 0;',
    'guest_local_words[3] = 0;',
    'guest_local_words[4] = 0;',
    '(*piVar1 + 0x1fc))(guest_local_words);',
    '(*piVar1 + 0x30))(guest_local_words);',
)

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('xbe', nargs='?', type=Path)
    ap.add_argument('--root', type=Path, default=Path('.'))
    args = ap.parse_args()
    source = (args.root / SOURCE).read_text(encoding='utf-8')
    for token in REQUIRED:
        if token not in source:
            raise SystemExit('missing 0x84DA0 guest stack evidence: ' + token)
    if 'stack0xffffffdc' in source or 'stack0xffffffd8' in source:
        raise SystemExit('unresolved 0x84DA0 guest stack labels')
    if args.xbe:
        image = args.xbe.read_bytes()
        if hashlib.sha256(image).hexdigest() != XBE_HASH:
            raise SystemExit('XBE SHA-256 mismatch')
        # First executable section: guest 0x12000 maps to raw offset 0x2000.
        def file_offset(guest):
            return 0x2000 + guest - 0x12000
        body = image[file_offset(BODY_ENTRY):file_offset(BODY_ENTRY) + BODY_SIZE]
        if hashlib.sha256(body).hexdigest() != BODY_HASH:
            raise SystemExit('0x84DA0 original function body digest mismatch')
        for address, hexbytes in OPCODES.items():
            expected = bytes.fromhex(hexbytes)
            off = file_offset(address)
            if image[off:off + len(expected)] != expected:
                raise SystemExit(f'0x84DA0 original instruction mismatch at {address:#x}')
    print('PASS: 0x84DA0 shared guest stack address, four zero DWORDs, provenance')
    print('LIMITATION: first guest stack byte, virtual-call ABI and runtime fidelity unverified')

if __name__ == '__main__':
    main()
