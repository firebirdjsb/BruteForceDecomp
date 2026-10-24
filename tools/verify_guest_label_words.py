#!/usr/bin/env python3
"""Check 26 original-XBE-backed guest-address words; NOT host callbacks/ABI."""
from __future__ import annotations
import argparse
import csv
import hashlib
import re
import shutil
import subprocess
from pathlib import Path
from repair_verified_guest_immediates import FLAGS, original_xbe_reader, prove_instruction
from source_layout import source_path

def run(root: Path, manifest: Path, xbe: Path | None, xbe_only: bool, verify: bool):
    with manifest.open(encoding='utf-8', newline='') as stream:
        reader = csv.DictReader(stream)
        expected = {'entry','label','source_git_blob_sha','repaired_git_blob_sha',
                    'proof_instruction_va','proof_mnemonic'}
        if not expected.issubset(reader.fieldnames or []):
            raise ValueError('Manifest fields missing')
        rows = list(reader)
    if len(rows) != 26:
        raise ValueError('Expected exactly 26 reviewed original words')
    if xbe_only and (not xbe or verify):
        raise ValueError('--xbe-only requires --xbe and excludes --verify')
    read_xbe = original_xbe_reader(xbe) if xbe else None
    clang = shutil.which('clang') if verify else None
    if verify and not clang:
        raise RuntimeError('Clang required')
    seen = set()
    for row in rows:
        entry, label = row['entry'], row['label']
        if (not re.fullmatch(r'0x[0-9a-f]{8}',entry) or entry in seen or
                not re.fullmatch(r'LAB_[0-9a-f]{8}',label) or
                row['proof_mnemonic'] not in ('push','mov')):
            raise ValueError(f'Unreviewed entry/label: {entry}')
        seen.add(entry)
        if read_xbe:
            prove_instruction(read_xbe, row)
        if xbe_only:
            continue
        source = source_path(root, entry)
        content = source.read_bytes()
        blob = hashlib.sha1(b'blob '+str(len(content)).encode()+b'\0'+content).hexdigest()
        if blob != row['repaired_git_blob_sha']:
            raise ValueError(f'Changed source blob: {entry}')
        text = content.decode('utf-8')
        word = f'(uintptr_t)0x{int(label[-8:],16):08x}U'
        if (text.count(word)!=1 or '&'+label in text or
                f'Entry: {entry},' not in text or
                not re.search(r'Input x86 body SHA-256: [0-9A-F]{64}',text)):
            raise ValueError(f'Provenance/word mismatch: {entry}')
        if verify:
            p = subprocess.run([clang,*FLAGS,'-I',str(root/'include'),str(source)],
                               capture_output=True,text=True,timeout=60)
            if p.returncode:
                raise ValueError(f'Clang C11 failure {entry}: {p.stderr[:700]}')
    print(f'{len(rows)} source word anchors checked; original XBE: '
          f'{"verified" if read_xbe else "not supplied"}; '
          f'isolated Clang C11: {"verified" if verify else "not requested"}; '
          'native runtime/ABI/host pointers remain unverified')

if __name__ == '__main__':
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    ap.add_argument('--manifest',type=Path)
    ap.add_argument('--xbe',type=Path)
    ap.add_argument('--xbe-only',action='store_true')
    ap.add_argument('--verify',action='store_true')
    args=ap.parse_args()
    root=args.root.resolve()
    run(root,args.manifest or root/'metadata/verified_guest_label_words_pass_3.csv',
        args.xbe,args.xbe_only,args.verify)
