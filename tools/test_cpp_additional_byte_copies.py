#!/usr/bin/env python3
"""Five fixed-byte spelling repairs, tested only through initialized host seams.
Canonical functions and original machine code never execute. Full guest address,
register, stack, linkage, runtime and rebuild behavior remain unverified.
"""
from __future__ import annotations
import argparse, copy, hashlib, json, os, re, shutil, subprocess, tempfile
from pathlib import Path
ROOT = Path(__file__).resolve().parents[1]
MANIFEST = 'metadata/cpp_20261105_additional_byte_copies.json'
MANIFEST_SHA = '3699e453a0f9bc32846ddc42b567aab18cb31b611f6d986183ffbd313709a744'
FIXTURE = 'tests/fixtures/cpp_additional_byte_copies/native_objects.cpp'
FIXTURE_SHA = 'c427649f81963ba2c3cd46b95957b33cdbfaa5204814e7ebf39397a4303df10c'
XBE_SHA = 'B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721'
# Immutable raw bytes, instruction lengths, and operation schedules are pinned
# separately from manifest inputs. Every byte is re-encoded below.
EXPECTED = {'0x001ca330': {'offsets': [13],
                'dst': 'in_EAX',
                'src': 'in_ECX',
                'kind': 'single',
                'extent': 60,
                'transfers': [[0, 4],
                              [4, 4],
                              [8, 4],
                              [12, 1],
                              [13, 1],
                              [16, 4],
                              [20, 4],
                              [24, 4],
                              [28, 4],
                              [32, 4],
                              [36, 4],
                              [40, 4],
                              [44, 4],
                              [48, 4],
                              [52, 4],
                              [56, 1]],
                'dst_stride': 0,
                'src_stride': 0,
                'sha': '11964A0D9E1257E5A6A867C4A28660602A011AE76D79785997D5FF20235CD20E',
                'hex': '8b1189108b51048950048b51088950088a510c88500c8a510d88500d8b51108950108b51148950148b51188950188b511c89501c8b51208950208b51248950248b51288950288b512c89502c8b51308950308b51348950348a4938884838c3',
                'lengths': [2,
                            2,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            1]},
 '0x001d0b20': {'offsets': [13],
                'dst': 'param_1',
                'src': 'in_ECX',
                'kind': 'fill',
                'extent': 60,
                'transfers': [[0, 4],
                              [4, 4],
                              [8, 4],
                              [12, 1],
                              [13, 1],
                              [16, 4],
                              [20, 4],
                              [24, 4],
                              [28, 4],
                              [32, 4],
                              [36, 4],
                              [40, 4],
                              [44, 4],
                              [48, 4],
                              [52, 4],
                              [56, 1]],
                'dst_stride': 60,
                'src_stride': 0,
                'sha': '625EC8B7AC2164D33773134837BDB9B6B39BA80548CDE3E3DD6DC5B60FBAF3FC',
                'hex': '8b442404568b74240c3bc674688d49008b1189108b51048950048b51088950088a510c88500c8a510d88500d8b51108950108b51148950148b51188950188b511c89501c8b51208950208b51248950248b51288950288b512c89502c8b51308950308b51348950348a513888503883c03c3bc6759b5ec3',
                'lengths': [4,
                            1,
                            4,
                            2,
                            2,
                            3,
                            2,
                            2,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            2,
                            2,
                            1,
                            1]},
 '0x001d1f40': {'offsets': [13],
                'dst': 'in_EAX',
                'src': 'in_ECX',
                'kind': 'single_tail',
                'extent': 64,
                'transfers': [[0, 4],
                              [4, 4],
                              [8, 4],
                              [12, 1],
                              [13, 1],
                              [16, 4],
                              [20, 4],
                              [24, 4],
                              [28, 1],
                              [32, 4],
                              [36, 4],
                              [40, 4],
                              [44, 4],
                              [48, 4],
                              [52, 4],
                              [56, 4],
                              [60, 4]],
                'dst_stride': 0,
                'src_stride': 0,
                'sha': 'FEDE0779B9983F5D6234068DA0BBE8F2B820B81E0EE29AFEA77355C8639D9590',
                'hex': '8b1189108b51048950048b51088950088a510c88500c8a510d88500d8b51108950108b51148950148b51188950188a511c88501c8b51208950208b51248950248b51288950288b512c89502c83c130568b318d503089328b71048972048b71088972088b490c894a0c5ec3',
                'lengths': [2,
                            2,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            1,
                            2,
                            3,
                            2,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            1,
                            1]},
 '0x001d8ad0': {'offsets': [13],
                'dst': 'in_EAX',
                'src': 'param_1',
                'kind': 'copy',
                'extent': 60,
                'transfers': [[0, 4],
                              [4, 4],
                              [8, 4],
                              [12, 1],
                              [13, 1],
                              [16, 4],
                              [20, 4],
                              [24, 4],
                              [28, 4],
                              [32, 4],
                              [36, 4],
                              [40, 4],
                              [44, 4],
                              [48, 4],
                              [52, 4],
                              [56, 1]],
                'dst_stride': 60,
                'src_stride': 60,
                'sha': 'CC92A864564658579D923CB4B4BDE8A287FF9C3F39837ABA7C5AAE39AFADB791',
                'hex': '8b4c2404568b74240c3bce746b8d49008b1189108b51048950048b51088950088a510c88500c8a510d88500d8b51108950108b51148950148b51188950188b511c89501c8b51208950208b51248950248b51288950288b512c89502c8b51308950308b51348950348a513888503883c13c83c03c3bce75985ec3',
                'lengths': [4,
                            1,
                            4,
                            2,
                            2,
                            3,
                            2,
                            2,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            2,
                            2,
                            1,
                            1]},
 '0x001d2330': {'offsets': [13, 69, 70],
                'dst': 'in_EAX',
                'src': 'in_ECX',
                'kind': 'single',
                'extent': 72,
                'transfers': [[0, 4],
                              [4, 4],
                              [8, 4],
                              [12, 1],
                              [13, 1],
                              [16, 4],
                              [20, 4],
                              [24, 4],
                              [28, 1],
                              [32, 4],
                              [36, 4],
                              [40, 4],
                              [44, 1],
                              [48, 4],
                              [52, 4],
                              [56, 4],
                              [60, 4],
                              [64, 4],
                              [68, 1],
                              [69, 1],
                              [70, 1]],
                'dst_stride': 0,
                'src_stride': 0,
                'sha': 'A46479523408578F41B6D358A5ECFB3E55781ACE58170AFF609FBC73FEDC5CB2',
                'hex': '8b1189108b51048950048b51088950088a510c88500c8a510d88500d8b51108950108b51148950148b51188950188a511c88501c8b51208950208b51248950248b51288950288a512c88502c8b51308950308b51348950348b51388950388b513c89503c8b51408950408a51448850448a51458850458a4946884846c3',
                'lengths': [2,
                            2,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            3,
                            1]}}

