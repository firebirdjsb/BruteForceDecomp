#!/usr/bin/env python3
"""Six bounded DWORD operands; no global mapping, callback ABI or runtime claim.

Private exports are bounded JSON data, never executable input. Complete body
hashes and independent decodes do not authenticate the complete original XBE.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import json
from pathlib import Path
import re
import sys

from body_hash_labels import read_body_digest
from source_layout import source_path
from verify_cpp_guest_address_literals import mov_memory_imm32

ROOT = Path(__file__).resolve().parents[1]
NAME = 'metadata/cpp_20261105_global_dword_six.json'
MANIFEST_SHA = '929a210569c6253343b4bc3e3e95e33fa91b81656a18fec524694e2420852193'
CONTRACT_SHA = 'fd4f91f84a7024b1e3b3fb623f7c93f20fc3dcd579b5b0009470c215818ceaed'
ANCHOR = '#include "bf_ghidra_types.h"\n'
# Ordered instruction site, absolute destination and immediate DWORD value.
TUPLES = (
    (0x00087cc5, 0x003bc650, 0x002379a0),
    (0x00087ccf, 0x003bc654, 0x002379d0),
    (0x00087cd9, 0x003bc658, 0x00237a00),
    (0x00087cee, 0x003bc650, 0x00237810),
    (0x00087cf8, 0x003bc654, 0x00237910),
    (0x00087d02, 0x003bc658, 0x002378a0),
)


def need(ok, message):
    if not ok:
        raise ValueError(message)


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def unique_object(pairs):
    out = {}
    for key, value in pairs:
        need(key not in out, 'duplicate JSON key')
        out[key] = value
    return out


def strict_json(raw):
    return json.loads(raw, object_pairs_hook=unique_object,
                      parse_constant=lambda _: (_ for _ in ()).throw(ValueError('nonfinite JSON')))


def hex_bytes(value):
    need(isinstance(value, str) and re.fullmatch(r'(?:[0-9a-f]{2})+', value), 'invalid byte encoding')
    return bytes.fromhex(value)


def validate_contract(doc):
    canonical = json.dumps(doc, sort_keys=True, separators=(',', ':')).encode()
    need(sha(canonical) == CONTRACT_SHA, 'immutable evidence contract differs')
    need(doc['original_xbe_reauthenticated'] is False and doc['original_game_functions_executed'] is False,
         'authentication/execution boundary changed')
    need(len(doc['cases']) == 1 and doc['cases'][0]['entry'] == '0x00087cc0', 'case set differs')
    case = doc['cases'][0]
    need(case['native_storage_mapping_recovered'] is False and len(case['edits']) == 6,
         'scope or edit count differs')
    for edit, expected in zip(case['edits'], TUPLES):
        validate_edit(edit, expected)


def validate_edit(edit, expected_tuple):
    """Validate operand binding independently of the immutable document hash."""
    site, dest, value = expected_tuple
    raw = hex_bytes(edit['bytes'])
    expected = b'\xc7\x05' + dest.to_bytes(4, 'little') + value.to_bytes(4, 'little')
    need(edit['site'] == f'{site:08x}' and raw == expected and edit['width_bits'] == 32,
         'absolute DWORD instruction site/encoding/width differs')
    need(edit['destination_guest_va'] == f'0x{dest:08x}' and
         edit['immediate_guest_value'] == f'0x{value:08x}' and mov_memory_imm32(raw) == value,
         'destination or immediate differs')
    need(edit['before'] == f'PTR_FUN_{dest:08x} = &UNK_{value:08x};' and
         edit['after'] == f'PTR_FUN_{dest:08x} = UINT32_C(0x{value:08x});', 'source tuple differs')


def load_bytes(raw):
    need(len(raw) <= 1024*1024 and sha(raw) == MANIFEST_SHA, 'manifest bytes differ')
    doc = strict_json(raw)
    validate_contract(doc)
    return doc


def load_manifest(root):
    with (Path(root)/NAME).open('rb') as stream:
        return load_bytes(stream.read(1024*1024+1))


def apply(case, old):
    need(old.count(ANCHOR) == 1 and case['added_comment'] not in old, 'original anchor differs')
    source = old.replace(ANCHOR, ANCHOR+case['added_comment'], 1)
    for edit in case['edits']:
        need(source.count(edit['before']) == 1, 'original edit count differs')
        source = source.replace(edit['before'], edit['after'], 1)
    return source


def restore(case, source):
    need(sha(source.encode()) == case['source_after_sha256'], 'repaired source drift')
    need(source.count(case['added_comment']) == 1, 'boundary comment differs')
    old = source.replace(case['added_comment'], '', 1)
    sites = []
    for edit in case['edits']:
        need(old.count(edit['after']) == 1, 'replacement count differs')
        sites.append(source.index(edit['after']))
        old = old.replace(edit['after'], edit['before'], 1)
    need(sites == sorted(sites), 'ordered source stores differ')
    raw = old.encode()
    need(sha(raw) == case['source_before_sha256'], 'source preimage SHA differs')
    blob = hashlib.sha1(b'blob '+str(len(raw)).encode()+b'\0'+raw).hexdigest()
    need(blob == case['preimage_git_blob'] and apply(case, old) == source, 'source preimage/reversal differs')
    return old


def verify_source(root, doc):
    with (root/'metadata/bulk_13694_inventory.csv').open(newline='') as stream:
        inventory = {r['entry']: r for r in csv.DictReader(stream)}
    prior = strict_json((root/'metadata/cpp_20261031_guest_address_literals.json').read_bytes())
    protected = {c['entry'] for key in ('cases', 'quarantine') for c in prior[key]}
    for case in doc['cases']:
        need(case['entry'] not in protected, 'overlaps prior literal repairs or quarantine')
        path = source_path(root, case['entry'])
        need(path.relative_to(root).as_posix() == case['source'], 'canonical source route differs')
        source = path.read_text(); old = restore(case, source)
        body, conflict = read_body_digest(source)
        need(not conflict and body == case['original_body_sha256'] ==
             inventory[case['entry']]['original_body_sha256'], 'original body provenance differs')
        need('Entry: '+case['entry'] in source and 'label: '+case['label'] in source and
             'ABI_UNVERIFIED' in source, 'source identity/status differs')
        declarations = lambda s: [line for line in s.splitlines() if line.startswith('extern ')]
        need(declarations(source) == declarations(old), 'existing declarations changed')
        call = case['direct_call']
        need(source.count(call['declaration']) == 1 and source.count(call['statement']) == 1,
             'existing direct call changed')


def read_records(folder, doc):
    with (folder/'validation.json').open('rb') as stream:
        raw = stream.read(32*1024*1024+1)
    need(len(raw) <= 32*1024*1024, 'validation JSON exceeds bound')
    rows = strict_json(raw)['functions']
    need(len(rows) <= 20000 and len({r['entry'] for r in rows}) == len(rows), 'duplicate/oversized index')
    index = {r['entry']: r for r in rows}; out = {}
    with (folder/'functions.jsonl').open('rb') as stream:
        for case in doc['cases']:
            need(case['entry'][2:] in index, 'private index entry missing')
            row = index[case['entry'][2:]]
            need(row['canonical_hash_match'] is True and row['byte_and_instruction_validation_pass'] is True
                 and row['issues'] == [] and row['uncovered_body_byte_count'] == 0,
                 'private validation is quarantined/incomplete')
            need(row['canonical_body_sha256'] == row['program_memory_body_sha256'] ==
                 case['original_body_sha256'], 'private index body pin differs')
            offset, size = row['jsonl_byte_offset'], row['jsonl_byte_length']
            need(type(offset) is int and type(size) is int and 0 <= offset < 512*1024*1024
                 and 0 < size <= 1024*1024, 'private record bounds differ')
            stream.seek(offset); raw = stream.read(size)
            need(len(raw) == size, 'private record truncated')
            out[case['entry']] = strict_json(raw)
    return out


def validate_record(record, case, decoder):
    need(record['entry'] == case['entry'][2:] and record['name'] == case['label'], 'private identity differs')
    need(len(record['body_ranges']) == len(case['body_ranges']) == 1, 'body range count differs')
    span = record['body_ranges'][0]
    need({k: span[k] for k in ('start', 'end_inclusive', 'length')} == case['body_ranges'][0],
         'ordered body range differs')
    raw = hex_bytes(span['bytes_hex']); start = int(span['start'], 16)
    need(len(raw) == span['length'] == record['body_byte_count'] == case['body_byte_count'] and
         start+len(raw)-1 == int(span['end_inclusive'], 16), 'complete body extent differs')
    need(sha(raw).upper() == case['original_body_sha256'] == record['program_memory_body_sha256'],
         'complete body hash differs')
    instructions = record['instructions']; offset = 0
    need(len(instructions) == record['instruction_count'] == case['instruction_count'], 'instruction count differs')
    for ins in instructions:
        encoded = hex_bytes(ins['bytes_hex'])
        need(int(ins['address'], 16) == start+offset and len(encoded) == ins['length'] == ins['parsed_length']
             and encoded == raw[offset:offset+len(encoded)], 'instruction coverage differs')
        need(ins['flow_override'] == 'NONE' and ins['is_length_overridden'] is False and
             ins['is_fallthrough_overridden'] is False, 'analyzed override encountered')
        offset += len(encoded)
    need(offset == len(raw), 'incomplete instruction coverage')
    decoded = list(decoder.disasm(raw, start))
    need([(i.address, i.bytes.hex()) for i in decoded] ==
         [(int(i['address'], 16), i['bytes_hex']) for i in instructions], 'independent boundaries differ')
    for ins, listed in zip(decoded, instructions):
        flows = []; fallthrough = f'{ins.address+ins.size:08x}'; flow_type = 'FALL_THROUGH'
        need(not ins.mnemonic.startswith('j'), 'unexpected branch in pinned straight-line body')
        if ins.mnemonic == 'call':
            call = case['direct_call']
            need(ins.address == int(call['site'], 16) and ins.bytes.hex() == call['bytes'] and
                 ins.operands[0].imm == int(call['target'], 16), 'direct call target differs')
            flows = [call['target']]; flow_type = 'UNCONDITIONAL_CALL'
        if ins.mnemonic == 'ret':
            fallthrough = None; flow_type = 'TERMINATOR'
        need(listed['flows'] == flows and listed['fallthrough'] == fallthrough and
             listed['flow_type'] == flow_type, 'analyzed flow metadata disagrees with bytes')
    need(decoded[0].bytes.hex() == '56' and decoded[1].bytes.hex() == '8b742408' and
         decoded[-1].bytes.hex() == 'c20400', 'unchanged entry/return instruction differs')
    stores = [i for i in decoded if i.bytes[0] == 0xc7]
    need(len(stores) == 6, 'absolute immediate DWORD store count differs')
    for ins, edit, (site, dest, value) in zip(stores, case['edits'], TUPLES):
        need(ins.address == site and ins.bytes.hex() == edit['bytes'] and ins.mnemonic == 'mov' and
             ins.op_str == f'dword ptr [0x{dest:x}], 0x{value:x}', 'independent DWORD tuple decode differs')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=Path, default=ROOT)
    parser.add_argument('--private-export', type=Path)
    parser.add_argument('--tooldeps', type=Path)
    args = parser.parse_args()
    if args.tooldeps:
        sys.path.insert(0, str(args.tooldeps))
    doc = load_manifest(args.root); verify_source(args.root, doc)
    print('PASS exact source reversal and six public operand/provenance pins')
    if args.private_export:
        from capstone import Cs, CS_ARCH_X86, CS_MODE_32
        decoder = Cs(CS_ARCH_X86, CS_MODE_32); decoder.detail = True
        records = read_records(args.private_export, doc)
        for case in doc['cases']:
            validate_record(records[case['entry']], case, decoder)
        print('PASS complete 82-byte private body, 14 independent boundaries and all flow metadata')
    else:
        print('Private body validation not run; public operand evidence only')
    print('No complete-XBE authentication, game execution, global mapping, callback ABI or behavior claim')


if __name__ == '__main__':
    main()
