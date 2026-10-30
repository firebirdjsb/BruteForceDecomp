#!/usr/bin/env python3
"""Evidence-backed write-through guest DWORD at 0x00234190.

CI validates source and Clang C11 syntax, plus mutation and model tests.
Only --xbe validates the hash-pinned original retail XBE bytes locally.
This does not implement the Xbox EAX/EBX/EDI ABI or indirect target.
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

XBE_SHA = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
BODIES = {
    0x00234190: (548,'1fff211674c5671af712f7c38cc45cc5841b62329f22ef98fa2c270eb6d33fa9'),
    0x002340f0: (150,'fbe527c0b8c0cf448360879098b0fd47581f011ec3d8ad238ca08ff4c0f58ba8'),
}
# Every site is an entire machine instruction, not a byte chosen from its middle.
SITES = {
    0x00234190:'8b442404',      # first guest parameter
    0x00234194:'83ec08',        # original frame
    0x002342e3:'8b4e44',        # exact DWORD flags source
    0x002342e6:'c1e905',        # ECX = flags >> 5 (zero extend)
    0x002342e9:'f6c101',        # condition tests only low flag bit
    0x002342f2:'8b6d0c',       # object pointer for virtual call
    0x002342f5:'8b5500',       # vtable from object
    0x002342f8:'51',           # push full ECX word: scratch + next argument
    0x002342f9:'54',           # push pointer to that same guest scratch slot
    0x002342fa:'55',           # push object
    0x002342fb:'ff5210',       # vtable +0x10, unknown indirect target
    0x002342fe:'8bc6',         # EAX = ESI guest context for direct callee
    0x00234300:'e8ebfdffff',   # call 0x002340f0; scratch still on stack
    0x00234305:'83c404',       # reclaim the single guest scratch DWORD
    0x00234308:'84c0',         # test returned AL
    0x0023430a:'7469',         # branch on result
    0x002340f0:'8b4010',       # callee reads EAX-based object context
    0x002340f3:'85c0',
    0x002340fe:'8b4c2404',     # callee reads first guest stack DWORD
    0x00234102:'81f90b65b5e0',# callee compares the guest argument
    0x00234161:'8b442404',     # alternate callee path same stack argument
    0x00234125:'c3',
    0x00234185:'c3',
}
FLAGS=('-std=c11','-fsyntax-only','-ferror-limit=3',
       '-Wno-implicit-function-declaration','-Wno-int-conversion',
       '-Wno-incompatible-pointer-types','-Wno-pointer-to-int-cast',
       '-Wno-int-to-pointer-cast','-Wno-return-type',
       '-Wno-deprecated-non-prototype')
SOURCE = Path('src/main_unclassified/band_0023/0x00234190.c')
CALLEE = Path('src/main_unclassified/band_0023/0x002340f0.c')
INIT = 'guest_virtual_output_word = *(uint32_t *)(iVar5 + 0x44) >> 5;'
OUTPUT = '(**(code **)(*piVar2 + 0x10))(piVar2,&guest_virtual_output_word);'
CONSUME = 'cVar4 = FUN_002340f0(guest_virtual_output_word);'

def code_only(s):
    return re.sub(r'/\*.*?\*/|//[^\n]*','',s,flags=re.S)

def check_source(s,callee):
    if ('Entry: 0x00234190,' not in s or
        'Input x86 body SHA-256: '+BODIES[0x00234190][1].upper() not in s or
        'ABI_UNVERIFIED' not in s):
        raise ValueError('Caller provenance or caveat changed')
    if ('Entry: 0x002340f0,' not in callee or
        'Input x86 body SHA-256: '+BODIES[0x002340f0][1].upper() not in callee or
        'bool FUN_002340f0(uint param_1)' not in code_only(callee)):
        raise ValueError('Callee original x86 or single DWORD parameter contract changed')
    c=code_only(s)
    for token in (
        'uint32_t guest_virtual_output_word;',
        INIT,OUTPUT,CONSUME,
        '((*(uint *)(iVar5 + 0x44) >> 5 & 1) == 0)',
        'piVar2 = *(int **)(iVar1 + param_3 + 0xc);',
    ):
        if c.count(token)!=1:
            raise ValueError('Missing/duplicated guest word contract: '+token)
    if not (c.index('piVar2 = *(int **)(iVar1 + param_3 + 0xc);') <
            c.index(INIT) < c.index(OUTPUT) < c.index(CONSUME) <
            c.index('if ((cVar4 !=')):
        raise ValueError('Original store, virtual output, callee input order changed')
    if len(re.findall(r'\bguest_virtual_output_word\s*=(?!=)',c))!=1:
        raise ValueError('Invented extra/early write to output word')
    if re.search(r'\bstack0x[0-9a-f]+\b',c):
        raise ValueError('Unresolved original stack alias remains')
    if 'FUN_002340f0();' in c:
        raise ValueError('Callee guest stack argument dropped')
    if re.search(r'FUN_002340f0\s*\(\s*\&guest_virtual_output_word',c):
        raise ValueError('Guest value was replaced with pointer')

def mutation_tests(s,callee):
    muts=[
        ('uint32_t guest_virtual_output_word;','uint16_t guest_virtual_output_word;'),
        ('uint32_t guest_virtual_output_word;','uint64_t guest_virtual_output_word;'),
        (INIT,'guest_virtual_output_word = 0;'),
        (INIT,'guest_virtual_output_word = *(uint32_t *)(iVar5 + 0x44);'),
        (OUTPUT,'(**(code **)(*piVar2 + 0x10))(piVar2,&iVar5);'),
        (OUTPUT,'(**(code **)(*piVar2 + 0x14))(piVar2,&guest_virtual_output_word);'),
        (CONSUME,'cVar4 = FUN_002340f0();'),
        (CONSUME,'cVar4 = FUN_002340f0(0);'),
        (CONSUME,'cVar4 = FUN_002340f0(&guest_virtual_output_word);'),
        (OUTPUT,OUTPUT+'\n        guest_virtual_output_word = 0;'),
        (INIT+'\n        '+OUTPUT,OUTPUT+'\n        '+INIT),
        ('((*(uint *)(iVar5 + 0x44) >> 5 & 1) == 0)',
         '((*(uint *)(iVar5 + 0x44) >> 4 & 1) == 0)'),
    ]
    for a,b in muts:
        bad=s.replace(a,b)
        if bad==s:raise ValueError('No-op mutation: '+a)
        try:check_source(bad,callee)
        except ValueError:pass
        else:raise ValueError('Incorrect guest ABI mutation passed: '+a+' -> '+b)
    return len(muts)

def xbe_reader(data):
    if data[:4]!=b'XBEH':raise ValueError('Invalid XBE')
    base=struct.unpack_from('<I',data,0x104)[0]
    count,table=struct.unpack_from('<II',data,0x11c)
    t=table-base
    if count<1 or count>=128 or t<0 or t+56*count>len(data):raise ValueError('Bad sections')
    sections=[struct.unpack_from('<IIIII',data,t+56*i) for i in range(count)]
    def reader(va,n):
        for _,v,vs,raw,rs in sections:
            if v<=va and va+n<=v+min(vs,rs):
                o=raw+va-v
                if o+n<=len(data):return data[o:o+n]
        raise ValueError('Unmapped guest VA '+hex(va))
    return reader,sections

def check_xbe(data):
    if hashlib.sha256(data).hexdigest()!=XBE_SHA:
        raise ValueError('Pinned retail original Xbox XBE mismatch')
    read,secs=xbe_reader(data)
    for addr,(size,body) in BODIES.items():
        if hashlib.sha256(read(addr,size)).hexdigest()!=body:
            raise ValueError('Original function body mismatch '+hex(addr))
    for addr,op in SITES.items():
        if read(addr,len(op)//2)!=bytes.fromhex(op):
            raise ValueError('Original instruction mismatch '+hex(addr))
    # Direct E8 relative control transfer from caller must reach this callee.
    disp=struct.unpack('<i',read(0x00234301,4))[0]
    if 0x00234305+disp!=0x002340f0:
        raise ValueError('Call no longer targets confirmed guest stack consumer')
    # Adjacent +4 guest bytes are the only cdecl caller cleanup: exactly one DWORD.
    for _,v,vs,raw,rs in secs:
        if v<=0x002342f9<v+min(vs,rs):
            offset=raw+0x002342f9-v
            wrong=bytearray(data);wrong[offset]^=1
            try:
                read_bad=xbe_reader(wrong)[0]
                for addr in (0x002342f8,0x002342f9,0x002342fa):
                    if read_bad(addr,1)!=bytes.fromhex(SITES[addr]):
                        raise ValueError('mutated')
            except ValueError:pass
            else:raise ValueError('Original ESP output pointer mutation not caught')
            break
    else:raise ValueError('Original mutation site unmapped')

def host_test(cc):
    model=r'''#include <stdint.h>
#include <assert.h>
#include <stddef.h>
static void virtual_out(uint32_t *word, uint32_t replacement) { *word=replacement; }
static uint32_t callee_first_stack_word(uint32_t word) { return word; }
int main(void) {
  uint32_t cases[]={0,1,UINT32_MAX,0x12345678,0xe0b5650b,0xfed99c09};
  _Static_assert(sizeof(uint32_t)==4, "guest DWORD");
  for (size_t i=0;i<sizeof(cases)/sizeof(cases[0]);i++) {
    uint32_t flags=cases[i], slot=flags>>5;
    assert(callee_first_stack_word(slot)==(flags>>5));
    virtual_out(&slot,cases[(i+1)%6]);
    assert(callee_first_stack_word(slot)==cases[(i+1)%6]);
  }
  return 0;
}'''
    with tempfile.TemporaryDirectory() as td:
        p=Path(td)/'test.c';p.write_text(model+'\n')
        for opt in ('-O0','-O2'):
            exe=Path(td)/('model'+opt[1:])
            r=subprocess.run([cc,'-std=c11','-Wall','-Wextra','-Werror','-pedantic-errors',opt,str(p),'-o',str(exe)],capture_output=True,text=True,timeout=60)
            if r.returncode:raise ValueError('Host C11 model compilation '+opt+' failed '+r.stderr[-1000:])
            subprocess.run([str(exe)],check=True,timeout=20)

def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    ap.add_argument('--xbe',type=Path)
    args=ap.parse_args();root=args.root.resolve()
    s=(root/SOURCE).read_text();callee=(root/CALLEE).read_text()
    check_source(s,callee)
    count=mutation_tests(s,callee)
    cc=shutil.which('clang')
    if not cc:raise RuntimeError('Clang required')
    for opt in ('-O0','-O2'):
        cmd=[cc,*FLAGS,opt,'-I',str(root/'include'),str(root/SOURCE)]
        r=subprocess.run(cmd,capture_output=True,text=True,timeout=60)
        if r.returncode:raise ValueError('Clang C11 '+opt+' failed: '+r.stderr[-1600:])
    host_test(cc)
    if args.xbe:check_xbe(args.xbe.read_bytes())
    print('PASS 0x00234190 -> 0x002340F0: guest DWORD write-then-read, '
          +str(len(SITES))+' x86 instruction sites, '+str(count)+
          ' source mutations, Clang O0/O2 + host tests; XBE '
          +('verified' if args.xbe else 'not supplied')+
          '; indirect virtual target and host register/guest-pointer ABI UNVERIFIED')
if __name__=='__main__':main()