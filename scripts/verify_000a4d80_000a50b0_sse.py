#!/usr/bin/env python3
"""Check original packed SSE instruction windows and focused host C11 sources.

Without --xbe, CI checks source identity, syntax and deterministic SSE lanes.
With --xbe, verify the user's hash-pinned XBE and exact instruction encodings.
Guest memory, implicit register ABI, native linking and runtime remain unverified.
"""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

import argparse
import hashlib
from pathlib import Path
import re
import shutil
import subprocess

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_4D80 = "3B3FA0CB6F125CE68744553EA73836B7589301B67F78EDECD2FA8F4ED0703C33"
BODY_50B0 = "126463AC49317A5021556BCE9A7600EF092E1E35C81FADA77DE8B5B88BB5B8DE"
INSTRUCTIONS = {
    0x000A4DA3: "0f1000", 0x000A4DA6: "0f5d05707c3f00",
    0x000A4DAD: "0f5f05f09a4600", 0x000A4DB4: "0f5905807c3f00",
    0x000A4DBB: "f30f2dc0", 0x000A4DC2: "0fc6c039",
    0x000A4DC6: "f30f2dd8", 0x000A4DCF: "0fc6c039",
    0x000A4DD3: "f30f2dd8", 0x000A4DD9: "0fc6c039",
    0x000A4DDD: "f30f2dd8",
    0x000A50F3: "0f1000", 0x000A50F6: "0f5d05707c3f00",
    0x000A50FD: "0f5f05f09a4600", 0x000A5104: "0f5905807c3f00",
    0x000A510B: "f30f2dc0", 0x000A5112: "0fc6c039",
    0x000A5116: "f30f2dd8", 0x000A511F: "0fc6c039",
    0x000A5123: "f30f2dd8", 0x000A5129: "0fc6c039",
    0x000A512D: "f30f2dd8",
}
FLAGS = ("-std=c11", "-fsyntax-only", "-ferror-limit=3",
         "-Wno-implicit-function-declaration", "-Wno-int-conversion",
         "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast", "-Wno-return-type",
         "-Wno-deprecated-non-prototype")

def check_xbe(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA256 or data[:4] != b"XBEH":
        raise ValueError("not the hash-pinned original Brute Force XBE")
    # The first body is contiguous through its last RET; the second Ghidra
    # body digest remains provenance, not a claimed contiguous file hash.
    body = hashlib.sha256(data[0x000A4D80 - 0x10000:0x000A50AD - 0x10000]).hexdigest().upper()
    if body != BODY_4D80:
        raise ValueError("0x000A4D80 original function body digest mismatch")
    for va, hex_bytes in INSTRUCTIONS.items():
        expected = bytes.fromhex(hex_bytes)
        if data[va - 0x10000:va - 0x10000 + len(expected)] != expected:
            raise ValueError(f"original x86 opcode mismatch at {va:#010x}")
    print(f"PASS: original XBE SHA-256, first body digest, {len(INSTRUCTIONS)} exact SSE instructions")

def check_source(root, clang):
    for entry, digest in ((0x000A4D80, BODY_4D80), (0x000A50B0, BODY_50B0)):
        p = root / "src/main_unclassified" / f"band_{entry >> 16:04x}" / f"0x{entry:08x}.c"
        s = p.read_text()
        if (f"Entry: 0x{entry:08x}," not in s or
                f"Input x86 body SHA-256: {digest}" not in s or
                "ABI_UNVERIFIED" not in s):
            raise ValueError(f"original provenance or ABI limitation missing: {p}")
        code = re.sub(r"/\*.*?\*/|//[^\n]*", "", s, flags=re.S)
        if (code.count("bf_x86_pack_color_sse(") != 1 or
                "auVar6 = minps" in code or "auVar9 = minps" in code):
            raise ValueError(f"packed SSE reconstruction regressed: {p}")
        for symbol in ("_DAT_003f7c70[16]", "_DAT_003f7c80[16]", "_DAT_00469af0[16]"):
            if symbol not in code:
                raise ValueError(f"missing 16-byte operand {symbol}: {p}")
        r = subprocess.run([clang, *FLAGS, "-I", str(root / "include"), str(p)],
                           capture_output=True, text=True, timeout=60)
        if r.returncode:
            raise ValueError(f"focused C11 failure {p}: {r.stderr[-2500:]}")
    for label, opts in (("O0", ["-O0"]), ("O2", ["-O2", "-DNDEBUG"])):
        binary = root / f".bf_sse_test_tmp_{label}"
        try:
            r = subprocess.run([clang, "-std=c11", "-Wall", "-Wextra", "-Werror",
                                "-pedantic-errors", *opts, "-I", str(root / "include"),
                                str(root / "tests/test_packed_color_sse.c"),
                                "-o", str(binary)], capture_output=True, text=True, timeout=60)
            if r.returncode:
                raise ValueError(f"{label} lane test compile failed: {r.stderr}")
            r = subprocess.run([str(binary)], capture_output=True, text=True, timeout=60)
            if r.returncode:
                raise ValueError(f"{label} lane test failed: {r.stderr}")
        finally:
            binary.unlink(missing_ok=True)
    print("PASS: both focused C11 sources and O0/O2 SSE lane/rounding tests; guest ABI unverified")

def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path)
    args = ap.parse_args()
    clang = shutil.which("clang")
    if not clang:
        ap.error("clang required")
    if args.xbe:
        check_xbe(args.xbe)
    check_source(args.root.resolve(), clang)

if __name__ == "__main__":
    main()
