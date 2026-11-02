#!/usr/bin/env python3
"""Original-XBE-anchored immediate CALL-adjacent instruction evidence.

The 40 preceding/following instruction windows are disassembler-aligned
observations, not full producer/consumer dataflow or Xbox C++ ABI recovery.
The 21 additional windows pin two concrete register/stack transfer cases.
Private XBE is optional; CI runs only synthetic negative controls.
"""
from __future__ import annotations

import argparse
import hashlib
import importlib.util
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
EDGES_PATH = ROOT / "scripts/verify_cpp_20261102_40_xbe_edges.py"
RETAIL_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"

# (CALL VA, immediately preceding instruction VA/bytes, next instruction VA/bytes)
# All observations are pinned to the exact original retail binary hash.
CONTEXT = (
    (0x000bb63c, 0x000bb638, "8d5c2418", 0x000bb641, "8b4c2410"),
    (0x0010ad7a, 0x0010ad74, "8d9d98000000", 0x0010ad7f, "5f"),
    (0x0017e43b, 0x0017e437, "8d442414", 0x0017e440, "d900"),
    (0x001edcf3, 0x001edceb, "c744240820ddadf1", 0x001edcf8, "5b"),
    (0x00232445, 0x00232441, "d95c2470", 0x0023244a, "89442400"),
    (0x0027e5f7, 0x0027e5f5, "8bfa", 0x0027e5fc, "8b4c2410"),
    (0x002e2d54, 0x002e2d4e, "8d8ed0040000", 0x002e2d59, "8b8ec8040000"),
    (0x00038b07, 0x00038b05, "8bf0", 0x00038b0c, "8b7604"),
    (0x00074ae7, 0x00074ae5, "8bc6", 0x00074aec, "8b7604"),
    (0x00075387, 0x00075385, "8bf0", 0x0007538c, "8b4e04"),
    (0x000a20a0, 0x000a209e, "33ed", 0x000a20a5, "8b7604"),
    (0x000a7230, 0x000a722e, "33ed", 0x000a7235, "8b7604"),
    (0x000f484a, 0x000f4849, "51", 0x000f484f, "84c0"),
    (0x0010661a, 0x00106619, "51", 0x0010661f, "84c0"),
    (0x0010c2a3, 0x0010c2a0, "895614", 0x0010c2a8, "8bc6"),
    (0x001209c1, 0x001209c0, "56", 0x001209c6, "d81d2c503a00"),
    (0x001353ca, 0x001353c8, "8bc6", 0x001353cf, "8b7604"),
    (0x00144caf, 0x00144cad, "8906", 0x00144cb4, "8b4714"),
    (0x00148170, 0x0014816c, "8d54240c", 0x00148175, "5e"),
    (0x0015fd8d, 0x0015fd8b, "8bc6", 0x0015fd92, "8b7604"),
    (0x00170ec1, 0x00170ec0, "50", 0x00170ec6, "8b480c"),
    (0x00174427, 0x00174425, "8bf0", 0x0017442c, "8b4e04"),
    (0x00174506, 0x00174504, "8bc6", 0x0017450b, "8b4e04"),
    (0x0017c1eb, 0x0017c1e7, "8b442408", 0x0017c1f0, "85c0"),
    (0x0017d9bf, 0x0017d9bd, "8906", 0x0017d9c4, "8b4714"),
    (0x001cad07, 0x001cad06, "52", 0x001cad0c, "8bc6"),
    (0x001cf823, 0x001cf821, "8bc3", 0x001cf828, "83c610"),
    (0x001d0412, 0x001d0411, "56", 0x001d0417, "83c644"),
    (0x001d10c3, 0x001d10c1, "8bc3", 0x001d10c8, "83c624"),
    (0x001d1322, 0x001d1321, "56", 0x001d1327, "83c66c"),
    (0x001d7201, 0x001d71ff, "8bc6", 0x001d7206, "3bf3"),
    (0x001d81ef, 0x001d81ee, "56", 0x001d81f4, "3bdf"),
    (0x001d9001, 0x001d8fff, "8bc6", 0x001d9006, "3bf3"),
    (0x001d92bf, 0x001d92be, "56", 0x001d92c4, "3bdf"),
    (0x001dcfe8, 0x001dcfe7, "56", 0x001dcfed, "8b4628"),
    (0x001f3848, 0x001f3847, "51", 0x001f384d, "c7400400000000"),
    (0x001f74b9, 0x001f74b8, "50", 0x001f74be, "c7400400000000"),
    (0x00210852, 0x0021084b, "8b842488000000", 0x00210857, "33c9"),
    (0x00225d27, 0x00225d25, "8bf0", 0x00225d2c, "8b4e04"),
    (0x00248234, 0x00248233, "52", 0x00248239, "8bc6"),
)

