#!/usr/bin/env python3
"""209 original literal repairs; 14 later XBE-gated syntax completions."""
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
    overlay_doc=json.loads((ROOT/'metadata/cpp_20261101_remaining_literal_overlay_14.json').read_text(encoding='utf-8'))
    entries=overlay_doc['overlays']
    overlays={c['entry']:c for c in entries}
    expected={'0x00290d10','0x00290f80','0x00291190','0x002913d0',
              '0x00291530','0x00291750','0x00291870','0x00291a90',
              '0x00291b90','0x00291de0','0x00291ed0','0x002920d0',
              '0x00292180','0x00292290'}
    if (overlay_doc['original_xbe_sha256'] != manifest['original_xbe_sha256']
            or len(entries) != 14 or set(overlays) != expected):
        raise ValueError('209-case independently verified 14-overlay identity changed')
    verify(ROOT,manifest,compiler,a.xbe.read_bytes() if a.xbe else None,
           approved_counts={'total':209,'complete':0,'partial':209,'values':469},
           overlays=overlays)
