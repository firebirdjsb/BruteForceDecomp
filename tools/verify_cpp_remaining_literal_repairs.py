#!/usr/bin/env python3
"""209 further partial repairs; deliberately no C++17 pass credit."""
import argparse
import json
from pathlib import Path
import shutil
import sys
from verify_cpp_literal_declaration_batch import verify

ROOT=Path(__file__).resolve().parents[1]

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--xbe',type=Path)
    p.add_argument('--tooldeps',type=Path)
    a=p.parse_args()
    if a.tooldeps:sys.path.insert(0,str(a.tooldeps))
    compiler=shutil.which('clang++')
    if not compiler:p.error('clang++ required')
    manifest=json.loads((ROOT/'metadata/cpp_20261101_remaining_literal_repairs.json').read_text(encoding='utf-8'))
    verify(ROOT,manifest,compiler,a.xbe.read_bytes() if a.xbe else None,
           approved_counts={'total':209,'complete':0,'partial':209,'values':469})
