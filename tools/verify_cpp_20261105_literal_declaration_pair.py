#!/usr/bin/env python3
"""Two guest DWORD operands and source-only declarations, never an ABI bridge.

Private exports are bounded JSON data. No original bytes or draft callers run.
Complete export-body checks do not reauthenticate the complete original XBE.
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
from verify_cpp_guest_address_literals import mov_memory_imm32

ROOT = Path(__file__).resolve().parents[1]
NAME = 'metadata/cpp_20261105_literal_declaration_pair.json'
MANIFEST_SHA = '73ed4b66704e852f8ae70a0e2843127305a30d27bcb38ba336b5a95b83def088'
CONTRACT_SHA = 'd82dbd52a2b2925a2309ca303eb389e2d3aa33a44331c7e2641c7a7a8f56cf6e'
ANCHOR = '#include "bf_ghidra_types.h"\n'
DECLARATION = 'extern void FUN_00066920(void);'
BLOCK = ('/* Exact source-draft declaration only. Original callers move ESI into EAX;\n'
         ' * this void interface does not bind that hidden input or the callers\'\n'
         ' * EAX=ESI return. Guest register/memory contracts remain ABI_UNVERIFIED. */\n'
         + DECLARATION+'\n')
CI_ADDITION = ('      - name: Verify two bounded guest literals and exact source declarations (ABI unverified)\n'
               '        run: python3 tools/test_cpp_20261105_literal_declaration_pair.py\n')


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


def direct_call(address, encoded):
    raw = bytes.fromhex(encoded)
    need(len(raw) == 5 and raw[0] == 0xe8, 'expected five-byte direct E8 call')
    return (address+5+struct.unpack('<i', raw[1:])[0]) & 0xffffffff


def validate_contract(doc):
    need(sha(json.dumps(doc, sort_keys=True, separators=(',', ':')).encode()) == CONTRACT_SHA,
         'immutable evidence contract differs')
    need(doc['original_xbe_reauthenticated'] is False and doc['original_game_functions_executed'] is False
         and doc['abi_recovered'] is False, 'authentication/execution/ABI boundary changed')
    need(doc['source_declaration'] == DECLARATION and doc['added_declaration_block'] == BLOCK,
         'exact source declaration differs')
    need([c['entry'] for c in doc['cases']] == ['0x002ae200', '0x002aaac0'], 'caller set differs')
    for case, entry, call, store, immediate in zip(doc['cases'], ('002ae200','002aaac3'),
            ('002ae202','002aaac5'), ('002ae221','002aaade'), (0x38f4d0,0x38f800)):
        w = case['instruction_windows']; s = case['store']
        need(w[entry]['bytes'] == '8bc6', 'hidden EAX=ESI handoff differs')
        need(direct_call(int(call,16), w[call]['bytes']) == 0x66920, 'direct callee target differs')
        need(case['direct_calls'] == [{'address':call, 'bytes':w[call]['bytes'], 'target':'0x00066920'}],
             'complete caller call list differs')
        need(s['address'] == store and s['bytes'] == w[store]['bytes'] and
             s['bytes'] == 'c706'+immediate.to_bytes(4,'little').hex(), 'expected DWORD [ESI] immediate')
        need(mov_memory_imm32(bytes.fromhex(s['bytes'])) == immediate and s['width_bits'] == 32,
             'DWORD immediate or width differs')
        need(case['after'] == f'*unaff_ESI = UINT32_C(0x{immediate:08x});' and
             case['source_call'] == 'FUN_00066920();', 'bounded source edit/call differs')
        need(case['native_storage_contract_recovered'] is False and
             case['hidden_input_and_return_represented'] is False, 'unresolved source contracts changed')
    dep = doc['dependencies'][0]
    need(len(doc['dependencies']) == 1 and dep['entry'] == '0x00066920' and
         dep['definition_signature'] == 'void FUN_00066920(void)', 'callee identity/signature differs')
    need(dep['instruction_windows']['00066922']['bytes'] == '894804', 'callee hidden EAX memory use differs')


def load_bytes(raw):
    need(len(raw) <= 1024*1024 and sha(raw) == MANIFEST_SHA, 'manifest bytes differ')
    doc = strict_json(raw); validate_contract(doc)
    return doc


def load_manifest(root):
    with (Path(root)/NAME).open('rb') as stream:
        return load_bytes(stream.read(1024*1024+1))


def apply(case, old):
    need(old.count(ANCHOR) == 1 and old.count(case['before']) == 1 and BLOCK not in old and
         case['added_comment'] not in old, 'original edit sites differ')
    return old.replace(ANCHOR, ANCHOR+BLOCK, 1).replace('  '+case['before'],
           case['added_comment']+'  '+case['after'], 1)


def restore(case, source):
    need(sha(source.encode()) == case['source_after_sha256'], 'repaired source drift')
    need(source.count(BLOCK) == source.count(case['added_comment']) == source.count(case['after']) == 1,
         'source edit/comment counts differ')
    old = source.replace(BLOCK,'',1).replace(case['added_comment'],'',1).replace(case['after'],case['before'],1)
    raw = old.encode()
    need(sha(raw) == case['source_before_sha256'], 'source preimage SHA differs')
    need(hashlib.sha1(b'blob '+str(len(raw)).encode()+b'\0'+raw).hexdigest() == case['preimage_git_blob'],
         'source preimage Git blob differs')
    need(apply(case, old) == source, 'source edits do not reverse exactly')
    return old


def verify_dependencies(root, doc):
    for header in doc['headers']:
        need(sha((root/header['path']).read_bytes()) == header['sha256'], 'shared header drift')
    for dep in doc['dependencies']:
        path = source_path(root, dep['entry'])
        need(path.relative_to(root).as_posix() == dep['source'], 'callee canonical route differs')
        source = path.read_bytes().decode('utf-8')
        need(sha(source.encode()) == dep['source_sha256'], 'callee source drift')
        need(source.count(dep['definition_signature']+'\n') == 1, 'callee definition signature differs')


def verify_source(root, doc):
    root = Path(root)
    verify_dependencies(root, doc)
    with (root/'metadata/bulk_13694_inventory.csv').open(newline='') as stream:
        inventory = {r['entry']:r for r in csv.DictReader(stream)}
    for item in doc['cases']+doc['dependencies']:
        path = source_path(root,item['entry'])
        need(path.relative_to(root).as_posix() == item['source'], 'canonical source route differs')
        source = path.read_bytes().decode('utf-8'); body, conflict = read_body_digest(source)
        need(not conflict and body == item['original_body_sha256'] ==
             inventory[item['entry']]['original_body_sha256'], 'body provenance differs')
        need('Entry: '+item['entry'] in source and 'label: '+item['label'] in source and
             'ABI_UNVERIFIED' in source, 'source identity/status differs')
        if item in doc['cases']:
            restore(item, source)
            need(source.count(DECLARATION) == 1 and source.count(item['source_call']) == 1,
                 'source-only declaration or unchanged call differs')


def validate_index_row(row, item):
    need(row['entry'] == item['entry'][2:] and row['canonical_hash_match'] is True and
         row['byte_and_instruction_validation_pass'] is True and row['issues'] == [] and
         row['uncovered_body_byte_count'] == 0 and row['first_uncovered_addresses'] == [] and
         row['prefetch_listing_disagreements'] == [], 'private validation is quarantined/incomplete')
    need(row['canonical_body_sha256'] == row['program_memory_body_sha256'] == item['original_body_sha256']
         and row['body_byte_count'] == item['body_byte_count'] and
         row['instruction_count'] == item['instruction_count'], 'private index body pin differs')
    offset, size = row['jsonl_byte_offset'], row['jsonl_byte_length']
    need(type(offset) is int and type(size) is int and 0 <= offset < 512*1024*1024 and
         0 < size <= 1024*1024, 'private record bounds differ')
    return offset, size


def read_records(folder, doc):
    with (folder/'validation.json').open('rb') as stream:
        raw = stream.read(32*1024*1024+1)
    need(len(raw) <= 32*1024*1024, 'validation JSON exceeds bound')
    rows = strict_json(raw)['functions']
    need(len(rows) <= 20000 and len({r['entry'] for r in rows}) == len(rows), 'duplicate/oversized index')
    index = {r['entry']:r for r in rows}; out = {}
    with (folder/'functions.jsonl').open('rb') as stream:
        for item in doc['cases']+doc['dependencies']:
            offset, size = validate_index_row(index[item['entry'][2:]],item)
            stream.seek(offset); raw = stream.read(size)
            need(len(raw) == size, 'private record truncated')
            out[item['entry']] = strict_json(raw)
    return out


def validate_record(record, item, decoder):
    need(record['entry'] == item['entry'][2:] and record['name'] == item['label'] and
         record['is_thunk'] is False, 'private body identity differs')
    need(len(record['body_ranges']) == len(item['body_ranges']) == 1, 'ordered body range count differs')
    span = record['body_ranges'][0]
    need({k:span[k] for k in ('start','end_inclusive','length')} == item['body_ranges'][0],
         'body boundaries differ')
    raw = bytes.fromhex(span['bytes_hex']); start = int(span['start'],16)
    need(len(raw) == span['length'] == record['body_byte_count'] == item['body_byte_count'] and
         start+len(raw)-1 == int(span['end_inclusive'],16), 'complete body extent differs')
    need(sha(raw).upper() == item['original_body_sha256'] == record['program_memory_body_sha256'],
         'complete body hash differs')
    instructions = record['instructions']; offset = 0
    need(len(instructions) == record['instruction_count'] == item['instruction_count'], 'instruction count differs')
    for ins in instructions:
        encoded = bytes.fromhex(ins['bytes_hex'])
        need(int(ins['address'],16) == start+offset and len(encoded) == ins['length'] == ins['parsed_length'] and
             encoded == raw[offset:offset+len(encoded)], 'instruction coverage differs')
        need(ins['flow_override'] == 'NONE' and ins['is_length_overridden'] is False and
             ins['is_fallthrough_overridden'] is False and ins['listing_metadata_is_analyzed_not_byte_proof'] is True,
             'analyzed override or byte-proof claim encountered')
        offset += len(encoded)
    need(offset == len(raw), 'incomplete instruction coverage')
    decoded = list(decoder.disasm(raw,start))
    need([(i.address,i.bytes.hex()) for i in decoded] ==
         [(int(i['address'],16),i['bytes_hex']) for i in instructions], 'independent instruction boundaries differ')
    addresses = {i.address for i in decoded}; calls = []
    for ins, listed in zip(decoded,instructions):
        flows = []; fallthrough = f'{ins.address+ins.size:08x}'; flow_type = 'FALL_THROUGH'
        if ins.mnemonic.startswith('j'):
            need(ins.operands[0].imm in addresses, 'jump escapes complete body')
            flows = [f'{ins.operands[0].imm:08x}']
            flow_type = 'UNCONDITIONAL_JUMP' if ins.mnemonic == 'jmp' else 'CONDITIONAL_JUMP'
            if ins.mnemonic == 'jmp':
                fallthrough = None
        if ins.mnemonic == 'call':
            target = direct_call(ins.address,ins.bytes.hex())
            need(target == ins.operands[0].imm == 0x66920, 'independent direct call target differs')
            calls.append({'address':f'{ins.address:08x}','bytes':ins.bytes.hex(),'target':f'0x{target:08x}'})
            flows = [f'{target:08x}']; flow_type = 'UNCONDITIONAL_CALL'
        if ins.mnemonic == 'ret':
            fallthrough = None; flow_type = 'TERMINATOR'
        need(listed['flows'] == flows and listed['fallthrough'] == fallthrough and
             listed['flow_type'] == flow_type, 'analyzed flow metadata disagrees with bytes')
    need(calls == item['direct_calls'] and decoded[-1].bytes.hex() == 'c3', 'complete calls or plain RET differs')
    for window in item['instruction_windows'].values():
        a = int(window['address'],16); b = bytes.fromhex(window['bytes'])
        need(a in addresses and a+len(b) <= start+len(raw) and raw[a-start:a-start+len(b)] == b,
             'pinned instruction window differs')
    if 'store' in item:
        s = item['store']; store = next(i for i in decoded if i.address == int(s['address'],16))
        need(store.mnemonic == 'mov' and store.op_str == 'dword ptr [esi], '+hex(int(s['immediate'],16)),
             'independent DWORD operand decode differs')
        eax_moves = [i for i in decoded if i.mnemonic == 'mov' and i.op_str == 'eax, esi']
        need(len(eax_moves) == 2 and eax_moves[0].address+eax_moves[0].size == int(calls[0]['address'],16),
             'caller hidden input/return observations differ')
    else:
        need(decoded[1].mnemonic == 'mov' and decoded[1].op_str == 'dword ptr [eax + 4], ecx',
             'callee implicit EAX memory input differs')
    return len(decoded)


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--root',type=Path,default=ROOT)
    p.add_argument('--private-export',type=Path)
    p.add_argument('--tooldeps',type=Path)
    args = p.parse_args()
    if args.tooldeps:
        sys.path.insert(0,str(args.tooldeps))
    doc = load_manifest(args.root); verify_source(args.root,doc)
    print('PASS two exact source reversals, canonical callee/header and operand pins')
    if args.private_export:
        from capstone import Cs, CS_ARCH_X86, CS_MODE_32
        decoder = Cs(CS_ARCH_X86,CS_MODE_32); decoder.detail = True
        records = read_records(args.private_export,doc)
        counts = [validate_record(records[i['entry']],i,decoder) for i in doc['cases']+doc['dependencies']]
        print('PASS three complete private bodies, 205 bytes,',sum(counts),'independently decoded instructions')
    else:
        print('Private complete-body replay not requested; public operand evidence only')
    print('No caller execution, complete-XBE authentication, recovered ABI, behavior or byte match')


if __name__ == '__main__':
    main()
