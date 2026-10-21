#!/usr/bin/env python3
"""Refresh C11 draft presence by recorded XBE function identity.

Generated status is not evidence that a function has been behaviorally verified.
User review records are separate and never overwritten by this utility.
"""
import argparse
import csv
import hashlib
import json
import pathlib
import re


def read_index(root):
    jpath = root / 'metadata' / 'legacy_draft_inventory.json'
    cpath = root / 'metadata' / 'legacy_drafts.csv'
    from_json = None
    if jpath.exists():
        data = json.loads(jpath.read_text(encoding='utf-8'))
        from_json = {row['entry'].lower(): row['body_sha256'].upper() for row in data['records']}
    from_csv = None
    if cpath.exists():
        with cpath.open(newline='', encoding='utf-8-sig') as f:
            from_csv = {row['entry'].lower(): row['body_sha256'].upper() for row in csv.DictReader(f)}
    if from_json is None and from_csv is None:
        raise ValueError('Missing metadata/legacy_drafts.csv and metadata/legacy_draft_inventory.json')
    if from_json is not None and from_csv is not None and from_json != from_csv:
        raise ValueError('The two inventory files disagree; refusing to create misleading progress')
    return from_csv if from_csv is not None else from_json


def main():
    p = argparse.ArgumentParser()
    p.add_argument('--root', type=pathlib.Path, default=pathlib.Path(__file__).resolve().parents[1])
    args = p.parse_args()
    root = args.root.resolve()
    entries = read_index(root)
    rows = []
    for entry, body_hash in sorted(entries.items()):
        if not re.fullmatch(r'0x[0-9a-f]{8}', entry):
            raise ValueError('Invalid entry address ' + entry)
        if not re.fullmatch(r'[0-9A-F]{64}', body_hash):
            raise ValueError('Invalid source body hash ' + entry)
        file = root / 'src' / (entry + '.c')
        state = 'C11_Pending'
        item = {'entry': entry, 'original_body_sha256': body_hash, 'c11_status': state,
                'review_status': 'Unverified'}
        if file.exists():
            raw = file.read_bytes()
            text = raw.decode('utf-8')
            match = re.search(r'Original body SHA-256:\s*([A-Fa-f0-9]{64})', text)
            if not match or match.group(1).upper() != body_hash:
                raise ValueError('Source provenance mismatch in ' + str(file))
            item['c11_status'] = 'C11_Draft'
            item['c_sha256'] = hashlib.sha256(raw).hexdigest()
        rows.append(item)
    result = {'schema_version': 1,
              'original_xbe_sha256': 'B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721',
              'ghidra_discovered_functions': 13694,
              'legacy_drafts': len(rows),
              'c11_drafts': sum(row['c11_status'] == 'C11_Draft' for row in rows),
              'pending_c_conversion': sum(row['c11_status'] == 'C11_Pending' for row in rows),
              'behaviorally_verified': 0,
              'records': rows}
    target = root / 'metadata' / 'migration_status.json'
    target.write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print('C11 drafts:', result['c11_drafts'], '/', len(rows), 'pending:', result['pending_c_conversion'])


if __name__ == '__main__':
    main()
