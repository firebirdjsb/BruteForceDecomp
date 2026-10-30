#!/usr/bin/env python3
"""Focused C11 and optional original-XBE evidence for two stack repairs.

Checks original function identity, exact machine instructions, and host syntax.
Does not verify register ABI, indirect callees, linkage, or PC behavior.
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
CASES = {
 0x000f24f0: (98, '0899FEEF7D56E484C5282A956E2B9A8C2EB93E8877AFD46B68E145B4968E0888',
   {0xf24f0:'81ec80000000', 0xf24f6:'56', 0xf2512:'53', 0xf2513:'57',
    0xf252a:'50', 0xf252b:'6860d74000', 0xf2530:'8d542414',
    0xf2534:'6a40', 0xf2536:'52', 0xf2537:'e86d841f00',
    0xf253c:'83c410', 0xf253f:'8d7c240c', 0xf2543:'e888820100',
    0xf254b:'81c480000000', 0xf2551:'c3'},
   ('undefined1 guest_stack_buffer[0x80];',
    'FUN_002ea9a9(guest_stack_buffer,0x40,', 'FUN_0010a7d0();')),
 0x000f2c60: (225, '5EC7DAA49A6BF44EB9958117B4C3AE977B9BA55591D2E0C113AFD097638CB407',
   {0xf2c60:'51', 0xf2c61:'53', 0xf2c62:'55', 0xf2c63:'56', 0xf2c64:'57',
    0xf2d0b:'6a00', 0xf2d0d:'8d4c2414', 0xf2d11:'6a00', 0xf2d13:'51',
    0xf2d16:'ff5208', 0xf2d1f:'c7442410790289fd',
    0xf2d2c:'8d542410', 0xf2d30:'52', 0xf2d33:'ff902c020000'},
   ('uStack_4 = 0xfd890279;', '(&uStack_4,0,0)', '(&uStack_4)')),
}

def check_source(root):
 clang = shutil.which('clang')
 if not clang: raise ValueError('clang not found')
 flags = ['-std=c11','-fsyntax-only','-ferror-limit=5',
          '-Wno-implicit-function-declaration','-Wno-int-conversion',
          '-Wno-incompatible-pointer-types','-Wno-pointer-to-int-cast',
          '-Wno-int-to-pointer-cast','-Wno-return-type',
          '-Wno-deprecated-non-prototype']
 for entry, (_, digest, _, expected) in CASES.items():
  p = root / f'src/main_unclassified/band_{entry>>16:04x}/0x{entry:08x}.c'
  s = p.read_text()
  if f'Entry: 0x{entry:08x},' not in s or f'Input x86 body SHA-256: {digest}' not in s or 'ABI_UNVERIFIED' not in s:
   raise ValueError(f'Original provenance or status changed: {entry:#x}')
  code = re.sub(r'/\*.*?\*/|//[^\n]*','',s,flags=re.S)
  if any(token not in code for token in expected) or re.search(r'\bstack0x[0-9a-fA-F]{8}\b',code):
   raise ValueError(f'Stack reconstruction regression: {entry:#x}')
  r = subprocess.run([clang,*flags,'-I',str(root/'include'),str(p)],
                     capture_output=True,text=True,timeout=60)
  if r.returncode: raise ValueError(f'C11 failed {entry:#x}: {r.stderr[:1800]}')

def assert_opcode(read,va,encoded):
 if read(va,len(encoded)//2)!=bytes.fromhex(encoded):
  raise ValueError(f'Original instruction mismatch: {va:#x}')

def check_xbe(data):
 if data[:4]!=b'XBEH' or hashlib.sha256(data).hexdigest()!=XBE_SHA:
  raise ValueError('Original XBE identity mismatch')
 base = struct.unpack_from('<I',data,0x104)[0]
 count,table = struct.unpack_from('<II',data,0x11c)
 if not 0<count<128: raise ValueError('Invalid section count')
 sections=[]
 for i in range(count):
  _,va,virt,raw,size = struct.unpack_from('<IIIII',data,table-base+i*0x38)
  if raw+size>len(data): raise ValueError('Invalid XBE section')
  sections.append((va,min(virt,size),raw))
 def read(va,n):
  for start,size,raw in sections:
   if start<=va and va+n<=start+size:return data[raw+va-start:raw+va-start+n]
  raise ValueError(f'Unmapped XBE VA {va:#x}')
 for entry,(length,digest,opcodes,_) in CASES.items():
  if hashlib.sha256(read(entry,length)).hexdigest().upper()!=digest:
   raise ValueError(f'Original function body hash mismatch: {entry:#x}')
  for va,encoded in opcodes.items():
   assert_opcode(read,va,encoded)
 # Negative control: an altered LEA must fail its exact-opcode assertion.
 original=read(0xf2530,4)
 def mutated(va,n):
  if va==0xf2530 and n==4:return bytes([original[0]^1])+original[1:]
  return read(va,n)
 try:assert_opcode(mutated,0xf2530,'8d542414')
 except ValueError:pass
 else:raise ValueError('Negative control failed')

def main():
 ap=argparse.ArgumentParser(description=__doc__)
 ap.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
 ap.add_argument('--xbe',type=Path,help='Original user-owned retail XBE')
 a=ap.parse_args()
 check_source(a.root)
 if a.xbe: check_xbe(a.xbe.read_bytes())
 print('PASS: 2 focused Clang C11 source checks, preserved provenance, original XBE '+
       ('instruction/body hashes verified' if a.xbe else 'not supplied; ABI unverified'))
if __name__=='__main__':main()
