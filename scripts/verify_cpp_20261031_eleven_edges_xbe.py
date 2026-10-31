#!/usr/bin/env python3
"""Read-only original retail XBE call-edge checks for 11 C++17 declaration repairs.

Do NOT commit the retail XBE. Original x86 body digests, E8 destinations and
specific RET bytes are evidence; they DO NOT prove Xbox C++ ABI or 1:1 behavior.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import struct
from pathlib import Path

EXPECTED_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
# (entry, original body length, original body SHA-256)
BODY_TEXT = """
00228c10,87,A44DAD08CB0A58E184C10C6E6C2A82138A5CA4F830C28224E964CC65424BE551
0021c380,94,A6A47FCEDBB6898F865FF5D3FE2620AFDE7250CFE49FCDA96F6743DBD31A1E36
0022f640,78,EE622DA17BDDC125DFE12F4A41C4513153227634D61A8C54A63FC15E8B8B4739
00126f20,575,A42040445E0DBD3D8B15DDD4510F74C2ABE4E3CC3248E694AEA7922566977E8E
002596e0,133,2BF476F452490DE8746D7C6721F904DBA61CE2D3702F08C2A532AAB8F6968D12
00252c60,52,3673E0EA06EFD3555C0B31B670A392ACFA4A3056F000F492816F5FFDFED81F0D
002f19c9,9,56F2DFF8C502E41925C29D88A42F7CDFD5CEE715F1AD2246BE43B2FA5A1F3A31
002f24b7,28,5CEFE82F6AF9CC10026BE925BB664A4792A62FC62775736ECAFF424E198A8892
002ee3e4,42,B72167CBB54BE4F87B2E790295F390FE5CC759F291427DBB9009E96D922E9962
002ee3a6,62,6C2870317F3B9987A2FEC53174A47898E4025C38B33633ABE1B50A7C290E4CB0
002f2fac,31,82ADE40CF6072945A0C17BE09CBD0C23F73118C2FB4BE240D9C4418B56835C84
002f2cca,738,C0E26E83E10F6FF8A01A3D8776D8168E8F2FDD23E4F79B2F2F8178CEB41579A0
003118df,17,7AD1A82DD7CCEDE16A1F586B19612FD1B249530D11EFFF4B461DDD5B71E30360
003148cf,104,3CD3E33851606861887A3C87EB7324E48EBAFAFFB33F1D6BCEEF697AC3A51B0A
00314069,57,576FEDEDF10A1633B1C147C3AB5B33DF42F974BE9BED44378C37EDB5DA0C5F4D
00313e74,187,FC235A2E01B9B8886401B1106D05FFE79E07DBE41EE3CFF6A9C2D264D6C30043
003162ea,22,4F3CA0C77CFCDF62D3F71465F14F9FDB19E9E42A8BB2941BE2B28A8DD273DEA4
00315e78,80,CE7BB445DC4885E9A50E01D3BAE2342FA309D4854C57895D51A4D4D451F3895D
003183ea,30,1F79DC68C557F38A92B4215506AE8739D354A477389BEB1585BE0356D0FE9EFC
003174e7,28,DF99EA76422407F7A0655E57541A53FEDA1C6C2E08F42ADE32B92D62045E6AFA
00318408,23,8958ED462BBB2CFE1D97DF36EA0E5C73B262DC6B0CC3CDEF11190BB3B862A2B1
"""
# (caller entry, E8 site, destination, specific callee RET site, RET bytes)
EDGE_TEXT = """
00228c10,00228c57,0021c380,0021c3db,c20400
0022f640,0022f687,00126f20,0012715c,c20800
002596e0,0025975c,00252c60,00252c93,c3
002f19c9,002f19cb,002f24b7,002f24d2,c3
002ee3e4,002ee402,002ee3a6,002ee3e3,c3
002f2fac,002f2fc3,002f2cca,002f2fa9,c21800
003118df,003118ea,003148cf,00314934,c20c00
00314069,00314079,00313e74,00313f2c,c20c00
003162ea,003162f8,00315e78,00315ec5,c20400
003183ea,00318400,003174e7,00317502,c3
00318408,00318417,003183ea,00318405,c20800
"""
BODIES = {int(a, 16): (int(n), h) for a, n, h in
          (line.split(",") for line in BODY_TEXT.strip().splitlines())}
EDGES = tuple((int(a, 16), int(b, 16), int(c, 16), int(d, 16), e)
              for a, b, c, d, e in (line.split(",") for line in EDGE_TEXT.strip().splitlines()))


def sections(data: bytes):
    if data[:4] != b"XBEH" or len(data) < 0x124:
        raise ValueError("Not a retail XBE")
    base, count, table_va = (struct.unpack_from("<I", data, n)[0]
                             for n in (0x104, 0x11c, 0x120))
    if base != 0x10000 or not 1 <= count <= 64 or table_va < base:
        raise ValueError("Unexpected original XBE section table")
    out = []
    for i in range(count):
        x = table_va - base + i * 0x38
        if x + 0x38 > len(data):
            raise ValueError("Truncated XBE sections")
        _, va, vsize, raw, raw_size = struct.unpack_from("<5I", data, x)
        if raw + raw_size > len(data):
            raise ValueError("XBE section exceeds source file")
        out.append((va, va + min(vsize, raw_size), raw))
    return out


def raw(data: bytes, sections_table, va: int, size: int) -> bytes:
    for begin, end, raw_off in sections_table:
        if begin <= va and va + size <= end:
            return data[raw_off + va - begin: raw_off + va - begin + size]
    raise ValueError(f"XBE address not raw-backed: 0x{va:08x}")


def target(site: int, opcode: bytes) -> int:
    if len(opcode) != 5 or opcode[0] != 0xe8:
        raise ValueError("Not an original E8 direct call")
    return (site + 5 + struct.unpack_from("<i", opcode, 1)[0]) & 0xffffffff


def verify(data: bytes, require_file_hash: bool = True) -> dict:
    digest = hashlib.sha256(data).hexdigest()
    if require_file_hash and digest != EXPECTED_SHA:
        raise ValueError("Original retail XBE SHA256 mismatch")
    table = sections(data)
    if len(BODIES) != 21 or len(EDGES) != 11:
        raise ValueError("Original identity or edge count mismatch")
    for address, (length, sha) in BODIES.items():
        if hashlib.sha256(raw(data, table, address, length)).hexdigest().upper() != sha:
            raise ValueError(f"Original function body mismatch: 0x{address:08x}")
    results = []
    for caller, site, callee, ret_site, ret_hex in EDGES:
        if caller not in BODIES or callee not in BODIES:
            raise ValueError("Undocumented original function")
        if not caller <= site or site + 5 > caller + BODIES[caller][0]:
            raise ValueError("CALL outside original caller")
        expected_ret = bytes.fromhex(ret_hex)
        if not callee <= ret_site or ret_site + len(expected_ret) > callee + BODIES[callee][0]:
            raise ValueError("RET outside original callee")
        instruction = raw(data, table, site, 5)
        if target(site, instruction) != callee:
            raise ValueError(f"Wrong E8 target: 0x{site:08x}")
        if raw(data, table, ret_site, len(expected_ret)) != expected_ret:
            raise ValueError(f"Unexpected RET at 0x{ret_site:08x}")
        results.append({"caller": f"0x{caller:08x}", "call": f"0x{site:08x}",
                        "callee": f"0x{callee:08x}", "ret_site": f"0x{ret_site:08x}",
                        "status": "X86_CALL_AND_RET_EVIDENCED_ABI_UNVERIFIED"})
    return {"original_xbe_sha256": digest, "function_bodies_verified": len(BODIES),
            "direct_calls_verified": len(results), "return_opcode_sites_verified": len(results),
            "host_cpp_abi": "UNVERIFIED", "semantic_1_to_1": "NOT_VERIFIED", "edges": results}


def negative_controls(data: bytes) -> None:
    layout = sections(data)
    for _, site, callee, _, _ in EDGES:
        good = raw(data, layout, site, 5)
        for bad in (b"\xe9" + good[1:], good[:1] + bytes((good[1] ^ 1,)) + good[2:]):
            try:
                if target(site, bad) != callee:
                    raise ValueError("Incorrect call target rejected")
            except ValueError:
                continue
            raise AssertionError("Corrupted original x86 CALL accepted")
    copy = bytearray(data)
    site = EDGES[0][1]
    for low, high, offset in layout:
        if low <= site < high:
            copy[offset + site - low] ^= 1
            break
    try:
        verify(bytes(copy), require_file_hash=False)
    except ValueError:
        pass
    else:
        raise AssertionError("Corrupted original body digest accepted")


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, required=True, help="Private retail XBE; never commit it")
    parser.add_argument("--self-test", action="store_true")
    parser.add_argument("--json-out", type=Path)
    args = parser.parse_args()
    result = verify(args.xbe.read_bytes())
    if args.self_test:
        negative_controls(args.xbe.read_bytes())
    if args.json_out:
        args.json_out.parent.mkdir(parents=True, exist_ok=True)
        args.json_out.write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    print("PASS: 21 original function-body SHA256 checks, 11 CALL/RET checks")
    if args.self_test:
        print("PASS: corrupted opcode, displacement, and original function body rejected")
    print("ABI_UNVERIFIED: register, stack, source semantics, linking and behavior")


if __name__ == "__main__":
    main()
