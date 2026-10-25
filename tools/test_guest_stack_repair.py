#!/usr/bin/env python3
"""Syntax-only regression for x86 guest-stack and stack-argument draft repairs.

This test deliberately needs NO Xbox XBE and does not validate native ABI,
guest pointer semantics, SEH behavior, or function equivalence.
"""
from __future__ import annotations

import re
import shutil
import subprocess
from pathlib import Path

from sweep_c11 import FLAGS

ROOT = Path(__file__).resolve().parents[1]
FUNCTIONS = {
    "0x0001c630": (
        "E184BE2C9E9EFB13C45DDB09CC2DF4046DBB43C4149269FAF390F473E548F64A",
        "stack0xffffff94",
    ),
    "0x0001c980": (
        "E710F94CC4E230DD1324C747FDD89B0B7A0C65F4B6DB7A12F2074D82EE1AF463",
        "stack0xffffff68",
    ),
    "0x00063650": (
        "FF3BFD86BCC43C5EFAF14B4197F350F3BD633A9D22815873059C9F7D4991442D",
        "0x00063698",
    ),
    "0x0007e0a0": (
        "77B9370188C6A6258DB483EECC64AD143AFB3045AEC33E25052360EA674E8FE4",
        "0x0007e109",
    ),
    "0x00084d50": (
        "DE39614EB06E358E1F8DCF4B1E6E9E836331BE5396E34F1E4699D07D2F932785",
        "0x00084d8d",
    ),
    "0x0008b9e0": (
        "6DF66E219F2D47CA69E34F7A80E8FEF969FC677D7AC28102EEB41AFA2328BB5E",
        "0x0008ba0d",
    ),
    "0x0008d43c": (
        "23A8B3595EB04F7F1FBDAE4E5C33A4B23BAA54B50CF1B28508DFC23B1A8F1DCA",
        "0x0008D462-0x0008D467",
    ),
    "0x001b28b0": (
        "2B4DC80CCFE04236C8E364CA2A6D968835933A8D8629640682FF5B5D3E53726B",
        "0x001b28f9",
    ),
    "0x001b4a70": (
        "418924004CD1941115E55F6E5B38A814D4C3B079B4E37A55B9786B5FDA4BC163",
        "0x001b4abd",
    ),
    "0x001b50f0": (
        "72B2731F8B1199F97398EA5340FF9055EFEF53298843D9318FAA417AAE06D4A1",
        "0x001b511a",
    ),
    "0x001b5300": (
        "83EC9B235653568FB808DECDAABBD075CC4C7C14781DBF5A9B1847E4716DF623",
        "0x001b532d",
    ),
    "0x001d5fd0": (
        "1030BB7B8D78563F861A6F93F0FDEABB0E5B7F46A07B83908ECC167F418C02EC",
        "0x001d5ff8",
    ),
    "0x00243940": (
        "A179A3C2D24976F70D0DD1666B9E5985537FC6EF5CDB93BBD10A0D79091CE5D9",
        "0x00243970",
    ),
    "0x00243ee0": (
        "98B85022A810F1EABE7675F5FF5E5024C93B747B42256F05D652C38E6D1A0F1A",
        "0x00243f29",
    ),
    "0x00244000": (
        "E375ED5ED8277D8D3ED125BEDA3C188B222F74B85989DDE11D7150BD78285152",
        "0x00244049",
    ),
}


def main() -> int:
    clang = shutil.which("clang")
    if not clang:
        raise SystemExit("clang is required")
    for entry, (body_digest, evidence_token) in FUNCTIONS.items():
        path = ROOT / "src" / "main_unclassified" / f"band_{int(entry, 16) >> 16:04x}" / f"{entry}.c"
        source = path.read_text(encoding="utf-8")
        if f"Input x86 body SHA-256: {body_digest}" not in source:
            raise SystemExit(f"{entry}: original body digest annotation changed")
        if f"Entry: {entry}," not in source:
            raise SystemExit(f"{entry}: entry identity annotation changed")
        if "ABI_UNVERIFIED" not in source:
            raise SystemExit(f"{entry}: missing ABI uncertainty annotation")
        # Keep the synthetic name in an explanatory comment, not in C code.
        without_comments = re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)
        if re.search(r"\bstack0x[0-9a-fA-F]+\b", without_comments):
            raise SystemExit(f"{entry}: synthetic guest stack name remains in C")
        if evidence_token not in source:
            raise SystemExit(f"{entry}: missing provenance explanation")
        if entry == "0x00063650":
            for expected in (
                "void FUN_00063650(undefined4 param_1,undefined4 *param_2)",
                "&param_1",
                "*param_2 = (undefined4)(uintptr_t)piVar1;",
            ):
                if expected not in without_comments:
                    raise SystemExit(f"{entry}: x86 stack argument/output mapping regressed: {expected}")
        # Pin the original stack-slot identity, not just the absence of a
        # synthetic Ghidra symbol. XBE opcode checks are performed locally by
        # scripts/verify_0007_0008_stack_args.py when the user-owned XBE exists.
        repaired_calls = {
            "0x0007e0a0": "FUN_00085540(&param_1,iVar1);",
            "0x00084d50": "(**(code **)(*piVar1 + 0x30))(local_14);",
            "0x0008b9e0": "(**(code **)(*piVar1 + 0x14))(&local_4);",
            "0x0008d43c": "(**(code **)(*in_ECX + 0x10))(&param_3);",
        }
        if entry in repaired_calls and repaired_calls[entry] not in without_comments:
            raise SystemExit(f"{entry}: original stack-address argument mapping regressed")
        # These records are XBE-supported at the indicated LEA/RET sites,
        # but CI verifies only source layout and host syntax (no retail XBE).
        guest_record_widths = {
            "0x001b28b0": 308,
            "0x001b4a70": 836,
            "0x001b50f0": 8,
            "0x001b5300": 8,
            "0x001d5fd0": 4,
            "0x00243940": 64,
            "0x00243ee0": 44,
            "0x00244000": 44,
        }
        if entry in guest_record_widths:
            width = guest_record_widths[entry]
            if width == 4:
                expected = ("void FUN_001d5fd0(undefined4 guest_first_word)",
                            "&guest_first_word")
            else:
                type_name = f"bf_{entry[2:]}_guest_record"
                expected = (f"void FUN_{entry[2:]}({type_name} guest_record)",
                            f"_Static_assert(sizeof({type_name}) == {width}",
                            "&guest_record.first_word")
            for token in expected:
                if token not in without_comments:
                    raise SystemExit(f"{entry}: incoming guest record contract regressed: {token}")
        result = subprocess.run(
            [clang, *FLAGS, "-I", str(ROOT / "include"), str(path)],
            capture_output=True, text=True, timeout=60, check=False,
        )
        if result.returncode:
            raise SystemExit(
                f"{entry}: Clang C11 syntax regression:\n{result.stderr[-4000:]}"
            )
        print(f"{entry}: PASS host Clang C11 syntax only; Xbox ABI unverified")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
