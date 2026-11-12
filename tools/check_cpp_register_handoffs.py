#!/usr/bin/env python3
"""Check C++17 bindings to original register and stack handoffs."""
import argparse
from concurrent.futures import ThreadPoolExecutor
import hashlib
import json
from pathlib import Path
import re
import shutil
import subprocess

from body_hash_labels import read_body_digest
from check_cpp_direct_call_batches import ROOT, XBE_SHA256, file_offset, inside, require, sections, target
from source_layout import source_path


MANIFEST = ROOT / "metadata/cpp_register_handoffs_20261112.json"
EAX_MODEL = "0x000120f0"
RECORD_HEADER = '#include "bf_xbe_guest32_record_model.h"'


def verify_xbe(raw, manifest):
    require(hashlib.sha256(raw).hexdigest() == XBE_SHA256, "retail XBE SHA-256 mismatch")
    layout = sections(raw)

    def read(va, count):
        offset = file_offset(layout, va, count)
        return raw[offset:offset + count]

    bodies = manifest["bodies"]
    for entry, body in bodies.items():
        data = b"".join(read(int(start, 16), length) for start, length in body["ranges"])
        require(hashlib.sha256(data).hexdigest().upper() == body["sha256"],
                f"retail body hash differs at {entry}")
    for case in manifest["callers"]:
        site = int(case["site"], 16)
        call = read(site, 5)
        callee = int(case["callee"], 16)
        require(target(site, call) == callee, f"wrong original E8 target at {site:#x}")
        mutant = call[:1] + bytes((call[1] ^ 1,)) + call[2:]
        require(target(site, mutant) != callee, f"call mutation accepted at {site:#x}")
        for body_entry, address, opcode in case["windows"]:
            va, expected = int(address, 16), bytes.fromhex(opcode)
            require(inside(bodies[body_entry], va, len(expected))
                    and read(va, len(expected)) == expected, f"register window differs at {va:#x}")
    print(f"PASS retail XBE: {len(bodies)} body hashes and {len(manifest['callers'])} register handoffs")


def verify_source(case, bodies, clang):
    entry, callee = case["entry"], case["callee"]
    path = source_path(ROOT, entry)
    text = path.read_text(encoding="utf-8")
    require(read_body_digest(text) == (bodies[entry]["sha256"], False), f"body label differs at {entry}")
    require(inside(bodies[entry], int(case["site"], 16), 5), f"call outside original body at {entry}")
    callee_name = f"FUN_{callee[2:]}"
    if callee == EAX_MODEL:
        require(text.count(f"extern uint32_t {callee_name}(uint32_t guest_eax);") == 1,
                f"source declaration differs at {entry}")
    else:
        require(text.splitlines().count(RECORD_HEADER) == 1, f"missing canonical model header at {entry}")
    call_pattern = re.escape(case["call"]).replace(r"\ ", r"\s+")
    require(len(re.findall(call_pattern, text)) == 1, f"source binding differs at {entry}")

    flags = [clang, "-std=c++17", "-fsyntax-only", "-Werror=return-type", "-I", str(ROOT / "include")]
    for opt in ("-O0", "-O2"):
        compiled = subprocess.run([*flags, opt, str(path)], capture_output=True, text=True, timeout=60)
        require(compiled.returncode == 0, f"{entry} {opt}: {compiled.stderr}")
    # Reintroducing the missing arguments must fail at the same call.
    wrong = re.sub(call_pattern, f"{callee_name}()", text, count=1)
    rejected = subprocess.run([*flags, "-x", "c++", "-"], input=wrong,
                              capture_output=True, text=True, timeout=60)
    require(rejected.returncode != 0 and re.search(
        r"error: no matching function for call to '" + callee_name + "'", rejected.stderr),
        f"missing argument negative control passed at {entry}")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    manifest = json.loads(MANIFEST.read_text(encoding="utf-8"))
    require(manifest["original_xbe_sha256"] == XBE_SHA256, "unexpected retail identity")
    bodies, cases = manifest["bodies"], manifest["callers"]
    require(len({case["entry"] for case in cases}) == len(cases) > 0, "invalid caller set")
    for callee, signature in manifest["models"].items():
        text = source_path(ROOT, callee).read_text(encoding="utf-8")
        require(read_body_digest(text) == (bodies[callee]["sha256"], False)
                and re.search(r"(?m)^" + re.escape(signature) + r"\s*\{", text),
                f"canonical model differs at {callee}")
    require({case["callee"] for case in cases} == set(manifest["models"]), "model list differs")
    if args.xbe:
        verify_xbe(args.xbe.read_bytes(), manifest)
    clang = shutil.which("clang++")
    require(clang, "clang++ is required")
    with ThreadPoolExecutor(max_workers=8) as pool:
        list(pool.map(lambda case: verify_source(case, bodies, clang), cases))
    print(f"PASS {len(cases)} C++17 register bindings at -O0/-O2 and missing-argument negative controls")


if __name__ == "__main__":
    main()
