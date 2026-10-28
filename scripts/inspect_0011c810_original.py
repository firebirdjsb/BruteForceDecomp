#!/usr/bin/env python3
"""Inspect original 0x0011C810 x86 boundaries from the user's private XBE.

This tool refuses unpinned XBE images and never writes the private executable
into the repository. A linear disassembly is NOT proof of the indirect virtual
method address or of byte-identical recompilation; dynamic state is required.
"""
from __future__ import annotations

import argparse
import hashlib
from pathlib import Path
import re
import shutil
import subprocess
import sys
import tempfile

from verify_0011c810_matrix_frame import BODIES, XBE_SHA, guest

ENTRY = 0x0011C810
SIZE = BODIES[ENTRY][0]
# Windows previously authenticated from the user's XBE and recorded in
# docs/evidence/0011c810-deferred-register-output.md.
WINDOWS = (
    ("first virtual call; original EAX handed to 0x0001D0C0", 0x0011C810, 0x0011C838),
    ("producer matrix and 36-byte SSE copy", 0x0011C83B, 0x0011C893),
    ("second virtual +0x30 call and source component loads", 0x0011C893, 0x0011C906),
    ("dot helper inputs and scalar output lifetimes", 0x0011C906, 0x0011C950),
)
ASM_LINE = re.compile(r"^\s*([0-9a-fA-F]+):\s+((?:[0-9a-fA-F]{2}\s+)+)\s*(\S.*)$")


def parse_lines(output: str) -> list[tuple[int, bytes, str]]:
    parsed = []
    for row in output.splitlines():
        m = ASM_LINE.match(row)
        if not m:
            continue
        address = int(m.group(1), 16)
        encoded = bytes.fromhex(m.group(2))
        if not encoded:
            continue
        parsed.append((address, encoded, m.group(3).strip()))
    return parsed


def render_windows(instructions: list[tuple[int, bytes, str]]) -> str:
    parts = []
    for name, lo, hi in WINDOWS:
        parts.append(f"## {name}: 0x{lo:08X}..0x{hi - 1:08X}")
        included = [(addr, data, text) for addr, data, text in instructions
                    if lo <= addr < hi]
        if not included:
            parts.append("  [no decoded instructions in range; investigate disassembly]")
        else:
            for addr, data, mnemonic in included:
                parts.append(f"  0x{addr:08X} {data.hex(' '):<27} {mnemonic}")
        parts.append("")
    return "\n".join(parts)


def disassemble(body: bytes, objdump: str) -> list[tuple[int, bytes, str]]:
    with tempfile.TemporaryDirectory(prefix="bf_0011c810_private_asm_") as tmp:
        candidate = Path(tmp) / "body.raw"
        candidate.write_bytes(body)
        args = [objdump, "-D", "-b", "binary", "-m", "i386", "-M", "intel",
                f"--adjust-vma=0x{ENTRY:x}", str(candidate)]
        result = subprocess.run(args, text=True, capture_output=True, check=True)
    return parse_lines(result.stdout)


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--xbe", type=Path, required=True,
                    help="local path to original pinned private default.xbe")
    ap.add_argument("--objdump", default=shutil.which("objdump"),
                    help="GNU objdump binary; mandatory for i386 raw disassembly")
    args = ap.parse_args()
    if not args.objdump:
        ap.error("GNU objdump is required (install binutils)")
    data = args.xbe.read_bytes()
    if hashlib.sha256(data).hexdigest().lower() != XBE_SHA.lower():
        ap.error("Original XBE SHA-256 mismatch; refusing to analyze other binary")
    print("PASS pinned original XBE SHA-256")
    for addr, (size, digest) in BODIES.items():
        body = guest(data, addr, size)
        if len(body) != size or hashlib.sha256(body).hexdigest().lower() != digest.lower():
            ap.error(f"Original source body SHA-256 mismatch at 0x{addr:08X}")
        print(f"PASS original 0x{addr:08X} body SHA-256 ({size} bytes)")
    instructions = disassemble(guest(data, ENTRY, SIZE), args.objdump)
    if not instructions or instructions[0][0] != ENTRY:
        ap.error("Disassembly failed to begin at original entry address")
    print(render_windows(instructions))
    print("REVIEW REQUIRED: identify which +0x1C/+0x28/+0x34 object DWORD writes")
    print("  correspond to guest stack S+0x28/S+0x2C/S+0x30 and the exact")
    print("  negation opcodes, then identify the dynamic receiver vtable +0x30")
    print("  method from actual original memory/constructor writes. The method")
    print("  cannot be inferred just from this static callsite disassembly.")


if __name__ == "__main__":
    main()
