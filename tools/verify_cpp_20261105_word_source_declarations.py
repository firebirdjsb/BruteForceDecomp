#!/usr/bin/env python3
"""Two exact existing draft declarations, never an Xbox ABI or behavior repair.

The private inputs are bounded JSON data, not executable code. Complete body
replay does not reauthenticate the complete XBE. No caller or callee is run.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import json
from pathlib import Path
import struct
import sys

from body_hash_labels import read_body_digest
from source_layout import source_path

ROOT = Path(__file__).resolve().parents[1]
NAME = 'metadata/cpp_20261105_word_source_declarations.json'
MANIFEST_SHA = '73ac9d8ff13f0666ca59a8cb136f09ccee37c6104c2a9c93dec9ad919bba56a4'
CONTRACT_SHA = '92d509b907a4c6f4e2bee1d6daa1cef12a80e5cd6ebdd8e21c03532a8d6c1a80'
ANCHOR = '#include "bf_ghidra_types.h"\n'
CI_ADDITION = ('      - name: Verify two WORD-limit caller source declarations\n'
               '        run: python3 tools/test_cpp_20261105_word_source_declarations.py\n')


def need(ok, message):
    if not ok:
        raise ValueError(message)


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def canonical_sha(value):
    return sha(json.dumps(value, sort_keys=True, separators=(',', ':')).encode())


def unique_object(pairs):
    result = {}
    for key, value in pairs:
        need(key not in result, 'duplicate JSON key')
        result[key] = value
    return result


def strict_json(raw):
    return json.loads(raw, object_pairs_hook=unique_object,
                      parse_constant=lambda _: (_ for _ in ()).throw(ValueError('nonfinite JSON')))


def direct_call(address, encoded):
    raw = bytes.fromhex(encoded)
    need(len(raw) == 5 and raw[0] == 0xe8, 'expected five-byte direct E8 call')
    return (address+5+struct.unpack('<i', raw[1:])[0]) & 0xffffffff


BRANCH_NAMES = {0x72:'jb', 0x74:'je', 0x75:'jne', 0x76:'jbe', 0x7c:'jl', 0x7f:'jg', 0xeb:'jmp'}


def short_branch(address, encoded):
    raw = bytes.fromhex(encoded)
    need(len(raw) == 2 and raw[0] in BRANCH_NAMES, 'expected a pinned short direct branch')
    return (address+2+struct.unpack('<b', raw[1:])[0]) & 0xffffffff


def validate_contract(doc):
    need(canonical_sha(doc) == CONTRACT_SHA, 'immutable evidence contract differs')
    for key in ('original_xbe_reauthenticated', 'original_game_functions_executed',
                'abi_recovered', 'native_linkage_tested', 'semantic_equivalence_claimed'):
        need(doc[key] is False, 'authentication/execution/ABI boundary changed')
    need([c['entry'] for c in doc['cases']] == ['0x0038620e','0x0038624a'], 'caller set differs')
    need([c['entry'] for c in doc['dependencies']] == ['0x00386141','0x0038618e'], 'callee set differs')
    for case, dep, result in zip(doc['cases'], doc['dependencies'], ('void','void')):
        target = int(dep['entry'],16)
        need(case['callee'] == dep['entry'] and
             dep['definition_signature'] == f'{result} FUN_{target:08x}(void)' and
             case['source_declaration'] == 'extern '+dep['definition_signature']+';' and
             case['source_call'] == f'FUN_{target:08x}();' and case['source_call_arity'] == 0,
             'exact existing declaration/call/arity differs')
        need(case['hidden_register_inputs_represented'] is False and
             case['guest_pointer_mapping_established'] is False, 'unresolved register/memory boundary changed')
        need(len(case['direct_calls']) == 1 and case['direct_calls'][0]['target'] == dep['entry'],
             'selected direct call differs')
    for item in doc['cases']+doc['dependencies']:
        windows = item['instruction_windows']
        for call in item['direct_calls']:
            need(direct_call(int(call['address'],16),call['bytes']) == int(call['target'],16),
                 'direct E8 operand differs')
            need(windows[call['address']] == {k:call[k] for k in ('address','bytes')}, 'call window differs')
        for branch in item['branches']:
            raw = bytes.fromhex(branch['bytes'])
            need(short_branch(int(branch['address'],16),branch['bytes']) == int(branch['target'],16) and
                 BRANCH_NAMES[raw[0]] == branch['mnemonic'], 'direct branch operand/kind differs')
            need(windows[branch['address']] == {k:branch[k] for k in ('address','bytes')}, 'branch window differs')
        for ret in item['ret_sites']:
            need(ret['bytes'] == 'c3' and windows[ret['address']] == ret, 'plain RET window differs')
        need(item['historical_inventory_row']['original_body_sha256'] == item['original_body_sha256'],
             'historical original-body evidence differs')


def load_bytes(raw):
    need(len(raw) <= 1024*1024 and sha(raw) == MANIFEST_SHA, 'manifest bytes differ')
    doc = strict_json(raw)
    validate_contract(doc)
    return doc


def load_manifest(root):
    with (Path(root)/NAME).open('rb') as stream:
        return load_bytes(stream.read(1024*1024+1))


def apply(case, old):
    block = case['added_declaration_block']
    need(sha(old.encode()) == case['source_before_sha256'], 'source preimage differs')
    need(old.count(ANCHOR) == 1 and block not in old, 'declaration insertion point differs')
    return old.replace(ANCHOR, ANCHOR+block, 1)


def restore(case, source):
    block = case['added_declaration_block']
    need(sha(source.encode()) == case['source_after_sha256'], 'repaired source drift')
    need(source.count(block) == 1, 'declaration block differs')
    old = source.replace(block, '', 1); raw = old.encode()
    need(sha(raw) == case['source_before_sha256'], 'source preimage SHA differs')
    need(hashlib.sha1(b'blob '+str(len(raw)).encode()+b'\0'+raw).hexdigest() == case['preimage_git_blob'],
         'source preimage Git blob differs')
    need(apply(case, old) == source, 'source edit does not reverse exactly')
    return old


def verify_dependencies(root, doc):
    root = Path(root)
    for item in doc['headers']+doc['validation_support_files']:
        need(sha((root/item['path']).read_bytes()) == item['sha256'], 'header/routing/validation dependency drift')
    for dep in doc['dependencies']:
        path = source_path(root, dep['entry'])
        need(path.relative_to(root).as_posix() == dep['source'], 'callee canonical route differs')
        raw = path.read_bytes(); source = raw.decode()
        need(sha(raw) == dep['source_sha256'], 'callee source drift')
        need(hashlib.sha1(b'blob '+str(len(raw)).encode()+b'\0'+raw).hexdigest() == dep['git_blob'],
             'callee Git blob differs')
        need(source.count(dep['definition_signature']+'\n') == 1, 'callee definition signature differs')


def verify_source(root, doc):
    root = Path(root); verify_dependencies(root, doc)
    need(sha((root/'metadata/bulk_13694_inventory.csv').read_bytes()) == doc['historical_inventory_sha256'],
         'immutable historical inventory bytes differ')
    with (root/'metadata/bulk_13694_inventory.csv').open(newline='') as stream:
        rows = list(csv.DictReader(stream))
    need(len(rows) == 13694 and len({r['entry'] for r in rows}) == 13694, 'inventory identities differ')
    inventory = {r['entry']:r for r in rows}
    for item in doc['cases']+doc['dependencies']:
        path = source_path(root, item['entry'])
        need(path.relative_to(root).as_posix() == item['source'], 'canonical source route differs')
        source = path.read_bytes().decode(); body, conflict = read_body_digest(source)
        need(not conflict and body == item['original_body_sha256'] == inventory[item['entry']]['original_body_sha256'],
             'body provenance differs')
        need('Entry: '+item['entry'] in source and 'label: '+item['label'] in source and
             'ABI_UNVERIFIED' in source, 'source identity/status differs')
        need(inventory[item['entry']] == item['historical_inventory_row'], 'historical inventory row changed')
        if item in doc['cases']:
            restore(item, source)
            need(source.count(item['source_declaration']) == 1 and source.count(item['source_call']) == 1 and
                 source.count(item['definition_signature']+'\n') == 1, 'declaration/call/caller signature differs')
            need(inventory[item['entry']] == item['historical_inventory_row'], 'historical caller inventory row changed')


def validate_index_row(row, item):
    need(canonical_sha(row) == item['private_index_row_sha256'], 'private index row changed')
    need(row['entry'] == item['entry'][2:] and row['canonical_hash_match'] is True and
         row['byte_and_instruction_validation_pass'] is True and row['issues'] == [] and
         row['uncovered_body_byte_count'] == 0 and row['first_uncovered_addresses'] == [] and
         row['prefetch_listing_disagreements'] == [], 'private validation is quarantined/incomplete')
    need(row['canonical_body_sha256'] == row['program_memory_body_sha256'] == item['original_body_sha256'] and
         row['body_byte_count'] == item['body_byte_count'] and row['instruction_count'] == item['instruction_count'],
         'private index body pin differs')
    offset, size = row['jsonl_byte_offset'], row['jsonl_byte_length']
    need(type(offset) is int and type(size) is int and 0 <= offset < 512*1024*1024 and 0 < size <= 1024*1024,
         'private record bounds differ')
    return offset, size


def read_records(folder, doc):
    folder = Path(folder)
    with (folder/'validation.json').open('rb') as stream:
        raw = stream.read(32*1024*1024+1)
    need(len(raw) <= 32*1024*1024, 'validation JSON exceeds bound')
    rows = strict_json(raw)['functions']
    need(isinstance(rows, list) and len(rows) == 13694 and len({r['entry'] for r in rows}) == len(rows),
         'duplicate/incomplete private index')
    index = {r['entry']:r for r in rows}; out = {}; intervals = []
    with (folder/'functions.jsonl').open('rb') as stream:
        for item in doc['cases']+doc['dependencies']:
            offset, size = validate_index_row(index[item['entry'][2:]], item)
            need(all(offset+size <= start or offset >= end for start,end in intervals), 'private record intervals overlap')
            intervals.append((offset, offset+size))
            stream.seek(offset); raw = stream.read(size)
            need(len(raw) == size and raw.endswith(b'\n'), 'private record truncated or not line bounded')
            out[item['entry']] = strict_json(raw)
    return out


def validate_record(record, item, decoder):
    # Exact record pin includes analyzed text and metadata. Decoding below is an
    # independent check of bytes, boundaries and all flow edges, not text trust.
    need(canonical_sha(record) == item['private_export_record_sha256'], 'private export record changed')
    need(record['entry'] == item['entry'][2:] and record['name'] == item['label'] and
         record['is_thunk'] is False, 'private body identity differs')
    need(len(record['body_ranges']) == len(item['body_ranges']) == 1, 'ordered body range count differs')
    span = record['body_ranges'][0]
    need({k:span[k] for k in ('start','end_inclusive','length')} == item['body_ranges'][0], 'body boundaries differ')
    raw = bytes.fromhex(span['bytes_hex']); start = int(span['start'], 16)
    need(len(raw) == span['length'] == record['body_byte_count'] == item['body_byte_count'] and
         start+len(raw)-1 == int(span['end_inclusive'], 16), 'complete body extent differs')
    need(sha(raw).upper() == item['original_body_sha256'] == record['program_memory_body_sha256'], 'complete body hash differs')
    instructions = record['instructions']; offset = 0
    need(len(instructions) == record['instruction_count'] == item['instruction_count'], 'instruction count differs')
    for ins in instructions:
        encoded = bytes.fromhex(ins['bytes_hex'])
        need(int(ins['address'],16) == start+offset and 0 < len(encoded) == ins['length'] == ins['parsed_length'] and
             encoded == raw[offset:offset+len(encoded)], 'instruction coverage differs')
        need(ins['flow_override'] == 'NONE' and ins['is_length_overridden'] is False and
             ins['is_fallthrough_overridden'] is False and ins['listing_metadata_is_analyzed_not_byte_proof'] is True,
             'analyzed override or byte-proof claim encountered')
        offset += len(encoded)
    need(offset == len(raw), 'incomplete instruction coverage')
    decoded = list(decoder.disasm(raw, start))
    need([(i.address, i.size, i.bytes.hex()) for i in decoded] ==
         [(int(i['address'],16), i['length'], i['bytes_hex']) for i in instructions],
         'independent instruction boundaries differ')
    addresses = {i.address for i in decoded}; calls = []; branches = []; returns = []
    for ins, listed in zip(decoded, instructions):
        flows = []; fallthrough = f'{ins.address+ins.size:08x}'; flow_type = 'FALL_THROUGH'
        if ins.mnemonic in BRANCH_NAMES.values():
            target = short_branch(ins.address, ins.bytes.hex())
            need(BRANCH_NAMES[ins.bytes[0]] == ins.mnemonic and ins.operands[0].imm == target and
                 target in addresses, 'independent direct branch target/kind differs or escapes body')
            flows = [f'{target:08x}']
            flow_type = 'UNCONDITIONAL_JUMP' if ins.mnemonic == 'jmp' else 'CONDITIONAL_JUMP'
            if ins.mnemonic == 'jmp':
                fallthrough = None
            branches.append({'address':f'{ins.address:08x}', 'bytes':ins.bytes.hex(),
                             'mnemonic':ins.mnemonic, 'target':f'0x{target:08x}'})
        elif ins.mnemonic.startswith('j'):
            raise ValueError('unexpected branch kind')
        if ins.mnemonic == 'call':
            target = direct_call(ins.address, ins.bytes.hex())
            need(ins.operands[0].imm == target, 'independent E8 target differs')
            calls.append({'address':f'{ins.address:08x}', 'bytes':ins.bytes.hex(),
                          'mnemonic':'call', 'target':f'0x{target:08x}'})
            flows = [f'{target:08x}']; flow_type = 'UNCONDITIONAL_CALL'
        if ins.mnemonic == 'ret':
            need(ins.bytes.hex() == 'c3', 'plain RET differs')
            fallthrough = None; flow_type = 'TERMINATOR'
            returns.append({'address':f'{ins.address:08x}', 'bytes':ins.bytes.hex()})
        need(fallthrough is None or int(fallthrough,16) in addresses, 'fallthrough escapes complete body')
        need(listed['flows'] == flows and listed['fallthrough'] == fallthrough and listed['flow_type'] == flow_type,
             'analyzed flow metadata disagrees with independent bytes')
    need(calls == item['direct_calls'] and branches == item['branches'] and returns == item['ret_sites'],
         'complete call/branch/RET sets differ')
    need(decoded[-1].bytes.hex() == 'c3', 'complete body does not end at plain RET')
    for address, window in item['instruction_windows'].items():
        need(window['address'] == address, 'public instruction-window identity differs')
        matching = [i for i in decoded if i.address == int(address,16)]
        need(len(matching) == 1 and matching[0].bytes.hex() == window['bytes'], 'pinned instruction window differs')
    # Record concrete omissions without attempting to bridge them into C++.
    observed = {i.address-start:(i.mnemonic, i.op_str) for i in decoded}
    for observation in item['register_observations']:
        need(observed[observation['offset']] == (observation['mnemonic'], observation['operands']),
             'hidden-register or result observation differs')
    return len(decoded)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=Path, default=ROOT)
    parser.add_argument('--private-export', type=Path)
    parser.add_argument('--tooldeps', type=Path)
    args = parser.parse_args()
    if args.tooldeps:
        sys.path.insert(0, str(args.tooldeps))
    doc = load_manifest(args.root); verify_source(args.root, doc)
    print('PASS two exact source reversals and existing callee/header/inventory pins')
    if args.private_export:
        from capstone import Cs, CS_ARCH_X86, CS_MODE_32
        decoder = Cs(CS_ARCH_X86, CS_MODE_32); decoder.detail = True
        records = read_records(args.private_export, doc)
        counts = [validate_record(records[i['entry']], i, decoder) for i in doc['cases']+doc['dependencies']]
        print('PASS four complete private bodies, 274 bytes,', sum(counts), 'independently decoded instructions')
    else:
        print('Private complete-body replay not requested; immutable public instruction windows only')
    print('Hidden ECX/EDX handoffs remain unbound; no caller execution or ABI/behavior claim')


if __name__ == '__main__':
    main()
