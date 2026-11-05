#!/usr/bin/env python3
"""Bounded native-object checks for two fixed-byte loop spellings.

Canonical functions are syntax-checked only. Only initialized synthetic test
seams execute. Original x86 bytes are data, never executable instructions.
"""
from __future__ import annotations
import argparse
import copy
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = 'metadata/cpp_20261104_fixed_byte_loops.json'
MANIFEST_SHA = '1ee61673c56784c2988ff8082fbeaa3ded33edc8c34bcabe91d323bfd69f8855'
FIXTURE = 'tests/fixtures/cpp_fixed_byte_loops/native_objects.cpp'
FIXTURE_SHA = 'c8f13960fee69ded51401580a821489b7d5b815c967f453bdcc234dee6964ae3'
XBE_SHA = 'B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721'
# Independent immutable original-byte pins, not supplied by the manifest.
EXPECTED = {
    '0x001cf1d0': {
        'sha': '31827F1D12C85B7E074B3237900FAE2C66A2C7EFF19B9EFCA676188C81BC265C',
        'hex': '8b442404568b74240c3bc674208d49008b1189108b51048950048a51088850088a510988500983c00c3bc675e35ec3',
        'lengths': [4,1,4,2,2,3,2,2,3,3,3,3,3,3,3,2,2,1,1],
        'offset': 9, 'stride': 12, 'transfers': [[0,4],[4,4],[8,1],[9,1]],
    },
    '0x001cf0f0': {
        'sha': '665327B89D943F14EBBE81AAA68866D80EFE80A8203AB7E154C0317E0DE3959B',
        'hex': '8b442404568b74240c3bc674328d49008b1189108b51048950048b51088950088a510c88500c8a510d88500d8b51108950108b511489501483c0183bc675d15ec3',
        'lengths': [4,1,4,2,2,3,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,1,1],
        'offset': 13, 'stride': 24, 'transfers': [[0,4],[4,4],[8,4],[12,1],[13,1],[16,4],[20,4]],
    },
}

def need(ok, message):
    if not ok:
        raise ValueError(message)


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def expected_windows(entry):
    spec = EXPECTED[entry]
    raw = bytes.fromhex(spec['hex'])
    at = int(entry, 16)
    pos = 0
    windows = []
    for size in spec['lengths']:
        windows.append({'address': f'0x{at:08x}', 'bytes': raw[pos:pos+size].hex()})
        at += size
        pos += size
    need(pos == len(raw), 'complete independent instruction lengths')
    addresses = {int(w['address'], 16) for w in windows}
    branches = 0
    for window in windows:
        b = bytes.fromhex(window['bytes'])
        if b[0] in (0x74, 0x75):
            target = int(window['address'], 16) + 2 + int.from_bytes(b[1:], 'little', signed=True)
            need(target in addresses, 'branch leaves exact decoded body')
            branches += 1
    need(branches == 2 and windows[-1]['bytes'] == 'c3', 'two internal branches and RET')
    return windows


def validate_manifest(doc):
    need(doc['schema_version'] == 1 and doc['original_xbe_sha256'] == XBE_SHA, 'manifest identity')
    need(doc['original_xbe_reauthenticated'] is False and doc['original_machine_code_executed'] is False
         and doc['canonical_functions_executed'] is False, 'verification boundary')
    need(len(doc['entries']) == 2 and {r['entry'] for r in doc['entries']} == set(EXPECTED), 'exact entry set')
    for row in doc['entries']:
        entry = row['entry']; spec = EXPECTED[entry]; raw = bytes.fromhex(spec['hex'])
        need(sha(raw).upper() == spec['sha'] == row['original_body_sha256'], 'immutable original body digest')
        need(row['body_ranges'] == [{'start':entry[2:], 'end_inclusive':f'{int(entry,16)+len(raw)-1:08x}',
                                    'length':len(raw), 'bytes_hex':spec['hex']}], 'complete contiguous body')
        need(row['instruction_windows'] == expected_windows(entry), 'all original instruction boundaries and bytes')
        need(row['instruction_count'] == len(spec['lengths']), 'instruction count')
        need(row['byte_offset'] == spec['offset'] and row['destination_stride'] == spec['stride']
             and row['ordered_transfers'] == spec['transfers'] and row['source_advance'] == 0,
             'operation order, width, offset, and strides')
        need(len(row['replacements']) == 1 and row['replacements'][0]['count'] == 1, 'one-statement edit')


