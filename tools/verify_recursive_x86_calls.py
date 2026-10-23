#!/usr/bin/env python3
"""Verify 11 recovered recursive-call contracts against the user's original XBE.

Evidence only: checks source identity, 11 complete body SHA256s, original
push/store/call instruction windows, and exact recursive CALL targets.
It does NOT validate Xbox ABI integration or native-PC runtime.
"""
from __future__ import annotations
import argparse
import hashlib
import struct
from pathlib import Path

XBE_SHA256 = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
BODIES = (
    (0x0004e150, 257, "0EF2072CD3DB1F1C9CA772FCD776609B5488FB8AA5E4454465B359D504AACA54"),
    (0x00050980, 257, "C12F9E2C002541B33746FFB69322F86EE74A02944DC9D96E09B6365B5738AD63"),
    # Eight 4-word recursive wrappers, each exact 274-byte original body.
    (0x000e2850, 274, "987E05F6DD3BD2F22ABF3FA746B94E9F13C8834422587AB399B79D6EFB8DC2E3"),
    (0x000e2970, 274, "BF0260FA2192BCF7BD104DBCCBCF640D17C64A97570E1F0F12281E04A3B970D3"),
    (0x000e2a90, 274, "D988EF95B1656CD2ACAAE56BF377F2FC1C28F50F6BC4763568DE058320B168A9"),
    (0x0016dd10, 274, "8BDE2DAC3D7C1C5C0ACA23411E51BFAF0867D2B2BA101BA5ACF54CC1370A0B52"),
    (0x0017d660, 274, "15A70CA061B0D4A4F064BFF3AFE3BB845FE9EC92A0728CD4763D56D38B36E79F"),
    (0x001e98f0, 274, "06A9203CD34792BD6FD62767860D552CBFB28C354754B8B6D827BEC1A67EFC2E"),
    (0x00250720, 274, "3806557ACB182FE1FB248CD743B48E0FCD130ED90C9B86FC4E502D6F72DA057A"),
    (0x00250840, 274, "A284E290493B745EFA4FEF27E61EE57C00245F52D4512A7D7923AA3C1A4B088D"),
    (0x002876a0, 257, "5A4CFE56CE7D603B90681260F69D85D37BA2C1A894FC2A61FC8D4DA5B99E5A60"),
)
WINDOWS = (
    (0x0004e1ba, "56517d128bcc8901518bc48918e884ffffff"),
    (0x0004e1d0, "8bc48938518bc48928e872ffffff"),
    (0x000509ea, "56517d128bcc8901518bc48918e884ffffff"),
    (0x00050a00, "8bc48938518bc48928e872ffffff"),
)
CALLS = (
    (0x0004e1c7, 0x0004e150), (0x0004e1d9, 0x0004e150),
    (0x000509f7, 0x00050980), (0x00050a09, 0x00050980),
    (0x000e28cf, 0x000e2850),
    (0x000e28e3, 0x000e2850),
    (0x000e29ef, 0x000e2970),
    (0x000e2a03, 0x000e2970),
    (0x000e2b0f, 0x000e2a90),
    (0x000e2b23, 0x000e2a90),
    (0x0016dd8f, 0x0016dd10),
    (0x0016dda3, 0x0016dd10),
    (0x0017d6df, 0x0017d660),
    (0x0017d6f3, 0x0017d660),
    (0x001e996f, 0x001e98f0),
    (0x001e9983, 0x001e98f0),
    (0x0025079f, 0x00250720),
    (0x002507b3, 0x00250720),
    (0x002508bf, 0x00250840),
    (0x002508d3, 0x00250840),
    (0x00287717, 0x002876a0), (0x00287729, 0x002876a0),
)

def verify(raw: bytes) -> None:
    if raw[:4] != b"XBEH" or hashlib.sha256(raw).hexdigest().upper() != XBE_SHA256:
        raise ValueError("Not the original retail XBE")
    image_base, = struct.unpack_from("<I", raw, 0x104)
    count, table_va = struct.unpack_from("<II", raw, 0x11c)
    table = table_va - image_base
    if not (1 <= count <= 256 and 0 <= table <= len(raw) - count * 56):
        raise ValueError("Invalid XBE section table")
    sections = [struct.unpack_from("<6I", raw, table+i*56) for i in range(count)]

    def va_bytes(va: int, length: int) -> bytes:
        for _flags, base, virtual_size, offset, raw_size, _name in sections:
            delta = va - base
            if 0 <= delta and delta + length <= min(virtual_size, raw_size):
                start = offset + delta
                if start + length <= len(raw):
                    return raw[start:start+length]
        raise ValueError(f"Unmapped VA 0x{va:08X}")

    # Original four-word recursion: PUSH EBP forwards the fourth caller
    # argument, MOV [ESP],... fills first/second words, then CALL recurses.
    four_arg_entries = (0x000e2850, 0x000e2970, 0x000e2a90,
                        0x0016dd10, 0x0017d660, 0x001e98f0,
                        0x00250720, 0x00250840)
    for entry in four_arg_entries:
        extra_windows = (
            (0x65, "55"),  # PUSH EBP, original entry ESP+0x10
            (0x72, "8b4c241c8bc48908518bc48918e87cffffff"),
            (0x8a, "8bcc8939518bcc8901e868ffffff"),
        )
        for offset, encoded in extra_windows:
            if va_bytes(entry+offset, len(encoded)//2) != bytes.fromhex(encoded):
                raise ValueError(f"Four-argument recursion mismatch at 0x{entry+offset:08X}")
    # 0x2876A0 uses the three-DWORD variant, like 0x4E150/0x50980.
    for offset, encoded in ((0x77, "e884ffffff"), (0x89, "e872ffffff")):
        if va_bytes(0x002876a0+offset,len(encoded)//2) != bytes.fromhex(encoded):
            raise ValueError("Three-word recursive call mismatch at 0x2876A0")

    for entry, length, expected_hash in BODIES:
        if hashlib.sha256(va_bytes(entry, length)).hexdigest().upper() != expected_hash:
            raise ValueError(f"Original function-body digest mismatch: 0x{entry:08X}")
    for va, encoded in WINDOWS:
        if va_bytes(va, len(encoded)//2) != bytes.fromhex(encoded):
            raise ValueError(f"Original argument-setup bytes mismatch: 0x{va:08X}")
    for va, expected_destination in CALLS:
        instruction = va_bytes(va, 5)
        if instruction[0] != 0xe8:
            raise ValueError(f"Expected near relative call: 0x{va:08X}")
        displacement, = struct.unpack_from("<i", instruction, 1)
        if va + 5 + displacement != expected_destination:
            raise ValueError(f"Wrong recursive target: 0x{va:08X}")
    print("PASS: original XBE; 11 complete bodies, original stack setups and 22 recursive targets.")
    print("C11 parsing, ABI linkage and 1:1 behavior remain distinct requirements.")

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, required=True)
    args = parser.parse_args()
    verify(args.xbe.read_bytes())
