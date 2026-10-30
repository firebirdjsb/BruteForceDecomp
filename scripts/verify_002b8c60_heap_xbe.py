#!/usr/bin/env python3
"""Authenticate original Xbox heap table and 001F35B0/002B8C60 callsites.

Requires the user's original private XBE. Reads initialized sections
only; cannot infer whether the game patches these addresses at runtime.
"""
import argparse
import hashlib
import struct
from pathlib import Path

XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODIES={
    (0x001f35b0,0x157):"3e7d18910aab35a23ed5e3edc448ae54a4b9c87ee9dba44a74cfb5f02a706fad",
    (0x002b8c60,0x4a):"45044552c47c60822ffc7fb5b55ef43725b60a3ea810014aeb8184c35affc9ba",
}
HEAP_POINTERS={
    0x003bc650:0x00237ea0,
    0x003bc654:0x00237ec0,
    0x003bc658:0x00237ee0,
}
OPCODES={
    0x237ea0:"8b4c240433c085c9740d",
    0x237eaa:"5150e842f90b0050e87aef0b00c3",
    0x237ec0:"8b442404506a00e827f90b0050e80af90b00c3",
    0x237ee0:"8b442404506a00e807f90b0050e89de50b00c3",
    0x2f77f3:"a1d4904a00c3",
    0x002ea018:"e9d3dbd7ff",
    0x00067bf0:"ff2554c63b00",
    0x00067cd0:"8b44240450ff1550c63b00",
    0x002b8c60:"85c0537425",
    0x002b8c65:"8b4e08f6c101",
    0x002b8c85:"845070751e",
    0x002b8c95:"5056e854fdffff",
    0x002b8c9e:"8b487c8b115056ff5218",
    0x002b8ca9:"c3",
    0x001f35b0:"8b460883ec6085c05357",
    0x001f35e4:"6a08e8326a0f00",
    0x001f36f8:"c7461400000000",
    0x001f3704:"c20400",
}
def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("xbe",type=Path)
    data=p.parse_args().xbe.read_bytes()
    if hashlib.sha256(data).hexdigest()!=XBE_SHA:
        p.error("Original Xbox XBE SHA-256 mismatch")
    def dword(offset):
        return struct.unpack_from("<I",data,offset)[0]
    base=dword(0x104)
    count=dword(0x11c)
    section_offset=dword(0x120)-base
    sections=[]
    for i in range(count):
        off=section_offset+0x38*i
        _,va,vlen,file_off,flen=struct.unpack_from("<IIIII",data,off)
        sections.append((va,vlen,file_off,flen))
    def read(va,n):
        for start,vlen,file_off,flen in sections:
            if start<=va and va+n<=start+vlen:
                pos=va-start
                if pos+n>flen:
                    raise ValueError(f"Uninitialized original XBE VA 0x{va:08x}")
                return data[file_off+pos:file_off+pos+n]
        raise ValueError(f"Unmapped original Xbox VA 0x{va:08x}")
    for (va,n),digest in BODIES.items():
        if hashlib.sha256(read(va,n)).hexdigest()!=digest:
            raise ValueError(f"Original body mismatch at 0x{va:08x}")
    for va,expected in HEAP_POINTERS.items():
        if struct.unpack("<I",read(va,4))[0]!=expected:
            raise ValueError(f"Initialized heap table mismatch at 0x{va:08x}")
    for va,pattern in OPCODES.items():
        raw=bytes.fromhex(pattern)
        if read(va,len(raw))!=raw:
            raise ValueError(f"Original instruction mismatch at 0x{va:08x}")
    print(f"PASS {len(BODIES)} original function bodies, "
          f"{len(HEAP_POINTERS)} heap pointers, {len(OPCODES)} opcode windows")
    print("Runtime table patching, deeper allocator/virtual bodies and guest SEH not inferred.")
if __name__=="__main__":
    main()