def validate_source(row, before, after):
    need(sha(before) == row['source_before_sha256'], 'preimage SHA')
    need(hashlib.sha1(b'blob '+str(len(before)).encode()+b'\0'+before).hexdigest()
         == row['preimage_git_blob'], 'preimage Git blob')
    need(sha(after) == row['source_after_sha256'], 'replacement SHA')
    text = before.decode()
    for replacement in row['replacements']:
        need(text.count(replacement['before']) == 1, 'unique original statement')
        text = text.replace(replacement['before'], replacement['after'])
    need(text.encode() == after, 'only authorized exact replacement')
    label = f'Input x86 body SHA-256: {row["original_body_sha256"]}'
    need(label in before.decode() and label in after.decode(), 'unchanged body identity')
    need(after.count(b'  undefined4 *in_ECX;') == 1, 'implicit ECX remains unresolved')
    need(after.count(b'reinterpret_cast<unsigned char *>') == 2, 'unsigned character views only')


def reject(call, label):
    try:
        call()
    except (ValueError, KeyError, TypeError):
        return
    raise ValueError('negative control unexpectedly passed: '+label)


def make_seam(after):
    text = after.decode(); text = text[text.index('void FUN_'):]
    need(text.count('undefined4 *param_2)') == 1 and text.count('  undefined4 *in_ECX;') == 1,
         'test-only ECX seam insertion points')
    return text.replace('undefined4 *param_2)', 'undefined4 *param_2, undefined4 *in_ECX)').replace(
        '  undefined4 *in_ECX;', '  // Test-only binding, not a proposed guest ABI.')


def run(args, ok=True, env=None):
    p = subprocess.run(args, text=True, capture_output=True, timeout=120, env=env)
    need((p.returncode == 0) == ok, 'unexpected command result: '+' '.join(map(str,args))+'\n'+p.stdout+p.stderr)
    return p


