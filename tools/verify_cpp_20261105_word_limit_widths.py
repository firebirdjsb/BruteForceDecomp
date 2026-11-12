#!/usr/bin/env python3
"""Four unresolved extern WORD widths, never native global storage or ABI proof.

Private inputs are bounded JSON data. No game function or original code runs.
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

ROOT = Path(__file__).resolve().parents[1]
NAME = 'metadata/cpp_20261105_word_limit_widths.json'
MANIFEST_SHA = '4921ff805090cf2b0368968efa6631dee90896333507c7a2fc547b996a1b6343'
CONTRACT_SHA = '4ac02c1199acce7742a2cfe33f1f36cd06981bd163154e2b884d5131c7c7db94'
# Ordered exact absolute WORD operands, including two unchanged neighbor copies.
WORD_ACCESS = (
    (0x0037fb0d, 'store_ax', 0x004a8fe0),
    (0x0037fb18, 'store_ax', 0x004a8fe4),
    (0x0037fb37, 'store_ax', 0x004a8fe4),
    (0x0037fb43, 'add_ax', 0x004a8fe0),
    (0x0037fb50, 'load_ax', 0x004a8fe4),
    (0x0037fb56, 'load_cx', 0x004a8fe0),
    (0x0037fb5e, 'store_cx', 0x004a8fe2),
    (0x0037fb65, 'store_ax', 0x004a8fe6),
    (0x00386212, 'cmp_ax', 0x004a8fe4),
    (0x0038624e, 'cmp_ax', 0x004a8fe0),
)
WORD_PREFIX = {'store_ax': b'\x66\xa3', 'load_ax': b'\x66\xa1',
               'store_cx': b'\x66\x89\x0d', 'load_cx': b'\x66\x8b\x0d',
               'add_ax': b'\x66\x01\x05', 'cmp_ax': b'\x66\x3b\x05'}


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


def hex_bytes(value):
    need(isinstance(value, str) and re.fullmatch(r'(?:[0-9a-f]{2})+', value), 'invalid byte encoding')
    return bytes.fromhex(value)


def validate_word(window, expected):
    site, operation, address = expected
    raw = hex_bytes(window['bytes'])
    need(window['address'] == f'{site:08x}' and
         raw == WORD_PREFIX[operation]+address.to_bytes(4, 'little'),
         'WORD instruction site/operation/address/width differs')
    need(int.from_bytes(raw[-4:], 'little') == address, 'absolute guest displacement differs')


def validate_query(windows, entry, global_address):
    base = int(entry, 16)
    expected = [(base, '668b4220'),
                (base+4, '663b05'+global_address.to_bytes(4, 'little').hex()),
                (base+11, '7606'), (base+13, 'b800050080'), (base+18, 'c3')]
    need([(int(w['address'], 16), w['bytes']) for w in windows] == expected,
         'request WORD load, unsigned JBE or rejection return differs')
    raw = hex_bytes(windows[2]['bytes'])
    need(raw[0] == 0x76 and base+11+2+int.from_bytes(raw[1:], 'little', signed=True) == base+19,
         'unsigned accept edge differs')


def validate_contract(doc):
    need(canonical_sha(doc) == CONTRACT_SHA, 'immutable evidence contract differs')
    need([c['entry'] for c in doc['cases']] == ['0x0037f9a9', '0x0038620e', '0x0038624a'],
         'selected source set differs')
    need(sum(len(c['edits']) for c in doc['cases']) == 4, 'edit count differs')
    for key in ('original_xbe_reauthenticated', 'canonical_functions_executed',
                'original_machine_code_executed', 'global_definitions_added',
                'global_mapping_recovered', 'object_layout_or_aliases_recovered', 'abi_recovered'):
        need(doc[key] is False, 'unresolved boundary changed')
    all_windows = {int(w['address'], 16): w for c in doc['cases'] for w in c['instruction_windows']}
    for expected in WORD_ACCESS:
        validate_word(all_windows[expected[0]], expected)
    for case, address in zip(doc['cases'][1:], (0x004a8fe4, 0x004a8fe0)):
        validate_query(case['instruction_windows'], case['entry'], address)
    need(all_windows[0x0037fb08]['bytes'] == '660fb6430c' and
         all_windows[0x0037fb13]['bytes'] == '660fb6430d', 'byte-to-WORD initializer input differs')


def load_bytes(raw):
    need(len(raw) <= 1024*1024 and sha(raw) == MANIFEST_SHA, 'manifest bytes differ')
    doc = strict_json(raw)
    validate_contract(doc)
    return doc


def load_manifest(root):
    with (Path(root)/NAME).open('rb') as stream:
        return load_bytes(stream.read(1024*1024+1))


def apply(case, old):
    need(isinstance(old, bytes) and sha(old) == case['source_before_sha256'], 'raw source preimage differs')
    new = old
    for edit in case['edits']:
        before, after = edit['before'].encode(), edit['after'].encode()
        need(new.count(before) == 1 and after not in new, 'exact declaration count differs')
        new = new.replace(before, after, 1)
    need(sha(new) == case['source_after_sha256'], 'raw source postimage differs')
    return new


def restore(case, new):
    need(isinstance(new, bytes) and sha(new) == case['source_after_sha256'], 'raw repaired source differs')
    old = new
    for edit in reversed(case['edits']):
        before, after = edit['before'].encode(), edit['after'].encode()
        need(old.count(after) == 1 and before not in old, 'reversal declaration count differs')
        old = old.replace(after, before, 1)
    need(sha(old) == case['source_before_sha256'], 'raw preimage SHA differs')
    need(hashlib.sha1(b'blob '+str(len(old)).encode()+b'\0'+old).hexdigest() == case['preimage_git_blob'],
         'raw Git preimage differs')
    need(apply(case, old) == new, 'reversible source mismatch')
    return old


COUNTER_LAYER_NAME = 'metadata/cpp_20261105_counter_word_widths.json'
COUNTER_LAYER_SHA = 'f21931924ea7c42ccde29b00284942e8321f84fc3ad3da0d8f71e641b120ba69'
COUNTER_LAYER_SOURCES = {
    'src/platform/xpp_role_unverified/0x'+entry+'.cpp'
    for entry in ('0037f9a9', '00385128', '0038524e', '00385d45', '00385d64')
}


def reverse_counter_layer(root, source, raw, expected_sha):
    """Recover one exact predecessor image; counter evidence stays separate."""
    need(source in COUNTER_LAYER_SOURCES, 'unapproved counter projection source')
    need((Path(root)/COUNTER_LAYER_NAME).is_file(), 'approved counter manifest missing')
    with (Path(root)/COUNTER_LAYER_NAME).open('rb') as stream:
        manifest = stream.read(1024*1024+1)
    need(sha(manifest) == COUNTER_LAYER_SHA, 'approved counter manifest bytes differ')
    later = strict_json(manifest)
    matches = [c for c in later['cases'] if c['source'] == source]
    need(len(matches) == 1, 'approved counter case differs')
    case = matches[0]
    need(sha(raw) == case['source_after_sha256'] and case['source_before_sha256'] == expected_sha,
         'counter layer is not the exact approved postimage/preimage')
    recovered = raw
    for edit in reversed(case['edits']):
        before, after = edit['before'].encode(), edit['after'].encode()
        need(recovered.count(after) == 1 and before not in recovered, 'counter reversal count differs')
        recovered = recovered.replace(after, before, 1)
    need(sha(recovered) == expected_sha, 'counter predecessor bytes differ')
    need(hashlib.sha1(b'blob '+str(len(recovered)).encode()+b'\0'+recovered).hexdigest() == case['preimage_git_blob'],
         'counter predecessor Git blob differs')
    return recovered


def source_at_width_stage(root, case, raw):
    """Reverse only the later, separately pinned pair of source declarations.

    The immutable WORD manifest and its restore/apply hashes are unchanged.
    No arbitrary extern, comment or body edit can be normalized away.
    """
    need(isinstance(raw, bytes), 'source layer requires raw bytes')
    if sha(raw) == case['source_after_sha256']:
        return raw
    if case['source'] in COUNTER_LAYER_SOURCES:
        return reverse_counter_layer(root, case['source'], raw, case['source_after_sha256'])
    need(case['entry'] in ('0x0038620e', '0x0038624a'), 'unapproved source layer')
    import verify_cpp_20261105_word_source_declarations as declarations
    later = declarations.load_manifest(root)
    matches = [c for c in later['cases'] if c['entry'] == case['entry']]
    need(len(matches) == 1, 'approved declaration case differs')
    approved = matches[0]
    need(approved['source'] == case['source'] and
         approved['source_before_sha256'] == case['source_after_sha256'],
         'declaration preimage does not equal exact WORD postimage')
    recovered = declarations.restore(approved, raw.decode()).encode()
    need(sha(recovered) == case['source_after_sha256'], 'WORD source layer differs')
    return recovered


def source_at_dependency_stage(root, doc, source, raw, expected_sha):
    if sha(raw) == expected_sha:
        return raw
    matches = [case for case in doc['cases'] if case['source'] == source]
    if matches:
        need(len(matches) == 1 and matches[0]['source_after_sha256'] == expected_sha,
             'predecessor case pin differs')
        return source_at_width_stage(root, matches[0], raw)
    return reverse_counter_layer(root, source, raw, expected_sha)


def region_labels(root, doc):
    labels = []
    pins = {p['path']:p['sha256'] for p in doc['dependency_pins']}
    for path in (root/'src').rglob('*.cpp'):
        raw = path.read_bytes(); source = path.relative_to(root).as_posix()
        if source in pins:
            raw = source_at_dependency_stage(root, doc, source, raw, pins[source])
        text = raw.decode()
        for address in ('004a8fe0', '004a8fe2', '004a8fe4', '004a8fe6'):
            symbol = 'DAT_'+address
            if symbol in text:
                lines = [line for line in text.splitlines() if line.startswith('extern ') and symbol in line]
                need(len(lines) == 1, 'region symbol declaration missing/ambiguous')
                labels.append({'source':path.relative_to(root).as_posix(), 'symbol':symbol,
                               'declaration':lines[0], 'occurrences':text.count(symbol)})
    return sorted(labels, key=lambda r:(r['source'], r['symbol']))


def verify_source(root, doc):
    root = Path(root)
    with (root/'metadata/bulk_13694_inventory.csv').open(newline='') as stream:
        inventory = {r['entry']:r for r in csv.DictReader(stream)}
    for pin in doc['dependency_pins']:
        raw = (root/pin['path']).read_bytes()
        raw = source_at_dependency_stage(root, doc, pin['path'], raw, pin['sha256'])
        need(sha(raw) == pin['sha256'], 'dependency/source bytes drift: '+pin['path'])
    need(region_labels(root, doc) == doc['region_labels'], 'region declaration/reference footprint differs')
    for case in doc['cases']:
        path = source_path(root, case['entry'])
        need(path.relative_to(root).as_posix() == case['source'], 'source route differs')
        raw = source_at_width_stage(root, case, path.read_bytes()); restore(case, raw)
        digest, conflict = read_body_digest(raw.decode())
        need(not conflict and digest == case['original_body_sha256'] == inventory[case['entry']]['original_body_sha256'],
             'original body identity differs')
        need(('Entry: '+case['entry']).encode() in raw and ('label: '+case['label']).encode() in raw and
             b'ABI_UNVERIFIED' in raw, 'source entry/name/status differs')
    ci = (root/'.github/workflows/cpp-compatibility-audit.yml').read_bytes()
    addition = doc['ci_addition'].encode()
    need(ci.count(addition) == 1, 'exact CI invocation missing or duplicated')
    # The historical preimage is pinned in the manifest/package diff. Future
    # independent additive gates must not invalidate this source-width gate.
    for line in doc['ci_preserved_lines']:
        need(ci.count(line.encode()) == 1, 'required preceding CI gate missing or duplicated')


def validate_index_row(row, case):
    need(canonical_sha(row) == case['private_index_row_sha256'], 'private index pin differs')
    need(row['canonical_hash_match'] is True and row['byte_and_instruction_validation_pass'] is True and
         row['issues'] == [] and row['uncovered_body_byte_count'] == 0, 'private body quarantined/incomplete')
    need(row['canonical_body_sha256'] == row['program_memory_body_sha256'] == case['original_body_sha256'],
         'private index body identity differs')
    offset, size = row['jsonl_byte_offset'], row['jsonl_byte_length']
    need(type(offset) is int and type(size) is int and 0 <= offset < 512*1024*1024 and 0 < size <= 1024*1024,
         'private record bound differs')


def read_records(folder, doc):
    with (folder/'validation.json').open('rb') as stream:
        raw = stream.read(32*1024*1024+1)
    need(len(raw) <= 32*1024*1024, 'oversized private index')
    rows = strict_json(raw)['functions']
    need(len(rows) == len({r['entry'] for r in rows}) == 13694, 'private index set differs')
    index = {r['entry']:r for r in rows}; result = {}
    with (folder/'functions.jsonl').open('rb') as stream:
        for case in doc['cases']:
            row = index[case['entry'][2:]]; validate_index_row(row, case)
            stream.seek(row['jsonl_byte_offset']); raw = stream.read(row['jsonl_byte_length'])
            need(len(raw) == row['jsonl_byte_length'], 'private record truncated')
            result[case['entry']] = strict_json(raw)
    return result


def validate_record(record, case, decoder):
    from capstone import CS_GRP_CALL, CS_GRP_JUMP, CS_GRP_RET
    from capstone.x86 import X86_OP_IMM
    need(record['entry'] == case['entry'][2:] and record['name'] == case['label'] and record['is_thunk'] is False,
         'private entry/name/thunk differs')
    need(len(record['body_ranges']) == len(case['body_ranges']) == 1, 'body range set differs')
    span = record['body_ranges'][0]
    need({k:span[k] for k in ('start','end_inclusive','length')} == case['body_ranges'][0], 'body range differs')
    raw = hex_bytes(span['bytes_hex']); start = int(span['start'],16)
    need(len(raw) == span['length'] == record['body_byte_count'] == case['body_byte_count'] and
         start+len(raw)-1 == int(span['end_inclusive'],16), 'body extent differs')
    need(sha(raw).upper() == case['original_body_sha256'] == record['program_memory_body_sha256'], 'body digest differs')
    instructions = record['instructions']; offset = 0
    need(len(instructions) == record['instruction_count'] == case['instruction_count'], 'instruction count differs')
    for ins in instructions:
        encoded = hex_bytes(ins['bytes_hex'])
        need(int(ins['address'],16) == start+offset and len(encoded) == ins['length'] == ins['parsed_length'] and
             encoded == raw[offset:offset+len(encoded)], 'instruction coverage differs')
        need(ins['flow_override'] == 'NONE' and ins['is_length_overridden'] is False and
             ins['is_fallthrough_overridden'] is False, 'analyzed override encountered')
        offset += len(encoded)
    need(offset == len(raw), 'uncovered body bytes')
    decoded = list(decoder.disasm(raw,start)); boundaries = {i.address for i in decoded}
    need([(i.address,i.bytes.hex()) for i in decoded] == [(int(i['address'],16),i['bytes_hex']) for i in instructions],
         'independent boundaries differ')
    indirect = {int(i['address'],16):i for i in case['indirect_import_operands']}
    for ins, listed in zip(decoded,instructions):
        flows = []; fall = f'{ins.address+ins.size:08x}'; kind = 'FALL_THROUGH'
        if ins.group(CS_GRP_CALL):
            if ins.operands[0].type == X86_OP_IMM:
                kind = 'UNCONDITIONAL_CALL'; flows = [f'{ins.operands[0].imm:08x}']
            else:
                kind = 'COMPUTED_CALL'; need(ins.address in indirect, 'unlisted indirect call')
                pin = indirect[ins.address]; need(ins.bytes.hex() == pin['bytes'], 'indirect operand differs')
                # These are pinned Ghidra annotations, NOT byte-proven import targets.
                flows = pin['analyzed_flows']
        elif ins.group(CS_GRP_JUMP):
            need(ins.operands[0].type == X86_OP_IMM, 'unresolved computed jump')
            target = ins.operands[0].imm; need(target in boundaries, 'branch exits selected body')
            flows = [f'{target:08x}']; kind = 'UNCONDITIONAL_JUMP' if ins.mnemonic == 'jmp' else 'CONDITIONAL_JUMP'
            if ins.mnemonic == 'jmp': fall = None
        elif ins.group(CS_GRP_RET):
            need(ins.bytes.hex() == 'c3', 'return cleanup differs'); kind = 'TERMINATOR'; fall = None
        if fall is not None: need(int(fall,16) in boundaries, 'fallthrough exits body')
        need(listed['flows'] == flows and listed['fallthrough'] == fall and listed['flow_type'] == kind,
             'analyzed flow metadata differs from raw flow/pinned unresolved import annotation')
    by_address = {i.address:i for i in decoded}
    for window in case['instruction_windows']:
        need(by_address[int(window['address'],16)].bytes.hex() == window['bytes'], 'public window not in full body')
    need(canonical_sha(record) == case['private_record_canonical_sha256'], 'remaining private record fields differ')


def verify_audit(path, root, doc):
    report = strict_json(Path(path).read_bytes())
    need(report['scope'] == 'full_inventory' and report['checked'] == report['original_function_count'] == 13694 and
         report['counts'] == doc['audit_baseline']['counts'] and report['passing_is_not_1_to_1'] is True,
         'full audit counts/scope/status boundary differs')
    rows = report['results']; need(len(rows) == len({r['entry'] for r in rows}) == 13694, 'audit row set differs')
    index = {r['entry']:r for r in rows}
    need(canonical_sha(sorted([[r['entry'],r['status']] for r in rows])) ==
         doc['audit_baseline']['entry_status_sha256'], 'full audit status vector differs')
    with (root/'metadata/bulk_13694_inventory.csv').open(newline='') as stream:
        inventory={r['entry']:r['original_body_sha256'] for r in csv.DictReader(stream)}
    need(set(index) == set(inventory), 'audit entry identities differ')
    from collections import Counter
    need(dict(Counter(r['status'] for r in rows)) == report['counts'], 'audit aggregate differs')
    for row in rows:
        path = source_path(root,row['entry'])
        raw=path.read_bytes();digest,conflict=read_body_digest(raw.decode())
        need(row['source'] == path.relative_to(root).as_posix() and row['source_sha256'] == sha(raw) and
             not conflict and row['original_body_sha256'] == digest == inventory[row['entry']] and row['body_provenance'] == 'match',
             'audit source/provenance drift')
    for case in doc['cases']:
        need(index[case['entry']]['status'] == case['audit_status'] == 'fail', 'selected audit status changed')


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root',type=Path,default=ROOT); parser.add_argument('--private-export',type=Path)
    parser.add_argument('--tooldeps',type=Path); parser.add_argument('--audit',type=Path)
    args=parser.parse_args()
    if args.tooldeps: sys.path.insert(0,str(args.tooldeps))
    doc=load_manifest(args.root); verify_source(args.root,doc)
    print('PASS four raw-byte reversible declarations, original WORD/JBE windows, region and dependency pins')
    if args.private_export:
        from capstone import Cs,CS_ARCH_X86,CS_MODE_32
        decoder=Cs(CS_ARCH_X86,CS_MODE_32);decoder.detail=True
        records=read_records(args.private_export,doc)
        for case in doc['cases']: validate_record(records[case['entry']],case,decoder)
        print('PASS 573 private body bytes, 174 independent boundaries and complete flow; imports unresolved')
    if args.audit: verify_audit(args.audit,args.root,doc);print('PASS exact-source full audit: 4051 pass, 9643 fail, zero gain')
    print('No global definitions, layout/alias/mapping proof, ABI, whole-function behavior or original execution')

if __name__=='__main__': main()
