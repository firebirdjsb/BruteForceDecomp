#!/usr/bin/env python3
"""Verify narrow x87 type evidence against the user's local original XBE.

No XBE or game bytes are uploaded or copied to the repository.
Passing this check verifies cited instruction lanes, not whole-function semantics.
"""
import argparse
import hashlib
import struct
from pathlib import Path

XBE_SHA256 = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
FUNCTIONS = (
    (0x0006A5F0, 27, "307A25290BA18AAA55A25A67CB64712923EF1AF477E272CC6174F6A25F5A583C"),
    (0x000907A0, 37, "39EFCDB2B2C5B4FBEEC607D2E76CA473952B3A6B8FE8A84104380F12D0E5EF54"),
    (0x0006A610, 198, "FA1ADD743B8DFE3A66835DF34CFFD7E17F5AD253F5DA7475289CBE357C057480"),
    (0x000E7780, 205, "D48F98CF94C27BE699B0002C1C9B602AF388EED99E86CFB0749A67A30AA108E8"),
    (0x00054920, 42, "79BC452B063F101D5A3A53A121DD69F1C8DB2AC0755C1D002DFDB9A03ECD2F4F"),
    (0x00057360, 518, "57F40D91EBDD637F116F073A423AD4C93AD68D6FE70C7AB3E5B4566390E86904"),
    (0x000D4460, 56, "37B1ADA8F55B9D8D277F01DA5A3611FFDE9C1DD8CDDCA26A20808BFAAA925D03"),
    (0x00104940, 266, "C5D5C0EB1588A511BE909A48F05938CF8C732070780948A4969D241576FF864D"),
    (0x00116F40, 644, "D64EA0AE594526118E33DA636A3831E26A7E1A7F7AB72E17F71E03452CB67082"),
    (0x0011E3F0, 376, "FC8D595954EF2AF7945A7A25FDF5AD40725970D0145A2FCE4BE191DE12B9CCBF"),
    (0x00123EA0, 183, "3D5C3543E1DC16D360C7156C0B676A04378C5871C1D303A6635DAA143DEA8944"),
    (0x00123F60, 64, "5AF4429D50639281219133E642F0C48C3D6ECFA4460C19245851F293A7B42C05"),
    (0x00216350, 215, "16B8732EDB1CFBAC944D0B8EBEEDA4C062E5BCB961BCC6F5708993390CD97C59"),
    (0x00052120, 157, "A9BB04FF684DF913B8D6F81E92E4D06B88773586B58567CF41746BE7570BEA45"),
    (0x000B4F20, 366, "D84F53350DE361AB3328095AFAA8AA9B6DD10FD7712A672767D40F994AA1088B"),
    (0x00022790, 1032, "0364BD7A70443AF264B4160D61090206B3F0D79744199DD3CF1D3D6631FB9E65"),
    (0x000DC510, 803, "7016E00C4E198173D11C4C91B58EFA1753B0E24A56226F189240ABF1F8D7C087"),
    (0x00372270, 358, "A5CD890106CCF4EEAE3F779FA3A20803299B681A9DFA1081A7D78CF760E2FFD0"),
)
# Small instruction windows verified independently, not full proprietary disassembly.
OPCODES = (
    (0x0006A5F2, "8d54240c"), (0x0006A5FA, "52"),
    (0x0006A5FB, "8d5908"), (0x0006A5FE, "8d3c81"),
    (0x0006A601, "e80a000000"), (0x0006A608, "c20400"),
    (0x000907A5, "8d542410"), (0x000907A9, "52"),
    (0x000907AA, "03442410"), (0x000907B1, "8d5908"),
    (0x000907B4, "8dbcc12c060000"), (0x000907C2, "c20800"),
    (0x0006A617, "8b6c2408"), (0x0006A699, "c70090383a00"),
    (0x0006A6BD, "c20400"), (0x0006A6D3, "c20400"),
    (0x000E7780, "83ec14"), (0x000E7784, "8b6c241c"),
    (0x000E77A2, "c744242400000000"),
    (0x000E781E, "d8542418"), (0x000E7824, "f6c405"),
    (0x000E7827, "7a10"), (0x000E782F, "c70200000034"),
    (0x000E7839, "d8642418"), (0x000E7841, "d805fc4f3a00"),
    (0x00054938, "d81dfc053c00"), (0x0005739D, "d81dfc053c00"),
    (0x000D4479, "d81dfc053c00"), (0x00117158, "d81dfc053c00"),
    (0x00117165, "d905fc053c00"), (0x0011E418, "d81dfc053c00"),
    (0x00123F17, "d81dfc053c00"), (0x00123F87, "d81dfc053c00"),
    (0x00123F94, "a1fc053c00"),
    (0x001049ED, "d81508063c00"), (0x001049FA, "d81504063c00"),
    (0x00104A09, "d81d08063c00"),
    (0x002163B3, "f30f11442404"), (0x00216406, "f30f11442404"),
    (0x0021640C, "d9442404"), (0x00216410, "d85c2418"),
    (0x00052120, "83ec28"),
    (0x0005215F, "d864242c"), (0x0005216B, "d844242c"),
    (0x00052183, "d844242c"), (0x00052198, "d864242c"),
    (0x000521B0, "c20400"), (0x000521BA, "c20400"),
    (0x000B4F20, "83ec1c"), (0x000B4F23, "8b4c2420"),
    (0x000B4F33, "8b542428"), (0x000B4F9D, "d944242c"),
    (0x000B4FCA, "d944242c"), (0x000B4FFD, "d944242c"),
    (0x000B5087, "5e"), (0x000B508B, "c20800"),
    (0x0002282B, "d9475c"), (0x000228A1, "d90548e74000"),
    (0x000228AE, "d80d48e74000"), (0x000DC5DA, "d81dc4d54000"),
    (0x000DC5E7, "d905c4d54000"), (0x000DC5ED, "8b0dc4d54000"),
    (0x000DC5F3, "d80dc4d54000"), (0x0037228A, "8b156cdf3700"),
    (0x00372294, "8b1584df3700"), (0x0037229E, "8b1568df3700"),
    (0x003722B4, "d9442408"), (0x003722FE, "8b0d78df3700"),
    (0x00372310, "8b0d7cdf3700"), (0x0037231A, "8b0d80df3700"),
    (0x0037236B, "d944240c"), (0x00372374, "d9442410"),
    (0x0037237D, "d84c2414"),
    (0x00372346, "c700300a2000"),
    (0x00372354, "894810"), (0x00372357, "894814"),
    (0x0037235A, "894818"), (0x00372361, "894820"),
    (0x00372371, "d95804"), (0x0037237A, "d95808"),
    (0x00372381, "d9580c"), (0x0037238E, "d9581c"),
    (0x0037239C, "c70118030800"),
    (0x003723C3, "c7410c3c040400"), (0x003723CD, "83c114"),
)
INITIAL_WORDS = (
    (0x003C05FC, 0x40800000),  # 4.0f
    (0x003C0604, 0x40200000),  # 2.5f
    (0x003C0608, 0x3E4CCCCD),  # nearest f32 representation of 0.2
    (0x003A551C, 0x42740000),  # 61.0f
    (0x003A53C0, 0x40100000),  # 2.25f
    (0x0040E748, 0x3F800000),  # 1.0f
    (0x0040D5C4, 0x3F000000),  # 0.5f
    (0x0037AF5C, 0x42800000),  # 64.0f
)


