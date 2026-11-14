#!/usr/bin/env python3
"""Link the gameplay record teardown and compare its real nested unlink."""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess
import tempfile

from body_hash_labels import read_body_digest
from check_cpp_d3d_guest_kick import FIXTURE, FLAGS, RETURN, STACK, emulate, outputs, pairs, words
from check_cpp_direct_call_batches import ROOT, XBE_SHA256, file_offset, require, sections, target
from source_layout import source_path

ENTRY = 0x12440
CALLEE = 0x8F6E0
OBJECT = 0x466000
TABLE = 0x414DA0
BODIES = {
    ENTRY: (44, "13315B827ED2EE66B7AFD9AF3DF4ECCB0AA1F94B40D4F4E83D6D48B8EB5A39A2"),
    CALLEE: (61, "C83564B5BD0C213EA1598C92023CBE67820B89831FC3F077EBE732522791C80E"),
    0x2E490: (787, "891F0F02B028B3A6C53885B24A9416A9FFB396B5BCF814108766A4BDB1635C6F"),
}


def authenticate(image):
    require(hashlib.sha256(image).hexdigest() == XBE_SHA256, "unexpected retail image")
    layout = sections(image)
    bodies = {}
    for entry, (size, digest) in BODIES.items():
        offset = file_offset(layout, entry, size)
        body = image[offset:offset + size]
        require(hashlib.sha256(body).hexdigest().upper() == digest, f"body changed at {entry:#x}")
        bodies[entry] = body
    for site, destination in ((0x2E772, ENTRY), (0x12451, CALLEE), (0x12460, CALLEE)):
        offset = file_offset(layout, site, 5)
        require(target(site, image[offset:offset + 5]) == destination, f"call changed at {site:#x}")
    return bodies


def bucket(value):
    return TABLE + ((value * 0x19660D + 0x3C6EF35F) & 0xffffffff) // (1 << 21) * 4


def suite():
    for label in ("empty", "odd", "bucket-empty", "head", "chain", "missing", "stack-argument-alias",
                  "second-field-alias"):
        for df in (0, 0x400):
            obj = STACK - 0x14 if label == "stack-argument-alias" else OBJECT
            first, second = obj + 0x20, obj + 0xc
            node = 0x466400
            memory = {STACK: RETURN, obj: 0x87654321, obj + 4: 0x12345678, first: 0,
                      first + 4: 0, second: 0, second + 4: 0,
                      bucket(2): 0, bucket(4): 0, node: 0}
            if label == "odd":
                memory.update({first + 4: 3, second + 4: 7})
            if label in ("bucket-empty", "head", "chain", "missing", "stack-argument-alias",
                         "second-field-alias"):
                memory.update({first + 4: 2, second + 4: 4})
            if label == "head":
                memory.update({bucket(2): first, bucket(4): second})
            if label == "chain":
                memory.update({bucket(2): node, node: first, first: second, bucket(4): node})
            if label == "missing":
                memory.update({bucket(2): node})
            if label == "second-field-alias":
                # The first unlink rewrites the second tracked DWORD to zero.
                # A CMP uses the EDX node identity. Place the incoming tag in
                # a separate cell, then alias the first bucket to the second field.
                obj = bucket(2) - 0x10
                first, second = obj + 0x20, obj + 0xc
                memory.update({obj: 0x87654321, obj + 4: 0x12345678,
                               first: 0, first + 4: 2, second + 4: first})
            regs = [0x91A2B3C4, 0x13579BDF, 0x2468ACED, 0x98765432,
                    obj, 0xABCDEF01, 0xA5B6C7D8, STACK, ENTRY, 0x897 | df, FLAGS]
            yield label, regs, memory


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    paths = []
    for entry in (ENTRY, CALLEE):
        path = source_path(ROOT, f"{entry:#010x}")
        require(read_body_digest(path.read_text(encoding="utf-8")) == (BODIES[entry][1], False),
                f"body label changed at {entry:#x}")
        paths.append(path)
    bodies = authenticate(args.xbe.read_bytes()) if args.xbe else None
    cases = list(suite())
    inputs = b"".join(pairs(list(memory.items())) + pairs([]) + words(regs)
                      for _, regs, memory in cases)
    original = [emulate(bodies, regs, memory, []) for _, regs, memory in cases] if bodies else None
    compiler = shutil.which("clang++")
    require(compiler, "clang++ is required")
    code = FIXTURE.replace("bf_d3d_guest_kick.h", "bf_guest32_linked_records.h").replace(
        "@DISPATCH@", "case 0x12440u: FUN_00012440(state); break;")
    with tempfile.TemporaryDirectory(prefix="bf-gameplay-record-") as directory:
        folder = Path(directory)
        fixture = folder / "fixture.cpp"
        fixture.write_text(code, encoding="utf-8")
        for opt in ("-O0", "-O2"):
            exe = folder / "model"
            subprocess.run([compiler, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                            opt, "-I", ROOT / "include", fixture, *paths, "-o", exe], check=True, timeout=60)
            output = list(outputs(subprocess.check_output([exe], input=inputs, timeout=10)))
            require(len(output) == len(cases), "incomplete fixture result")
            for i, ((label, regs, _), (state, effects)) in enumerate(zip(cases, output)):
                require(effects[0] == (2, regs[4] + 4, 0x3a4f64), f"{label}: missing initial DWORD")
                require(effects[-2] == (2, regs[4], 0x3a4f50),
                        f"{label}: missing final DWORD")
                require(state[7:9] == (STACK + 4, RETURN), f"{label}: return differs")
                if label == "stack-argument-alias":
                    # The second CALL replaces its tag with its odd return VA.
                    require(state[0] == 0x12465, f"{label}: replacement tag was ignored")
                if label == "second-field-alias":
                    require(state[0] == 0, f"{label}: second field was cached")
                if original:
                    native, accesses = original[i]
                    require(state[:9] == tuple(native[:9]), f"{label}: guest state differs")
                    require((state[9] ^ native[9]) & state[10] == 0, f"{label}: flags differ")
                    require(effects == accesses, f"{label}: ordered guest memory differs")
            print(f"PASS {opt}: two linked objects, {len(output)} gameplay record cases" +
                  (" against retail x86" if original else ""))


if __name__ == "__main__":
    main()
