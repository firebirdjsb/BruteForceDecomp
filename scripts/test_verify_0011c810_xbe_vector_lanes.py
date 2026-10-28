#!/usr/bin/env python3
"""Synthetic XBE-mapping and negative-authentication checks; no game bytes."""
import tempfile
from pathlib import Path
from verify_0011c810_xbe_vector_lanes import check_original, guest, WINDOWS


def check(condition, message):
    if not condition:
        raise AssertionError(message)


def rejected(thing, message):
    try:
        thing()
    except (ValueError, OSError):
        return
    raise AssertionError(message)


def main():
    blob=bytearray(0x200)
    blob[:4]=b"XBEH"
    blob[0x104:0x108]=(0x10000).to_bytes(4,"little")
    blob[0x11c:0x120]=(1).to_bytes(4,"little")
    blob[0x120:0x124]=(0x10140).to_bytes(4,"little")
    blob[0x140+4:0x140+8]=(0x12000).to_bytes(4,"little")
    blob[0x140+12:0x140+16]=(0x180).to_bytes(4,"little")
    blob[0x140+16:0x140+20]=(0x30).to_bytes(4,"little")
    blob[0x180:0x1b0]=bytes(range(0x30))
    check(guest(bytes(blob),0x12010,3)==bytes(range(0x10,0x13)),"Section map")
    check(guest(bytes(blob),0x1202f,1)==bytes([0x2f]),"End of section")
    rejected(lambda: guest(bytes(blob),0x1202f,2),"Unbacked across section")
    rejected(lambda: guest(bytes(blob),0x13000,4),"Unbacked VA")
    rejected(lambda: guest(b"NOTXBE"+bytes(blob[7:]),0x12000,1),"Invalid XBE")
    with tempfile.TemporaryDirectory(prefix="bf_synthetic_xbe_") as d:
        path=Path(d)/"wrong.xbe"
        path.write_bytes(blob)
        rejected(lambda: check_original(path),"XBE digest must be pinned")
    check(WINDOWS[0x0011C8FE]=="89 44 24 2c","Lane middle store signature")
    check(WINDOWS[0x0010FC6C]=="c2 04 00","Concrete return cleanup signature")
    check(WINDOWS[0x00110DED]=="c7 80 b4 01 00 00 e8 dc 39 00","Constructor vtable write")
    print("PASS 9 synthetic parser/authentication/fingerprint guard assertions")


if __name__=="__main__":
    main()