def need(ok, message):
    if not ok:
        raise ValueError(message)


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def decoded_windows(entry):
    spec = EXPECTED[entry]
    raw = bytes.fromhex(spec['hex']); at = int(entry, 16); pos = 0; windows = []
    for size in spec['lengths']:
        windows.append({'address': f'0x{at:08x}', 'bytes': raw[pos:pos+size].hex()})
        at += size; pos += size
    need(pos == len(raw), 'complete pinned instruction lengths')
    targets = {int(w['address'], 16) for w in windows}
    branches = []
    for w in windows:
        b = bytes.fromhex(w['bytes'])
        if b[0] in (0x74, 0x75):
            target = int(w['address'], 16)+2+int.from_bytes(b[1:], 'little', signed=True)
            need(target in targets, 'branch target inside full body')
            branches.append(target)
    loop = spec['kind'] in ('fill', 'copy')
    need(len(branches) == (2 if loop else 0), 'all branches accounted for')
    # Independently encode full x86 schedule: widths, order, final register
    # overwrite, loop strides, stack loads and return cleanup are all explicit.
    expected = bytearray()
    if loop:
        expected.extend(bytes.fromhex('8b442404568b74240c3bc674008d4900' if spec['kind'] == 'fill'
                                      else '8b4c2404568b74240c3bce74008d4900'))
    for index, (offset, width) in enumerate(spec['transfers']):
        need(width in (1, 4), 'no unevidenced halfword/wider access')
        if spec['kind'] == 'single_tail' and offset >= 48:
            continue
        last_ecx = not loop and spec['kind'] != 'single_tail' and index == len(spec['transfers'])-1
        load = 0x8a if width == 1 else 0x8b
        store = 0x88 if width == 1 else 0x89
        if offset == 0:
            expected.extend((load, 0x11, store, 0x10))
        else:
            expected.extend((load, 0x49 if last_ecx else 0x51, offset,
                             store, 0x48 if last_ecx else 0x50, offset))
    if spec['kind'] == 'single_tail':
        need(spec['transfers'][-4:] == [[48,4],[52,4],[56,4],[60,4]], 'exact tail schedule')
        # ADD ECX,0x30; preserve ESI; load/store one DWORD at a time through
        # ESI and EDX=(EAX+0x30), finally overwrite ECX only on the last load.
        expected.extend(bytes.fromhex('83c130568b318d503089328b71048972048b71088972088b490c894a0c5ec3'))
    elif loop:
        if spec['src_stride']:
            expected.extend((0x83, 0xc1, spec['src_stride']))
        expected.extend((0x83, 0xc0, spec['dst_stride']))
        expected.extend(bytes.fromhex('3bc6' if spec['kind'] == 'fill' else '3bce'))
        expected.extend((0x75, (16-(len(expected)+2)) & 0xff))
        expected[12] = len(expected)-13
        expected.extend(bytes.fromhex('5ec3'))
    else:
        expected.extend(bytes.fromhex('c3'))
    need(bytes(expected) == raw, 'raw opcodes match entire operation/control-flow schedule')
    return windows