def private_replay(folder, doc):
    validation = json.loads((folder/'validation.json').read_text())
    index = {r['entry']:r for r in validation['functions']}
    with (folder/'functions.jsonl').open('rb') as stream:
        for row in doc['entries']:
            entry = row['entry']; status = index[entry[2:]]
            stream.seek(status['jsonl_byte_offset'])
            record = json.loads(stream.read(status['jsonl_byte_length']))
            need(record['entry'] == entry[2:] and record['body_ranges'] == row['body_ranges'], 'private exact full body')
            need(record['program_memory_body_sha256'] == EXPECTED[entry]['sha'] == status['canonical_body_sha256'],
                 'private canonical hash pin')
            need(record['body_byte_count'] == len(bytes.fromhex(EXPECTED[entry]['hex']))
                 and record['instruction_count'] == len(EXPECTED[entry]['lengths']), 'private complete counts')
            need(status['canonical_hash_match'] and status['byte_and_instruction_validation_pass']
                 and not status['issues'] and not status['uncovered_body_byte_count'], 'private clean validation')
            windows = [{'address':'0x'+i['address'], 'bytes':i['bytes_hex']} for i in record['instructions']]
            need(windows == expected_windows(entry), 'private all instruction windows')
            for instruction in record['instructions']:
                need(instruction['length'] == instruction['parsed_length'] == len(bytes.fromhex(instruction['bytes_hex'])),
                     'private listed and parsed instruction byte lengths')
                need(instruction['flow_override'] == 'NONE' and not instruction['is_length_overridden']
                     and not instruction['is_fallthrough_overridden'], 'private no analyzed overrides')
    print('Selected-record private evidence replay passed; no whole-XBE reauthentication.')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=Path, default=ROOT)
    parser.add_argument('--private-export', type=Path)
    parser.add_argument('--sanitize', action='store_true', help='Also run host-only GCC ASan/UBSan; disable unsupported leak detection.')
    args = parser.parse_args(); root = args.root.resolve()
    compiler = shutil.which('clang++'); need(compiler, 'clang++ is required')
    raw = (root/MANIFEST).read_bytes(); need(sha(raw) == MANIFEST_SHA, 'pinned manifest bytes')
    doc = json.loads(raw); validate_manifest(doc)
    fixture = (root/FIXTURE).read_bytes(); need(sha(fixture) == FIXTURE_SHA, 'pinned host fixture')
    rows = doc['entries']; afters = {}
    for row in rows:
        before = (root/row['preimage_fixture']).read_bytes(); after = (root/row['source']).read_bytes()
        validate_source(row, before, after); afters[row['entry']] = after
        reject(lambda: validate_source(row, before, after.replace(b'unsigned char', b'signed char')), 'signed byte drift')
        reject(lambda: validate_source(row, before, after.replace(b'undefined1', b'undefined2')), 'byte width drift')
    # Public evidence/source guards must reject mutations, not merely document them.
    for key, value in [('original_body_sha256','0'*64), ('destination_stride',4), ('source_advance',4)]:
        changed = copy.deepcopy(doc); changed['entries'][0][key] = value
        reject(lambda: validate_manifest(changed), key)
    changed = copy.deepcopy(doc); changed['entries'][0]['body_ranges'][0]['end_inclusive'] = '001cf1fd'
    reject(lambda: validate_manifest(changed), 'missing RET/body coverage')
    changed = copy.deepcopy(doc); changed['entries'][0]['instruction_windows'][4]['bytes'] = '7421'
    reject(lambda: validate_manifest(changed), 'branch target drift')
    if args.private_export:
        private_replay(args.private_export, doc)
    with tempfile.TemporaryDirectory(prefix='bf-fixed-byte-loops-') as tmp:
        work = Path(tmp)
        (work/'native_objects.cpp').write_bytes(fixture)
        seams = {}
        for row in rows:
            entry = row['entry']; seams[entry] = make_seam(afters[entry])
            (work/(entry[2:]+'.test-seam.inc')).write_text(seams[entry])
            for opt in ('-O0','-O2'):
                command = [compiler,'-std=c++17',opt,'-x','c++','-fsyntax-only','-ferror-limit=3',
                           '-Werror=pointer-to-int-cast','-I',str(root/'include')]
                old = run(command+[str(root/row['preimage_fixture'])], ok=False)
                need('cast from pointer to smaller type' in old.stderr, 'original negative diagnostic')
                run(command+[str(root/row['source'])])
        for opt in ('-O0','-O2'):
            binary = work/('native'+opt)
            run([compiler,'-std=c++17',opt,'-Wall','-Wextra','-Werror','-I',str(root/'include'),
                 str(work/'native_objects.cpp'),'-o',str(binary)])
            result = run([str(binary)])
            need('87600 bounded-native-object cases passed' in result.stdout, 'host coverage count')
            print(opt+': '+result.stdout.strip())
        if args.sanitize:
            sanitizer = shutil.which('g++'); need(sanitizer, 'g++ required for requested sanitizer check')
            binary = work/'native-sanitized'
            run([sanitizer,'-std=c++17','-O2','-g','-Wall','-Wextra','-Werror','-fsanitize=address,undefined',
                 '-fno-omit-frame-pointer','-I',str(root/'include'),str(work/'native_objects.cpp'),'-o',str(binary)])
            env = dict(os.environ); env['ASAN_OPTIONS'] = 'detect_leaks=0'; env['UBSAN_OPTIONS'] = 'halt_on_error=1'
            print('GCC ASan/UBSan: '+run([str(binary)],env=env).stdout.strip())
        mutants = 0
        for entry, original in seams.items():
            spec = EXPECTED[entry]; offset = str(spec['offset']) if spec['offset'] == 9 else '0xd'
            previous = '8' if offset == '9' else '0xc'
            byte_line = next(line for line in original.splitlines(True) if 'reinterpret_cast' in line)
            variants = {
                'offset': original.replace('+ '+offset+')', '+ '+previous+')'),
                'stride': original.replace('param_1 + '+str(spec['stride']//4), 'param_1 + 1'),
                'order': original.replace(byte_line,'').replace('    *param_1 = *in_ECX;\n',byte_line+'    *param_1 = *in_ECX;\n'),
                'source_advance': original.replace('  }\n  return;', '    in_ECX += '+str(spec['stride']//4)+';\n  }\n  return;'),
                # Expand byte width through two byte stores, avoiding unaligned uint16_t UB in the mutant.
                'width': original.replace(byte_line,byte_line+f'    reinterpret_cast<unsigned char *>(param_1)[{spec["offset"]+1}] = reinterpret_cast<unsigned char *>(in_ECX)[{spec["offset"]+1}];\n'),
            }
            for label, mutation in variants.items():
                need(mutation != original, 'mutation applied: '+label)
                (work/(entry[2:]+'.test-seam.inc')).write_text(mutation)
                binary = work/'mutant'
                run([compiler,'-std=c++17','-O2','-Wall','-Wextra','-Werror','-I',str(root/'include'),
                     str(work/'native_objects.cpp'),'-o',str(binary)])
                result = run([str(binary)],ok=False)
                need('Mismatch stride=' in result.stderr, 'mutation fails by model mismatch, not crash: '+label)
                (work/(entry[2:]+'.test-seam.inc')).write_text(original)
                mutants += 1
        print(f'{mutants} offset/stride/order/source-advance/width mutants rejected; public identity/type/coverage negatives passed.')
    print('Both full source files: original-negative/replacement-positive at O0/O2. Canonical functions never executed; ABI, guest wrapping and runtime remain unverified.')


if __name__ == '__main__':
    main()
