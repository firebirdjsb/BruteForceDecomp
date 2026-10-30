#!/usr/bin/env python3
"""Verify Xbox constructor 0x00277F50 guest incoming pointer low-byte contract.

Strictly a C11 draft + verified machine-code storage contract. The original
four-byte guest address is NOT translated to a native host address here.
CI runs source and host-lane checks; provide --xbe locally for machine bytes.
"""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

from pathlib import Path
import argparse
import hashlib
import re
import shutil
import struct
import subprocess
import tempfile

SOURCE=Path('src/main_unclassified/band_0027/0x00277f50.c')
XBE_SHA='b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
BODY_SHA='32972094a1cf43ff2d4850b3e3505e67c70d13cf88b1da e27b0c28c2d051b8a4'.replace(' ','')
BODY_LEN=359
OLD='*(undefined1 *)(param_1 + 4) = param_1._0_1_;'
REPAIR='*(undefined1 *)(param_1 + 4) = (uint8_t)((uintptr_t)param_1 & UINT32_C(0xff));'
SITES={
 0x00277F50:'83ec18',0x00277F53:'53',0x00277F54:'55',
 0x00277F55:'8b6c2424',0x00277F59:'56',0x00277F5A:'57',
 0x00277F5B:'8d7504',0x00277F5E:'56',
 0x00277F5F:'c74500e01d3900',
 0x00277F66:'e8451c0000',
 0x00277F6B:'894604',
 0x00277F6E:'8a44242c',
 0x00277F72:'8d5d10',0x00277F75:'33ff',
 0x00277F77:'897e08',0x00277F7A:'53',
 0x00277F7B:'8803',0x00277F7D:'e8de2efeff',
 0x00279C1E:'c20400',0x0025AEE9:'c20400',
 0x0027807E:'8b00',
}

def stripped(s):
    return re.sub(r'/\*.*?\*/|//[^\n]*','',s,flags=re.S)

def source_check(source):
    if 'Entry: 0x00277f50,' not in source or BODY_SHA.upper() not in source:
        raise ValueError('Pinned body hash / identity missing')
    if 'ABI_UNVERIFIED' not in source:
        raise ValueError('Guest runtime caution missing')
    c=stripped(source)
    for s in ('undefined4 * FUN_00277f50(undefined4 *param_1)',
              '*param_1 = &PTR_FUN_00391de0;',
              'param_1[3] = 0;',REPAIR,
              'iVar3 = FUN_0025ae60(param_1 + 4);'):
        if c.count(s)!=1:raise ValueError('Absent/altered scalar contract: '+s)
    if OLD in c:raise ValueError('Unresolved pseudo-field')
    if not c.index('param_1[3] = 0;') < c.index(REPAIR) < c.index('iVar3 = FUN_0025ae60(param_1 + 4);'):
        raise ValueError('Wrong original register/byte-store order')
    if c.count('(uintptr_t)param_1')!=1:
        raise ValueError('Unexpected guest-pointer numeric conversion')

def negative_tests(source):
    replacements=[
      (REPAIR,REPAIR.replace('0xff','0xffff')),
      (REPAIR,REPAIR.replace('0xff','0xf0')),
      (REPAIR,REPAIR.replace('0xff','0xfe')),
      (REPAIR,REPAIR.replace('& UINT32_C(0xff)','>> 8')),
      (REPAIR,REPAIR.replace('& UINT32_C(0xff)','>> 16')),
      (REPAIR,'*(undefined1 *)(param_1 + 4) = 0;'),
      (REPAIR,'*(undefined1 *)(param_1 + 4) = 1;'),
      (REPAIR,OLD),
      (REPAIR,REPAIR.replace('param_1 + 4','param_1 + 5')),
      (REPAIR,REPAIR.replace('(uintptr_t)param_1','(uintptr_t)(param_1 + 4)')),
      ('param_1[3] = 0;','param_1[3] = 1;'),
      ('iVar3 = FUN_0025ae60(param_1 + 4);','iVar3 = FUN_0025ae60(param_1 + 5);'),
    ]
    for a,b in replacements:
        if a not in source:raise ValueError('Invalid negative source fixture')
        try: source_check(source.replace(a,b,1))
        except ValueError:continue
        raise ValueError('Incorrect source mutation passed: '+a+' => '+b)
    return len(replacements)

