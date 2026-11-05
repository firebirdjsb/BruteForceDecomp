#!/usr/bin/env python3
"""Two bounded DWORD operands; no native object, callback ABI or runtime claim.

Private exports are bounded JSON data, never executable input. Their complete
body hashes/decodes do not reauthenticate the complete original XBE.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import json
from pathlib import Path
import sys

from body_hash_labels import read_body_digest
from source_layout import source_path
from verify_cpp_guest_address_literals import mov_memory_imm32

ROOT = Path(__file__).resolve().parents[1]
NAME = 'metadata/cpp_20261105_callback_dword_pair.json'
MANIFEST_SHA = '532ed8a425b56c6d6452a45e85cbcea11fcefc78dccad0633e499b620ea9d844'
CONTRACT_SHA = 'eebe1c5cd1ac2be29380c76366a48400830121706298db4baa310eb5548f9578'
ANCHOR = '#include "bf_ghidra_types.h"\n'
BEFORE = '*(code **)(param_1 + 0x10) = FUN_0034c826;'
AFTER = '*(uint32_t *)(param_1 + 0x10) = UINT32_C(0x0034c826);'


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


def validate_contract(doc):
    canonical = json.dumps(doc, sort_keys=True, separators=(',', ':')).encode()
    need(sha(canonical) == CONTRACT_SHA, 'immutable evidence contract differs')
    need(doc['original_xbe_reauthenticated'] is False and doc['original_game_functions_executed'] is False,
         'authentication/execution boundary changed')
    need([c['entry'] for c in doc['cases']] == ['0x003455a6', '0x0034eea9'], 'case set differs')
    for case, site in zip(doc['cases'], ('003455b7', '0034eebb')):
        need(case['before'] == BEFORE and case['after'] == AFTER, 'source operand differs')
        need(case['store']['address'] == site and case['entry_load'] ==
             {'address': case['entry'][2:], 'bytes': '8b442404'}, 'operand binding differs')
        raw = bytes.fromhex(case['store']['bytes'])
        need(raw == bytes.fromhex('c7401026c83400'), 'expected DWORD [EAX+0x10] immediate encoding')
        need(mov_memory_imm32(raw) == 0x0034c826 and case['store']['width_bits'] == 32,
             'original DWORD immediate/width differs')
        need(case['native_storage_contract_recovered'] is False, 'native object claim changed')


def load_bytes(raw):
    need(len(raw) <= 1024*1024 and sha(raw) == MANIFEST_SHA, 'manifest bytes differ')
    doc = strict_json(raw)
    validate_contract(doc)
    return doc


def load_manifest(root):
    with (Path(root)/NAME).open('rb') as stream:
        return load_bytes(stream.read(1024*1024+1))


def apply(case, old):
    need(old.count(ANCHOR) == 1 and old.count(BEFORE) == 1 and
         case['added_comment'] not in old, 'original edit site differs')
    return old.replace(ANCHOR, ANCHOR+case['added_comment'], 1).replace(BEFORE, AFTER, 1)


def restore(case, source):
    need(sha(source.encode()) == case['source_after_sha256'], 'repaired source drift')
    need(source.count(case['added_comment']) == 1 and source.count(AFTER) == 1,
         'source edit/comment count differs')
    old = source.replace(case['added_comment'], '', 1).replace(AFTER, BEFORE, 1)
    raw = old.encode()
    need(sha(raw) == case['source_before_sha256'], 'source preimage SHA differs')
    blob = hashlib.sha1(b'blob '+str(len(raw)).encode()+b'\0'+raw).hexdigest()
    need(blob == case['preimage_git_blob'] and apply(case, old) == source,
         'source preimage Git blob or exact reversal differs')
    return old


def verify_source(root, doc):
    with (root/'metadata/bulk_13694_inventory.csv').open(newline='') as stream:
        inventory = {r['entry']: r for r in csv.DictReader(stream)}
    prior = strict_json((root/'metadata/cpp_20261031_guest_address_literals.json').read_bytes())
    prior_entries = {c['entry'] for c in prior['cases']}
    need(not prior_entries.intersection(c['entry'] for c in doc['cases']), 'overlaps prior literal repairs')
    for case in doc['cases']:
        path = source_path(root, case['entry'])
        need(path.relative_to(root).as_posix() == case['source'], 'canonical source route differs')
        source = path.read_text()
        restore(case, source)
        body, conflict = read_body_digest(source)
        need(not conflict and body == case['original_body_sha256'] ==
             inventory[case['entry']]['original_body_sha256'], 'original body provenance differs')
        need('Entry: '+case['entry'] in source and 'label: '+case['label'] in source and
             'ABI_UNVERIFIED' in source, 'source identity/status differs')
        need(source.count('extern void FUN_0034c826(int param_1);') == 1 and
             source.count('FUN_0034c826(param_1);') == 1, 'existing direct call changed')


def read_records(folder, doc):
    with (folder/'validation.json').open('rb') as stream:
        raw = stream.read(32*1024*1024+1)
    need(len(raw) <= 32*1024*1024, 'validation JSON exceeds bound')
    rows = strict_json(raw)['functions']
    need(len(rows) <= 20000 and len({r['entry'] for r in rows}) == len(rows), 'duplicate/oversized index')
    index = {r['entry']: r for r in rows}
    out = {}
    with (folder/'functions.jsonl').open('rb') as stream:
        for case in doc['cases']:
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
    raw = bytes.fromhex(span['bytes_hex']); start = int(span['start'], 16)
    need(len(raw) == span['length'] == record['body_byte_count'] == case['body_byte_count'] and
         start+len(raw)-1 == int(span['end_inclusive'], 16), 'complete body extent differs')
    need(sha(raw).upper() == case['original_body_sha256'] == record['program_memory_body_sha256'],
         'complete body hash differs')
    instructions = record['instructions']; offset = 0
    need(len(instructions) == record['instruction_count'] == case['instruction_count'], 'instruction count differs')
    for ins in instructions:
        encoded = bytes.fromhex(ins['bytes_hex'])
        need(int(ins['address'], 16) == start+offset and len(encoded) == ins['length'] == ins['parsed_length']
             and encoded == raw[offset:offset+len(encoded)], 'instruction coverage differs')
        need(ins['flow_override'] == 'NONE' and ins['is_length_overridden'] is False and
             ins['is_fallthrough_overridden'] is False, 'analyzed override encountered')
        offset += len(encoded)
    need(offset == len(raw), 'incomplete instruction coverage')
    decoded = list(decoder.disasm(raw, start))
    need([(i.address, i.bytes.hex()) for i in decoded] ==
         [(int(i['address'], 16), i['bytes_hex']) for i in instructions], 'independent instruction boundaries differ')
    addresses = {i.address for i in decoded}
    for ins, listed in zip(decoded, instructions):
        flows = []; fallthrough = f'{ins.address+ins.size:08x}'; flow_type = 'FALL_THROUGH'
        if ins.mnemonic.startswith('j'):
            need(ins.operands[0].imm in addresses, 'jump escapes complete body')
            flows = [f'{ins.operands[0].imm:08x}']
            flow_type = 'UNCONDITIONAL_JUMP' if ins.mnemonic == 'jmp' else 'CONDITIONAL_JUMP'
            if ins.mnemonic == 'jmp':
                fallthrough = None
        if ins.mnemonic == 'call':
            need(ins.bytes[0] == 0xe8 and ins.operands[0].imm == 0x0034c826, 'direct call target differs')
            flows = [f'{ins.operands[0].imm:08x}']; flow_type = 'UNCONDITIONAL_CALL'
        if ins.mnemonic == 'ret':
            fallthrough = None; flow_type = 'TERMINATOR'
        need(listed['flows'] == flows and listed['fallthrough'] == fallthrough and
             listed['flow_type'] == flow_type, 'analyzed flow metadata disagrees with bytes')
    need(decoded[0].bytes.hex() == case['entry_load']['bytes'] and decoded[-1].bytes.hex() == 'c20400',
         'entry DWORD binding or RET 4 differs')
    stores = [i for i in decoded if i.bytes.hex() == case['store']['bytes']]
    need(len(stores) == 1 and stores[0].address == int(case['store']['address'], 16) and
         stores[0].mnemonic == 'mov' and stores[0].op_str == 'dword ptr [eax + 0x10], 0x34c826',
         'independent DWORD store decode differs')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=Path, default=ROOT)
    parser.add_argument('--private-export', type=Path)
    parser.add_argument('--tooldeps', type=Path)
    args = parser.parse_args()
    if args.tooldeps:
        sys.path.insert(0, str(args.tooldeps))
    doc = load_manifest(args.root); verify_source(args.root, doc)
    print('PASS two exact source reversals and public operand/provenance pins')
    if args.private_export:
        from capstone import Cs, CS_ARCH_X86, CS_MODE_32
        decoder = Cs(CS_ARCH_X86, CS_MODE_32); decoder.detail = True
        records = read_records(args.private_export, doc)
        for case in doc['cases']:
            validate_record(records[case['entry']], case, decoder)
        print('PASS two complete private export bodies, 63 bytes, independent instruction boundaries')
    else:
        print('Private body validation not run; public operand evidence only')
    print('No complete-XBE authentication, game execution, native object, ABI or behavior claim')


if __name__ == '__main__':
    main()
