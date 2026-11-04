#!/usr/bin/env python3
"""Optional bounded replay of selected private program-memory exports.

No private export is required by CI. This reads JSON only, never invokes Ghidra,
executes game bytes, trusts analyzed flow labels, or authenticates a whole XBE.
Adjacent context retains its own hash and never expands official body ranges.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from pathlib import Path
import re
import struct

MANIFEST_NAME = 'metadata/cpp_20261104_heap_free_scalar_calls.json'
MANIFEST_SHA = '1254d95cc4a3f3b6710342e30c91dbf8fcb8a9d13b93f41d0a4672a87642992e'
MAX_RECORD_BYTES = 16 * 1024 * 1024
MAX_EXPORT_BYTES = 512 * 1024 * 1024
MAX_RECORDS = 20000
HEADER_BEFORE = '#include "bf_ghidra_types.h"\n'
HEADER_AFTER = HEADER_BEFORE + '#include "bf_002ea018_heap_free_guest32.h"\n'
# Independently pinned short windows, not full original caller bodies.
SPECS = {
 '0x0008dcf0': ('0x002ea018', 'in_ECX[0xb]', {'binding':(0x8dcf1,'8bf1'),'load':(0x8dcf9,'8b462c'),'push':(0x8dd00,'50'),'call':(0x8dd01,'e812c32500'),'cleanup':(0x8dd06,'83c404'),'continuation':(0x8dd09,'c7462c00000000'),'epilogue':(0x8dd1e,'5ec3')}),
 '0x000c0040': ('0x002ea018', 'in_EAX[0x1a]', {'binding':(0xc0042,'8bf0'),'load':(0xc0064,'8b4668'),'push':(0xc006b,'50'),'call':(0xc006c,'e8a79f2200'),'cleanup':(0xc0071,'83c404'),'continuation':(0xc0074,'895e68'),'epilogue':(0xc00a7,'8bc65e5bc3')}),
 '0x0023cca0': ('0x002ea018', 'unaff_ESI[2]', {'load':(0x23ccbb,'8b4608'),'push':(0x23ccc2,'50'),'call':(0x23ccc3,'e850d30a00'),'cleanup':(0x23ccc8,'83c404'),'continuation':(0x23cccb,'897e08'),'epilogue':(0x23cceb,'8bc65fc3')}),
 '0x002ea08b': ('0x00067bf0', 'in_ECX[1]', {'push':(0x2ea097,'ff7104'),'call':(0x2ea09a,'e851dbd7ff'),'cleanup':(0x2ea09f,'59'),'continuation':(0x2ea0a0,'c3')}),
 '0x002ea0ca': ('0x00067bf0', 'in_ECX[1]', {'load':(0x2ea0d0,'8b4904'),'push':(0x2ea0d7,'51'),'call':(0x2ea0d8,'e813dbd7ff'),'cleanup':(0x2ea0dd,'59'),'continuation':(0x2ea0de,'c3')}),
}
HELPER_WINDOWS = {'0x002ea018': 'e9d3dbd7ff', '0x00067bf0': 'ff2554c63b00', '0x002ea4f9': 'e91afbffff'}


def require(condition, message):
    if not condition:
        raise ValueError(message)


def sha(data):
    return hashlib.sha256(data).hexdigest()


def unique_object(pairs):
    out = {}
    for key, value in pairs:
        require(key not in out, 'duplicate JSON key: ' + key)
        out[key] = value
    return out


def strict_json(raw):
    return json.loads(raw, object_pairs_hook=unique_object,
                      parse_constant=lambda value: (_ for _ in ()).throw(ValueError('nonfinite JSON')))


def bounded_json(path, limit=MAX_RECORD_BYTES):
    with Path(path).open('rb') as stream:
        raw = stream.read(limit + 1)
    require(len(raw) <= limit, 'JSON record exceeds limit')
    return strict_json(raw)


def load_manifest(root):
    path = Path(root) / MANIFEST_NAME
    with path.open('rb') as stream:
        raw = stream.read(1024 * 1024 + 1)
    require(sha(raw) == MANIFEST_SHA, 'manifest hash changed')
    document = strict_json(raw)
    validate_contract(document)
    return document


def relative_target(address, encoded, opcode):
    raw = bytes.fromhex(encoded)
    require(len(raw) == 5 and raw[0] == opcode, 'wrong direct transfer encoding')
    return (address + 5 + struct.unpack('<i', raw[1:])[0]) & 0xffffffff


def dword_memory(encoded, opcode):
    raw = bytes.fromhex(encoded)
    require(len(raw) == 3 and raw[0] == opcode and raw[1] >> 6 == 1 and raw[1] & 7 != 4,
            'expected DWORD base plus disp8, no SIB')
    return ((raw[1] >> 3) & 7, raw[1] & 7, struct.unpack('b', raw[2:])[0])


def official_addresses(item):
    addresses = []
    last = -1
    for q in item['body_ranges']:
        start, end = int(q['start'], 16), int(q['end_inclusive'], 16)
        require(0 <= start <= end <= 0xffffffff and start > last and end - start + 1 == q['length'],
                'invalid/overlapping body ranges')
        require(q['length'] <= MAX_RECORD_BYTES, 'body range exceeds limit')
        addresses.extend(range(start, end + 1)); last = end
    require(len(addresses) == item['body_byte_count'], 'body size changed')
    return addresses


def validate_contract(document):
    require(document['original_xbe_reauthenticated'] is False and document['original_game_functions_executed'] is False,
            'evidence/execution boundary changed')
    cases = document['cases']
    require([c['entry'] for c in cases] == list(SPECS), 'wrong caller set/order')
    for case in cases:
        target, arg, expected = SPECS[case['entry']]
        windows = case['instruction_windows']
        require(set(windows) == set(expected), 'unexpected evidence windows')
        body = set(official_addresses(case))
        for role, (address, encoded) in expected.items():
            w = windows[role]
            require(int(w['address'], 16) == address and w['bytes'] == encoded, 'window bytes/address changed')
            actual = set(range(address, address + len(bytes.fromhex(encoded))))
            inside = actual <= body
            require(inside == (role != 'cleanup') and (inside or not actual & body), 'context/body scope changed')
            require(w['evidence_scope'] == ('official_body' if inside else 'adjacent_context_only'), 'window scope changed')
        call_address, call_bytes = expected['call']
        require(relative_target(call_address, call_bytes, 0xe8) == int(target, 16), 'incorrect E8 target')
        require(case['call_target'] == target and case['source_argument'] == arg, 'target/source expression changed')
        symbol = 'thunk_FUN_00237ec0' if target == '0x002ea018' else 'thunk_FUN_00067bf0'
        old = 'thunk_FUN_00237ec0(' + arg + ');'; new = symbol + '(' + arg + ');'
        require(case['source_call_before'] == old and case['source_call_after'] == new, 'callee identity/source expression changed')
        edits = [{'before':HEADER_BEFORE,'after':HEADER_AFTER,'count':1,'kind':'existing_guest32_header'}]
        if old != new:
            edits.append({'before':old,'after':new,'count':1,'kind':'exact_original_target_identity'})
        require(case['replacements'] == edits, 'edits exceed bounded header/callee scope')
        require(case['analyzed_flow_override'] == {'address':f'0x{call_address:08x}','value':'CALL_RETURN','used_for_control_flow':False},
                'analyzed flow override admitted as control-flow proof')
        require(expected['cleanup'][0] == call_address + 5, 'cleanup does not follow call')
        cleanup = bytes.fromhex(expected['cleanup'][1])
        require(cleanup == (b'\x83\xc4\x04' if target == '0x002ea018' else b'\x59'), 'caller cleanup changed')
        require(expected['continuation'][0] == call_address + 5 + len(cleanup), 'continuation does not follow cleanup')
        if case['entry'] == '0x002ea08b':
            require(dword_memory(expected['push'][1], 0xff) == (6, 1, 4), 'wrong PUSH DWORD [ECX+4]')
        else:
            dst, base, offset = dword_memory(expected['load'][1], 0x8b)
            index = int(arg.split('[')[1][:-1], 0)
            require(offset == index * 4 and base == (1 if case['entry'] == '0x002ea0ca' else 6), 'wrong scalar memory operand')
            require(bytes.fromhex(expected['push'][1]) == bytes([0x50 + dst]), 'load/PUSH register handoff changed')
        if 'binding' in expected:
            raw = bytes.fromhex(expected['binding'][1])
            source_register = 1 if arg.startswith('in_ECX') else 0
            require(raw[0] == 0x8b and raw[1] >> 6 == 3 and (raw[1] >> 3) & 7 == 6 and raw[1] & 7 == source_register,
                    'source pseudo-register binding changed')
    models = {c['entry']: c for c in document['models']}
    require(set(models) == {'0x002ea018','0x00067bf0','0x002ea4f9','0x00237ec0','0x002f77f3','0x002f77dc'}, 'model set changed')
    for entry, encoded in HELPER_WINDOWS.items():
        require(models[entry]['instruction_window'] == {'address':entry,'bytes':encoded}, 'address-specific wrapper changed')
    require(relative_target(0x2ea018, HELPER_WINDOWS['0x002ea018'], 0xe9) == 0x67bf0, 'wrapper tail jump changed')
    require(relative_target(0x2ea4f9, HELPER_WINDOWS['0x002ea4f9'], 0xe9) == 0x2ea018, 'distinct wrapper tail jump changed')
    raw = bytes.fromhex(HELPER_WINDOWS['0x00067bf0'])
    require(raw[:2] == b'\xff\x25' and struct.unpack('<I', raw[2:])[0] == 0x3bc654, 'guest indirect slot changed')


def validate_record(record, item, allowed_override=None):
    require(record['entry'] == item['entry'][2:], 'function identity changed')
    addresses = official_addresses(item)
    ranges = record['body_ranges']
    require(len(ranges) == len(item['body_ranges']), 'export range count changed')
    memory = {}; body = bytearray()
    for actual, expected in zip(ranges, item['body_ranges']):
        require(all(int(actual[k],16) == int(expected[k],16) for k in ('start','end_inclusive')) and actual['length'] == expected['length'],
                'export official ranges changed')
        raw = bytes.fromhex(actual['bytes_hex'])
        require(len(raw) == actual['length'], 'export body length changed')
        body.extend(raw)
        memory.update({int(actual['start'],16)+i:b for i,b in enumerate(raw)})
    require(record['body_byte_count'] == len(body) == len(addresses), 'export body byte count changed')
    require(sha(body).upper() == item['original_body_sha256'] == record['program_memory_body_sha256'], 'body hash differs')
    instructions = {}; overrides = []
    require(record['instruction_count'] == len(record['instructions']), 'instruction count changed')
    last = -1
    for ins in record['instructions']:
        address = int(ins['address'],16); raw = bytes.fromhex(ins['bytes_hex'])
        require(address > last and 1 <= len(raw) <= 15 and len(raw) == ins['length'] == ins['parsed_length'], 'invalid instruction order/length')
        require(ins['is_length_overridden'] is False and ins['is_fallthrough_overridden'] is False, 'unapproved instruction override')
        if ins['flow_override'] != 'NONE': overrides.append((address, ins['flow_override']))
        for i,b in enumerate(raw):
            require(address+i not in instructions, 'overlapping instructions')
            instructions[address+i] = b
        last = address
    require(instructions == memory, 'instruction coverage/bytes differ from body')
    require(overrides == ([] if allowed_override is None else [(allowed_override,'CALL_RETURN')]), 'unexpected analyzed override')
    windows = list(item.get('instruction_windows',{}).values())
    if 'instruction_window' in item: windows.append(item['instruction_window'])
    for w in windows:
        if w.get('evidence_scope') == 'adjacent_context_only': continue
        start = int(w['address'],16); raw=bytes.fromhex(w['bytes'])
        require(all(memory.get(start+i)==b for i,b in enumerate(raw)), 'narrow window differs from body')
    return memory


def selected_records(path, entries):
    found = {}; seen = set(); total = count = 0
    with Path(path).open('rb') as stream:
        while True:
            raw = stream.readline(MAX_RECORD_BYTES + 1)
            if not raw: break
            count += 1; total += len(raw)
            require(len(raw) <= MAX_RECORD_BYTES and total <= MAX_EXPORT_BYTES and count <= MAX_RECORDS,
                    'export record/total limit exceeded')
            record = strict_json(raw)
            entry = record.get('entry')
            require(isinstance(entry,str) and re.fullmatch('[0-9a-f]{8}',entry) is not None and entry not in seen,
                    'invalid/duplicate function entry')
            seen.add(entry)
            if '0x'+entry in entries: found['0x'+entry] = record
    require(set(found) == set(entries), 'selected export functions missing')
    return found


def validate_context(record, case, memory):
    pin = case['context_provenance']
    require(record['function_entry'] == case['entry'][2:] and all(record.get(k)==v for k,v in pin.items()), 'context provenance changed')
    raw = bytes.fromhex(record['bytes_hex']); start = int(record['start'],16)
    require(len(raw) == record['length'] == int(record['end_inclusive'],16)-start+1 and len(raw) <= 65536, 'context span changed')
    require(sha(raw).upper() == pin['program_memory_context_sha256'], 'context hash differs')
    require(all(0 <= a-start < len(raw) and raw[a-start] == b for a,b in memory.items()), 'body/context overlap differs')
    for w in case['instruction_windows'].values():
        offset = int(w['address'],16)-start; encoded=bytes.fromhex(w['bytes'])
        require(offset >= 0 and raw[offset:offset+len(encoded)] == encoded, 'context window differs')


def independent_boundaries(record, case=None, context=None):
    """Optional Capstone check. Never auto-installs a dependency or executes bytes."""
    try:
        import capstone
    except ImportError as exc:
        raise ValueError('Capstone is required only for --capstone replay') from exc
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    actual = []
    for body_range in record['body_ranges']:
        raw = bytes.fromhex(body_range['bytes_hex'])
        decoded = list(decoder.disasm(raw,int(body_range['start'],16)))
        require(sum(i.size for i in decoded) == len(raw), 'Capstone did not consume full body range')
        actual.extend((i.address,i.size,bytes(i.bytes)) for i in decoded)
    exported = [(int(i['address'],16),i['length'],bytes.fromhex(i['bytes_hex'])) for i in record['instructions']]
    require(actual == exported, 'independent instruction boundaries differ')
    if context is not None:
        start=int(context['start'],16)
        end=int(context['last_official_body_address'],16)+1
        raw=bytes.fromhex(context['bytes_hex'])[:end-start]
        decoded=list(decoder.disasm(raw,start))
        require(sum(i.size for i in decoded) == len(raw), 'Capstone did not decode through final caller RET')
        boundaries={i.address for i in decoded}|{end}
        for window in case['instruction_windows'].values():
            address=int(window['address'],16)
            require(address in boundaries and address+len(bytes.fromhex(window['bytes'])) in boundaries,
                    'narrow window is not an independently decoded instruction span')
        require(decoded[-1].mnemonic == 'ret' and bytes(decoded[-1].bytes) == b'\xc3',
                'raw continuation does not end in plain RET')
    return capstone.__version__


def replay(root, manifest_root, functions, contexts, use_capstone=False):
    document = load_manifest(manifest_root)
    import csv
    with (Path(root)/'metadata/bulk_13694_inventory.csv').open() as stream:
        inventory = {r['entry']:r['original_body_sha256'] for r in csv.DictReader(stream)}
    items = {c['entry']:c for c in document['cases']+document['models']}
    records = selected_records(functions, items)
    decoder_version = None
    for entry,item in items.items():
        require(inventory.get(entry) == item['original_body_sha256'], 'canonical inventory differs')
        override = int(item['instruction_windows']['call']['address'],16) if 'instruction_windows' in item else None
        memory = validate_record(records[entry],item,override)
        context = None
        if 'context_provenance' in item:
            context = bounded_json(Path(contexts)/(entry[2:]+'.json'),65536)
            validate_context(context,item,memory)
        if use_capstone:
            decoder_version = independent_boundaries(records[entry],item,context)
    return {'matched_functions':len(items),'matched_separate_contexts':len(document['cases']),
            'whole_xbe_reauthenticated':False,'original_game_functions_executed':False,
            'analyzed_CALL_RETURN_overrides_ignored':len(document['cases']),
            'optional_independent_decoder':('Capstone '+decoder_version) if decoder_version else None}


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    parser.add_argument('--manifest-root',type=Path)
    parser.add_argument('--functions',type=Path,required=True)
    parser.add_argument('--contexts',type=Path,required=True)
    parser.add_argument('--capstone',action='store_true',help='also independently decode selected full-body boundaries and caller context through RET')
    args = parser.parse_args()
    print(json.dumps(replay(args.root,args.manifest_root or args.root,args.functions,args.contexts,args.capstone),sort_keys=True))
