#!/usr/bin/env python3
"""Bounded native-object tests for five fixed-byte copy spelling repairs.
Only initialized synthetic seams execute; canonical functions and original x86
bytes never execute. This does not prove guest addressing, ABI or runtime.
"""
from __future__ import annotations
import argparse, copy, hashlib, json, os, re, shutil, subprocess, tempfile
from pathlib import Path
ROOT = Path(__file__).resolve().parents[1]
MANIFEST = 'metadata/cpp_20261105_fixed_byte_copies.json'
MANIFEST_SHA = 'f266b068a8cdab2bba2ebe13fc1454691ea889eca0f0494a79f6d4ec7906fdc2'
FIXTURE = 'tests/fixtures/cpp_fixed_byte_copies/native_objects.cpp'
FIXTURE_SHA = 'a733fa9018f2eb8134a411b248c43be376408ca6a0c4fcc303f52b6eb3695c57'
XBE_SHA = 'B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721'
# Independently pinned original bytes and operation schedules, never loaded
# from the supplied manifest. Full raw byte reconstruction is checked below.
EXPECTED = {'0x001dce30': {'offset': 9,
                'dst': 'in_EAX',
                'src': 'in_ECX',
                'kind': 'guard',
                'extent': 10,
                'transfers': [[0, 4], [4, 4], [8, 1], [9, 1]],
                'dst_stride': 0,
                'src_stride': 0,
                'sha': '81E3007DC2DD605D775490A91CC1CDBB8514603981BCD317A80C7506E0447E56',
                'hex': '85c074168b1189108b51048950048a51088850088a4909884809c20400',
                'lengths': [2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3]},
 '0x001dd130': {'offset': 13,
                'dst': 'in_EAX',
                'src': 'in_ECX',
                'kind': 'guard',
                'extent': 14,
                'transfers': [[0, 4], [4, 4], [8, 4], [12, 1], [13, 1]],
                'dst_stride': 0,
                'src_stride': 0,
                'sha': 'DE783F6B1281CE10FA5214057B49F63F73908198409BEF87816C18653B6C7D9C',
                'hex': '85c0741c8b1189108b51048950048b51088950088a510c88500c8a490d88480dc20400',
                'lengths': [2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3]},
 '0x001dcde0': {'offset': 13,
                'dst': 'in_EAX',
                'src': 'in_ECX',
                'kind': 'guard',
                'extent': 24,
                'transfers': [[0, 4],
                              [4, 4],
                              [8, 4],
                              [12, 1],
                              [13, 1],
                              [16, 4],
                              [20, 4]],
                'dst_stride': 0,
                'src_stride': 0,
                'sha': 'A9972CA7C77EB8E5EE2BC9029FB6B2AA336297561F75E5135AC1296961E6AB8D',
                'hex': '85c074288b1189108b51048950048b51088950088a510c88500c8a510d88500d8b51108950108b4914894814c20400',
                'lengths': [2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3]},
 '0x001d05d0': {'offset': 13,
                'dst': 'param_1',
                'src': 'in_ECX',
                'kind': 'fill',
                'extent': 14,
                'transfers': [[0, 4], [4, 4], [8, 4], [12, 1], [13, 1]],
                'dst_stride': 16,
                'src_stride': 0,
                'sha': '4F390729F4C3FD94009BBBAA00DFC41D8C27D3518B813E13C7B895466A7CD27F',
                'hex': '8b442404568b74240c3bc674268d49008b1189108b51048950048b51088950088a510c88500c8a510d88500d83c0103bc675dd5ec3',
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
                            2,
                            2,
                            1,
                            1]},
 '0x001e07e0': {'offset': 9,
                'dst': 'in_EAX',
                'src': 'param_1',
                'kind': 'copy',
                'extent': 10,
                'transfers': [[0, 4], [4, 4], [8, 1], [9, 1]],
                'dst_stride': 12,
                'src_stride': 12,
                'sha': '8ABD734FE093C8B6E9F616366AF827B0A60D324F0C8EC0CCC330C1173276F239',
                'hex': '8b4c2404568b74240c3bce74238d49008b1189108b51048950048a51088850088a510988500983c10c83c00c3bce75e05ec3',
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
                            2,
                            2,
                            1,
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
    need(len(branches) == (1 if spec['kind'] == 'guard' else 2), 'all branches accounted for')
    # Independently encode every instruction from the stated operation schedule.
    # Account for widths, offsets, sequential load/store order, pointer strides,
    # guards, final source-register overwrite, and RET cleanup.
    if spec['kind'] == 'guard':
        expected = bytearray.fromhex('85c07400')
    else:
        expected = bytearray.fromhex('8b442404568b74240c3bc674008d4900' if spec['kind'] == 'fill'
                                     else '8b4c2404568b74240c3bce74008d4900')
    for index, (offset, width) in enumerate(spec['transfers']):
        last_ecx = spec['kind'] == 'guard' and index == len(spec['transfers'])-1
        load = 0x8a if width == 1 else 0x8b
        store = 0x88 if width == 1 else 0x89
        need(width in (1, 4), 'no unevidenced halfword/wider access')
        if offset == 0:
            expected.extend((load, 0x11, store, 0x10))
        else:
            expected.extend((load, 0x49 if last_ecx else 0x51, offset,
                             store, 0x48 if last_ecx else 0x50, offset))
    if spec['kind'] == 'guard':
        expected[3] = len(expected)-4
        expected.extend(bytes.fromhex('c20400'))
    else:
        if spec['src_stride']:
            expected.extend((0x83, 0xc1, spec['src_stride']))
        expected.extend((0x83, 0xc0, spec['dst_stride']))
        expected.extend(bytes.fromhex('3bc6' if spec['kind'] == 'fill' else '3bce'))
        expected.extend((0x75, (16-(len(expected)+2)) & 0xff))
        expected[12] = len(expected)-13
        expected.extend(bytes.fromhex('5ec3'))
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
        for field in ('offset', 'dst', 'src', 'kind', 'extent', 'transfers', 'dst_stride', 'src_stride'):
            need(row[field] == spec[field], 'operation field: '+field)
        need(len(row['replacements']) == 1 and row['replacements'][0]['count'] == 1, 'one statement only')


def validate_source(row, before, after):
    need(sha(before) == row['source_before_sha256'], 'source preimage SHA')
    need(hashlib.sha1(b'blob '+str(len(before)).encode()+b'\0'+before).hexdigest() == row['preimage_git_blob'], 'preimage Git blob')
    need(sha(after) == row['source_after_sha256'], 'source replacement SHA')
    text = before.decode()
    for rep in row['replacements']:
        need(text.count(rep['before']) == 1, 'unique original statement')
        text = text.replace(rep['before'], rep['after'])
    need(text.encode() == after, 'exact authorized source change only')
    label = 'Input x86 body SHA-256: '+row['original_body_sha256']
    need(label in before.decode() and label in after.decode(), 'source retains original identity')
    need(after.count(b'reinterpret_cast<unsigned char *>') == 2, 'two unsigned character views')
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
    if row['kind'] == 'guard':
        need(text.count('(void)') == 1, 'guard seam signature')
        text = text.replace('(void)', '(undefined4 *in_EAX,undefined4 *in_ECX)')
        for name in ('in_EAX', 'in_ECX'):
            declaration = '  undefined4 *'+name+';'
            need(text.count(declaration) == 1, 'guard seam input binding')
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


def private_replay(folder, doc):
    validation = json.loads((folder/'validation.json').read_text())
    index = {r['entry']: r for r in validation['functions']}
    with (folder/'functions.jsonl').open('rb') as f:
        for row in doc['entries']:
            entry = row['entry']; status = index[entry[2:]]
            f.seek(status['jsonl_byte_offset']); record = json.loads(f.read(status['jsonl_byte_length']))
            need(record['entry'] == entry[2:] and record['body_ranges'] == row['body_ranges'], 'private complete body')
            need(record['program_memory_body_sha256'] == EXPECTED[entry]['sha'] == status['canonical_body_sha256'], 'private body SHA')
            need(record['body_byte_count'] == len(bytes.fromhex(EXPECTED[entry]['hex']))
                 and record['instruction_count'] == len(EXPECTED[entry]['lengths']), 'private full counts')
            need(status['canonical_hash_match'] and status['byte_and_instruction_validation_pass']
                 and not status['issues'] and not status['uncovered_body_byte_count'], 'private clean validation')
            need([{'address': '0x'+i['address'], 'bytes': i['bytes_hex']} for i in record['instructions']] == decoded_windows(entry), 'private exact instructions')
            for instruction in record['instructions']:
                need(instruction['length'] == instruction['parsed_length'] == len(bytes.fromhex(instruction['bytes_hex'])), 'private length equality')
                need(instruction['flow_override'] == 'NONE' and not instruction['is_length_overridden']
                     and not instruction['is_fallthrough_overridden'], 'private no analysis overrides')
    print('Private selected-record replay passed; no whole-XBE reauthentication.')


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
    afters = {}
    for row in doc['entries']:
        before = (root/row['preimage_fixture']).read_bytes(); after = (root/row['source']).read_bytes()
        validate_source(row, before, after); afters[row['entry']] = after
        for old, new, label in [(b'unsigned char', b'signed char', 'signedness'), (b'undefined1', b'undefined2', 'width'),
                                (b'!= (undefined4 *)0x0', b'== (undefined4 *)0x0', 'null guard')]:
            mutation = after.replace(old, new)
            if mutation != after:
                reject(lambda: validate_source(row, before, mutation), 'source '+label)
    for field, value in [('original_body_sha256', '0'*64), ('dst_stride', 99), ('src_stride', 99), ('offset', 99), ('transfers', [[0,8]])]:
        changed = copy.deepcopy(doc); changed['entries'][0][field] = value
        reject(lambda: validate_manifest(changed), 'manifest '+field)
    changed = copy.deepcopy(doc); changed['entries'][0]['body_ranges'][0]['length'] -= 1
    reject(lambda: validate_manifest(changed), 'missing final byte/RET coverage')
    changed = copy.deepcopy(doc); changed['entries'][0]['instruction_windows'][1]['bytes'] = '7417'
    reject(lambda: validate_manifest(changed), 'branch target drift')
    if args.private_export:
        private_replay(args.private_export, doc)
    with tempfile.TemporaryDirectory(prefix='bf-fixed-byte-copies-') as tmp:
        work = Path(tmp); (work/'native_objects.cpp').write_bytes(fixture); seams = {}
        for row in doc['entries']:
            entry = row['entry']; seams[entry] = seam(row, afters[entry])
            (work/(entry[2:]+'.test-seam.inc')).write_text(seams[entry])
            for opt in ('-O0', '-O2'):
                command = [compiler, '-std=c++17', opt, '-x', 'c++', '-fsyntax-only', '-ferror-limit=0',
                           '-Werror=pointer-to-int-cast', '-I', str(root/'include')]
                old = run(command+[str(root/row['preimage_fixture'])], ok=False)
                errors = re.findall(r': error: ([^\n]+)', old.stderr)
                need(len(errors) == 2 and all('cast from pointer to smaller type' in e for e in errors), 'exactly two original pointer-narrowing errors')
                run(command+[str(root/row['source'])])
        for opt in ('-O0', '-O2'):
            binary = work/('native'+opt)
            run([compiler, '-std=c++17', opt, '-Wall', '-Wextra', '-Werror', '-I', str(root/'include'),
                 str(work/'native_objects.cpp'), '-o', str(binary)])
            result = run([str(binary)]); need('101683 bounded-native-object cases passed' in result.stdout, 'host case count')
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
            entry = row['entry']; original = seams[entry]; offset = '9' if row['offset'] == 9 else '0xd'
            previous = '8' if row['offset'] == 9 else '0xc'
            line = next(line for line in original.splitlines(True) if 'reinterpret_cast' in line)
            first = f'    *{row["dst"]} = *{row["src"]};\n'
            swapped = line.replace('('+row['dst']+')', '(MUTANT_TMP)').replace('('+row['src']+')', '('+row['dst']+')').replace('(MUTANT_TMP)', '('+row['src']+')')
            variants = {
                'offset': original.replace('+ '+offset+')', '+ '+previous+')'),
                'order': original.replace(line, '').replace(first, line+first),
                'width': original.replace(line, line+f'    reinterpret_cast<unsigned char *>({row["dst"]})[{row["offset"]+1}] = reinterpret_cast<unsigned char *>({row["src"]})[{row["offset"]+1}];\n'),
                'direction': original.replace(line, swapped),
            }
            if row['kind'] == 'fill':
                # Smaller divisor stride still terminates at the same endpoint.
                variants['destination stride'] = original.replace('param_1 + 4', 'param_1 + 1')
                variants['source advance'] = original.replace('  }\n  return;', '    in_ECX += 4;\n  }\n  return;')
            if row['kind'] == 'copy':
                variants['destination stride'] = original.replace('in_EAX + 3', 'in_EAX + 2')
                # Preserve endpoint and iteration count; shift only the source
                # of the changed byte forward, within the initialized object.
                variants['source offset'] = original.replace('unsigned char *>(param_1) + 9', 'unsigned char *>(param_1) + 10')
            for label, mutation in variants.items():
                need(mutation != original, 'mutation applied: '+label)
                (work/(entry[2:]+'.test-seam.inc')).write_text(mutation)
                binary = work/'mutant'
                run([compiler, '-std=c++17', '-O2', '-Wall', '-Wextra', '-Werror', '-I', str(root/'include'),
                     str(work/'native_objects.cpp'), '-o', str(binary)])
                result = run([str(binary)], ok=False)
                need('Mismatch kind=' in result.stderr, 'mutation fails by model mismatch, not crash: '+label)
                (work/(entry[2:]+'.test-seam.inc')).write_text(original); mutants += 1
        print(f'{mutants} behavioral mutants rejected; immutable identity/source/width/null/branch negatives passed.')
    print('All five preimages fail and replacements pass strict syntax at O0/O2. Canonical functions never execute; guest wrapping, mapping, registers, RET-4 cleanup, linkage and runtime remain unverified.')


if __name__ == '__main__':
    main()
