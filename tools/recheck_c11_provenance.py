#!/usr/bin/env python3
"""Recalculate C-source SHA-256 without changing the original Xbox body hashes."""
import argparse
import csv
import hashlib
import pathlib

from body_hash_labels import read_body_digest
from source_layout import source_path

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=pathlib.Path, default=pathlib.Path(__file__).resolve().parents[1])
    parser.add_argument('--refresh', action='store_true', help='update only the c_sha256 inventory column after review')
    args = parser.parse_args()
    root = args.root.resolve()
    # The repository's canonical inventory is bulk_13694_inventory.csv.
    # Do not accidentally read an obsolete legacy file or silently skip it.
    inventory = root / 'metadata' / 'bulk_13694_inventory.csv'
    if not inventory.is_file():
        raise SystemExit('Canonical 13,694-function inventory missing')
    with inventory.open(encoding='utf-8', newline='') as stream:
        rows = list(csv.DictReader(stream))
        columns = list(rows[0])
    if 'c_sha256' not in columns or 'original_body_sha256' not in columns:
        raise SystemExit('Expected original-body and C-source hash inventory columns')
    changed, missing, mismatched, not_embedded = [], [], [], []
    for row in rows:
        entry = row['entry']
        path = source_path(root, entry)
        if not path.is_file():
            missing.append(entry)
            continue
        raw = path.read_bytes()
        new_digest = hashlib.sha256(raw).hexdigest()
        if new_digest.lower() != row['c_sha256'].lower():
            changed.append(entry)
        digest, conflict = read_body_digest(raw.decode('utf-8', 'replace'))
        if digest is None and not conflict:
            not_embedded.append(entry)
        elif conflict or digest.lower() != row['original_body_sha256'].lower():
            mismatched.append(entry)
        if args.refresh:
            row['c_sha256'] = new_digest
    print('Functions:', len(rows))
    print('Changed C source digests:', len(changed))
    print('Embedded original body hash mismatches:', len(mismatched))
    print('No embedded original body hash (present in inventory):', len(not_embedded))
    print('Missing C source:', len(missing))
    if missing or mismatched:
        raise SystemExit('Validation failed; inventory left unchanged')
    if args.refresh:
        with inventory.open('w', encoding='utf-8', newline='') as stream:
            writer = csv.DictWriter(stream, fieldnames=columns)
            writer.writeheader()
            writer.writerows(rows)
        print('Updated C source digest column:', inventory)
    else:
        print('Read only; --refresh updates only C source digests after review')

if __name__ == '__main__':
    main()
