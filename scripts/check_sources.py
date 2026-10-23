#!/usr/bin/env python3
"""C11-only, XBE-body-label and exact inventory hygiene; not behavioral verification."""
import csv
import pathlib
import re
import sys
sys.path.insert(0, str(pathlib.Path(__file__).resolve().parents[1] / "tools"))
from source_layout import discovered_sources
from body_hash_labels import read_body_digest

CXX = re.compile(r'\b(?:reinterpret_cast|static_cast|dynamic_cast|const_cast|nullptr|namespace|class|template|using|auto)\b|std::|#include\s*<c(?:stdint|stddef|string)>|::')
NON_CODE = re.compile(r'/\*.*?\*/|//[^\n]*|"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'', re.S)


def contains_cxx(source):
    """Lexical hygiene only; comments/literals are not C++ syntax evidence."""
    source = re.sub(r'\\\r?\n', '', source)  # C line splicing precedes comments.
    return CXX.search(NON_CODE.sub(' ', source)) is not None


def main():
    root = pathlib.Path(__file__).resolve().parents[1]
    prohibited = {'.xbe', '.xiso', '.iso', '.img', '.bin', '.pak', '.tgz', '.xwb',
                  '.xpr', '.bik', '.mgf', '.jwad', '.gbf', '.sqlite3', '.cpp', '.cxx', '.cc'}
    for path in root.rglob('*'):
        if path.is_file() and '.git' not in path.parts and path.suffix.lower() in prohibited:
            raise SystemExit(f"PROHIBITED ARTIFACT: {path}")
    with (root / "metadata/bulk_13694_inventory.csv").open(encoding="utf-8", newline="") as stream:
        indexed = {r["entry"].lower(): r["original_body_sha256"].upper() for r in csv.DictReader(stream)}
    paths = discovered_sources(root)
    if len(paths) != 13694 or len(indexed) != 13694:
        raise SystemExit("Full 13694-function inventory is incomplete")
    for path in paths:
        source = path.read_text(encoding="utf-8")
        if contains_cxx(source):
            raise SystemExit(f"C++ CONSTRUCT FOUND: {path}")
        embedded, conflict = read_body_digest(source)
        if conflict or embedded != indexed.get(path.stem.lower()):
            raise SystemExit(f"BAD OR MISSING XBE BODY SHA-256: {path}")
    print("13694 C11 source locations and original XBE body-label provenance checked.")
    print("Host compiler, Xbox ABI, PC linking and behavioral equivalence remain independent gates.")


if __name__ == '__main__':
    main()
