#!/usr/bin/env python3
"""Check two real C++ object edges; unresolved globals and Xbox ABI remain."""
import json
from pathlib import Path
import shutil
import subprocess
import tempfile

from check_cpp_direct_call_batches import ROOT, require, verify_sources
from source_layout import source_path


def run(args):
    result = subprocess.run(args, capture_output=True, text=True, timeout=60)
    require(result.returncode == 0, result.stderr)
    return result.stdout


def undefined(path, nm):
    return {line.split()[-1] for line in run([nm, "--undefined-only", str(path)]).splitlines()}


def main():
    clang, ld, nm = (shutil.which(name) for name in ("clang++", "ld", "nm"))
    require(clang and ld and nm, "Clang++, GNU ld and nm required")
    manifest = json.loads((ROOT / "metadata/cpp_direct_call_batches/20261112_next_reviewed.json").read_text())
    verify_sources(ROOT, manifest)
    entries = ("0x000b1d70", "0x000b8820", "0x000b87a0")
    with tempfile.TemporaryDirectory(prefix="bf-color-links-") as directory:
        temp = Path(directory)
        # O2 eliminates these calls in the unresolved caller draft. Do not
        # credit optimized linkage when the call reference no longer exists.
        for opt in ("-O0",):
            objects = {}
            for entry in entries:
                obj = temp / (entry + ".o")
                run([clang, "-std=c++17", opt, "-I", str(ROOT / "include"),
                     "-c", str(source_path(ROOT, entry)), "-o", str(obj)])
                objects[entry] = obj
            caller = objects[entries[0]]
            caller_undefined = undefined(caller, nm)
            symbols = {}
            for entry in entries[1:]:
                # Compare actual mangled symbols, including parameter types.
                defined = {line.split()[-1] for line in run(
                    [nm, "--defined-only", str(objects[entry])]).splitlines()
                    if len(line.split()) == 3 and line.split()[1] == "T"}
                matches = defined & caller_undefined
                require(len(matches) == 1, "caller has no unique callee symbol: " + entry)
                symbols[entry] = matches.pop()
            linked = temp / "linked.o"
            run([ld, "-r", *(str(objects[e]) for e in entries), "-o", str(linked)])
            residual = undefined(linked, nm)
            require(not (set(symbols.values()) & residual), "callee edge remains unresolved")
            for omitted in entries[1:]:
                run([ld, "-r", *(str(objects[e]) for e in entries if e != omitted),
                     "-o", str(linked)])
                require(symbols[omitted] in undefined(linked, nm),
                        "omitted-callee negative control did not expose missing definition")
            print(f"PASS {opt}: two real object edges resolved; {len(residual)} other undefined symbols remain")
    print("Partial host object links only; no whole-game linkage or Xbox ABI claim.")


if __name__ == "__main__":
    main()