def validate_manifest(doc):
    need(doc['schema_version'] == 1 and doc['original_xbe_sha256'] == XBE_SHA, 'manifest identity')
    need(doc['original_xbe_reauthenticated'] is False and doc['original_machine_code_executed'] is False
         and doc['canonical_functions_executed'] is False, 'verification boundary')
    need(len(doc['entries']) == 5 and {r['entry'] for r in doc['entries']} == set(EXPECTED), 'exact five entries')
    for row in doc['entries']:
        entry = row['entry']; spec = EXPECTED[entry]; raw = bytes.fromhex(spec['hex'])
        need(sha(raw).upper() == spec['sha'] == row['original_body_sha256'], 'immutable original body SHA')
        need(row['body_ranges'] == [{'start': entry[2:], 'end_inclusive': f'{int(entry,16)+len(raw)-1:08x}',
                                    'length': len(raw), 'bytes_hex': spec['hex']}], 'complete contiguous body')
        need(row['instruction_windows'] == decoded_windows(entry), 'every instruction byte/boundary')
        need(row['instruction_count'] == len(spec['lengths']), 'full instruction count')
        for field in ('offsets', 'dst', 'src', 'kind', 'extent', 'transfers', 'dst_stride', 'src_stride'):
            need(row[field] == spec[field], 'operation field: '+field)
        replacements = []
        for offset in spec['offsets']:
            dst, src, off = spec['dst'], spec['src'], hex(offset)
            replacements.append({'before': f'*(undefined1 *)((int){dst} + {off}) = *(undefined1 *)((int){src} + {off});',
                                 'after': f'*(reinterpret_cast<unsigned char *>({dst}) + {off}) = *(reinterpret_cast<unsigned char *>({src}) + {off});', 'count': 1})
        need(row['replacements'] == replacements, 'exact ordered byte-only replacements')


