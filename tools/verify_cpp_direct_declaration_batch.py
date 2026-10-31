#!/usr/bin/env python3
"""28 bounded source declarations; no recovered Xbox ABI or runtime claim."""
from __future__ import annotations
import argparse
import csv
import hashlib
import json
from pathlib import Path
import re
import shutil
import struct
import subprocess
import sys
import tempfile

from body_hash_labels import read_body_digest
from source_layout import source_path

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = "metadata/cpp_20261031_direct_declarations_28.json"
XBE_SHA = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"


def sha(text):
    return hashlib.sha256(text.encode("utf-8")).hexdigest()


def check_source(case, text):
    block = case["added_block"]
    if text.count(block) != 1 or "ABI_UNVERIFIED" not in block:
        raise ValueError("Declaration changed or verification boundary lost: " + case["entry"])
    if sha(text) != case["result_source_sha256"]:
        raise ValueError("Edited caller fingerprint differs: " + case["entry"])
    before = text.replace(block, "", 1)
    if sha(before) != case["source_sha256"]:
        raise ValueError("Caller changed beyond declaration: " + case["entry"])
    raw = before.encode("utf-8")
    blob = hashlib.sha1(b"blob " + str(len(raw)).encode() + b"\0" + raw).hexdigest()
    if blob != case["caller_git_blob"]:
        raise ValueError("Pre-edit Git blob differs: " + case["entry"])
    digest, conflict = read_body_digest(text)
    if conflict or digest != case["body_sha256"]:
        raise ValueError("Original caller body label changed: " + case["entry"])
    if "Entry: " + case["entry"] not in text:
        raise ValueError("Original caller identity changed")
    return before


def check_xbe(data, manifest):
    from audit_xbe_first_100 import mapped_span, xbe_sections
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
    if hashlib.sha256(data).hexdigest().upper() != XBE_SHA:
        raise ValueError("Original XBE hash differs")
    sections = xbe_sections(data)
    decoder = Cs(CS_ARCH_X86, CS_MODE_32)
    seen, instructions = {}, {}
    for case in manifest["cases"]:
        for record in [case, *case["dependencies"]]:
            entry = record["entry"]
            if entry in seen:
                if seen[entry] != record["body_sha256"]:
                    raise ValueError("Inconsistent body identity")
                continue
            digest = hashlib.sha256()
            decoded = {}
            for span in record["body_ranges"]:
                start, end = int(span["start"],16), int(span["end_inclusive"],16)
                if span["length"] != end-start+1:
                    raise ValueError("Invalid original body range")
                raw = mapped_span(data, sections, start, span["length"])
                digest.update(raw)
                consumed = 0
                for ins in decoder.disasm(raw, start):
                    consumed += ins.size
                    decoded[ins.address] = ins
                    # Quarantine immediate callers/callees with these contracts.
                    if (ins.mnemonic.startswith("f") or "xmm" in ins.op_str or
                        "mm0" in ins.op_str or "fs:" in ins.op_str or "gs:" in ins.op_str or
                        (ins.mnemonic == "call" and ins.bytes[0] != 0xe8)):
                        raise ValueError("Complex original instruction escaped quarantine: " + entry)
                if consumed != len(raw):
                    raise ValueError("Incomplete original instruction decoding: " + entry)
            if digest.hexdigest().upper() != record["body_sha256"]:
                raise ValueError("Original body fingerprint differs: " + entry)
            seen[entry] = record["body_sha256"]
            instructions[entry] = decoded
    edges = 0
    for case in manifest["cases"]:
        for dep in case["dependencies"]:
            if not dep["call_sites"]:
                raise ValueError("Declaration without original direct CALL")
            for call in dep["call_sites"]:
                site = int(call["site"],16)
                ins = instructions[case["entry"]].get(site)
                raw = mapped_span(data,sections,site,5)
                if (not ins or ins.mnemonic != "call" or ins.size != 5 or
                    raw.hex() != call["bytes"] or raw[0] != 0xe8 or
                    (site+5+struct.unpack_from("<i",raw,1)[0]) & 0xffffffff != int(dep["entry"],16)):
                    raise ValueError("Original CALL boundary/destination differs")
                edges += 1
    print(f"PASS pinned XBE; {len(seen)} complete bodies; {edges} decoded direct CALL sites")


