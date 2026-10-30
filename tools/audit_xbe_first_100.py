#!/usr/bin/env python3
"""100 distinct x86-body provenance and Clang C++17 function passes.

An original-XBE m32fp/ret/body match verifies bytes, NOT linkability or runtime.
Some Ghidra body hashes may cover non-contiguous basic blocks. A failed
contiguous prefix search therefore remains unresolved, NOT disproven.
Never commit the original Xbox executable.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import json
import re
import shutil
import struct
import subprocess
from collections import Counter
from pathlib import Path

from body_hash_labels import read_body_digest
from source_layout import discovered_sources
from sweep_c11 import FLAGS

XBE_SHA256 = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
FIRST, HUNDREDTH, FOLLOWING = "0x00012000", "0x0001bd30", "0x0001bd90"

def xbe_sections(raw: bytes):
    if hashlib.sha256(raw).hexdigest().upper() != XBE_SHA256 or raw[:4] != b"XBEH":
        raise ValueError("Wrong original XBE identity; refusing evidence claim")
    base, = struct.unpack_from("<I", raw, 0x104)
    count, table_va = struct.unpack_from("<II", raw, 0x11C)
    offset = table_va-base
    if not 1 <= count <= 256 or not (0 <= offset and offset+count*56 <= len(raw)):
        raise ValueError("Invalid XBE section table")
    return [struct.unpack_from("<6I", raw, offset+n*56) for n in range(count)]

def mapped_span(raw: bytes, sections, address: int, length: int) -> bytes:
    for _flags, base, vsize, file_off, rsize, _name in sections:
        delta = address-base
        if 0 <= delta and delta+length <= min(vsize, rsize):
            start = file_off+delta
            if start+length <= len(raw):
                return raw[start:start+length]
    raise ValueError(f"Original XBE VA not file-backed: 0x{address:08X}")

def contiguous_length(raw: bytes, sections, address: int, limit: int, digest: str):
    body = mapped_span(raw, sections, address, limit)
    sha = hashlib.sha256()
    for size, byte in enumerate(body, 1):
        sha.update(bytes((byte,)))
        if sha.hexdigest().upper() == digest:
            return size
    return None

# These exact ordered byte spans reproduce the labelled original SHA-256 when
# concatenated. They were independently checked against the user's retail XBE.
# This does NOT establish the original control-flow graph or Ghidra block map.
# Offsets are relative to the function entry; no executable bytes are stored.
TWO_OR_THREE_SPAN_MATCHES = {
    "0x00012180": ((0,52),(55,61)),
    "0x000123f0": ((0,59),(62,68)),
    "0x00012580": ((0,37),(40,46)),
    "0x00012a50": ((0,54),(57,64)),
    "0x00015f30": ((0,22),(25,59),(62,68)),
    "0x00015fe0": ((0,54),(57,79)),
    "0x00016200": ((0,27),(30,64),(67,73)),
    "0x000163a0": ((0,37),(40,46)),
    "0x00016fd0": ((0,21),(24,30)),
    "0x0001a420": ((0,87),(104,185)),
    "0x0001b650": ((0,187),(190,224)),
    "0x0001b7a0": ((0,220),(223,260)),
    "0x0001b910": ((0,182),(185,221)),
    "0x0001bb30": ((0,237),(243,283)),
    "0x0001bc90": ((0,40),(44,67)),
}

def ordered_span_digest_match(raw, sections, address, bound, digest, spans):
    if not spans or spans[0][0] != 0:
        raise ValueError("Invalid initial original-XBE span")
    prev=0
    for start,end in spans:
        if start < prev or end <= start or end > bound:
            raise ValueError("Out-of-order or out-of-bounds original-XBE evidence span")
        prev=end
    body=mapped_span(raw,sections,address,prev)
    combined=b"".join(body[start:end] for start,end in spans)
    if hashlib.sha256(combined).hexdigest().upper()!=digest:
        raise ValueError(f"Original-XBE selected-span digest mismatch at 0x{address:08X}")
    return len(combined)

def audit(root: Path, xbe: Path | None, output: Path):
    root = root.resolve()
    ordered = sorted((path for path in discovered_sources(root)
                      if path.parent.name == "band_0001"), key=lambda p:p.stem)
    if (len(ordered)<=100 or ordered[0].stem != FIRST or
        ordered[99].stem != HUNDREDTH or ordered[100].stem != FOLLOWING):
        raise ValueError("First hundred XBE function identities changed; review selection")
    original = xbe.read_bytes() if xbe else None
    sections = xbe_sections(original) if original is not None else None
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("Clang required for 100 actual C++17 syntax passes")
    results=[]
    for i, path in enumerate(ordered[:100]):
        entry=path.stem
        digest, conflict=read_body_digest(path.read_text(encoding="utf-8",errors="replace"))
        if conflict or digest is None:
            raise ValueError(f"No unique original body hash label: {entry}")
        addr=int(entry,16)
        next_entry=int(ordered[i+1].stem,16)
        if next_entry<=addr:
            raise ValueError("Function entries not increasing")
        p=subprocess.run([clang, *FLAGS, "-I", str(root/"include"), str(path)],
                         capture_output=True,text=True,errors="replace",timeout=60)
        body_size=(contiguous_length(original, sections, addr, next_entry-addr, digest)
                   if original is not None else None)
        selected_size=None
        if original is not None and body_size is None and entry in TWO_OR_THREE_SPAN_MATCHES:
            selected_size=ordered_span_digest_match(
                original,sections,addr,next_entry-addr,digest,
                TWO_OR_THREE_SPAN_MATCHES[entry])
        status=("not_checked_no_xbe" if original is None else
                "verified_contiguous_xbe_body" if body_size is not None else
                "verified_selected_xbe_spans_cfg_unverified" if selected_size is not None else
                "requires_block_map_review")
        errors=re.findall(r"error:\s*([^\n]+)",p.stderr)
        results.append({"pass":i+1,"entry":entry,"source_file":path.relative_to(root).as_posix(),
                        "original_body_sha256":digest,"original_xbe_check":status,
                        "verified_contiguous_body_bytes":body_size,
                        "verified_selected_body_bytes":selected_size,
                        "selected_spans_relative":TWO_OR_THREE_SPAN_MATCHES.get(entry),
                        "next_discovered_function":f"0x{next_entry:08x}",
                        "c11_syntax":"pass" if p.returncode==0 else "fail",
                        "first_error":errors[0] if errors else ""})
    counts=Counter(r["c11_syntax"] for r in results)
    xbe_counts=Counter(r["original_xbe_check"] for r in results)
    report={"scope":"100 separate functions; syntax, XBE provenance and ABI are distinct",
            "original_xbe_sha256_required":XBE_SHA256,"function_passes":100,
            "syntax":dict(counts),"xbe_evidence":dict(xbe_counts),"results":results}
    output.parent.mkdir(parents=True,exist_ok=True)
    output.write_text(json.dumps(report,indent=2)+"\n",encoding="utf-8")
    with output.with_suffix(".csv").open("w",encoding="utf-8",newline="") as f:
        writer=csv.DictWriter(f,fieldnames=results[0].keys())
        writer.writeheader()
        writer.writerows(results)
    print("100 function passes: C++17 pass",counts["pass"],"fail",counts["fail"],
          "original-XBE evidence",dict(xbe_counts))
    for item in results:
        if item["c11_syntax"]=="fail":
            print("C++17_FAIL",item["entry"],item["first_error"][:150])
    if original is None:
        print("Original XBE not supplied: byte-level equivalence NOT tested on CI.")
    elif (xbe_counts["verified_contiguous_xbe_body"]!=83 or
          xbe_counts["verified_selected_xbe_spans_cfg_unverified"]!=15 or
          xbe_counts["requires_block_map_review"]!=2 or
          {r["entry"] for r in results
           if r["original_xbe_check"]=="requires_block_map_review"} !=
          {"0x00017770", "0x0001bd30"} or
          next(r for r in results if r["entry"]=="0x0001afe0")
          ["verified_contiguous_body_bytes"] != 1143):
        raise ValueError("Unexpected original-XBE body-match distribution; investigate")
    return report

if __name__=="__main__":
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe",type=Path,help="User-owned XBE stays outside repository")
    parser.add_argument("--out",type=Path,
                        default=Path("c11_sweep_results/first_100_function_passes.json"))
    args=parser.parse_args()
    audit(args.root,args.xbe,args.out)
