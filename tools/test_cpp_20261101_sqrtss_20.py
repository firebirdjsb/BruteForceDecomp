#!/usr/bin/env python3
"""Source-only SQRTSS fixture. Neither host syntax nor opcode identity proves 1:1 ABI."""
import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
INCLUDE = b'#include "bf_x86_sqrtss.h"\n'
# Source-matched draft declarations, NOT instruction-level Xbox ABI proof.
# Strip only these exact additions before checking the original source blob.
EXTRA_DECLARATIONS = {
    "00046c70": b'/* Source-matched callee draft declaration only; Xbox ABI_UNVERIFIED. */\nextern char FUN_0004cd10(undefined4 param_1,float param_2);\n',
    "00058610": b'/* Source-matched callee draft declaration only; Xbox ABI_UNVERIFIED. */\nextern int FUN_00058590(float param_1);\n',
}
CALLEE_DRAFT_SIGNATURES = {
    "00046c70": ("0004cd10", b"char FUN_0004cd10(undefined4 param_1,float param_2)"),
    "00058610": ("00058590", b"int FUN_00058590(float param_1)"),
}
FIXTURES = """00023460 c7d879dabefe7fb4294f49c91a4aef132ebaf78b 000234fe:f30f51442414
00023540 fc4ab9f076e039cea8d6c99225acb200cca0ccfb 000235a4:f30f51442404
00025870 2e6a8566b61b934e7f2cc5cca88cd214756a9472 000258ed:f30f51442404
000394b0 2fa47475640705213612390b7f41f80dc8e0bfe4 000394f9:f30f51442404
00046c70 d858816d42d9278655bd31f51040d69b55ac4c27 00046d99:f30f51442410
00058610 a76f67ea79aadc712344b35a609671aa19ce1e03 00058642:f30f51442400
00058ef0 9d58c0dfc241d004984d17a26c4d39e4fe28f8cd 00058f3b:f30f51442404
00058f50 678ef13bcb4e91c9b125efc3d74ac306b1023117 00058f9b:f30f51442404
0006fb00 76b434ddabce25316a2b297d1943e8417a5c89fc 0006fc25:f30f51442404
0009ed80 d33415e1d8d4f83a76fdce31dbeba2ee70586433 0009eef8:f30f5144240c
0009f0b0 083effcec6db6616bbc4db16fa3ec94b990be11e 0009f213:f30f5144240c;0009f51a:f30f51442410
0015b450 7004c4ead7bfdc550205f0a96cdf9fcd0a770957 0015b621:f30f51442404
0017e5e0 ac62abb5a186488c9c6ded1e8248e28ebad38a30 0017e67c:f30f51442408
001f3900 4be4a2fc4ce03e6dcbd8a976db02bc4922e87574 001f398d:f30f51442404
002a2900 4d36d1a63456eaf46ce28de7ac81af9fce1a4161 002a2957:f30f51442404
002b3eb0 f4fd3ad25664f5af0651fd0f058d61e857ae032e 002b3f45:f30f51442400
002b4570 8d0befad16b9a8684ec1ab5d9c6870428303cb47 002b45be:f30f51442408
002b67e0 0584dba6211fef695d44a2e178c859ec9642af93 002b6817:f30f51442404
002b7b50 62ba48a11164ecca9bb898043fd60be3655a61cd 002b7c36:f30f51442408
002c55c0 87059ecb3cc107ed378151a089c58f9a6a0b65e2 002c561c:f30f51442404"""


def rows():
    result = [line.split() for line in FIXTURES.splitlines()]
    assert len(result) == 20 and len({x[0] for x in result}) == 20
    assert sum(len(x[2].split(';')) for x in result) == 21
    return result


def blob_sha(data):
    return hashlib.sha1(b"blob " + str(len(data)).encode() + b"\0" + data).hexdigest()


def check_source(root, row):
    entry, expected_sha, _ = row
    path = root / f"src/main_unclassified/band_{entry[:4]}/0x{entry}.cpp"
    data = path.read_bytes()
    assert data.count(INCLUDE) == 1, entry
    original = data.replace(INCLUDE, b'', 1)
    if entry in EXTRA_DECLARATIONS:
        declaration = EXTRA_DECLARATIONS[entry]
        assert original.count(declaration) == 1, entry
        original = original.replace(declaration, b'', 1)
        target, signature = CALLEE_DRAFT_SIGNATURES[entry]
        callee = root / f"src/main_unclassified/band_{target[:4]}/0x{target}.cpp"
        assert signature in callee.read_bytes(), (entry, target)
    assert blob_sha(original) == expected_sha, entry
    assert data.count(b'SQRT(') == 1, entry
    assert b'ABI_UNVERIFIED' in data and b'Input x86 body SHA-256:' in data, entry
    return path


def xbe_read(data, address, length):
    assert data[:4] == b'XBEH'
    u32 = lambda off: struct.unpack_from('<I', data, off)[0]
    base = u32(0x104)
    table = u32(0x120) - base
    count = u32(0x11c)
    assert 1 <= count <= 128
    for i in range(count):
        off = table + i * 56
        va, vs, raw, rs = (u32(off + k) for k in (4, 8, 12, 16))
        if va <= address and address + length <= va + min(vs, rs) and raw + rs <= len(data):
            start = raw + address - va
            return data[start:start + length]
    raise AssertionError(f'unmapped original VA {address:#x}')


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--root', type=Path, default=Path('.'))
    ap.add_argument('--xbe', type=Path)
    ap.add_argument('--self-test', action='store_true')
    args = ap.parse_args()
    fixture = rows()
    clang = shutil.which('clang++')
    if not clang:
        raise RuntimeError('clang++ is required for source checks')
    controls = checks = windows = 0
    for row in fixture:
        path = check_source(args.root, row)
        for opt in ('-O0', '-O2'):
            subprocess.run([clang, '-std=c++17', opt, '-fsyntax-only', '-w',
                            '-I', str(args.root / 'include'), str(path)],
                           check=True, capture_output=True, text=True)
            checks += 1
        if args.self_test:
            assert blob_sha(b'mutated') != row[1]
            controls += 1
        for window in row[2].split(';'):
            address_text, hex_bytes = window.split(':')
            address = int(address_text, 16)
            expected = bytes.fromhex(hex_bytes)
            assert len(expected) == 6 and expected[:5] == bytes.fromhex('f30f514424')
            assert int(row[0], 16) <= address < int(row[0], 16) + 4096
            if args.self_test:
                for i in range(6):
                    mutated = bytearray(expected)
                    mutated[i] ^= 1
                    assert bytes(mutated) != expected
                    controls += 1
            if args.xbe:
                data = args.xbe.read_bytes()
                assert hashlib.sha256(data).hexdigest() == XBE_SHA256, 'XBE SHA-256 mismatch'
                assert xbe_read(data, address, 6) == expected, row[0]
                windows += 1
    assert checks == 40
    if args.self_test:
        assert controls == 146
    print(f'Clang++17 O0/O2: {checks} passed; negative controls: {controls}; authenticated XBE windows: {windows}')
    if not args.xbe:
        print('Xbox instruction bytes not authenticated in CI without --xbe')


if __name__ == '__main__':
    main()
