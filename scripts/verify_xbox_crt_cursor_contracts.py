#!/usr/bin/env python3
"""Pin Xbox CRT cursor/count/flag field contracts to original XBE bytes."""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
# Exact instruction bytes, not Ghidra's host FILE field names.
OPS = {
    0x002eb8f1: bytes.fromhex("8b542404"), # getc: stream argument
    0x002eb8f5: bytes.fromhex("ff4a04"),   # decrement signed count at +4
    0x002eb8fa: bytes.fromhex("8b0a"),     # load cursor at +0
    0x002eb8fc: bytes.fromhex("0fb601"),   # read byte at cursor
    0x002eb900: bytes.fromhex("890a"),     # advance cursor at +0
    0x002eb894: bytes.fromhex("8b460c"),  # ungetc: flags at +0xc
    0x002eb8a3: bytes.fromhex("837e0800"),# ungetc: buffer boundary +8
    0x002eb8b0: bytes.fromhex("8b06"),    # ungetc: cursor +0
    0x002eb8c0: bytes.fromhex("ff0e"),    # ungetc: decrement cursor +0
    0x002eb640: bytes.fromhex("8b7710"),  # ftell: handle +0x10
    0x002eb645: bytes.fromhex("395f04"),  # ftell: signed count +4
    0x002eb663: bytes.fromhex("8b570c"),  # ftell: flags +0xc
    0x002eb675: bytes.fromhex("8b07"),    # ftell: cursor +0
    0x002eb677: bytes.fromhex("8b4f08"),  # ftell: buffer boundary +8
}
def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", nargs="?", type=Path)
    parser.add_argument("--root", type=Path, default=Path("."))
    args = parser.parse_args()
    header = (args.root/"include/bf_xbox_crt_stream.h").read_text()
    for field in ("word_00", "word_04", "word_08", "flags_0c", "handle_10"):
        assert field in header, field
    if args.xbe is not None:
        binary = args.xbe.read_bytes()
        assert hashlib.sha256(binary).hexdigest() == XBE_SHA256, "Unexpected XBE"
        for va, opcode in OPS.items():
            offset = va - 0x10000
            assert binary[offset:offset+len(opcode)] == opcode, hex(va)
    print("PASS: 14 Xbox CRT cursor, count, boundary, flags, and handle contracts")
if __name__ == "__main__":
    main()
