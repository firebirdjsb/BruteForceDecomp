#!/usr/bin/env python3
"""Private retail-XBE verification of ten independent guest32 C++17 drafts.

Authenticates full retail binary, ten complete contiguous body digests, selected
instruction opcode/operands, 23 original branch destinations, and negative
mutations. Does not execute Xbox bytes, resolve original host ABI or link game.
Never commit the original copyrighted XBE.
"""
from __future__ import annotations
import argparse
import hashlib
from pathlib import Path

from verify_nine_cpp_call_edges_xbe import XBE_SHA256, sections, file_offset

# Original entry -> (full contiguous original body byte count, exact digest).
BODIES = {
    0x000756A0: (28, 'F7821AF43362F1F24B69C4CA31FDB8DDE512CEF64BEE48AC112294657FF94AFD'),
    0x000A83F0: (28, '51202350E7E1F03145B65AA5FC74256F3A9CDBB6E6019F83152B88E53FA9E27F'),
    0x000A8480: (28, 'CECDACED90BEC995D236F009767DE77ED83BCAB742EEBDBF7310A0CF66E6E45E'),
    0x0017D460: (31, 'EC696F0366C83E02D0BD4896B0CA37F12AF723ED8F68857719A741FE44BFD796'),
    0x001810F0: (28, '601DF151802ADBC0189E901976670BB9D19B0350F230B095CDE550437E1258E2'),
    0x000F6820: (34, 'AE5475F252229DF47985ADE16E82ACF9903B6068DD25A4FF613CC45EBB5D5DCD'),
    0x0012AF50: (34, '7BB467F812E4C8790EA318F82DE0036F7CF63F61C8BDE62B2B98030B83D03FD2'),
    0x00169D30: (32, '9A7A0E9A3C1564F52477CCB02088164D167249E271F5A61FB2675703436668A6'),
    0x0012B090: (42, 'D67900DBF936FC5BC2BD13D3C6ECC231448FB111DCF310D86AA7590F11CCF194'),
    0x001CEC30: (42, '2D97245F0AD64C29B40A030ED364358DC1A2B90D0E80FBFD130D7945390B79DE'),
}
# Branch site -> (opcode, exact original x86 target); all in-body short branches.
BRANCHES = {
    0x000756A7:(0x75,0x000756BB), 0x000756B9:(0x74,0x000756B0),
    0x000A83F7:(0x75,0x000A840B), 0x000A8409:(0x74,0x000A8400),
    0x000A8487:(0x75,0x000A849B), 0x000A8499:(0x74,0x000A8490),
    0x0017D46A:(0x75,0x0017D47E), 0x0017D47C:(0x74,0x0017D470),
    0x001810F7:(0x75,0x0018110B), 0x00181109:(0x74,0x00181100),
    0x000F682B:(0x74,0x000F683E), 0x000F6836:(0x74,0x000F683E), 0x000F683C:(0x75,0x000F6833),
    0x0012AF5B:(0x74,0x0012AF6E), 0x0012AF65:(0x74,0x0012AF6E), 0x0012AF6C:(0x75,0x0012AF63),
    0x00169D3B:(0x74,0x00169D4C), 0x00169D44:(0x74,0x00169D4C), 0x00169D4A:(0x75,0x00169D41),
    0x0012B09B:(0x74,0x0012B0B8), 0x0012B0B5:(0x75,0x0012B0A2),
    0x001CEC3C:(0x74,0x001CEC57), 0x001CEC55:(0x75,0x001CEC42),
}
# Original instruction-boundary windows with exact byte width and operand.
WINDOWS = {
    0x000756A2:'8a5129', 0x000756B4:'8a5129',
    0x000A83F2:'8a5119', 0x000A8404:'8a5119',
    0x000A8482:'8a5115', 0x000A8494:'8a5115',
    0x0017D462:'8a9181000000', 0x0017D474:'8a9181000000',
    0x001810F2:'8a5141', 0x00181104:'8a5141',
    0x000F6833:'397108', 0x000F6838:'8b09', 0x000F683E:'8908',
    0x0012AF63:'3931', 0x0012AF67:'83c104', 0x0012AF6E:'8908',
    0x00169D41:'39710c', 0x00169D46:'8b09', 0x00169D4C:'8908',
    0x0012B0A2:'8b39', 0x0012B0A4:'8938', 0x0012B0A6:'8b7c0204',
    0x0012B0AA:'897804', 0x0012B0AD:'83c108', 0x0012B0B0:'83c008',
    0x001CEC42:'8b39', 0x001CEC44:'8938', 0x001CEC46:'8b7c0204',
    0x001CEC4A:'897804', 0x001CEC4D:'83c108', 0x001CEC50:'83c008',
}

def verify(data: bytes) -> dict:
    actual=hashlib.sha256(data).hexdigest()
    if actual!=XBE_SHA256:
        raise ValueError(f'Retail XBE SHA-256 mismatch: {actual}')
    layout=sections(data)
    mutated=0
    for va,(size,expected) in BODIES.items():
        offset=file_offset(layout,va,size)
        body=data[offset:offset+size]
        if hashlib.sha256(body).hexdigest().upper()!=expected:
            raise ValueError(f'Original body not contiguous or digest mismatch at {va:#x}')
        for i in range(size):
            changed=bytearray(body)
            changed[i]^=1
            if hashlib.sha256(changed).hexdigest().upper()==expected:
                raise AssertionError(f'Mutated original body accepted: {va:#x}+{i}')
            mutated+=1
    for va,hex_bytes in WINDOWS.items():
        needle=bytes.fromhex(hex_bytes)
        off=file_offset(layout,va,len(needle))
        if data[off:off+len(needle)]!=needle:
            raise ValueError(f'Wrong original x86 instruction bytes: {va:#x}')
    for va,(opcode,target) in BRANCHES.items():
        off=file_offset(layout,va,2)
        raw=data[off:off+2]
        if raw[0]!=opcode:
            raise ValueError(f'Original branch opcode mismatch at {va:#x}')
        disp=raw[1] if raw[1]<128 else raw[1]-256
        if va+2+disp!=target:
            raise ValueError(f'Original short branch target mismatch at {va:#x}')
        corrupt=(raw[1]^1)
        wrong_disp=corrupt if corrupt<128 else corrupt-256
        if va+2+wrong_disp==target:
            raise AssertionError(f'Original short branch mutation not detected at {va:#x}')
        mutated+=1
    return {'bodies':len(BODIES),'original_body_bytes':sum(n for n,_ in BODIES.values()),
            'instruction_windows':len(WINDOWS),'closed_branch_edges':len(BRANCHES),
            'mutation_controls':mutated,'abi':'UNVERIFIED',
            'guest_va':'NOT_MAPPED_TO_NATIVE','game_behavior':'NOT_VERIFIED'}

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--xbe',type=Path,required=True)
    args=parser.parse_args()
    for k,v in verify(args.xbe.read_bytes()).items():
        print(k,v)
if __name__=='__main__':
    main()
