#!/usr/bin/env python3
"""Check single-instruction retail jump models and run their focused C++17 fixture."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import tempfile

from body_hash_labels import read_body_digest
from check_cpp_direct_call_batches import ROOT, XBE_SHA256, file_offset, require, sections
from source_layout import source_path


MANIFEST = ROOT / "metadata/cpp_single_jump_bodies_20261112.json"


def jump_target(entry, raw):
    require(bool(raw) and (len(raw), raw[0]) in ((2, 0xeb), (5, 0xe9)),
            f"unexpected direct jump encoding at {entry:#x}")
    displacement = int.from_bytes(raw[1:], "little", signed=True)
    return (entry + len(raw) + displacement) & 0xffffffff


def verify_xbe(raw, cases):
    require(hashlib.sha256(raw).hexdigest() == XBE_SHA256, "retail XBE SHA-256 mismatch")
    layout = sections(raw)
    for case in cases:
        entry, size = int(case["entry"], 16), case["size"]
        offset = file_offset(layout, entry, size)
        body = raw[offset:offset + size]
        require(hashlib.sha256(body).hexdigest().upper() == case["sha256"],
                f"original body differs at {entry:#x}")
        destination = int(case["target"], 16)
        require(jump_target(entry, body) == destination, f"incorrect jump target at {entry:#x}")
        file_offset(layout, destination, 1)  # Destination must be raw-backed in this XBE.
        altered = body[:-1] + bytes((body[-1] ^ 1,))
        require(jump_target(entry, altered) != destination,
                f"mutated jump still accepted at {entry:#x}")


def fixture(cases):
    declarations, tests = [], []
    for i, case in enumerate(cases, start=1):
        name, entry = case["symbol"], case["entry"]
        declarations.append(f"void {name}(uint32_t &);")
        tests.append(f"    eip = {entry};\n    {name}(eip);\n"
                     f"    if (eip != {case['target']}) return {i};")
    return ("#include <stdint.h>\n" + "\n".join(declarations) +
            "\nint main() {\n    uint32_t eip;\n" + "\n".join(tests) + "\n}\n")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    doc = json.loads(MANIFEST.read_text(encoding="utf-8"))
    require(doc["original_xbe_sha256"] == XBE_SHA256, "unexpected retail identity")
    cases = doc["cases"]
    require(len(cases) == 16, "expected five existing plus eleven additional jump models")
    require(len({case["entry"] for case in cases}) == len(cases), "duplicate jump entry")
    paths = [source_path(ROOT, case["entry"]) for case in cases]
    for case, path in zip(cases, paths):
        text = path.read_text(encoding="utf-8")
        require(read_body_digest(text) == (case["sha256"], False), f"body label differs at {path.name}")
        require(path.relative_to(ROOT).as_posix() == case["source"],
                f"canonical source path differs at {path.name}")
        if "ghidra_index" in case:
            identity = (f"Ghidra index: {case['ghidra_index']}, label: {case['label']}")
            require(identity in text, f"Ghidra identity line differs at {path.name}")
        target_text = source_path(ROOT, case["target"]).read_text(encoding="utf-8")
        require(read_body_digest(target_text) == (case["target_body_sha256"], False),
                f"canonical target body label differs for {case['entry']}")
        require(source_path(ROOT, case["target"]).relative_to(ROOT).as_posix() ==
                case["target_source"], f"canonical target source differs for {case['entry']}")
        require(f"guest_eip = {case['target']}u;" in text,
                f"guest EIP transition differs at {path.name}")
    for case in doc.get("deferred", []):
        path = source_path(ROOT, case["entry"])
        current = path.read_text(encoding="utf-8")
        require(path.relative_to(ROOT).as_posix() == case["source"],
                f"deferred source path changed at {case['entry']}")
        require(hashlib.sha256(current.encode("utf-8")).hexdigest() == case["source_sha256"],
                f"externally pinned deferred source changed at {case['entry']}")
        require(read_body_digest(current) == (case["sha256"], False),
                f"deferred body label changed at {case['entry']}")
    if args.xbe:
        verify_xbe(args.xbe.read_bytes(), cases)
        print(f"PASS retail XBE: {len(cases)} bodies, direct jump destinations, and raw-backed targets")
    clang = shutil.which("clang++")
    if not clang and Path(r"C:\Program Files\LLVM\bin\clang++.exe").exists():
        clang = r"C:\Program Files\LLVM\bin\clang++.exe"
    require(clang, "clang++ is required")
    with tempfile.TemporaryDirectory() as tmp:
        fixture_path = Path(tmp) / "jump_fixture.cpp"
        fixture_path.write_text(fixture(cases), encoding="utf-8")
        for opt in ("-O0", "-O2"):
            exe = Path(tmp) / ("jump_fixture.exe" if os.name == "nt" else "jump_fixture")
            objects = []
            for i, source in enumerate(paths):
                obj = Path(tmp) / f"jump_{i:02}.o"
                subprocess.run([clang, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra",
                                "-Werror", opt, "-c", str(source), "-o", str(obj)],
                               check=True, timeout=60)
                objects.append(str(obj))
            fixture_object = Path(tmp) / "jump_fixture.o"
            subprocess.run([clang, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra",
                            "-Werror", opt, "-c", str(fixture_path), "-o", str(fixture_object)],
                           check=True, timeout=60)
            subprocess.run([clang, *objects, str(fixture_object), "-o", str(exe)],
                           check=True, timeout=60)
            subprocess.run([str(exe)], check=True, timeout=15)
    print(f"PASS {len(cases)} C++17 jump objects linked with fixture at -O0/-O2")


if __name__ == "__main__":
    main()
