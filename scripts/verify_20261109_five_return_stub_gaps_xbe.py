#!/usr/bin/env python3
"""Read-only retail-XBE check for five existing return-only C++ drafts.

Validates Ghidra-selected original bodies, including SEH-discontiguous ranges.
This authenticates bytes and a few instruction sites, NOT x87/SEH behavior,
original ABI, exception coverage, source parity, or native linkage.
Never include the original game XBE in commits or test fixtures.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from pathlib import Path

from verify_nine_cpp_call_edges_xbe import XBE_SHA256, sections, file_offset

ROOT = Path(__file__).resolve().parents[1]
EVIDENCE = ROOT / "metadata/20261109_five_return_stub_gaps.json"


def verify(xbe: bytes, manifest: dict, *, require_original_xbe_hash: bool = True,
           mutation_controls: bool = False) -> dict:
    digest = hashlib.sha256(xbe).hexdigest()
    if require_original_xbe_hash and digest != XBE_SHA256:
        raise ValueError("Not the authenticated original retail XBE")
    if manifest.get("original_xbe_sha256", "").lower() != XBE_SHA256:
        raise ValueError("Manifest XBE identity drift")
    layout = sections(xbe)
    verified = []
    mutations = 0
    for entry in manifest["functions"]:
        va = int(entry["entry"], 16)
        segments = []
        for start, length in entry["ghidra_selected_ranges"]:
            if start < 0 or length < 1:
                raise ValueError("Invalid selected range")
            absolute = va + start
            offset = file_offset(layout, absolute, length)
            segments.append(xbe[offset: offset + length])
        selected = b"".join(segments)
        expected = entry["original_body_sha256"].lower()
        if len(selected) != entry["selected_bytes"]:
            raise ValueError(f"Incorrect selection length at {va:08x}")
        if hashlib.sha256(selected).hexdigest() != expected:
            raise ValueError(f"Original body hash mismatch at {va:08x}")
        for window in entry["instruction_windows"]:
            site = va + window[0]
            opcode = bytes.fromhex(window[1])
            offset = file_offset(layout, site, len(opcode))
            if xbe[offset: offset + len(opcode)] != opcode:
                raise ValueError(f"Original opcode mismatch at {site:08x}")
        if mutation_controls:
            for i in range(len(selected)):
                modified = bytearray(selected)
                modified[i] ^= 1
                if hashlib.sha256(modified).hexdigest() == expected:
                    raise AssertionError("Byte mutation was not detected")
                mutations += 1
        verified.append({"entry": entry["entry"], "selected_bytes": len(selected),
                         "selected_ranges": entry["ghidra_selected_ranges"],
                         "instruction_windows": len(entry["instruction_windows"]),
                         "original_body_sha256": expected,
                         "behavior_status": "NOT_VERIFIED"})
    if len(verified) != 5 or len({x["entry"] for x in verified}) != 5:
        raise ValueError("Expected exactly five unique entries")
    return {"original_xbe_sha256": digest, "verified_grafted_original_bodies": len(verified),
            "verified_selected_bytes": sum(x["selected_bytes"] for x in verified),
            "verified_instruction_windows": sum(x["instruction_windows"] for x in verified),
            "single_byte_mutations_rejected": mutations,
            "reconstruction_status": "EMPTY_DRAFTS_UNVERIFIED", "functions": verified}


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, required=True)
    parser.add_argument("--manifest", type=Path, default=EVIDENCE)
    parser.add_argument("--self-test", action="store_true")
    args = parser.parse_args()
    result = verify(args.xbe.read_bytes(), json.loads(args.manifest.read_text()),
                    mutation_controls=args.self_test)
    print(f"PASS original retail XBE: {result['verified_grafted_original_bodies']} selected bodies, "
          f"{result['verified_selected_bytes']} bytes, "
          f"{result['verified_instruction_windows']} selected opcode windows, "
          f"{result['single_byte_mutations_rejected']} mutation controls")
    print("UNVERIFIED: native x87/SEH semantics, guest stack/register ABI and gameplay")


if __name__ == "__main__":
    main()
