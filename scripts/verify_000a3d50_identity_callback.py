#!/usr/bin/env python3
"""Verify original guest32 ECX-to-EAX callback at 0x000A3D50.

Source-only CI checks the explicit C11 word contract and host behavior.
Passing the private original XBE additionally pins instruction bytes and body
digest. No host callback calling-convention equivalence is implied.
"""
import argparse
import hashlib
import os
from pathlib import Path
import shlex
import subprocess
import tempfile

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA256 = "58367ffa2a0179375018fa0f5c26da24391e42ebe0ed8fdda35a21fc7bdc396f"
SOURCE = "src/main_unclassified/band_000a/0x000a3d50.c"
CALLER = "src/main_unclassified/band_000b/0x000bf7a0.c"
CHECKS = (
    (0x000A3D50, "8bc1"),           # MOV EAX, ECX
    (0x000A3D52, "c3"),             # RET
    (0x000BF8B2, "68503d0a00"),    # PUSH callback guest address
    (0x000BF8BB, "6a08"),          # element count/size argument 8
    (0x000BF8BD, "6a0c"),          # element width argument 12
    (0x000BF8CB, "e87005f6ff"),    # CALL 0x0001FE40
)
HARNESS = r"""
#include <stdint.h>
#include <assert.h>
_Static_assert(sizeof(uint32_t) == 4, "guest DWORD must be 32 bits");
extern uint32_t FUN_000a3d50(uint32_t guest_ecx);
int main(void) {
    const uint32_t cases[] = {
        UINT32_C(0), UINT32_C(1), UINT32_C(0x12345678),
        UINT32_C(0x80000000), UINT32_C(0xffffffff)
    };
    for (unsigned i = 0; i < sizeof(cases) / sizeof(cases[0]); ++i)
        assert(FUN_000a3d50(cases[i]) == cases[i]);
    return 0;
}
"""

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", nargs="?", type=Path)
    ap.add_argument("--root", type=Path, default=Path("."))
    a = ap.parse_args()
    source = (a.root / SOURCE).read_text(encoding="utf-8")
    caller = (a.root / CALLER).read_text(encoding="utf-8")
    for token in (
        "uint32_t FUN_000a3d50(uint32_t guest_ecx)",
        "return guest_ecx;",
    ):
        if token not in source:
            raise SystemExit(f"missing guest32 callback source contract: {token}")
    for token in (
        "extern uint32_t FUN_000a3d50(uint32_t guest_ecx);",
        "FUN_0001fe40(auStack_180,0xc,8,FUN_000a3d50);",
    ):
        if token not in caller:
            raise SystemExit(f"missing caller contract: {token}")

    with tempfile.TemporaryDirectory(prefix="bf_guest_identity_") as tmp:
        harness = Path(tmp) / "test.c"
        output = Path(tmp) / "test"
        harness.write_text(HARNESS, encoding="utf-8")
        cc = shlex.split(os.environ.get("CC", "clang"))
        subprocess.run(
            # The shared Ghidra shim intentionally has an unknown-ABI
            # "code()" typedef; suppress only that legacy-prototype warning.
            cc + ["-std=c11", "-Wall", "-Wextra", "-Werror",
                  "-pedantic-errors", "-Wno-strict-prototypes",
                  "-I", str(a.root / "include"),
                  str(a.root / SOURCE), str(harness), "-o", str(output)],
            check=True,
        )
        subprocess.run([str(output)], check=True)

    if a.xbe:
        image = a.xbe.read_bytes()
        if hashlib.sha256(image).hexdigest() != XBE_SHA256:
            raise SystemExit("original XBE SHA-256 mismatch")
        body = image[0x000A3D50 - 0x10000:0x000A3D53 - 0x10000]
        if hashlib.sha256(body).hexdigest() != BODY_SHA256:
            raise SystemExit("original guest identity callback body mismatch")
        for address, opcodes in CHECKS:
            expected = bytes.fromhex(opcodes)
            actual = image[address - 0x10000:address - 0x10000 + len(expected)]
            if actual != expected:
                raise SystemExit(f"original x86 mismatch at 0x{address:08x}")
        print(f"PASS: original XBE body and {len(CHECKS)} callback/caller instruction signatures")
    else:
        print("PASS: source contract and C11 host identity tests (XBE not in CI)")
    print("Guest ECX/EAX callback ABI and host native runtime are NOT verified.")

if __name__ == "__main__":
    main()