def guest_bytes(xbe):
    if hashlib.sha256(xbe).hexdigest()!=XBE_SHA:raise ValueError('Different retail Xbox executable')
    if xbe[:4]!=b'XBEH':raise ValueError('Invalid XBE signature')
    base=struct.unpack_from('<I',xbe,0x104)[0]
    n,t=struct.unpack_from('<II',xbe,0x11c)
    if not 0<n<=64 or t<base or t-base+n*56>len(xbe):raise ValueError('Invalid XBE sections')
    sections=[struct.unpack_from('<IIIII',xbe,t-base+i*56) for i in range(n)]
    def read(addr,n):
        for _,va,sz,file_pos,file_sz in sections:
            if va<=addr and addr+n<=va+min(sz,file_sz):
                return xbe[file_pos+addr-va:file_pos+addr-va+n]
        raise ValueError('Unmapped guest address: '+hex(addr))
    if hashlib.sha256(read(0x00277F50,BODY_LEN)).hexdigest()!=BODY_SHA:
        raise ValueError('Entire original constructor body disagrees')
    for addr,hexbytes in SITES.items():
        expected=bytes.fromhex(hexbytes)
        if read(addr,len(expected))!=expected:raise ValueError('Instruction differs at '+hex(addr))
    # CALL 00277F66 leads to callee whose RET 4 restores ESP before the
    # 00277F6E read; CALL 00277F7D is issued only after storing AL.
    for addr,dest in [(0x00277F66,0x00279BB0),(0x00277F7D,0x0025AE60)]:
        instruction=read(addr,5)
        assert instruction[0]==0xe8
        actual=(addr+5+struct.unpack('<i',instruction[1:])[0])&0xffffffff
        if actual!=dest:raise ValueError('Unexpected callee address')
    return len(SITES)

def clang_lanes():
    clang=shutil.which('clang')
    if not clang:raise RuntimeError('clang unavailable')
    program=r'''#include <stdint.h>
#include <assert.h>
int main(void){
 for(uint32_t v=0;v<UINT32_C(65536);v++){
  uintptr_t guest_pointer=(uintptr_t)(UINT32_C(0x72000000)|v);
  uint8_t tag=(uint8_t)(guest_pointer&UINT32_C(0xff));
  assert(tag==(uint8_t)v);
  uint32_t structwords[8]={0};
  structwords[4] = UINT32_C(0x55667788);
  ((uint8_t *)(void *)&structwords[4])[0]=tag;
  assert((structwords[4]&UINT32_C(0xffffff00))==UINT32_C(0x55667700));
 }
 return 0;
}'''
    with tempfile.TemporaryDirectory() as d:
        f=Path(d)/'test.c';f.write_text(program+'\n')
        for opt in ('-O0','-O2'):
            out=Path(d)/('guest-lane'+opt)
            p=subprocess.run([clang,'-std=c11','-Wall','-Wextra','-Werror',
                              '-pedantic-errors',opt,str(f),'-o',str(out)],
                              capture_output=True,text=True)
            if p.returncode:raise ValueError('Host lane test failed to compile: '+p.stderr)
            subprocess.run([str(out)],check=True)

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument('--xbe',type=Path)
    a=p.parse_args()
    content=(a.root/SOURCE).read_text()
    source_check(content)
    n=negative_tests(content)
    clang_lanes()
    sites=guest_bytes(a.xbe.read_bytes()) if a.xbe else 0
    print(f'PASS 0x00277F50: guest pointer input byte -> object +0x10, {n} source mutations, {sites} x86 windows, Clang O0/O2; XBE={bool(a.xbe)}; pointer translation/native ABI unverified')
if __name__=='__main__':main()