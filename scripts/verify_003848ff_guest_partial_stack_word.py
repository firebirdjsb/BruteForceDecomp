#!/usr/bin/env python3
"""Pin 0x003848FF guest stack halfword write and DWORD reload to the XBE.

CI: source, negative controls, Clang C11 and host bit-lane tests.
--xbe: original XBE hash, full function body hash, and instruction bytes.
Neither mode establishes native guest-pointer translation or the Xbox ABI.
"""
from __future__ import annotations

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
import struct
import subprocess
import tempfile

ENTRY = 0x003848FF
SIZE = 0x4D
BODY_SHA = "E8AB60808DE301B60ED91B440B015F05CB1ABC38058E8C7C26412DD8512DA356"
XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = Path("src/platform/xpp_role_unverified/0x003848ff.c")
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)
OPCODES = {
    0x00384902: "8b 45 08",
    0x0038490B: "89 88 70 04 00 00",
    0x00384915: "89 88 74 04 00 00",
    0x0038491B: "8b 08",
    0x0038491D: "66 c7 45 08 10 00",
    0x00384923: "8b 75 08",
    0x00384926: "89 74 91 50",
    0x00384941: "ff 15 dc 63 38 00",
    0x00384949: "c2 10 00",
}


def source_contract(text: str) -> None:
    if ("Entry: 0x003848ff," not in text or
            f"Input x86 body SHA-256: {BODY_SHA}" not in text or
            "ABI_UNVERIFIED" not in text):
        raise ValueError("entry, original body hash or ABI caveat missing")
    body = re.sub(r"/\*.*?\*/|//[^\n]*", "", text, flags=re.S)
    required = (
        '#include "bf_x86_word_lanes.h"',
        'guest_param_1_word = bf_x86_word_replace_lo16((uint32_t)(uintptr_t)param_1,',
        'UINT16_C(0x0010));',
        '*(uint32_t *)(iVar1 + 0x50 + param_2 * 4) = guest_param_1_word;',
        'param_1[0x11c] = param_3;',
        'param_1[0x11d] = param_4;',
        'KeSetTimer(piVar2 + 0x11e,0xfff0bdc0,0xffffffff,piVar2 + 0x128);',
    )
    for token in required:
        if body.count(token) != 1:
            raise ValueError(f"missing or duplicate source operation: {token}")
    if "._2_2_" in body or "CONCAT22" in body or "*(int **)(iVar1" in body:
        raise ValueError("invalid pseudo-field or host-width pointer store reintroduced")


def verify_xbe(path: Path) -> None:
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA or data[:4] != b"XBEH":
        raise ValueError("original Xbox executable SHA-256/header mismatch")
    base = struct.unpack_from("<I", data, 0x104)[0]
    count, table = struct.unpack_from("<II", data, 0x11C)
    if not 0 < count < 128:
        raise ValueError("invalid XBE section count")

    def read(va: int, size: int) -> bytes:
        for index in range(count):
            off = table - base + index * 0x38
            if off < 0 or off + 20 > len(data):
                raise ValueError("invalid XBE section header")
            _, start, virtual_size, raw, raw_size = struct.unpack_from("<IIIII", data, off)
            if start <= va and va + size <= start + min(virtual_size, raw_size):
                raw_off = raw + va - start
                if raw_off + size > len(data):
                    raise ValueError("XBE raw section truncated")
                return data[raw_off:raw_off + size]
        raise ValueError(f"unmapped XBE address: {va:#x}")

    if hashlib.sha256(read(ENTRY, SIZE)).hexdigest().upper() != BODY_SHA:
        raise ValueError("original 77-byte function body mismatch")
    for va, encoded in OPCODES.items():
        expected = bytes.fromhex(encoded)
        if read(va, len(expected)) != expected:
            raise ValueError(f"original x86 opcode mismatch at {va:#x}")


def compile_and_test(root: Path) -> None:
    clang = shutil.which("clang")
    if clang is None:
        raise RuntimeError("Clang required")
    source = root / SOURCE
    for opt in ("-O0", "-O2"):
        proc = subprocess.run(
            [clang, *FLAGS, opt, "-I", str(root / "include"), str(source)],
            capture_output=True, text=True, check=False, timeout=60,
        )
        if proc.returncode:
            raise ValueError(f"Clang {opt} C11 failed:\n{proc.stderr[-2500:]}")
    program = r'''
#include "bf_x86_word_lanes.h"
#include <assert.h>
int main(void) {
  const uint32_t inputs[] = {0, 0x12345678u, 0xffffffffu, 0x0000ffffu, 0xabcd0010u};
  for (unsigned i = 0; i < sizeof(inputs)/sizeof(inputs[0]); ++i) {
    uint32_t value = bf_x86_word_replace_lo16(inputs[i], UINT16_C(0x0010));
    assert(value == ((inputs[i] & UINT32_C(0xffff0000)) | UINT32_C(0x10)));
  }
  return 0;
}
'''
    with tempfile.TemporaryDirectory() as folder:
        file = Path(folder) / "lane.c"
        file.write_text(program, encoding="utf-8")
        for opt in ("-O0", "-O2"):
            exe = Path(folder) / ("test" + opt)
            subprocess.run(
                [clang, "-std=c11", "-Wall", "-Wextra", "-Werror",
                 "-pedantic-errors", opt, "-I", str(root / "include"),
                 str(file), "-o", str(exe)],
                capture_output=True, text=True, check=True, timeout=60,
            )
            subprocess.run([str(exe)], check=True, timeout=60)


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path)
    opts = parser.parse_args()
    root = opts.root.resolve()
    source = (root / SOURCE).read_text(encoding="utf-8")
    source_contract(source)
    for wrong in (
        source.replace("bf_x86_word_replace_lo16", "bf_x86_word_replace_lo8"),
        source.replace("UINT16_C(0x0010)", "UINT16_C(0x0000)"),
        source.replace("*(uint32_t *)(iVar1", "*(int **)(iVar1"),
    ):
        try:
            source_contract(wrong)
        except ValueError:
            pass
        else:
            raise ValueError("source mutation negative control escaped detection")
    compile_and_test(root)
    if opts.xbe:
        verify_xbe(opts.xbe)
    print("PASS 0x003848FF: source, negative controls, Clang O0/O2 and C11 low-word tests; "
          + ("original XBE SHA/body/9 opcodes verified" if opts.xbe else "XBE not in CI")
          + "; guest ABI, native relocation and runtime remain unverified")


if __name__ == "__main__":
    main()
