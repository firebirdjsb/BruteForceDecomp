#!/usr/bin/env python3
"""Check 0x00217920 original Xbox MAXSS and scalar C11 reconstruction.

CI validates source plus synthetic host SSE fixture.  With --xbe, confirm
the private game's XBE identity and exact original MOVSS/MAXSS/MOVSS bytes.
No full function calling convention or cross-function behavior is implied.
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
import shutil
import subprocess
import tempfile

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
WINDOWS = {
    0x00217940: "f30f1044246c",   # MOVSS scalar source
    0x00217946: "f30f5f442468",   # MAXSS scalar limit
    0x0021794C: "f30f11442418",   # MOVSS guest float32 result
}
SOURCE = "src/main_unclassified/band_0021/0x00217920.c"
TEST = "tests/test_00217920_maxss_scalar.c"

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    a = parser.parse_args()
    text = (a.root / SOURCE).read_text(encoding="utf-8")
    required = "fVar1 = _mm_cvtss_f32(_mm_max_ss(_mm_set_ss(param_6),_mm_set_ss(param_7)));"
    if required not in text:
        raise SystemExit("original MAXSS source contract missing")
    if "ZEXT416((uint)fVar1)" in text:
        raise SystemExit("bad integer-to-vector alias remains")
    clang = shutil.which("clang")
    if not clang:
        raise SystemExit("clang required for MAXSS sign/NaN fixture")
    with tempfile.TemporaryDirectory() as tmp:
        exe = Path(tmp) / "maxss-fixture"
        src = a.root / TEST
        for opt in ("-O0", "-O2"):
            subprocess.run([clang, "-std=c11", "-Wall", "-Wextra", "-Werror",
                           opt, str(src), "-o", str(exe)],
                           check=True, capture_output=True, text=True)
            subprocess.run([str(exe)], check=True, capture_output=True, text=True)
    if a.xbe:
        xbe = a.xbe.read_bytes()
        if hashlib.sha256(xbe).hexdigest() != XBE_SHA:
            raise SystemExit("original Xbox executable hash mismatch")
        for address, opcode in WINDOWS.items():
            expected = bytes.fromhex(opcode)
            off = address - 0x10000
            if xbe[off:off + len(expected)] != expected:
                raise SystemExit(f"XBE original instruction mismatch: 0x{address:08X}")
        print("PASS: 3 original MOVSS/MAXSS instruction signatures and both SSE Clang fixtures")
    else:
        print("PASS: MAXSS source contract and two SSE Clang fixtures (original XBE not supplied)")

if __name__ == "__main__":
    main()
