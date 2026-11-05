#!/usr/bin/env python3
"""Read-only declaration provenance and optional private full-body replay.

Stored exports are read as bounded JSON only. They do not authenticate an XBE.
No canonical caller, original machine-code stream or private script executes.
"""
from __future__ import annotations
import argparse
import copy
import hashlib
import json
from pathlib import Path
import struct

NAME = 'metadata/cpp_20261105_allocator_declarations.json'
MANIFEST_SHA = '2279c8b85203e4cfdbfc8f330e8ee60744b6ff5dfd321f9c3df42f0119802bf5'
CONTRACT_SHA = '46dc875bff059e24c801c9d5c9db7f56653334096fb0c692102ef5b7a8d2481f'
BLOCK = ('#include "bf_002ea01d_allocator_guest32.h"\n'
         '/* Source-draft declaration only; implicit guest EAX input remains ABI_UNVERIFIED. */\n'
         'extern void FUN_002b3c60(void);\n')
ANCHOR = '#include "bf_ghidra_types.h"\n'


def require(ok, message):
    if not ok:
        raise ValueError(message)


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def unique_object(pairs):
    result = {}
    for key, value in pairs:
        require(key not in result, 'duplicate JSON key')
        result[key] = value
    return result


def strict_json(raw):
    return json.loads(raw, object_pairs_hook=unique_object,
                      parse_constant=lambda value: (_ for _ in ()).throw(ValueError('nonfinite JSON')))


def direct_call(address, encoded):
    raw = bytes.fromhex(encoded)
    require(len(raw) == 5 and raw[0] == 0xe8, 'expected direct E8 CALL')
    return (address + 5 + struct.unpack('<i', raw[1:])[0]) & 0xffffffff


def validate_contract(doc):
    # Independent immutable canonical contract pin also catches mutation of
    # provenance fields that do not affect the semantic checks below.
    canonical = json.dumps(doc, sort_keys=True, separators=(',', ':')).encode()
    require(sha(canonical) == CONTRACT_SHA, 'immutable evidence contract differs')
    require(doc['original_xbe_reauthenticated'] is False and doc['original_game_functions_executed'] is False,
            'authentication/execution claim changed')
    require([c['entry'] for c in doc['cases']] == ['0x002d1560', '0x002d1960'], 'caller set changed')
    for case in doc['cases']:
        start = int(case['entry'], 16); w = case['instruction_windows']
        require(case['added_block'] == BLOCK and case['source_call'] == 'iVar1 = FUN_002ea01d(0x30);', 'source edit changed')
        require(case['guest_size'] == 0x30 and case['guest_eax_destination'] == 'DWORD [ESI+0x6c]', 'guest binding changed')
        require(w['entry_binding']['bytes'] == '568bf1', 'ESI must save incoming ECX')
        require(w['callee_eax_selection']['bytes'] == '8b86b000000085c075068b86f8000000', 'real EAX selection changed')
        call = w['callee_call']
        require(int(call['address'], 16) == start+0x13 and direct_call(start+0x13, call['bytes']) == 0x2b3c60, 'wrong source-only callee')
        require(w['allocation_predicate']['bytes'] == '8b466c85c07528', 'allocation predicate changed')
        raw = bytes.fromhex(w['size_and_call']['bytes'])
        require(int(w['size_and_call']['address'], 16) == start+0x1f and raw[:2] == b'\x6a\x30', 'PUSH 0x30 changed')
        require(direct_call(start+0x21, raw[2:].hex()) == 0x2ea01d, 'wrong allocator target')
        require(w['eax_store']['bytes'] == '89466c' and int(w['eax_store']['address'],16) == start+0x26, 'EAX store changed')
        require(w['caller_cleanup']['bytes'] == '83c404' and int(w['caller_cleanup']['address'],16) == start+0x3d, 'delayed caller cleanup changed')
        require(w['stack_param2_load']['bytes'] == '8b44240c', 'guest stack word changed')
        require(w['epilogue']['bytes'] == '5ec20800', 'restore/RET 8 changed')
        require(case['analyzed_overrides'] == [] and case['body_byte_count'] in (122,123), 'body completeness changed')
    deps = {d['entry']:d for d in doc['dependencies']}
    require(deps['0x002b3c60']['definition_signature'] == 'void FUN_002b3c60(void)', 'source declaration differs')
    require(deps['0x002b3c60']['instruction_windows']['0']['bytes'] == '5180787008', 'callee implicit EAX read changed')
    require(direct_call(0x2ea023, deps['0x002ea01d']['instruction_windows']['1']['bytes']) == 0x67cd0, 'allocator wrapper edge changed')
    require(deps['0x00067cd0']['instruction_windows']['1']['bytes'] == 'ff1550c63b00', 'allocator dynamic import slot changed')


def load_bytes(raw):
    require(len(raw) <= 1024*1024 and sha(raw) == MANIFEST_SHA, 'manifest bytes changed')
    doc = strict_json(raw)
    validate_contract(doc)
    return doc


def load_manifest(root):
    with (Path(root)/NAME).open('rb') as stream:
        return load_bytes(stream.read(1024*1024+1))


def apply(source):
    require(source.count(ANCHOR) == 1 and BLOCK not in source, 'unexpected original source')
    return source.replace(ANCHOR, ANCHOR+BLOCK, 1)


def restore(case, source):
    require(sha(source.encode()) == case['source_after_sha256'] and source.count(BLOCK) == 1, 'repaired source drift')
    old = source.replace(BLOCK, '', 1); raw = old.encode()
    require(sha(raw) == case['source_before_sha256'], 'original source SHA differs')
    require(hashlib.sha1(b'blob '+str(len(raw)).encode()+b'\0'+raw).hexdigest() == case['preimage_git_blob'], 'original Git blob differs')
    require(apply(old) == source, 'source edit not exactly reversible')
    return old


