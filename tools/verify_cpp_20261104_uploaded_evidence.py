#!/usr/bin/env python3
"""Replay private instruction exports against pinned repository body hashes.

Never executes uploaded code, imports a Ghidra project, or authenticates an XBE.
Only eight specifically reviewed functions are selected; no bytes are published.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import json
from pathlib import Path, PurePosixPath
import re
import stat
import zipfile

ROOT = Path(__file__).resolve().parents[1]
TARGETS = {
    '0x000388b0': 'FDB8BB17790B8FED2EDBAAF9732849C8C73D9D53A5DD536E5A67E08781D2E5F3',
    '0x0009e8b0': 'DF8B2B59C7E5CB3BB4DAD4292BF9D9093E7F6F538F58874E0129A38FBF898545',
    '0x0003f0e0': 'DCDA3CF09D39198A7FB8E0516FBEF2EA594502676F5FDBADA628A5194AE7D8DA',
    '0x000120f0': '9FEFE68C61CEC0943A913B1988495825BFD1E3F128E1F92DB0A3DA5D8376BB9C',
    '0x00072940': 'F5B3BAB9507A5A4B71447C224D87723D38E3F0BA735DBDF7A060F697DFF0F7A0',
    '0x0008f6a0': '339DC70ADE9DA431A03D8964268E2B983BF89DF209448A87B645006C63D4420D',
    '0x000b2720': 'FA3DDCED915EA15A204A7C6FE7DEA4FA42C8AE94D13822E936DF2CCEA6F3D637',
    '0x002338c0': '5897040BE668154EA2E3C435098155BB2F0738FF57A70BFA63AC39F047CF75E1',
}
RANGES = {
    '0x000388b0': ((231600, 231733),),
    '0x0009e8b0': ((649392, 649559),),
    '0x0003f0e0': ((0x3f0e0, 0x3f135),),
    '0x000120f0': ((0x120f0, 0x12136),),
    '0x00072940': ((0x72940, 0x72ac5),),
    '0x0008f6a0': ((0x8f6a0, 0x8f6df),),
    '0x000b2720': ((0xb2720, 0xb2739), (0xb2740, 0xb276c)),
    '0x002338c0': ((0x2338c0, 0x2339ce),),
}

def unique_object(pairs):
    result = {}
    for key, value in pairs:
        if key in result: raise ValueError('Duplicate JSON object key')
        result[key] = value
    return result

def read_json(text):
    return json.loads(text, object_pairs_hook=unique_object)

HEX = re.compile(r'(?:[0-9a-fA-F]{2})+')


def safe_members(archive):
    infos = archive.infolist()
    if len(infos) > 20000 or sum(i.file_size for i in infos) > 128 * 1024 * 1024:
        raise ValueError('Archive exceeds bounded evidence limits')
    names = set()
    for info in infos:
        path = PurePosixPath(info.filename)
        if (info.filename in names or path.is_absolute() or '..' in path.parts or
                '\\' in info.filename or stat.S_ISLNK(info.external_attr >> 16) or
                info.file_size > 32 * 1024 * 1024):
            raise ValueError('Unsafe or duplicate archive member')
        names.add(info.filename)
    return infos


def canonical_entry(value):
    if not isinstance(value, str): raise ValueError('Address must be hexadecimal text')
    address = int(value, 16)
    if not 0 <= address <= 0xffffffff: raise ValueError('Address exceeds guest width')
    return f'0x{address:08x}'


def collect_bytes(node, memory, selected=None):
    if isinstance(node, list):
        for item in node: collect_bytes(item, memory, selected)
    elif isinstance(node, dict):
        raw = node.get('bytes_from_ghidra', node.get('bytes'))
        address = node.get('address')
        if isinstance(raw, str) and isinstance(address, str) and HEX.fullmatch(raw):
            if len(raw) > 8192: raise ValueError('Unbounded instruction-byte record')
            start = int(canonical_entry(address), 16)
            for offset, byte in enumerate(bytes.fromhex(raw)):
                location = start + offset
                if location > 0xffffffff: raise ValueError('Instruction exceeds guest width')
                if selected is not None and location not in selected: continue
                if location in memory and memory[location] != byte:
                    raise ValueError('Conflicting supplied instruction bytes')
                memory[location] = byte
        for value in node.values():
            if isinstance(value, (list, dict)): collect_bytes(value, memory, selected)


def verify_body(record, memory, expected, pinned_ranges):
    if record.get('ghidra_memory_sha256', '').upper() != expected:
        raise ValueError('Export identity differs from pinned body hash')
    actual_ranges = tuple((int(canonical_entry(s['start']), 16), int(canonical_entry(s['end_inclusive']), 16)) for s in record['body_ranges'])
    if actual_ranges != tuple(pinned_ranges):
        raise ValueError('Body ranges differ from reviewed original addresses')
    body = bytearray()
    seen = set()
    last_end = -1
    for span in record['body_ranges']:
        start = int(canonical_entry(span['start']), 16)
        end = int(canonical_entry(span['end_inclusive']), 16)
        if end < start or start <= last_end or span['length'] != end - start + 1:
            raise ValueError('Invalid or unordered body ranges')
        if end - start > 1024 * 1024: raise ValueError('Unbounded body range')
        for address in range(start, end + 1):
            if address in seen or address not in memory:
                raise ValueError('Incomplete or repeated original body bytes')
            seen.add(address); body.append(memory[address])
        last_end = end
    if not body or len(body) != record['body_address_count']:
        raise ValueError('Body byte count differs')
    if hashlib.sha256(body).hexdigest().upper() != expected:
        raise ValueError('Supplied bytes fail pinned original-body hash')
    return len(body)


def verify(rea_path, export_path):
    with (ROOT/'metadata/bulk_13694_inventory.csv').open(newline='') as stream:
        inventory = {row['entry']: row['original_body_sha256'].upper() for row in csv.DictReader(stream)}
    for entry, expected in TARGETS.items():
        if inventory.get(entry) != expected: raise ValueError('Repository identity changed')
    records = {}
    with zipfile.ZipFile(export_path) as archive:
        for info in safe_members(archive):
            if info.filename.endswith('.jsonl'):
                for line in archive.read(info).decode('utf-8').splitlines():
                    if not line.strip(): continue
                    row = read_json(line)
                    entry = canonical_entry(row['entry'])
                    if entry in TARGETS:
                        if entry in records: raise ValueError('Duplicate selected export entry')
                        records[entry] = row
    if records.keys() != TARGETS.keys(): raise ValueError('Missing selected function export')
    memory = {}
    selected = {address for ranges in RANGES.values() for start,end in ranges for address in range(start,end+1)}
    with zipfile.ZipFile(rea_path) as archive:
        for info in safe_members(archive):
            if info.filename.endswith('.json'):
                collect_bytes(read_json(archive.read(info).decode('utf-8-sig')), memory, selected)
    counts = {entry: verify_body(records[entry], memory, expected, RANGES[entry]) for entry, expected in TARGETS.items()}
    print(f'PASS {len(counts)} pinned function bodies:', ', '.join(f'{entry} ({count} bytes)' for entry, count in counts.items()))
    print('Supplied instruction-byte consistency only; original XBE, guest ABI and runtime equivalence not authenticated.')
    return counts


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--rea-zip', required=True, type=Path)
    parser.add_argument('--function-export-zip', required=True, type=Path)
    args = parser.parse_args()
    verify(args.rea_zip, args.function_export_zip)
