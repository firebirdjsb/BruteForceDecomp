#!/usr/bin/env python3
"""XBE-backed source/host syntax gate for 0x00258040 guest argument alias.

Does NOT verify the original indirect method's behavior or host pointer ABI.
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
import subprocess

XBE_SHA='b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
OPS={
    0x00258040: '83ec28',       # 40 bytes local allocation
    0x00258043: '53',           # saved EBX
    0x0025804D: '55',           # saved EBP
    0x00258052: '56',           # saved ESI
    0x00258057: '57',           # saved EDI -> ESP=entry ESP-0x38
    0x00258288: '8d542444',     # address = entry ESP+0x0C = third incoming DWORD
    0x0025828C: '52',           # pass shared word address
    0x00258295: 'e806fbffff',   # direct 0x00257DA0 consumer
    0x00258379: '8d4c2444',     # same third guest word address
    0x0025837D: '51',           # pass shared word address
    0x00258387: 'e89499e1ff',   # direct 0x00071D20 consumer
    0x0025839E: 'c21400',       # five original guest DWORDs
}
SOURCE='src/main_unclassified/band_0025/0x00258040.c'


def check(root:Path,xbe:Path|None)->None:
    text=(root/SOURCE).read_text(encoding='utf-8')
    assert 'Input x86 body SHA-256: FD6DD07E0862B300DCF5AC5D9F200C21DBD88ED3A36402B1DB1035EC61CAF0AB' in text
    assert 'Entry: 0x00258040' in text
    assert text.count('&param_3)')==2, 'two original output-address uses required'
    assert '&stack0x00000000' not in text, 'unresolved guest stack alias'
    assert 'TODO/ABI_UNVERIFIED' in text
    assert 'FUN_00257da0(iStack_8,pppppppuVar8,&param_3)' in text
    assert 'FUN_00071d20(*(undefined4 *)(iStack_8 + 0x3c),1,&param_3)' in text
    if xbe:
        data=xbe.read_bytes()
        assert hashlib.sha256(data).hexdigest()==XBE_SHA,'wrong original XBE'
        # For these original main-image addresses, image raw offset = VA-0x10000;
        # this mapping is independently verified by the pinned XBE sections.
        for address,op in OPS.items():
            b=bytes.fromhex(op)
            assert data[address-0x10000:address-0x10000+len(b)]==b,hex(address)
        print(f'XBE and {len(OPS)} original instruction windows: PASS')
    clang=shutil.which('clang')
    if not clang: raise SystemExit('clang required')
    flags=['-std=c11','-fsyntax-only','-ferror-limit=0',
           '-Wno-implicit-function-declaration','-Wno-int-conversion',
           '-Wno-incompatible-pointer-types','-Wno-pointer-to-int-cast',
           '-Wno-int-to-pointer-cast','-Wno-return-type',
           '-Wno-deprecated-non-prototype']
    for opt in ('-O0','-O2'):
        subprocess.run([clang,opt,*flags,'-I',str(root/'include'),str(root/SOURCE)],check=True)
        print(f'Whole-source host Clang C11 {opt}: PASS')
    print('ABI_UNVERIFIED: original DWORD stack slot does not establish host 64-bit pointer storage or callee write extent')


if __name__=='__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    parser.add_argument('--xbe',type=Path)
    arguments=parser.parse_args()
    check(arguments.root,arguments.xbe)
