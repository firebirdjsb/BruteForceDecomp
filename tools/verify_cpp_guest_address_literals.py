#!/usr/bin/env python3
"""Bounded original MOV r/m32,imm32 repairs, not recovered object/host ABIs.

Public CI checks source provenance, exact edits and isolated strict C++17.
--xbe additionally authenticates complete original bodies and instruction
boundaries using the private hash-pinned image. Never commit that image.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
from pathlib import Path
import re
import shutil
import subprocess
import sys
import tempfile

from body_hash_labels import read_body_digest
from source_layout import source_path

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = "metadata/cpp_20261031_guest_address_literals.json"
XBE_SHA = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"


def sha(text):
    return hashlib.sha256(text.encode("utf-8")).hexdigest()


def mov_memory_imm32(raw):
    """Decode only unprefixed x86 C7 /0 memory stores; reject register MOVs.

    ModRM/SIB determine the optional displacement size. The final four bytes
    are the immediate guest DWORD; host pointer sizes never enter this rule.
    """
    if len(raw) < 6 or raw[0] != 0xc7 or (raw[1] >> 3) & 7:
        raise ValueError("Expected original MOV r/m32,imm32")
    mod, rm = raw[1] >> 6, raw[1] & 7
    if mod == 3:
        raise ValueError("Register destination is outside this batch")
    pos = 2
    base = rm
    if rm == 4:
        if len(raw) < 7:
            raise ValueError("Truncated SIB")
        base = raw[pos] & 7
        pos += 1
    pos += 1 if mod == 1 else 4 if mod == 2 or (mod == 0 and base == 5) else 0
    if len(raw) != pos + 4:
        raise ValueError("Invalid MOV immediate/displacement length")
    return int.from_bytes(raw[pos:], "little")


def before_source(case, text):
    if sha(text) != case["result_source_sha256"]:
        raise ValueError("Result source fingerprint differs: " + case["entry"])
    if text.count(case["added_comment"]) != 1:
        raise ValueError("Missing guest-address verification boundary")
    before = text.replace(case["added_comment"], "", 1)
    for edit in case["edits"]:
        if before.count(edit["after"]) != edit["count"]:
            raise ValueError("Replacement count differs: " + case["entry"])
        before = before.replace(edit["after"], edit["before"])
    if sha(before) != case["source_sha256"]:
        raise ValueError("Changes exceed the reviewed address literals")
    raw = before.encode("utf-8")
    blob = hashlib.sha1(b"blob " + str(len(raw)).encode() + b"\0" + raw).hexdigest()
    if blob != case["source_git_blob"]:
        raise ValueError("Original source Git blob differs")
    return before


def verify_source(root, manifest, compiler):
    cases = manifest["cases"]
    if (len(cases) != 63 or len({c["entry"] for c in cases}) != 63 or
            manifest["original_xbe_sha256"] != XBE_SHA):
        raise ValueError("Expected 63 unique reviewed original-address drafts")
    prior = json.loads((root / "metadata/cpp_20261031_direct_declarations_27.json").read_text())
    protected = {r["entry"] for c in prior["cases"] for r in [c, *c["dependencies"]]}
    protected.update(c["entry"] for c in prior["quarantine"])
    excluded = {c["entry"] for c in manifest["quarantine"]}
    if {c["entry"] for c in cases} & (protected | excluded):
        raise ValueError("Batch overlaps a separately owned/quarantined function")
    inventory = {r["entry"]: r for r in csv.DictReader(
        (root / "metadata/bulk_13694_inventory.csv").open(encoding="utf-8", newline=""))}
    stores = 0
    with tempfile.TemporaryDirectory(prefix="bf_guest_literals_") as temp:
        for case in cases:
            path = source_path(root, case["entry"])
            if path.relative_to(root).as_posix() != case["source"]:
                raise ValueError("Source path bypasses canonical layout")
            text = path.read_text(encoding="utf-8")
            before = before_source(case, text)
            body, conflict = read_body_digest(text)
            row = inventory[case["entry"]]
            if (conflict or body != case["body_sha256"] or
                    row["original_body_sha256"] != body or
                    row["c_sha256"] != sha(text) or "ABI_UNVERIFIED" not in text or
                    "Entry: " + case["entry"] not in text):
                raise ValueError("Source/inventory provenance or boundary differs")
            sites = set()
            for edit in case["edits"]:
                symbol = re.fullmatch(r"&((?:PTR_)?(?:LAB|FUN|DAT)_[0-9a-f]{8})", edit["before"])
                if not symbol:
                    raise ValueError("Replacement is not a known address label")
                value = int(symbol.group(1)[-8:], 16)
                if edit["after"] != f"UINT32_C(0x{value:08x})":
                    raise ValueError("Literal is not the original label VA")
                if len(edit["instructions"]) != edit["count"]:
                    raise ValueError("Source/store correspondence differs")
                for ins in edit["instructions"]:
                    site = int(ins["site"], 16)
                    if site in sites or not any(int(s["start"], 16) <= site and
                            site + len(bytes.fromhex(ins["bytes"])) - 1 <= int(s["end_inclusive"], 16)
                            for s in case["body_ranges"]):
                        raise ValueError("Duplicate or out-of-body original store")
                    sites.add(site)
                    if mov_memory_imm32(bytes.fromhex(ins["bytes"])) != value:
                        raise ValueError("Original DWORD immediate differs")
                    stores += 1
            flags = [compiler, "-std=c++17", "-fsyntax-only", "-ferror-limit=0",
                     "-Werror=pointer-to-int-cast", "-I", str(root / "include"),
                     "-iquote", str(path.parent)]
            for opt in ("-O0", "-O2"):
                result = subprocess.run([*flags, opt, str(path)], capture_output=True, text=True, timeout=60)
                if result.returncode:
                    raise ValueError("Strict C++17 failed: " + case["entry"] + "\n" + result.stderr)
            old = Path(temp) / path.name
            old.write_text(before, encoding="utf-8")
            control = subprocess.run([*flags, str(old)], capture_output=True, text=True, timeout=60)
            if control.returncode == 0 or not re.search(r"error:.*(?:pointer|incompatible)", control.stderr):
                raise ValueError("Restoration negative control failed")
            wrong = text.replace(case["edits"][0]["after"], "UINT32_C(0x00000000)", 1)
            try:
                before_source(case, wrong)
            except ValueError:
                pass
            else:
                raise ValueError("Changed-immediate negative control failed")
    print(f"PASS 63 bounded address-literal repairs; {stores} DWORD stores; "
          "strict C++17 O0/O2; 126 negative controls")


def verify_xbe(data, manifest):
    from audit_xbe_first_100 import mapped_span, xbe_sections
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
    if hashlib.sha256(data).hexdigest().upper() != XBE_SHA:
        raise ValueError("Original XBE SHA-256 differs")
    sections = xbe_sections(data)
    decoder = Cs(CS_ARCH_X86, CS_MODE_32)
    for case in manifest["cases"]:
        digest = hashlib.sha256()
        decoded = {}
        for span in case["body_ranges"]:
            start, end = int(span["start"], 16), int(span["end_inclusive"], 16)
            if span["length"] != end - start + 1:
                raise ValueError("Original body range length differs")
            raw = mapped_span(data, sections, start, span["length"])
            digest.update(raw)
            consumed = 0
            for ins in decoder.disasm(raw, start):
                consumed += ins.size
                decoded[ins.address] = ins
                if (ins.mnemonic.startswith("f") or re.search(r"\b[xyz]?mm[0-7]\b|\b[fg]s:", ins.op_str) or
                        (ins.mnemonic == "call" and ins.bytes[0] != 0xe8) or
                        (ins.mnemonic in ("sub", "add") and ins.op_str.startswith("esp,") and
                         not re.fullmatch(r"esp, (?:0x[0-9a-f]+|[0-9]+)", ins.op_str))):
                    raise ValueError("Complex original contract escaped quarantine: " + case["entry"])
            if consumed != len(raw):
                raise ValueError("Original body did not fully decode")
        if digest.hexdigest().upper() != case["body_sha256"]:
            raise ValueError("Complete original body SHA-256 differs")
        for edit in case["edits"]:
            value = int(edit["before"][-8:], 16)
            actual = {pc for pc, ins in decoded.items() if ins.mnemonic == "mov" and
                      ins.bytes[0] == 0xc7 and (ins.bytes[1] >> 6) != 3 and
                      mov_memory_imm32(bytes(ins.bytes)) == value}
            expected = {int(ins["site"], 16) for ins in edit["instructions"]}
            if actual != expected:
                raise ValueError("Original store occurrence set differs")
            for ins in edit["instructions"]:
                original = decoded[int(ins["site"], 16)]
                if bytes(original.bytes).hex() != ins["bytes"] or original.op_str != ins["operands"]:
                    raise ValueError("Original store boundary/operands differ")
    print("PASS pinned XBE; 63 complete original bodies and all MOV store boundaries")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=ROOT)
    parser.add_argument("--xbe", type=Path)
    parser.add_argument("--tooldeps", type=Path)
    args = parser.parse_args()
    if args.tooldeps:
        sys.path.insert(0, str(args.tooldeps))
    compiler = shutil.which("clang++")
    if not compiler:
        parser.error("clang++ required; verification cannot be skipped")
    root = args.root.resolve()
    manifest = json.loads((root / MANIFEST).read_text(encoding="utf-8"))
    verify_source(root, manifest, compiler)
    if args.xbe:
        verify_xbe(args.xbe.read_bytes(), manifest)
    else:
        print("Private XBE absent: instruction authenticity not rechecked in this run")
    print("Instruction-value facts only; complete ABI/behavior and native linkage remain unverified")


if __name__ == "__main__":
    main()
