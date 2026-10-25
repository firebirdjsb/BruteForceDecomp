#!/usr/bin/env python3
"""Pin Xbox CRT cursor/count/flag field contracts to original XBE bytes."""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
# Exact instruction bytes, not Ghidra's host FILE field names.
OPS = {
    0x002eb5ab: bytes.fromhex("8b460c"), # seek: flags +0xc
    0x002eb5c5: bytes.fromhex("83e0ef"), # clear 0x10
    0x002eb5cb: bytes.fromhex("89460c"), # write flags
    0x002eb600: bytes.fromhex("c7461800020000"), # buffer size +0x18
    0x002eb60c: bytes.fromhex("ff7610"), # handle +0x10
    0x002eb619: bytes.fromhex("83f8ff"), # seek failure -1
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
    getc = (args.root/"src/main_unclassified/band_002e/0x002eb8f1.c").read_text()
    assert '#include "bf_xbox_crt_stream.h"' in getc
    assert 'word_04 - UINT32_C(1)' in getc
    assert '(int32_t)count >= 0' in getc
    assert 'word_00 = guest_cursor + UINT32_C(1)' in getc
    assert 'return __filbuf(__stream);' in getc
    assert '_IO_' not in getc
    ungetc = (args.root/"src/main_unclassified/band_002e/0x002eb885.c").read_text()
    assert '#include "bf_xbox_crt_stream.h"' in ungetc
    assert 'cursor -= UINT32_C(1)' in ungetc
    assert '__stream->word_00 = cursor' in ungetc
    assert '__stream->word_04 += UINT32_C(1)' in ungetc
    assert '__stream->flags_0c = (flags & ~UINT32_C(0x10)) | UINT32_C(1)' in ungetc
    assert '__getbuf(__stream)' in ungetc
    assert '_IO_' not in ungetc
    seek = (args.root/"src/main_unclassified/band_002e/0x002eb5a6.c").read_text()
    assert 'stream->unknown_18 = UINT32_C(0x200)' in seek
    assert 'stream->handle_10, offset, origin' in seek
    assert 'stream->flags_0c = flags & ~UINT32_C(0x10)' in seek
    assert '_IO_' not in seek
    if args.xbe is not None:
        binary = args.xbe.read_bytes()
        assert hashlib.sha256(binary).hexdigest() == XBE_SHA256, "Unexpected XBE"
        for va, opcode in OPS.items():
            offset = va - 0x10000
            assert binary[offset:offset+len(opcode)] == opcode, hex(va)
    print("PASS: Xbox CRT cursor, seek, count, boundary, flags, and handle contracts")
if __name__ == "__main__":
    main()
