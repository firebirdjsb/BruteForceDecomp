#!/usr/bin/env python3
"""Lexical C symbol identity inventory; not proof of Xbox ABI/linking/1:1 behavior."""
from __future__ import annotations
import argparse
import csv
import re
from collections import Counter
from pathlib import Path
from source_layout import discovered_sources

ALIAS = re.compile(r"(?m)^[ \t]*#define[ \t]+([A-Za-z_]\w*)[ \t]+(FUN_[0-9a-fA-F]{8})\b")
C_FUNC = re.compile(r"\b([A-Za-z_]\w*)\s*\([^;{}]*\)\s*\{", re.S)
CONTROL = {"if", "for", "while", "switch", "do"}

def defined_names(source: str) -> set[str]:
    """Return lexical definition candidates; deliberately not a C parser."""
    return {m.group(1) for m in C_FUNC.finditer(source) if m.group(1) not in CONTROL}

def audit_source(entry: str, source: str, aliases: dict[str, list[str]]) -> tuple[str, str]:
    expected = "FUN_" + entry.removeprefix("0x")
    names = defined_names(source)
    if expected in names:
        return "direct_name_candidate", expected
    if '"bf_recovered_function_names.h"' in source:
        for alias in aliases.get(expected.upper(), []):
            if alias in names:
                return "macro_alias_candidate", alias
    return "requires_identity_review", ",".join(sorted(names)[:6])

def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--out", type=Path, default=Path("c11_sweep_results/entry_symbol_audit.csv"))
    args = ap.parse_args()
    # Layout discovery returns absolute paths, including when CI passes --root .
    root = args.root.resolve()
    header = root / "include/bf_recovered_function_names.h"
    aliases: dict[str, list[str]] = {}
    if header.exists():
        for match in ALIAS.finditer(header.read_text(encoding="utf-8", errors="replace")):
            aliases.setdefault(match.group(2).upper(), []).append(match.group(1))
    rows = []
    for path in discovered_sources(root):
        entry = path.stem.lower()
        source = path.read_text(encoding="utf-8", errors="replace")
        status, candidate = audit_source(entry, source, aliases)
        rows.append((entry, path.relative_to(root).as_posix(), status, candidate))
    args.out.parent.mkdir(parents=True, exist_ok=True)
    with args.out.open("w", encoding="utf-8", newline="") as out:
        writer = csv.writer(out)
        writer.writerow(("entry", "source_file", "lexical_symbol_status", "definition_candidate"))
        writer.writerows(rows)
    print("Lexical entry-symbol review (NOT ABI or binary verification):",
          len(rows), dict(Counter(row[2] for row in rows)))

if __name__ == "__main__":
    main()
