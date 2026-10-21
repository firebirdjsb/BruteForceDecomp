#!/usr/bin/env python3
"""Fail closed for C++ syntax, source provenance mistakes, and binary uploads.

This is a static hygiene check; it does not prove semantic or ABI equivalence.
"""
import pathlib
import re
import sys

from update_migration_status import read_index

root = pathlib.Path(__file__).resolve().parents[1]
prohibited = {'.xbe', '.xiso', '.iso', '.img', '.bin', '.pak', '.tgz', '.xwb',
              '.xpr', '.bik', '.mgf', '.jwad', '.gbf', '.sqlite3', '.cpp', '.cxx', '.cc'}
for file in root.rglob('*'):
    if not file.is_file() or '.git' in file.parts:
        continue
    if file.suffix.lower() in prohibited:
        print('PROHIBITED ARTIFACT:', file)
        sys.exit(2)
entries = read_index(root)
for file in (root / 'src').glob('*.c'):
    code = file.read_text(encoding='utf-8')
    if re.search(r'\b(?:reinterpret_cast|static_cast|dynamic_cast|const_cast|nullptr|namespace|class|template|using|auto)\b|std::|#include\s*<c(?:stdint|stddef|string)>|::', code):
        print('C++ CONSTRUCT FOUND:', file)
        sys.exit(3)
    address = file.stem.lower()
    if address not in entries:
        print('FUNCTION NOT IN BASELINE INVENTORY:', file)
        sys.exit(4)
    match = re.search(r'Original body SHA-256:\s*([A-Fa-f0-9]{64})', code)
    if not match or match.group(1).upper() != entries[address]:
        print('BAD OR MISSING BODY SHA-256:', file)
        sys.exit(5)
print('C-only, provenance, and artifact checks passed; behavior remains unverified.')