def selected_records(path, entries):
    found = {}; seen = set(); total = count = 0
    with Path(path).open('rb') as stream:
        while True:
            raw = stream.readline(16*1024*1024+1)
            if not raw:
                break
            total += len(raw); count += 1
            require(len(raw) <= 16*1024*1024 and total <= 512*1024*1024 and count <= 20000, 'export bounds exceeded')
            record = strict_json(raw); entry = record.get('entry')
            require(isinstance(entry,str) and entry not in seen, 'duplicate/invalid export entry')
            seen.add(entry)
            if '0x'+entry in entries:
                found['0x'+entry] = record
    require(set(found) == set(entries), 'selected complete bodies absent')
    return found


def validate_record(record, item, decoder):
    require(record['entry'] == item['entry'][2:], 'body identity changed')
    require(len(record['body_ranges']) == len(item['body_ranges']) == 1, 'body range count changed')
    body = record['body_ranges'][0]; pin = item['body_ranges'][0]
    require(all(body[k] == pin[k] for k in ('start','end_inclusive','length')), 'body boundaries changed')
    start = int(body['start'],16); raw = bytes.fromhex(body['bytes_hex'])
    require(len(raw) == body['length'] == item['body_byte_count'] == record['body_byte_count'], 'body length differs')
    require(int(body['end_inclusive'],16)+1 == start+len(raw), 'body endpoint differs')
    require(sha(raw).upper() == item['original_body_sha256'] == record['program_memory_body_sha256'], 'body SHA differs')
    instructions = record['instructions']; offset = 0
    require(len(instructions) == item['instruction_count'] == record['instruction_count'], 'instruction count differs')
    for i in instructions:
        encoded = bytes.fromhex(i['bytes_hex'])
        require(int(i['address'],16) == start+offset and len(encoded) == i['length'] == i['parsed_length'], 'instruction boundary differs')
        require(encoded == raw[offset:offset+len(encoded)], 'instruction/body bytes disagree')
        require(i['flow_override'] == 'NONE' and i['is_length_overridden'] is False and i['is_fallthrough_overridden'] is False, 'analysis override encountered')
        offset += len(encoded)
    require(offset == len(raw), 'incomplete instruction coverage')
    decoded = list(decoder.disasm(raw,start))
    require([(i.address,i.bytes.hex()) for i in decoded] == [(int(i['address'],16),i['bytes_hex']) for i in instructions], 'independent boundaries differ')
    require(decoded[-1].mnemonic == 'ret', 'body does not end in real RET')
    addresses = {i.address for i in decoded}; calls = []
    for i in decoded:
        if i.mnemonic.startswith('j'):
            require(i.operands[0].imm in addresses, 'branch exits complete body')
        if i.mnemonic == 'call':
            calls.append({'address':f'{i.address:08x}','bytes':i.bytes.hex(),'target':i.op_str})
            if i.bytes[0] == 0xe8:
                require(direct_call(i.address,i.bytes.hex()) == i.operands[0].imm, 'raw E8 disagrees with independent decoder')
    require(calls == item['direct_calls'], 'complete real call list differs')
    for w in item['instruction_windows'].values():
        a = int(w['address'],16); b = bytes.fromhex(w['bytes'])
        require(a in addresses and w['scope'] == 'official_body' and a >= start and a+len(b) <= start+len(raw), 'window outside official instructions')
        require(raw[a-start:a-start+len(b)] == b, 'window differs from complete body')
    return len(decoded)


def replay(root, functions):
    import capstone
    decoder = capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_32); decoder.detail = True
    doc = load_manifest(root); items = doc['cases']+doc['dependencies']
    records = selected_records(functions,{i['entry'] for i in items})
    counts = {i['entry']:validate_record(records[i['entry']],i,decoder) for i in items}
    rejected = 0
    for item in items:
        record = records[item['entry']]
        changes = [
            (('entry',), 'ffffffff'),
            (('body_byte_count',), record['body_byte_count']+1),
            (('instruction_count',), record['instruction_count']+1),
            (('program_memory_body_sha256',), '0'*64),
            (('body_ranges',0,'start'), f"{int(record['entry'],16)+1:08x}"),
            (('body_ranges',0,'end_inclusive'), record['entry']),
            (('body_ranges',0,'length'), record['body_byte_count']+1),
            (('instructions',0,'address'), f"{int(record['entry'],16)+1:08x}"),
            (('instructions',0,'flow_override'), 'CALL_RETURN'),
            (('instructions',0,'is_length_overridden'), True),
            (('instructions',0,'is_fallthrough_overridden'), True),
            (('instructions',0,'parsed_length'), record['instructions'][0]['length']+1),
        ]
        for key in [('body_ranges',0,'bytes_hex'), ('instructions',0,'bytes_hex')]:
            node=record
            for part in key:
                node=node[part]
            raw=bytearray.fromhex(node);raw[0]^=1
            changes.append((key,raw.hex()))
        for path,value in changes:
            mutant=copy.deepcopy(record);node=mutant
            for part in path[:-1]:
                node=node[part]
            node[path[-1]]=value
            try:
                validate_record(mutant,item,decoder)
            except ValueError:
                rejected+=1
            else:
                raise ValueError('private record mutation accepted')
    return {'complete_bodies':len(counts),'instruction_counts':counts,'private_mutations_rejected':rejected,'decoder':'Capstone '+capstone.__version__,
            'original_xbe_reauthenticated':False,'original_game_functions_executed':False}


if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument('--functions',type=Path,required=True)
    args = p.parse_args()
    print(json.dumps(replay(args.root,args.functions),sort_keys=True))