def verify(raw: bytes) -> None:
    if hashlib.sha256(raw).hexdigest().upper() != XBE_SHA256:
        raise ValueError("Wrong input: XBE SHA-256 differs from original")
    if raw[:4] != b"XBEH":
        raise ValueError("Not an XBE header")
    base, = struct.unpack_from("<I", raw, 0x104)
    count, table_va = struct.unpack_from("<II", raw, 0x11C)
    if count == 0 or count > 256:
        raise ValueError("Invalid section count")
    table = table_va - base
    if not (0 <= table and table + count * 56 <= len(raw)):
        raise ValueError("Section header table out of bounds")
    sections = [struct.unpack_from("<6I", raw, table + i * 56)
                for i in range(count)]

    def source_slice(va: int, size: int) -> bytes:
        for _flags, addr, virtual_size, offset, raw_size, _name in sections:
            delta = va - addr
            if 0 <= delta and delta + size <= min(virtual_size, raw_size):
                begin = offset + delta
                if 0 <= begin and begin + size <= len(raw):
                    return raw[begin:begin + size]
        raise ValueError(f"Unmapped or not file-backed original VA 0x{va:08X}")

    for entry, size, sha in FUNCTIONS:
        if hashlib.sha256(source_slice(entry, size)).hexdigest().upper() != sha:
            raise ValueError(f"Original function body mismatch: 0x{entry:08X}")
    for va, opcode in OPCODES:
        if source_slice(va, len(bytes.fromhex(opcode))) != bytes.fromhex(opcode):
            raise ValueError(f"Original instruction mismatch: 0x{va:08X}")
    for va, expected in INITIAL_WORDS:
        actual, = struct.unpack("<I", source_slice(va, 4))
        if actual != expected:
            raise ValueError(f"Original float initialization mismatch: 0x{va:08X}")
    print(f"Verified XBE SHA-256, {len(FUNCTIONS)} function bodies, "
          f"{len(OPCODES)} instruction windows, "
          f"and {len(INITIAL_WORDS)} original f32 initializers.")
    print("C11 syntax, ABI compatibility and 1:1 behavior are NOT established.")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, required=True,
                        help="Local user-owned retail default.xbe; never uploaded")
    args = parser.parse_args()
    verify(args.xbe.read_bytes())
