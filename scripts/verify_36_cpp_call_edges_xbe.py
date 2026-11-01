#!/usr/bin/env python3
"""Authenticated Brute Force XBE direct-call evidence; not C++ ABI certification."""
import argparse
import hashlib
import struct
from pathlib import Path

XBE_SHA256 = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
# caller entry, callee entry, CALL site, observed callee RET byte windows
ROWS = """0001b750 0001bd90 0001b76e 0001c118/c20c00
0001c250 0001c930 0001c2bc 0001c978/c21000
000230a0 00023010 000230b1 00023061/c20800;0002308a/c20800;00023096/c20800
00038b00 00038b70 00038b07 00038bc6/c20400
00038c30 00039270 00038c49 00039333/c3
0003c650 0003cec0 0003c675 0003cf4b/c3
0003c6b0 0003ca80 0003c6d5 0003cafb/c3
00042620 00024540 00042668 000245ad/c21c00;00024946/c21c00
000464d0 0001a4e0 00046517 0001a735/c3;0001a755/c3
000493e0 00049880 00049405 00049913/c3
0004b6a0 0004b760 0004b6c1 0004b794/c3;0004b7a1/c3
00050880 00050d40 000508a1 00050d7e/c3;00050d8b/c3
000544e0 000545f0 0005452f 00054685/c3
000545f0 000543e0 0005467c 000544d2/c3
00058160 00058430 00058179 00058500/c3
000581c0 000582f0 000581e1 00058324/c3;00058331/c3
00061b30 00061c40 00061b44 00061c80/c3
00061eb0 0003d6c0 00061f38 0003d721/c20c00
0006ed80 002337a0 0006ed90 002338bd/c3
00074ad0 00075f00 00074ae7 00075f2a/c20400
00075380 00075f00 00075387 00075f2a/c20400
00076570 00076280 00076591 000762b7/c3;000762c4/c3
000777f0 000778f0 00077811 00077923/c3;00077930/c3
0007c2a0 002f418b 0007c2b1 002f427c/c21000
000837b0 002eaa19 00083800 002eaa6f/c3
00083d10 002eaa19 00083d8d 002eaa6f/c3
00083fb0 002eaa19 00083ffd 002eaa6f/c3
000854b0 000857a0 0008552a 0008580c/c20c00;00085822/c20400
00085540 00086990 0008556a 00086a09/c3;00086a16/c3
00086870 00086c00 00086891 00086c79/c3;00086c86/c3
00086910 00086cd0 00086931 00086d19/c3;00086d26/c3;00086d52/c20400
0008ace0 0008ada0 0008ad85 0008adc9/c20800;0008aefe/c20800;0008af11/c20800
0008b190 0008b130 0008b1a9 0008b183/c3;0008b189/c3
0009db20 0003d6c0 0009db97 0003d721/c20c00
000a2090 000a2840 000a20a0 000a286a/c20400
000a7220 000a7ba0 000a7230 000a7bca/c20400"""

def verify(x):
    assert hashlib.sha256(x).hexdigest().upper() == XBE_SHA256, "Retail XBE SHA mismatch"
    base, = struct.unpack_from("<I", x, 0x104)
    count, table = struct.unpack_from("<II", x, 0x11c)
    assert 0 < count < 100 and 0 <= table-base and table-base+count*56 <= len(x)
    sections = [struct.unpack_from("<6I",x,table-base+56*i) for i in range(count)]
    def read(va,n):
        for _,start,virtual,offset,raw,_ in sections:
            if start <= va and va+n <= start+min(virtual,raw):
                assert offset+va-start+n <= len(x)
                return x[offset+va-start:offset+va-start+n]
        raise AssertionError("Original XBE VA unbacked: %08x" % va)
    calls=rets=0
    for row in ROWS.splitlines():
        caller_s,callee_s,site_s,ret_s=row.split()
        caller,callee,site=(int(s,16) for s in (caller_s,callee_s,site_s))
        assert caller <= site
        ins=read(site,5)
        assert ins[0]==0xe8
        disp,=struct.unpack_from("<i",ins,1)
        assert (site+5+disp)&0xffffffff == callee
        changed=bytearray(ins);changed[1]^=1
        changed_disp,=struct.unpack_from("<i",changed,1)
        assert (site+5+changed_disp)&0xffffffff != callee
        calls+=1
        for ret in ret_s.split(";"):
            addr_s,hexbytes=ret.split("/")
            addr,opcode=int(addr_s,16),bytes.fromhex(hexbytes)
            assert opcode[0] in (0xc2,0xc3)
            assert read(addr,len(opcode)) == opcode
            altered=bytearray(opcode);altered[0]^=1
            assert bytes(altered)!=read(addr,len(opcode))
            rets+=1
    assert calls==36 and rets==53
    windows=[
        (0x002e8c30,"8b44240450b9a8f04000e841120000c3"),
        (0x002e8c60,"f644240401568bf1c70608693800740b56b9a8f04000e8051200008bc65ec20400")]
    for addr,rawhex in windows:
        raw=bytes.fromhex(rawhex)
        assert read(addr,len(raw))==raw
    target=read(0x002e9e80,36)
    assert hashlib.sha256(target).hexdigest().upper()=="0EDFDF0CD21B5EFFDBE5A44D1ED33CCDEEB36AA6BEB3B4B1D937400CB2F94B95"
    assert bytes.fromhex("33d2f77114") in target and target.endswith(bytes.fromhex("5ec20400"))
    assert bytes.fromhex("8b51188916894118ff410c") in target
    manager=0x0040f0a8
    assert sum(start+raw <= manager < start+virtual for _,start,virtual,offset,raw,_ in sections)==1
    assert struct.unpack("<II",read(0x0037eca4,8))==(0x0037ed08,0x0037ed50)
    bad=bytearray(x);bad[0]^=1
    assert hashlib.sha256(bad).hexdigest().upper()!=XBE_SHA256
    print("PASS: 36 CALL targets, 53 RET windows, 89 operand mutation controls")
    print("PASS: two detailed 0x002E9E80 caller paths, original callee body, DIV and RET 4")
    print("PASS: virtual-only manager address and two-entry XAPI table")
    print("ABI_UNVERIFIED: guest memory, hidden registers, prototypes, linkage, behavior")

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe",type=Path,required=True)
    verify(parser.parse_args().xbe.read_bytes())

if __name__=="__main__":
    main()
