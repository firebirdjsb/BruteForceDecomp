#!/usr/bin/env python3
"""Reject known C++ tokens, mismatched XBE function hashes and game artifacts."""
import re
import sys
from pathlib import Path
from update_migration_status import read_index

root = Path(__file__).resolve().parents[1]
blocked = {".xbe", ".xiso", ".iso", ".img", ".bin", ".pak", ".tgz",
           ".xwb", ".xpr", ".bik", ".mgf", ".jwad", ".gbf", ".sqlite3",
           ".cpp", ".cxx", ".cc"}
for p in root.rglob("*"):
    if p.is_file() and ".git" not in p.parts and p.suffix.lower() in blocked:
        sys.exit("Prohibited artifact: " + str(p))
entries = read_index(root)
for p in (root / "src").glob("*.c"):
    s = p.read_text(encoding="utf-8")
    if re.search(r"\b(?:reinterpret_cast|static_cast|dynamic_cast|const_cast|nullptr|namespace|class|template|using|auto)\b|std::|#include\s*<c(?:stdint|stddef|string)>|::", s):
        sys.exit("C++ syntax in " + str(p))
    m = re.search(r"Original body SHA-256:\s*([A-Fa-f0-9]{64})", s)
    if p.stem.lower() not in entries or not m or m.group(1).upper() != entries[p.stem.lower()]:
        sys.exit("Missing or mismatched original XBE hash in " + str(p))
print("C11/source-provenance and artifact hygiene checks passed; runtime semantics unverified.")
