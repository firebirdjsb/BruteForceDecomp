#!/usr/bin/env python3
"""Check original heap thunk operands and the corresponding C++17 draft edits."""
import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path

from body_hash_labels import read_body_digest
from check_cpp_direct_call_batches import (
    ROOT, XBE_SHA256, compile_sources, file_offset, inside, require, sections, target,
)
from source_layout import source_path


MANIFEST = ROOT / "metadata/cpp_heap_free_bindings_20261112.json"
THUNKS = {"0x002ea018": "thunk_FUN_00237ec0", "0x00067bf0": "thunk_FUN_00067bf0"}
HEADER = '#include "bf_002ea018_heap_free_guest32.h"'


def verify_xbe(raw, cases):
    require(hashlib.sha256(raw).hexdigest() == XBE_SHA256, "retail XBE SHA-256 mismatch")
    layout = sections(raw)

    def read(va, size):
        offset = file_offset(layout, va, size)
        return raw[offset:offset + size]

    jump = read(0x002ea018, 5)
    displacement = int.from_bytes(jump[1:], "little", signed=True)
    require(jump[0] == 0xe9 and 0x002ea01d + displacement == 0x00067bf0,
            "original heap thunk jump differs")
    require(read(0x00067bf0, 6) == b"\xff\x25\x54\xc6\x3b\x00"
            and int.from_bytes(read(0x003bc654, 4), "little") == 0x00237ec0,
            "original heap target slot differs")
    for case in cases:
        body = b"".join(read(int(start, 16), size) for start, size in case["ranges"])
        require(hashlib.sha256(body).hexdigest().upper() == case["sha256"],
                f"retail body hash differs at {case['entry']}")
        for call in case["calls"]:
            site = int(call["site"], 16)
            require(inside(case, site, 5) and target(site, read(site, 5)) == int(call["target"], 16),
                    f"wrong original heap call at {site:#x}")
            for role in ("load", "push"):
                va = int(call[role], 16)
                expected = bytes.fromhex(call[role + "_bytes"])
                require(inside(case, va, len(expected)) and read(va, len(expected)) == expected,
                        f"heap argument {role} differs at {va:#x}")
            # The decompiler-selected ranges may exclude this fallthrough.
            require(read(site + 5, 3) == b"\x83\xc4\x04", f"caller cleanup differs at {site:#x}")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    doc = json.loads(MANIFEST.read_text(encoding="utf-8"))
    require(doc["original_xbe_sha256"] == XBE_SHA256, "unexpected retail identity")
    cases = doc["callers"]
    require(len({case["entry"] for case in cases}) == len(cases) > 0, "invalid caller set")
    paths = []
    for case in cases:
        path = source_path(ROOT, case["entry"])
        text = path.read_text(encoding="utf-8")
        require(read_body_digest(text) == (case["sha256"], False), f"body label differs at {path.name}")
        require(text.splitlines().count(HEADER) == 1, f"missing existing heap adapter at {path.name}")
        expected_calls = Counter(call["source_call"] for call in case["calls"])
        actual_calls = Counter(line.strip() for line in text.splitlines()
                               if line.strip().startswith(tuple(THUNKS.values())))
        require(actual_calls == expected_calls and all(
            call["source_call"].startswith(THUNKS[call["target"]] + "(") for call in case["calls"]),
            f"heap calls differ at {path.name}")
        require("WARNING: Subroutine does not return" not in text, f"false noreturn retained at {path.name}")
        paths.append(path)
    if args.xbe:
        verify_xbe(args.xbe.read_bytes(), cases)
        print(f"PASS retail XBE: {len(cases)} original bodies and "
              f"{sum(len(case['calls']) for case in cases)} heap call operands")
    compile_sources(ROOT, paths)
    print(f"PASS {len(paths)} heap thunk callers in Clang C++17 at -O0/-O2. Xbox ABI_UNVERIFIED.")


if __name__ == "__main__":
    main()