# (instruction VA, exact bytes): narrow independently authenticated facts.
# 0x001ED100 copies 0x89 DWORDs into a stack-provided destination and returns
# a meaningful AL, not a verified full 32-bit EAX value. 0x001D2D60 consumes
# EAX as a source address and its incoming stack DWORD as a destination.
FOCUSED = (
    (0x000f4838, "81ec24020000"),  # caller reserves 0x224 bytes
    (0x000f4845, "8d4c2404"),    # LEA ECX,[ESP+4]
    (0x000f4849, "51"),          # push destination
    (0x000f484f, "84c0"),        # test AL,AL
    (0x00106608, "81ec24020000"),
    (0x00106615, "8d4c2404"),
    (0x00106619, "51"),
    (0x0010661f, "84c0"),
    (0x001ed13f, "8b7c2410"),    # destination stack pointer after saved registers
    (0x001ed145, "b989000000"),  # ECX = 0x89 DWORDs
    (0x001ed14a, "f3a5"),        # REP MOVSD: 548-byte transfer
    (0x001ed14e, "b001"),        # success sets AL only
    (0x001ed151, "c20400"),     # RET 4
    (0x001ed155, "8ac3"),       # failure sets AL from BL
    (0x001ed158, "c20400"),
    (0x001d10c0, "56"),          # push destination ESI
    (0x001d10c1, "8bc3"),        # source EAX = EBX
    (0x001d10c8, "83c624"),    # next destination += 0x24
    (0x001d2d61, "8bd8"),        # callee saves source EAX into EBX
    (0x001d2d66, "8b6c240c"),  # callee reads destination stack argument
    (0x001d2dd6, "c20400"),     # RET 4
)


def load_edges(path: Path = EDGES_PATH):
    spec = importlib.util.spec_from_file_location("bf_40_e8_edges_context", path)
    if spec is None or spec.loader is None:
        raise ValueError("Original 40-edge verifier missing")
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def validate_manifest(edges=None) -> int:
    edges = edges or load_edges()
    expected = {site for _, site, _ in edges.CALL_EDGES}
    if len(CONTEXT) != 40 or {r[0] for r in CONTEXT} != expected:
        raise ValueError("40 immediate instruction windows must match original E8 sites")
    if len(FOCUSED) != 21 or len({va for va, _ in FOCUSED}) != 21:
        raise ValueError("Focused x86 evidence inventory incomplete or duplicated")
    for site, pre, pre_hex, post, post_hex in CONTEXT:
        left, right = bytes.fromhex(pre_hex), bytes.fromhex(post_hex)
        if not left or not right or pre + len(left) != site or post != site + 5:
            raise ValueError(f"Misaligned predecessor/successor at {site:#x}")
    for va, code in FOCUSED:
        if va < 0x12000 or not bytes.fromhex(code):
            raise ValueError("Malformed focused x86 evidence window")
    return len(CONTEXT)


def check_window(data: bytes, layout, va: int, expected_hex: str, edges=None) -> None:
    edges = edges or load_edges()
    expected = bytes.fromhex(expected_hex)
    off = edges.file_offset(layout, va, len(expected))
    if data[off:off + len(expected)] != expected:
        raise ValueError(f"Original instruction window changed at {va:#010x}")


def verify_private(data: bytes, *, edges=None) -> dict:
    edges = edges or load_edges()
    validate_manifest(edges)
    if hashlib.sha256(data).hexdigest() != RETAIL_SHA256:
        raise ValueError("Original retail XBE SHA-256 mismatch")
    direct = edges.verify(data, require_hash=True)
    layout = edges.sections(data)
    for _, pre, left, post, right in CONTEXT:
        check_window(data, layout, pre, left, edges)
        check_window(data, layout, post, right, edges)
    for va, code in FOCUSED:
        check_window(data, layout, va, code, edges)
    return {"direct_calls": direct["checked_direct_calls"],
            "adjacent_windows": len(CONTEXT) * 2,
            "focused_windows": len(FOCUSED),
            "ret_windows": direct["checked_return_windows"]}


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, help="Private original retail XBE, outside repository")
    args = parser.parse_args()
    validate_manifest()
    if args.xbe:
        result = verify_private(args.xbe.read_bytes())
        print("PASS: retail XBE; {direct_calls} E8, {adjacent_windows} adjacent, "
              "{focused_windows} focused, {ret_windows} selected RET windows".format(**result))
    else:
        print("PASS: 40 aligned E8-adjacent records and 21 focused instruction windows")
    print("ABI_UNVERIFIED: full register liveness, guest32 host mapping, classes, linkage, behavior")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
