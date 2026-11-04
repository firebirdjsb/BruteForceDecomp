#!/usr/bin/env python3
"""Verify 40 original-address caller/callee body digests, with optional private retail XBE.

The public CSV contains original x86 body lengths and SHA-256 digests, not
executable bytes. CI can check source identity and evidence integrity without
shipping the XBE. With --xbe, authenticate the retail binary and verify every
body digest in addition to the existing E8 and selected RET checks.

These checks do NOT recover Xbox calling conventions, implicit registers,
C++ types, virtual dispatch, host guest32 mapping, linkage or game behavior.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import importlib.util
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = ROOT / 'metadata/cpp_20261102_40_body_provenance.csv'
EDGES = ROOT / 'scripts/verify_cpp_20261102_40_xbe_edges.py'
MANIFEST_SHA256 = '58cdb52e4b383142461ab83bd6ee8e146b629f0e772a83b2f861f53e039df38b'
COLS = (
    'caller_entry', 'callee_entry', 'call_va', 'caller_body_len',
    'callee_body_len', 'caller_original_sha256', 'callee_original_sha256',
)


def load_edges(path: Path = EDGES):
    spec = importlib.util.spec_from_file_location('bf_original_40_edges', path)
    if spec is None or spec.loader is None:
        raise ValueError('Cannot load pinned direct-call verifier')
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def manifest_rows(path: Path = MANIFEST, *, edges=None) -> list[dict]:
    edges = edges or load_edges()
    if hashlib.sha256(path.read_bytes()).hexdigest() != MANIFEST_SHA256:
        raise ValueError('Pinned original-body manifest digest changed')
    with path.open(newline='', encoding='utf-8') as handle:
        reader = csv.DictReader(handle)
        if tuple(reader.fieldnames or ()) != COLS:
            raise ValueError('Unexpected manifest schema')
        rows = list(reader)
    expected = {(caller, site, callee) for caller, site, callee in edges.CALL_EDGES}
    seen = set()
    bodies = {}
    if len(rows) != len(expected) or len(expected) != 40:
        raise ValueError('Manifest must cover exactly the 40 pinned original calls')
    for row in rows:
        caller, callee, site = (int(row[k], 16) for k in ('caller_entry', 'callee_entry', 'call_va'))
        key = caller, site, callee
        if key not in expected or key in seen:
            raise ValueError(f'Unrecognized or duplicate direct-call edge: {key}')
        seen.add(key)
        if not caller <= site < caller + int(row['caller_body_len']):
            raise ValueError('CALL outside original caller body')
        for name, addr in (('caller', caller), ('callee', callee)):
            length = int(row[f'{name}_body_len'])
            digest = row[f'{name}_original_sha256'].lower()
            if length < 1 or length > 0x100000 or not re.fullmatch(r'[0-9a-f]{64}', digest):
                raise ValueError('Invalid original body length or SHA-256')
            prior = bodies.setdefault(addr, (length, digest))
            if prior != (length, digest):
                raise ValueError(f'Conflicting original-body provenance for {addr:#x}')
    return rows


def source_path(root: Path, addr: int) -> Path:
    # All 40 selected addresses were resolved to the main_unclassified
    # original-address layout; do not infer behavior from this directory.
    return root / 'src/main_unclassified' / f'band_{addr >> 16:04x}' / f'0x{addr:08x}.cpp'


def check_source_labels(rows: list[dict], root: Path = ROOT) -> int:
    bodies = {}
    for row in rows:
        for name in ('caller', 'callee'):
            addr = int(row[f'{name}_entry'], 16)
            digest = row[f'{name}_original_sha256'].lower()
            bodies[addr] = digest
    for addr, expected in bodies.items():
        path = source_path(root, addr)
        source = path.read_text(encoding='utf-8-sig')
        match = re.search(r'Input x86 body SHA-256:\s*([0-9a-fA-F]{64})', source)
        if match is None or match.group(1).lower() != expected:
            raise ValueError(f'Original body label changed or missing: {path}')
        if not re.search(r'Entry:\s*0x' + f'{addr:08x}' + r'\b', source, re.I):
            raise ValueError(f'Original function entry changed or missing: {path}')
    return len(bodies)


def verify_body_digests(data: bytes, rows: list[dict], *, edges=None) -> int:
    edges = edges or load_edges()
    layout = edges.sections(data)
    checked = {}
    for row in rows:
        for name in ('caller', 'callee'):
            addr = int(row[f'{name}_entry'], 16)
            length = int(row[f'{name}_body_len'])
            expected = row[f'{name}_original_sha256'].lower()
            off = edges.file_offset(layout, addr, length)
            actual = hashlib.sha256(data[off:off + length]).hexdigest()
            if actual != expected:
                raise ValueError(f'Original x86 body mismatch at {addr:#010x}: {actual}')
            checked[addr] = (length, actual)
    return len(checked)


def verify_private_xbe(data: bytes, rows: list[dict], *, edges=None) -> dict:
    edges = edges or load_edges()
    # The original verifier checks exact retail SHA-256, all 40 E8 targets,
    # and 26 selected RET opcodes. This extension verifies both full bodies.
    direct = edges.verify(data, require_hash=True)
    body_count = verify_body_digests(data, rows, edges=edges)
    return {'xbe_sha256': direct['xbe_sha256'],
            'direct_calls': direct['checked_direct_calls'],
            'selected_return_sites': direct['checked_return_windows'],
            'original_bodies': body_count,
            'source': 'authenticated retail XBE; no Xbox ABI claims'}


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=Path, default=ROOT)
    parser.add_argument('--xbe', type=Path, help='PRIVATE retail XBE outside Git')
    args = parser.parse_args()
    edges = load_edges(args.root / 'scripts/verify_cpp_20261102_40_xbe_edges.py')
    rows = manifest_rows(args.root / 'metadata/cpp_20261102_40_body_provenance.csv', edges=edges)
    count = check_source_labels(rows, args.root)
    print(f'PASS: {len(rows)} pinned call edges, {count} unique source body labels')
    if args.xbe:
        result = verify_private_xbe(args.xbe.read_bytes(), rows, edges=edges)
        print('PASS: original XBE SHA, {direct_calls} E8 sites, '
              '{selected_return_sites} selected RET sites, '
              '{original_bodies} complete original x86 bodies'.format(**result))
    print('ABI_UNVERIFIED: registers, stack inputs, returns, linkage, behavior')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
