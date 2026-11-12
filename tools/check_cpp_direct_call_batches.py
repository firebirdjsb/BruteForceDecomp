#!/usr/bin/env python3
"""Check source-matched declarations and optionally authenticate their retail XBE edges."""
from __future__ import annotations

import argparse
from concurrent.futures import ThreadPoolExecutor
import hashlib
import json
from pathlib import Path
import re
import shutil
import subprocess
import sys

from body_hash_labels import read_body_digest
from source_layout import source_path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))
from verify_nine_cpp_call_edges_xbe import XBE_SHA256, file_offset, sections

NOTE = "// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED."
ALLOCATOR = '#include "bf_002ea01d_allocator_guest32.h"'


def require(condition, message):
    if not condition:
        raise ValueError(message)


def target(va, opcode):
    require(len(opcode) == 5 and opcode[0] == 0xe8, f"expected direct E8 call at {va:#x}")
    return (va + 5 + int.from_bytes(opcode[1:], "little", signed=True)) & 0xffffffff


def verify_sources(root, batch):
    require(batch["original_xbe_sha256"] == XBE_SHA256, "unexpected retail identity")
    bodies = batch["bodies"]
    cases = batch["callers"]
    require(len({row["entry"] for row in cases}) == len(cases) > 0, "invalid caller set")
    expected = {row["entry"] for row in cases} | {
        call["callee"] for row in cases for call in row["declarations"]
    }
    require(expected == set(bodies), "incomplete original body inventory")
    texts = {}
    for entry, evidence in bodies.items():
        path = source_path(root, entry)
        text = path.read_text(encoding="utf-8")
        require(read_body_digest(text) == (evidence["sha256"], False),
                f"source body label changed at {entry}")
        texts[entry] = text

    seen_sites = set()
    for row in cases:
        entry = row["entry"]
        text = texts[entry]
        require(text.count(NOTE) == 1 and row["declarations"], f"missing declaration block at {entry}")
        for call in row["declarations"]:
            callee, signature = call["callee"], call["signature"]
            require(re.search(r"(?m)^" + re.escape(signature) + r"\s*\{", texts[callee]) is not None,
                    f"canonical definition differs at {callee}")
            declaration = ALLOCATOR if callee == "0x002ea01d" else f"extern {signature};"
            require(text.splitlines().count(declaration) == 1, f"declaration differs at {entry}")
            require(bool(call["sites"]) and bool(call["returns"]), f"missing edge evidence at {entry}")
            for site in call["sites"]:
                require(site not in seen_sites, f"duplicate call site {site}")
                seen_sites.add(site)
                require(inside(bodies[entry], int(site, 16), 5), f"call lies outside body at {site}")
            for site, pop in call["returns"]:
                require(inside(bodies[callee], int(site, 16), 3 if pop else 1),
                        f"return lies outside body at {site}")
    return [source_path(root, row["entry"]) for row in cases]


def inside(body, va, size):
    return any(int(start, 16) <= va and va + size <= int(start, 16) + length
               for start, length in body["ranges"])


def verify_xbe(raw, batches):
    require(hashlib.sha256(raw).hexdigest() == XBE_SHA256, "retail XBE SHA-256 mismatch")
    layout = sections(raw)

    def read(va, size):
        offset = file_offset(layout, va, size)
        return raw[offset:offset + size]

    verified = {}
    sites = 0
    for batch in batches:
        for entry, body in batch["bodies"].items():
            previous = verified.setdefault(entry, body)
            require(previous == body, f"conflicting body evidence at {entry}")
            data = b"".join(read(int(start, 16), size) for start, size in body["ranges"])
            require(hashlib.sha256(data).hexdigest().upper() == body["sha256"],
                    f"retail body hash mismatch at {entry}")
        for row in batch["callers"]:
            for call in row["declarations"]:
                for site in call["sites"]:
                    va = int(site, 16)
                    opcode = read(va, 5)
                    callee = int(call["callee"], 16)
                    require(target(va, opcode) == callee, f"wrong retail CALL target at {site}")
                    mutated = bytes((0xe8, opcode[1] ^ 1)) + opcode[2:]
                    require(target(va, mutated) != callee, f"displacement mutation accepted at {site}")
                    sites += 1
                for site, pop in call["returns"]:
                    opcode = b"\xc2" + pop.to_bytes(2, "little") if pop else b"\xc3"
                    require(read(int(site, 16), len(opcode)) == opcode, f"wrong retail RET at {site}")
    print(f"PASS retail XBE: {len(verified)} original bodies and {sites} E8 destinations")


def compile_sources(root, files):
    clang = shutil.which("clang++")
    require(clang, "clang++ is required")

    def check(path):
        for opt in ("-O0", "-O2"):
            result = subprocess.run(
                [clang, "-std=c++17", "-fsyntax-only", opt, "-Werror=return-type",
                 "-Werror=float-conversion", "-Werror=implicit-int-float-conversion",
                 "-I", str(root / "include"), str(path)],
                capture_output=True, text=True, timeout=60, check=False,
            )
            require(result.returncode == 0, f"{path.name} {opt}: {result.stderr}")

    with ThreadPoolExecutor(max_workers=8) as pool:
        for _ in pool.map(check, files):
            pass


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=ROOT)
    parser.add_argument("--manifest", action="append", type=Path)
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    manifests = args.manifest or sorted((args.root / "metadata/cpp_direct_call_batches").glob("*.json"))
    require(manifests, "no declaration manifests")
    batches = [json.loads(path.read_text(encoding="utf-8")) for path in manifests]
    files = [path for batch in batches for path in verify_sources(args.root, batch)]
    require(len(files) == len(set(files)), "duplicate callers across batches")
    if args.xbe:
        verify_xbe(args.xbe.read_bytes(), batches)
    compile_sources(args.root, files)
    print(f"PASS {len(files)} source-matched C++17 callers at -O0/-O2. Xbox ABI_UNVERIFIED.")


if __name__ == "__main__":
    main()
