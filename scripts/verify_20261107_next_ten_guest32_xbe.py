#!/usr/bin/env python3
"""Private original Brute Force XBE evidence for ten guest32 host source drafts.

No copyrighted XBE is stored in the repository. The original body hashes,
opcode windows and conditional branch targets are pinned to the user-owned
retail XBE and do not prove recovered native ABI or gameplay behavior.
"""
from __future__ import annotations
import argparse
import hashlib
from pathlib import Path
from verify_nine_cpp_call_edges_xbe import XBE_SHA256, sections, file_offset

BODIES = {
    0x002506a0: (28, '1B615C5A819D609B490DA97A0AC27A23E456C4EF7F934A67F1CD8F370A733431'),
    0x0025d880: (28, 'E15B4AF8376AD8D6BD10BBE873C59BA03249057D053F61A63FE8168CB3A1D219'),
    0x00270dd0: (28, 'C6256B14628E62147483E2E7A8718F2169479FCFDEBEA7168C8F7F3E569DD3DB'),
    0x0027cac0: (28, '31C31481B3FD03C996A9BA81B4155FB3D88C630A81D884F5F729CC2C0E48864C'),
    0x0027cb90: (28, '33266985A320CB0B9FF63D516833A6A4C295378D580A496DCE9C7D3A7D233725'),
    0x001faf70: (34, '545C2D8C55EC9C0879D9B077005DFDFBCFC36BEB8DE7F1BF1DEB48CB5C4C982B'),
    0x000618d0: (51, 'BAA5DACA98E69D531ECCDB4CA4C7DDCB5C15A3BC92E78CE82276BC361C398B79'),
    0x002f108b: (27, '5A528C5CD9161A40EE3ADCF2610D926C9C800753337218F0661092D1D2929180'),
    0x002e7580: (49, '205EC72C6826C01320D87261F17580333696C778127427C642D63532DBCCC1F2'),
    0x001736a0: (52, 'DD9E08C3484F856CCED33FC3C5F5512CE2C69949645BCA707669312BF262B4C8'),
}
# Original instruction-boundary windows, with guest field offsets and writes.
WINDOWS = {
    0x002506a2: '8a5111', 0x002506b4: '8a5111',
    0x0025d882: '8a5125', 0x0025d894: '8a5125',
    0x00270dd2: '8a512d', 0x00270de4: '8a512d',
    0x0027cac2: '8a511d', 0x0027cad4: '8a511d',
    0x0027cb92: '8a5121', 0x0027cba4: '8a5121',
    0x001faf81: '8b36', 0x001faf83: '39710c',
    0x001faf88: '8b09', 0x001faf8e: '8908',
    0x000618e2: '8b39', 0x000618e4: '893a',
    0x000618e6: '8b7904', 0x000618e9: '897a04',
    0x000618f7: '8910', 0x000618ff: '8908',
    0x002f1099: '8b30', 0x002f109b: '893401',
    0x002f109e: '83c004',
    0x002e7584: '884807', 0x002e758a: '884805',
    0x002e758f: 'c700c8683800', 0x002e7595: 'c64006ff',
    0x002e759c: '890a', 0x002e75aa: '89480c',
    0x001736a2: 'c700d0a33900', 0x001736a8: 'c7400803000000',
    0x001736af: '88480e', 0x001736c7: '88480c',
    0x001736cd: '884816',
}
# Sites are exact two-byte short conditional branches.
BRANCHES = {
    0x002506a7: (0x75, 0x002506bb), 0x002506b9: (0x74, 0x002506b0),
    0x0025d887: (0x75, 0x0025d89b), 0x0025d899: (0x74, 0x0025d890),
    0x00270dd7: (0x75, 0x00270deb), 0x00270de9: (0x74, 0x00270de0),
    0x0027cac7: (0x75, 0x0027cadb), 0x0027cad9: (0x74, 0x0027cad0),
    0x0027cb97: (0x75, 0x0027cbab), 0x0027cba9: (0x74, 0x0027cba0),
    0x001faf7b: (0x74, 0x001faf8e), 0x001faf86: (0x74, 0x001faf8e),
    0x001faf8c: (0x75, 0x001faf83),
    0x000618db: (0x74, 0x000618fb), 0x000618f4: (0x75, 0x000618e2),
    0x002f10a2: (0x75, 0x002f1099),
}

def verify(data: bytes) -> dict:
    actual = hashlib.sha256(data).hexdigest()
    if actual != XBE_SHA256:
        raise ValueError(f'Original XBE SHA-256 mismatch: {actual}')
    layout = sections(data)
    mutations = 0
    for va, (count, digest) in BODIES.items():
        off = file_offset(layout, va, count)
        original = data[off:off+count]
        if hashlib.sha256(original).hexdigest().upper() != digest:
            raise ValueError(f'Original body mismatch: {va:#x}')
        for i in range(count):
            changed = bytearray(original)
            changed[i] ^= 1
            if hashlib.sha256(changed).hexdigest().upper() == digest:
                raise AssertionError(f'Original body mutation accepted: {va:#x}+{i}')
            mutations += 1
    for va, raw in WINDOWS.items():
        needle = bytes.fromhex(raw)
        off = file_offset(layout, va, len(needle))
        if data[off:off+len(needle)] != needle:
            raise ValueError(f'Original x86 instruction/window mismatch at {va:#x}')
    for va, (opcode, target) in BRANCHES.items():
        off = file_offset(layout, va, 2)
        raw = data[off:off+2]
        disp = raw[1] if raw[1] < 128 else raw[1]-256
        if raw[0] != opcode or va+2+disp != target:
            raise ValueError(f'Original branch target mismatch at {va:#x}')
        corrupted = raw[1] ^ 1
        altered = corrupted if corrupted < 128 else corrupted-256
        if va+2+altered == target:
            raise AssertionError(f'Branch mutation accepted at {va:#x}')
        mutations += 1
    return dict(bodies=len(BODIES),body_bytes=sum(n for n,_ in BODIES.values()),
                instruction_windows=len(WINDOWS),branches=len(BRANCHES),
                mutation_controls=mutations,original_abi='UNVERIFIED',
                native_linkage='UNVERIFIED',game_behavior='UNVERIFIED')

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--xbe', type=Path, required=True)
    args = parser.parse_args()
    for key,value in verify(args.xbe.read_bytes()).items():
        print(f'{key}: {value}')

if __name__ == '__main__':
    main()
