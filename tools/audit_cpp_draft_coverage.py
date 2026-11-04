#!/usr/bin/env python3
"""Audit canonical Ghidra-indexed C++ drafts for structural coverage.

This does NOT compare C++ bodies with the private Ghidra export or original
XBE instructions; it NEVER awards 1:1 semantic verification credit.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
import os
import re
from pathlib import Path

EXPECTED = 13694
ENTRY = re.compile(r"0x[0-9a-f]{8}\Z")
SHA256 = re.compile(r"[0-9a-fA-F]{64}\Z")
NON_CODE = re.compile(r"/\*.*?\*/|//[^\n]*|\"(?:\\.|[^\"\\])*\"|'(?:\\.|[^'\\])*'", re.S)
DEFINITION = re.compile(r"\)\s*(?:(?:const|noexcept|override|final)\s*)*\{", re.S)
RET_ONLY_BODY_SHA = {hashlib.sha256(b"\xc3").hexdigest().upper()}
RET_ONLY_BODY_SHA.update(
    hashlib.sha256(b"\xc2" + n.to_bytes(2, "little")).hexdigest().upper()
    for n in range(0, 513, 4)
)


def source_shape(source: str, entry: str, original_body_sha: str, *,
                 reviewed_alias: bool = False) -> tuple[list[str], list[str]]:
    """Return structural errors and non-blocking evidence-review flags."""
    problems: list[str] = []
    reviews: list[str] = []
    if entry.lower() not in source.lower():
        problems.append("missing_original_entry_identity")
    code = NON_CODE.sub(" ", source)
    code = re.sub(r"^\s*#.*?$", " ", code, flags=re.M)
    definition = DEFINITION.search(code)
    if definition is None:
        problems.append("no_lexical_function_definition")
    else:
        opening = definition.end() - 1
        depth, closing = 0, None
        for pos in range(opening, len(code)):
            if code[pos] == "{":
                depth += 1
            elif code[pos] == "}":
                depth -= 1
                if depth == 0:
                    closing = pos
                    break
        if closing is None:
            problems.append("unclosed_lexical_function_body")
        else:
            body = code[opening + 1:closing].strip()
            if body in ("", "return;") and original_body_sha.upper() not in RET_ONLY_BODY_SHA:
                reviews.append("empty_or_return_only_body_requires_original_x86_review")
    if not reviewed_alias and not re.search(r"\b(?:FUN_|BF_)" + entry[2:] + r"(?:\b|_)", code, re.I):
        reviews.append("canonical_function_symbol_not_found_review_renaming")
    if re.search(r"\b(?:GHIDRA_EXPORT_MISSING|NO_GHIDRA_DRAFT|NOT_DECOMPILED)\b", source, re.I):
        reviews.append("explicit_missing_ghidra_export_marker")
    return problems, reviews


def audit(root: Path, *, expected: int = EXPECTED) -> dict:
    from body_hash_labels import read_body_digest
    from source_layout import discovered_sources

    root = root.resolve()
    with (root / "metadata/bulk_13694_inventory.csv").open(encoding="utf-8-sig", newline="") as stream:
        inventory = list(csv.DictReader(stream))
    indexed: dict[str, str] = {}
    failures: list[dict] = []
    reviews: list[dict] = []
    per_function: list[dict] = []
    for row in inventory:
        entry = row.get("entry", "").lower()
        digest = row.get("original_body_sha256", "").upper()
        if not ENTRY.fullmatch(entry) or not SHA256.fullmatch(digest) or entry in indexed:
            failures.append({"entry": entry, "reason": "invalid_or_duplicate_inventory_entry"})
            continue
        indexed[entry] = digest
    if len(inventory) != expected or len(indexed) != expected:
        failures.append({"entry": "inventory", "reason": "unexpected_inventory_count"})

    sources = discovered_sources(root)
    source_by_entry = {p.stem.lower(): p for p in sources}
    if len(sources) != expected:
        failures.append({"entry": "source_tree", "reason": "unexpected_cpp_file_count"})
    for entry in sorted(set(indexed) - set(source_by_entry)):
        failures.append({"entry": entry, "reason": "missing_canonical_cpp_draft"})
        per_function.append({
            "entry": entry, "source": None, "structural_draft": "MISSING",
            "original_ghidra_export_body_match": "NOT_CHECKED",
            "original_x86_semantics_1_to_1": "NOT_VERIFIED",
        })
    for entry in sorted(set(source_by_entry) - set(indexed)):
        failures.append({"entry": entry, "reason": "unindexed_cpp_draft"})

    return_only_hash_compatible = 0
    for entry in sorted(set(indexed) & set(source_by_entry)):
        path = source_by_entry[entry]
        content = path.read_bytes()
        source = content.decode("utf-8", "replace")
        expected_digest = indexed[entry]
        embedded_digest, conflict = read_body_digest(source)
        errors: list[str] = []
        if conflict or embedded_digest != expected_digest:
            errors.append("original_xbe_body_hash_LABEL_mismatch")
        if not content:
            errors.append("empty_source_file")
        structural, review_flags = source_shape(
            source, entry, expected_digest,
            reviewed_alias="/reviewed_by_assembly/" in path.as_posix(),
        )
        errors.extend(structural)
        failures.extend({"entry": entry, "reason": issue} for issue in errors)
        reviews.extend({"entry": entry, "reason": issue} for issue in review_flags)
        if expected_digest in RET_ONLY_BODY_SHA:
            return_only_hash_compatible += 1
        per_function.append({
            "entry": entry,
            "source": path.relative_to(root).as_posix(),
            "source_sha256": hashlib.sha256(content).hexdigest(),
            "original_x86_body_sha256_label": expected_digest,
            "structural_draft": "PRESENT" if not errors else "INVALID",
            "review_flags": review_flags,
            "original_ghidra_export_body_match": "NOT_CHECKED",
            "original_x86_semantics_1_to_1": "NOT_VERIFIED",
        })
    per_function.sort(key=lambda row: row["entry"])

    return {
        "schema_version": 1,
        "metric": "C++ draft structural coverage of Ghidra indexed functions only",
        "audited_commit": os.environ.get("GITHUB_SHA", "local-checkout"),
        "inventory_expected": expected,
        "original_ghidra_index_entries": len(inventory),
        "canonical_cpp_files": len(sources),
        "source_bodies_examined_structurally": len(set(indexed) & set(source_by_entry)),
        "structural_problem_count": len(failures),
        "fidelity_review_flag_count": len(reviews),
        "original_x86_return_digest_compatible_count": return_only_hash_compatible,
        "status": "DRAFT_STRUCTURE_PRESENT" if not failures else "DRAFT_STRUCTURE_INCOMPLETE",
        "original_ghidra_body_comparison": "NOT_PERFORMED; complete private Ghidra source export is unavailable",
        "original_xbe_body_digest": "LABEL_ONLY; not independent binary verification",
        "x86_instruction_parity": "NOT_VERIFIED_BY_THIS_AUDIT",
        "verified_1_to_1_game_completion_percentage": None,
        "cpp17_syntax_coverage": "MEASURED_SEPARATELY_BY_FULL_CLANG_AUDIT",
        "scope_limit": "Known Ghidra-exported entries only; unidentified Xbox code may also exist",
        "structural_failures": failures,
        "fidelity_review_queue": reviews,
        "functions": per_function,
    }


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    p.add_argument("--out", type=Path, default=Path("cpp_compat_results/cpp_draft_coverage.json"))
    args = p.parse_args()
    report = audit(args.root)
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    print(f"Draft structural audit: {report['source_bodies_examined_structurally']}/{EXPECTED} examined; "
          f"{report['structural_problem_count']} structural problems; "
          f"{report['fidelity_review_flag_count']} original-XBE review flags")
    print("NOT VERIFIED: original Ghidra body equivalence, full x86/C++ ABI, 1:1 game behavior")
    if report["structural_problem_count"]:
        for item in report["structural_failures"][:20]:
            print(f"FAIL: {item['entry']}: {item['reason']}")
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
