"""Original retail-XBE verifier for two EDI-backed result contracts.

Supply the user-owned retail XBE privately; never commit its bytes.
These checks prove bounded machine-code facts, not complete Xbox ABI fidelity.
"""
from __future__ import annotations
import argparse
import hashlib
import struct
from pathlib import Path

XBE_SHA = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
BODIES = (
    (0x279280, 0x2A, "532E5233681831960B0FB79CC98EE333B6F591205BF6ECA245EA4538856879DF"),
    (0x279C40, 0xC0, "726401879C58F8EBE6E7FB500D39CCBBC946D4087B060F6694092F25824413C3"),
    (0x27BF80, 0x58, "053A5AC2DDF34E37FE67806C650590BF66D41B797729468729A293DC6D8F9C90"),
    (0x27C1A0, 0xC0, "C1736663C9DEC382B4D1E5B522B2EB5C25A0506C1E046F72189387FB01F88950"),
)
CALLS = ((0x27929B, 0x279C40), (0x27BFC9, 0x27C1A0))
EXITS = (0x279CA9, 0x279CE7, 0x279CF7, 0x27C209, 0x27C247, 0x27C257)
RETURN_BYTES = bytes.fromhex("8bc75d83c408c20400")
COMPARES = ((0x279C63, bytes.fromhex("0f9cc1")), (0x27C1C3, bytes.fromhex("0f92c1")))

def digest(b: bytes) -> str:
    return hashlib.sha256(b).hexdigest().upper()

def verify(xbe: bytes) -> None:
    assert digest(xbe) == XBE_SHA, "retail XBE hash mismatch"
    assert xbe[:4] == b"XBEH"
    base = struct.unpack_from("<I", xbe, 0x104)[0]
    count = struct.unpack_from("<I", xbe, 0x11C)[0]
    table = struct.unpack_from("<I", xbe, 0x120)[0] - base
    assert 0 < count < 128 and 0 <= table < len(xbe)
    sections = []
    for i in range(count):
        off = table + i * 0x38
        _, va, vs, raw, size = struct.unpack_from("<IIIII", xbe, off)
        sections.append((va, vs, raw, size))
    def read(va: int, n: int) -> bytes:
        for start, virtual_size, raw, raw_size in sections:
            delta = va - start
            if 0 <= delta and delta + n <= min(virtual_size, raw_size):
                b = xbe[raw + delta:raw + delta + n]
                assert len(b) == n
                return b
        raise AssertionError(f"missing raw bytes at {va:08X}")
    for va, size, expected in BODIES:
        b = read(va, size)
        assert digest(b) == expected, f"body {va:08X}"
        assert digest(bytes([b[0] ^ 1]) + b[1:]) != expected
    for site, target in CALLS:
        b = read(site, 5)
        assert b[0] == 0xE8 and site + 5 + struct.unpack_from("<i", b, 1)[0] == target
        changed = b[:1] + bytes([b[1] ^ 1]) + b[2:]
        assert site + 5 + struct.unpack_from("<i", changed, 1)[0] != target
    for site in EXITS:
        assert read(site, len(RETURN_BYTES)) == RETURN_BYTES, f"return {site:08X}"
        assert bytes([RETURN_BYTES[0] ^ 1]) + RETURN_BYTES[1:] != RETURN_BYTES
    for site, op in COMPARES:
        assert read(site, len(op)) == op
    assert read(0x2792A0, 2) == bytes.fromhex("8b00")
    assert read(0x27BFCE, 2) == bytes.fromhex("8b00")
    print("PASS: retail SHA; 4 full body hashes; 2 E8; 6 EAX=EDI/RET4; signedness; 2 caller dereferences; negative controls")

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--xbe", type=Path, required=True)
    args = parser.parse_args()
    verify(args.xbe.read_bytes())