def validate_source(row, before, after):
    need(sha(before) == row['source_before_sha256'], 'source preimage SHA')
    need(hashlib.sha1(b'blob '+str(len(before)).encode()+b'\0'+before).hexdigest() == row['preimage_git_blob'], 'preimage Git blob')
    need(sha(after) == row['source_after_sha256'], 'source replacement SHA')
    text = before.decode()
    for rep in row['replacements']:
        need(text.count(rep['before']) == 1, 'unique original statement')
        text = text.replace(rep['before'], rep['after'])
    need(text.encode() == after, 'exact authorized source change only')
    restored = after.decode()
    for rep in reversed(row['replacements']):
        need(restored.count(rep['after']) == 1, 'unique replacement for exact reversal')
        restored = restored.replace(rep['after'], rep['before'])
    need(restored.encode() == before, 'exact reverse restoration to pinned Git preimage')
    label = 'Input x86 body SHA-256: '+row['original_body_sha256']
    need(label in before.decode() and label in after.decode(), 'source retains original identity')
    need(after.count(b'reinterpret_cast<unsigned char *>') == 2*len(row['offsets']), 'exact unsigned character views')
    for name in ('in_EAX', 'in_ECX'):
        declaration = ('  undefined4 *'+name+';').encode()
        need(before.count(declaration) == after.count(declaration), 'preserve implicit unbound '+name)


def reject(call, label):
    try:
        call()
    except (ValueError, KeyError, TypeError):
        return
    raise ValueError('negative control unexpectedly passed: '+label)


def seam(row, after):
    text = after.decode(); text = text[text.index('void FUN_'):]
    if row['kind'] in ('single', 'single_tail'):
        need(text.count('(void)') == 1, 'single seam signature')
        text = text.replace('(void)', '(undefined4 *in_EAX,undefined4 *in_ECX)')
        for name in ('in_EAX', 'in_ECX'):
            declaration = '  undefined4 *'+name+';'
            need(text.count(declaration) == 1, 'single seam input binding')
            text = text.replace(declaration, '  // Test-only '+name+' binding, not guest ABI.')
    else:
        name = 'in_ECX' if row['kind'] == 'fill' else 'in_EAX'
        need(text.count('undefined4 *param_2)') == 1 and text.count('  undefined4 *'+name+';') == 1, 'loop seam insertion points')
        text = text.replace('undefined4 *param_2)', 'undefined4 *param_2,undefined4 *'+name+')')
        text = text.replace('  undefined4 *'+name+';', '  // Test-only '+name+' binding, not guest ABI.')
    return text


def run(command, ok=True, env=None):
    p = subprocess.run(command, text=True, capture_output=True, timeout=120, env=env)
    need((p.returncode == 0) == ok, 'unexpected command result: '+' '.join(map(str, command))+'\n'+p.stdout+p.stderr)
    return p


def validate_private_record(row, status, record):
    entry = row['entry']; spec = EXPECTED[entry]
    need(record['entry'] == status['entry'] == entry[2:], 'private entry identity')
    need(record['name'] == 'FUN_'+entry[2:] and record['is_thunk'] is False, 'private function identity')
    need(record['body_ranges'] == row['body_ranges'], 'private complete body')
    need(record['program_memory_body_sha256'] == status['program_memory_body_sha256'] == spec['sha']
         == status['canonical_body_sha256'], 'private body SHA')
    need(record['body_byte_count'] == status['body_byte_count'] == len(bytes.fromhex(spec['hex']))
         and record['instruction_count'] == status['instruction_count'] == len(spec['lengths']), 'private full counts')
    need(status['canonical_hash_match'] is True and status['byte_and_instruction_validation_pass'] is True
         and status['issues'] == [] and status['uncovered_body_byte_count'] == 0
         and status['first_uncovered_addresses'] == [] and status['prefetch_listing_disagreements'] == [], 'private clean validation')
    need([{'address': '0x'+i['address'], 'bytes': i['bytes_hex']} for i in record['instructions']] == decoded_windows(entry), 'private exact instructions')
    for instruction in record['instructions']:
        b = bytes.fromhex(instruction['bytes_hex']); address = int(instruction['address'],16)
        need(instruction['length'] == instruction['parsed_length'] == len(b), 'private length equality')
        mnemonic = {0x8b:'MOV',0x89:'MOV',0x8a:'MOV',0x88:'MOV',0x56:'PUSH',0x5e:'POP',
                    0x85:'TEST',0x3b:'CMP',0x74:'JZ',0x75:'JNZ',0x8d:'LEA',0x83:'ADD',0xc2:'RET',0xc3:'RET'}[b[0]]
        need(instruction['mnemonic'] == mnemonic and instruction['listing_metadata_is_analyzed_not_byte_proof'] is True,
             'private raw-derived mnemonic and analysis boundary')
        need(instruction['flow_override'] == 'NONE' and instruction['is_length_overridden'] is False
             and instruction['is_fallthrough_overridden'] is False, 'private no analysis overrides')
        if b[0] in (0x74, 0x75):
            target = address+2+int.from_bytes(b[1:], 'little', signed=True)
            flow_type = 'CONDITIONAL_JUMP'; flows = [f'{target:08x}']; fallthrough = f'{address+len(b):08x}'
        elif b[0] in (0xc2, 0xc3):
            flow_type = 'TERMINATOR'; flows = []; fallthrough = None
        else:
            flow_type = 'FALL_THROUGH'; flows = []; fallthrough = f'{address+len(b):08x}'
        need(instruction['flow_type'] == flow_type and instruction['flows'] == flows
             and instruction['fallthrough'] == fallthrough, 'private raw-derived control flow')