def verify(root, manifest, compiler):
    cases = manifest["cases"]
    if len(cases) != 28 or len({c["entry"] for c in cases}) != 28:
        raise ValueError("Expected 28 unique original-address callers")
    if {c["entry"] for c in cases} & {c["entry"] for c in manifest["quarantine"]}:
        raise ValueError("A quarantined function was included in the repair batch")
    if manifest["original_xbe_sha256"] != XBE_SHA or not manifest["quarantine"]:
        raise ValueError("Missing evidence boundary or quarantine")
    index = {r["entry"]:r["original_body_sha256"] for r in csv.DictReader(
        (root/"metadata/bulk_13694_inventory.csv").open(encoding="utf-8", newline=""))}
    by_entry = {c["entry"]:c for c in cases}
    with tempfile.TemporaryDirectory(prefix="bf_decl28_") as temp:
        for case in cases:
            path = source_path(root,case["entry"])
            if path.relative_to(root).as_posix() != case["source"]:
                raise ValueError("Caller path bypasses canonical layout")
            text = path.read_text(encoding="utf-8")
            before = check_source(case,text)
            for record in [case,*case["dependencies"]]:
                if index[record["entry"]] != record["body_sha256"]:
                    raise ValueError("Original inventory/body mismatch")
            for dep in case["dependencies"]:
                callee = source_path(root,dep["entry"])
                if callee.relative_to(root).as_posix() != dep["source"]:
                    raise ValueError("Callee path bypasses canonical layout")
                definition = callee.read_text(encoding="utf-8")
                signature = " ".join(dep["signature"].split())
                if signature + " {" not in " ".join(definition.split()):
                    raise ValueError("Declaration conflicts with existing definition")
                if dep["entry"] in by_entry:
                    definition = check_source(by_entry[dep["entry"]],definition)
                if sha(definition) != dep["source_sha256"]:
                    raise ValueError("Callee changed since source review")
                if "extern " + dep["signature"] + ";\n" not in case["added_block"]:
                    raise ValueError("Declaration does not match exact source signature")
            flags = [compiler,"-std=c++17","-fsyntax-only","-ferror-limit=0",
                     "-I",str(root/"include"),"-iquote",str(path.parent)]
            for opt in ("-O0","-O2"):
                result = subprocess.run([*flags,opt,str(path)],capture_output=True,text=True)
                if result.returncode:
                    raise ValueError("Strict C++17 failed: "+case["entry"]+"\n"+result.stderr)
            old = Path(temp)/path.name
            old.write_text(before,encoding="utf-8")
            result = subprocess.run([*flags,str(old)],capture_output=True,text=True)
            if result.returncode == 0 or "use of undeclared identifier" not in result.stderr:
                raise ValueError("Declaration-removal negative control escaped")
            wrong = text.replace(case["added_block"],case["added_block"].replace("extern ","extern int ",1),1)
            try:
                check_source(case,wrong)
            except ValueError:
                pass
            else:
                raise ValueError("Wrong signature negative control escaped")
    milestone = json.loads((root/"docs/progress/milestones.json").read_text(encoding="utf-8"))
    if ([m["id"] for m in milestone["milestones"]] != ["cpp17_syntax","xbox_1_to_1","native_pc_linkage"] or
        milestone["syntax_pass_implies_behavior_or_linkage"] is not False or
        milestone["milestones"][1]["verified_function_count"] is not None or
        milestone["milestones"][1]["status"] != "not_comprehensively_verified" or
        milestone["milestones"][2]["status"] != "not_buildable_or_playable"):
        raise ValueError("Independent verification milestones were conflated")
    print("PASS 28 declaration-only repairs; strict C++17 O0/O2; 56 negative controls; three distinct milestones")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=ROOT)
    parser.add_argument("--xbe", type=Path)
    parser.add_argument("--tooldeps", type=Path)
    args = parser.parse_args()
    if args.tooldeps:
        sys.path.insert(0,str(args.tooldeps))
    root = args.root.resolve()
    compiler = shutil.which("clang++")
    if not compiler:
        parser.error("clang++ required; verification cannot be skipped")
    manifest = json.loads((root/MANIFEST).read_text(encoding="utf-8"))
    verify(root,manifest,compiler)
    if args.xbe:
        check_xbe(args.xbe.read_bytes(),manifest)
    else:
        print("Private XBE absent: original instruction evidence not rechecked in this run")


if __name__ == "__main__":
    main()
