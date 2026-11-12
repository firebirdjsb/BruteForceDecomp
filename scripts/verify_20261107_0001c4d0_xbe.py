#!/usr/bin/env python3
"""Private full-retail-XBE evidence gate for original 0x0001C4D0.

Checks contiguous function-body hash, byte operands, original three short JNE
and three RET 4 exits, with mutation controls. Does not execute game bytes,
recover guest x86 ABI, or prove host/native link behavior. Keep XBE private.
"""
from __future__ import annotations

import argparse
import hashlib
from pathlib import Path

from verify_nine_cpp_call_edges_xbe import XBE_SHA256, file_offset, sections

VA = 0x0001C4D0
SIZE = 84
ORIGINAL = 'bdd51f73956dd2e714ae63a6bf410c529c5fe39b05605a885dce8f2c660ecadf'
# Selected complete x86 instruction byte windows; all section-backed.
WINDOWS = {
  0x1c4d0:'8b4108',       # MOV EAX,[ECX+8]
  0x1c4d3:'8b10',         # MOV EDX,[EAX]
  0x1c4d5:'895108',       # MOV [ECX+8],EDX
  0x1c4d8:'8b10',         # Re-read after guest store
  0x1c4da:'53',           # PUSH EBX
  0x1c4db:'8a9aa9000000', # MOV BL,[EDX+0xA9]
  0x1c4e1:'84db',
  0x1c4e5:'894a04',       # MOV [EDX+4],ECX
  0x1c4e8:'8b5104',
  0x1c4eb:'895004',
  0x1c4ee:'8b542408',     # MOV EDX,[ESP+8] (after PUSH EBX)
  0x1c4f2:'8b5204',
  0x1c4f5:'3b4a04',
  0x1c4fa:'894204',
  0x1c4fd:'8908',
  0x1c4ff:'894104',
  0x1c502:'5b',
  0x1c506:'8b5104',
  0x1c509:'3b0a',
  0x1c50d:'8902',
  0x1c50f:'8908',
  0x1c511:'894104',
  0x1c514:'5b',
  0x1c518:'894208',
  0x1c51b:'8908',
  0x1c51d:'894104',
  0x1c520:'5b',
}
BRANCHES = {0x1c4e3:0x1c4e8,0x1c4f8:0x1c506,0x1c50b:0x1c518}
RET4 = (0x1c503,0x1c515,0x1c521)


def verify(blob:bytes)->dict[str,int]:
    actual=hashlib.sha256(blob).hexdigest()
    if actual!=XBE_SHA256:
        raise ValueError(f'Original retail XBE digest mismatch: {actual}')
    layout=sections(blob)
    body_start=file_offset(layout,VA,SIZE)
    body=blob[body_start:body_start+SIZE]
    if hashlib.sha256(body).hexdigest()!=ORIGINAL:
        raise ValueError('Complete 0x1C4D0 original x86 body SHA mismatch')
    negative=0
    for j in range(SIZE):
        mutant=bytearray(body);mutant[j]^=1
        if hashlib.sha256(mutant).hexdigest()==ORIGINAL:
            raise AssertionError('Modified original function unexpectedly accepted')
        negative+=1
    for guest_va,hexbytes in WINDOWS.items():
        expected=bytes.fromhex(hexbytes)
        off=file_offset(layout,guest_va,len(expected))
        if blob[off:off+len(expected)]!=expected:
            raise ValueError(f'Unexpected original opcode window at 0x{guest_va:08x}')
        for j in range(len(expected)):
            m=bytearray(expected);m[j]^=1
            if m==blob[off:off+len(expected)]:
                raise AssertionError('Altered instruction not rejected')
            negative+=1
    for site,destination in BRANCHES.items():
        off=file_offset(layout,site,2)
        op,disp=blob[off:off+2]
        if op!=0x75 or (site+2+(disp-256 if disp>=128 else disp))&0xffffffff != destination:
            raise ValueError(f'Wrong original JNE short branch 0x{site:08x}')
        for i in range(2):
            mutated=bytearray(blob[off:off+2]);mutated[i]^=1
            if mutated[0]==0x75 and (site+2+(mutated[1]-256 if mutated[1]>=128 else mutated[1]))&0xffffffff==destination:
                raise AssertionError('Mutated original branch incorrectly accepted')
            negative+=1
    for site in RET4:
        off=file_offset(layout,site,3)
        if blob[off:off+3]!=bytes.fromhex('c20400'):
            raise ValueError(f'Original RET 4 mismatch 0x{site:08x}')
        for j in range(3):
            altered=bytearray(blob[off:off+3]);altered[j]^=1
            if altered==bytes.fromhex('c20400'):
                raise AssertionError('Mutated RET was accepted')
            negative+=1
    return dict(original_body_bytes=SIZE,windows=len(WINDOWS),short_jne=len(BRANCHES),ret4_exits=len(RET4),rejected_mutations=negative)


def main()->None:
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--xbe',type=Path,required=True)
    args=p.parse_args()
    for k,v in verify(args.xbe.read_bytes()).items():
        print(f'{k}: {v}')
    print('PASS: pinned original XBE, complete body and branch/return evidence. ABI_UNVERIFIED.')


if __name__=='__main__':
    main()