def private_replay(folder, doc):
    validation = json.loads((folder/'validation.json').read_text())
    index = {r['entry']: r for r in validation['functions']}
    negatives = 0
    with (folder/'functions.jsonl').open('rb') as f:
        for row in doc['entries']:
            entry = row['entry']; status = index[entry[2:]]
            f.seek(status['jsonl_byte_offset']); record = json.loads(f.read(status['jsonl_byte_length']))
            validate_private_record(row, status, record)
            for field, value in [('name','FUN_wrong'), ('is_thunk',True), ('body_byte_count',0),
                                 ('instruction_count',0), ('program_memory_body_sha256','0'*64)]:
                bad = copy.deepcopy(record); bad[field] = value
                reject(lambda: validate_private_record(row,status,bad), 'private '+field); negatives += 1
            for field, value in [('entry','00000000'), ('canonical_body_sha256','0'*64),
                                 ('body_byte_count',0), ('instruction_count',0), ('canonical_hash_match',False),
                                 ('byte_and_instruction_validation_pass',False), ('issues',['bad']),
                                 ('uncovered_body_byte_count',1), ('first_uncovered_addresses',['00000000']),
                                 ('prefetch_listing_disagreements',['bad'])]:
                bad_status = copy.deepcopy(status); bad_status[field] = value
                reject(lambda: validate_private_record(row,bad_status,record), 'private status '+field); negatives += 1
            for field, value in [('length',0), ('parsed_length',0), ('mnemonic','CALL'),
                                 ('listing_metadata_is_analyzed_not_byte_proof',False), ('flow_override','CALL_RETURN'),
                                 ('is_length_overridden',True), ('is_fallthrough_overridden',True),
                                 ('fallthrough','00000000'), ('flow_type','UNCONDITIONAL_JUMP'), ('flows',['00000000'])]:
                bad = copy.deepcopy(record); bad['instructions'][0][field] = value
                reject(lambda: validate_private_record(row,status,bad), 'private instruction '+field); negatives += 1
            bad = copy.deepcopy(record)
            branches = [i for i in bad['instructions'] if bytes.fromhex(i['bytes_hex'])[0] in (0x74,0x75)]
            if branches:
                branches[0]['flows'] = ['00000000']
                reject(lambda: validate_private_record(row,status,bad), 'private branch target'); negatives += 1
            bad = copy.deepcopy(record); bad['instructions'][-1]['fallthrough'] = '00000000'
            reject(lambda: validate_private_record(row,status,bad), 'private terminal fallthrough'); negatives += 1
            bad = copy.deepcopy(record); bad['body_ranges'][-1]['bytes_hex'] = bad['body_ranges'][-1]['bytes_hex'][:-2]
            reject(lambda: validate_private_record(row,status,bad), 'private dropped terminal byte'); negatives += 1
            bad = copy.deepcopy(record); bad['instructions'].pop()
            reject(lambda: validate_private_record(row,status,bad), 'private dropped terminal instruction'); negatives += 1
    print(f'Private selected-record replay and {negatives} metadata/body/flow corruptions passed; no whole-XBE reauthentication.')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=Path, default=ROOT)
    parser.add_argument('--private-export', type=Path)
    parser.add_argument('--sanitize', action='store_true')
    args = parser.parse_args(); root = args.root.resolve()
    compiler = shutil.which('clang++'); need(compiler, 'clang++ required')
    raw = (root/MANIFEST).read_bytes(); need(sha(raw) == MANIFEST_SHA, 'pinned manifest bytes')
    doc = json.loads(raw); validate_manifest(doc)
    fixture = (root/FIXTURE).read_bytes(); need(sha(fixture) == FIXTURE_SHA, 'pinned native fixture')
    afters = {}; source_negatives = 0; evidence_negatives = 0
    for row in doc['entries']:
        before = (root/row['preimage_fixture']).read_bytes(); after = (root/row['source']).read_bytes()
        validate_source(row, before, after); afters[row['entry']] = after
        for old, new, label in [(b'unsigned char', b'signed char', 'signedness'),
                                (b'undefined1', b'undefined2', 'width')]:
            mutation = after.replace(old, new)
            need(mutation != after, 'source mutation applies: '+label)
            reject(lambda: validate_source(row, before, mutation), 'source '+label); source_negatives += 1
        reps = row['replacements']
        if len(reps) > 1:
            # Aligned native DWORD bases cannot distinguish adjacent lane
            # exchanges for every overlap. Exact source pins enforce their order.
            a, b = reps[1]['after'].encode(), reps[2]['after'].encode()
            mutation = after.replace(a,b'ORDER_SENTINEL').replace(b,a).replace(b'ORDER_SENTINEL',b)
            reject(lambda: validate_source(row,before,mutation), '0x45/0x46 statement order'); source_negatives += 1
    for index, row in enumerate(doc['entries']):
        for field, value in [('original_body_sha256', '0'*64), ('dst_stride', 99), ('src_stride', 99),
                             ('offsets', [99]), ('transfers', [[0,8]]), ('extent',0)]:
            changed = copy.deepcopy(doc); changed['entries'][index][field] = value
            reject(lambda: validate_manifest(changed), 'manifest '+field); evidence_negatives += 1
        changed = copy.deepcopy(doc); changed['entries'][index]['body_ranges'][0]['length'] -= 1
        reject(lambda: validate_manifest(changed), 'missing final byte/RET coverage'); evidence_negatives += 1
        changed = copy.deepcopy(doc); changed['entries'][index]['instruction_windows'][0]['bytes'] = '90'
        reject(lambda: validate_manifest(changed), 'instruction drift'); evidence_negatives += 1
        changed = copy.deepcopy(doc); changed['entries'][index]['replacements'][0]['after'] += ' '
        reject(lambda: validate_manifest(changed), 'replacement drift'); evidence_negatives += 1
    if args.private_export:
        private_replay(args.private_export, doc)
    with tempfile.TemporaryDirectory(prefix='bf-additional-byte-copies-') as tmp:
        work = Path(tmp); (work/'native_objects.cpp').write_bytes(fixture); seams = {}
        for row in doc['entries']:
            entry = row['entry']; seams[entry] = seam(row, afters[entry])
            (work/(entry[2:]+'.test-seam.inc')).write_text(seams[entry])
            for opt in ('-O0', '-O2'):
                command = [compiler, '-std=c++17', opt, '-x', 'c++', '-fsyntax-only', '-ferror-limit=0',
                           '-Werror=pointer-to-int-cast', '-I', str(root/'include')]
                old = run(command+[str(root/row['preimage_fixture'])], ok=False)
                errors = re.findall(r': error: ([^\n]+)', old.stderr)
                need(len(errors) == 2*len(row['offsets']) and all('cast from pointer to smaller type' in e for e in errors),
                     'exact original pointer-narrowing errors with no hidden diagnostics')
                run(command+[str(root/row['source'])])
        for opt in ('-O0', '-O2'):
            binary = work/('native'+opt)
            run([compiler, '-std=c++17', opt, '-Wall', '-Wextra', '-Werror', '-I', str(root/'include'),
                 str(work/'native_objects.cpp'), '-o', str(binary)])
            result = run([str(binary)]); need('104239 bounded-native-object cases passed' in result.stdout, 'host case count')
            print(opt+': '+result.stdout.strip())
        if args.sanitize:
            sanitizer = shutil.which('g++'); need(sanitizer, 'g++ required for sanitizers')
            binary = work/'native-sanitized'
            run([sanitizer, '-std=c++17', '-O2', '-g', '-Wall', '-Wextra', '-Werror', '-fsanitize=address,undefined',
                 '-fno-omit-frame-pointer', '-I', str(root/'include'), str(work/'native_objects.cpp'), '-o', str(binary)])
            env = dict(os.environ); env['ASAN_OPTIONS'] = 'detect_leaks=0'; env['UBSAN_OPTIONS'] = 'halt_on_error=1'
            print('GCC ASan/UBSan: '+run([str(binary)], env=env).stdout.strip())
        mutants = 0
        for row in doc['entries']:
            entry = row['entry']; original = seams[entry]
            line = next(line for line in original.splitlines(True) if 'reinterpret_cast' in line)
            first = next(line for line in original.splitlines(True) if line.strip() == f'*{row["dst"]} = *{row["src"]};')
            swapped = line.replace('('+row['dst']+')', '(MUTANT_TMP)').replace('('+row['src']+')', '('+row['dst']+')').replace('(MUTANT_TMP)', '('+row['src']+')')
            variants = {f'offset {hex(offset)}': original.replace('+ '+hex(offset)+')', '+ '+hex(offset-1)+')')
                        for offset in row['offsets']}
            variants.update({
                'order': original.replace(line, '').replace(first, line+first),
                'omission': original.replace(line,''),
                'width/padding': original.replace(line, line+f'    reinterpret_cast<unsigned char *>({row["dst"]})[14] = reinterpret_cast<unsigned char *>({row["src"]})[14];\n'),
                'direction': original.replace(line, swapped),
            })
            if row['kind'] == 'fill':
                # Divisor stride reaches the same endpoint, avoiding an infinite mutant.
                variants['destination stride'] = original.replace('param_1 + 0xf', 'param_1 + 5')
                variants['source advance'] = original.replace('  }\n  return;', '    in_ECX += 15;\n  }\n  return;')
            if row['kind'] == 'copy':
                variants['destination stride'] = original.replace('in_EAX + 0xf', 'in_EAX + 0xe')
                variants['source offset'] = original.replace('unsigned char *>(param_1) + 0xd', 'unsigned char *>(param_1) + 0xe')
            for label, mutation in variants.items():
                need(mutation != original, 'mutation applied: '+label)
                (work/(entry[2:]+'.test-seam.inc')).write_text(mutation)
                binary = work/'mutant'
                run([compiler, '-std=c++17', '-O2', '-Wall', '-Wextra', '-Werror', '-I', str(root/'include'),
                     str(work/'native_objects.cpp'), '-o', str(binary)])
                result = run([str(binary)], ok=False)
                need('Mismatch kind=' in result.stderr, 'mutation fails by model mismatch, not crash: '+label)
                (work/(entry[2:]+'.test-seam.inc')).write_text(original); mutants += 1
        need(mutants == 31, 'complete behavioral mutation set')
        print(f'{mutants} behavioral mutants rejected; {source_negatives} exact source negatives and {evidence_negatives} manifest negatives passed.')
    print('All five preimages fail and replacements pass strict syntax at O0/O2. Canonical functions never execute; guest wrapping, mapping, register/stack ABI, linkage and runtime remain unverified.')


if __name__ == '__main__':
    main()
