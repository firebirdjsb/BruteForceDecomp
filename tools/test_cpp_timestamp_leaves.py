#!/usr/bin/env python3
"""Native timestamp transport gate. Public runner needs C++17 and GNU binutils.
Optional private evidence is static data only. No original game code is run.
"""
from __future__ import annotations
import argparse
import copy
import csv
import hashlib
import json
from pathlib import Path
import re
import shutil
import subprocess
import tempfile
from body_hash_labels import read_body_digest
from source_layout import source_path
from timestamp_codegen import need, parse_disassembly, check_graph

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = 'metadata/cpp_20261105_timestamp_leaves.json'
MANIFEST_SHA = 'ef1bf8acee69f12336db8a1fc0aa3a9f5c6d8dcdb7619afdf07d7f59e665b13e'
HEADER = 'include/bf_native_timestamp_operation.h'
FIXTURE = 'tests/test_timestamp_transport.cpp'
SYMBOLS = ['_Z12FUN_00377780v', '_Z32XAPILIB__QueryPerformanceCounterPj']
WINDOWS = [['0f31', 'c3'], ['8b4c2404', '0f31', '8901', '895104', '33c0', '40', 'c20400']]
CI_STEP = ('      - name: Verify native unsynchronized timestamp transport (not Xbox clock or ABI)\n'
           '        run: python3 tools/test_cpp_timestamp_leaves.py\n')


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def canonical_sha(value):
    return sha(json.dumps(value, sort_keys=True, separators=(',', ':')).encode())


def pairs_unique(pairs):
    result = {}
    for key, value in pairs:
        need(key not in result, 'duplicate JSON key')
        result[key] = value
    return result


def strict_json(raw):
    def nonfinite(_):
        raise ValueError('nonfinite JSON')
    return json.loads(raw, object_pairs_hook=pairs_unique, parse_constant=nonfinite)


def run(command, success=True, stdin=None):
    result = subprocess.run([str(a) for a in command], input=stdin, text=True,
                            stdout=subprocess.PIPE, stderr=subprocess.PIPE, timeout=120)
    need((result.returncode == 0) == success,
         'command outcome: ' + ' '.join(map(str, command)) + '\n' + result.stdout + result.stderr)
    return result


def rejected(operation):
    try:
        operation()
    except (ValueError, KeyError, TypeError, IndexError, UnicodeError, json.JSONDecodeError):
        return 1
    raise ValueError('negative control unexpectedly accepted')


def load_manifest(root):
    raw = (root / MANIFEST).read_bytes()
    need(len(raw) < 100000 and sha(raw) == MANIFEST_SHA, 'manifest raw bytes differ')
    return strict_json(raw)


def restore(case, raw, before):
    need(isinstance(raw, bytes) and isinstance(before, bytes), 'source bytes required')
    need(sha(raw) == case['source_after_sha256'], 'source postimage differs')
    need(sha(before) == case['source_before_sha256'], 'source preimage differs')
    need(hashlib.sha1(b'blob ' + str(len(before)).encode() + b'\0' + before).hexdigest() ==
         case['preimage_git_blob'], 'preimage Git blob differs')
    value = raw
    for edit in reversed(case['edits']):
        old, new = edit['before'].encode(), edit['after'].encode()
        need(value.count(new) == 1, 'nonunique reversal')
        value = value.replace(new, old, 1)
    need(value == before, 'not byte-exact source reversal')
    for edit in case['edits']:
        old, new = edit['before'].encode(), edit['after'].encode()
        need(value.count(old) == 1, 'nonunique forward edit')
        value = value.replace(old, new, 1)
    need(value == raw, 'forward source roundtrip differs')


def verify_source(root, doc):
    need((root / '.github/workflows/cpp-compatibility-audit.yml').read_bytes().count(CI_STEP.encode()) == 1,
         'CI invocation absent or repeated')
    for pin in doc['dependency_pins'] + doc['artifact_pins']:
        need(sha((root / pin['path']).read_bytes()) == pin['sha256'], 'dependency/artifact drift: ' + pin['path'])
    with (root / 'metadata/bulk_13694_inventory.csv').open(newline='') as stream:
        inventory = {row['entry']: row for row in csv.DictReader(stream)}
    for case in doc['cases']:
        path = source_path(root, case['entry'])
        need(path.relative_to(root).as_posix() == case['source'], 'source route differs')
        raw, before = path.read_bytes(), (root / case['preimage']).read_bytes()
        restore(case, raw, before)
        digest, conflict = read_body_digest(raw.decode())
        need(not conflict and digest == case['original_body_sha256'] ==
             inventory[case['entry']]['original_body_sha256'], 'body identity differs')
        for pin in (case['signature'], 'Entry: ' + case['entry'], 'label: ' + case['label'], 'ABI_UNVERIFIED'):
            need(raw.count(pin.encode()) == before.count(pin.encode()) == 1, 'identity/signature/status differs')


def validate_record(record, case, which):
    need(record['entry'] == case['entry'][2:] and record['name'] == case['label'] and
         record['is_thunk'] is False, 'private identity differs')
    need(len(record['body_ranges']) == 1, 'private body range count')
    span = record['body_ranges'][0]
    need({k: span[k] for k in ('start', 'end_inclusive', 'length')} == case['body_ranges'][0], 'private body span')
    raw = bytes.fromhex(span['bytes_hex'])
    need(raw.hex() == ''.join(WINDOWS[which]), 'original opcode semantics differ')
    need(len(raw) == span['length'] == record['body_byte_count'] == case['body_byte_count'], 'private byte count')
    need(sha(raw).upper() == record['program_memory_body_sha256'] == case['original_body_sha256'], 'private raw body SHA')
    instructions = record['instructions']
    need(len(instructions) == record['instruction_count'] == case['instruction_count'], 'private instruction count')
    at = int(case['entry'], 16)
    for number, (instruction, expected) in enumerate(zip(instructions, WINDOWS[which])):
        data = bytes.fromhex(expected)
        need(instruction['address'] == f'{at:08x}' and instruction['bytes_hex'] == expected and
             instruction['length'] == instruction['parsed_length'] == len(data), 'private boundaries')
        need(instruction['flow_override'] == 'NONE' and instruction['is_length_overridden'] is False and
             instruction['is_fallthrough_overridden'] is False, 'private override')
        at += len(data)
        last = number + 1 == len(instructions)
        need(instruction['flows'] == [] and instruction['fallthrough'] == (None if last else f'{at:08x}') and
             instruction['flow_type'] == ('TERMINATOR' if last else 'FALL_THROUGH'), 'private flow differs')
    need(at - 1 == int(span['end_inclusive'], 16), 'private coverage')
    need(canonical_sha(record) == case['private_record_canonical_sha256'], 'private record canonical pin')
    return raw


def private_checks(folder, doc, temporary):
    with (folder / 'validation.json').open('rb') as stream:
        raw = stream.read(32 * 1024 * 1024 + 1)
    need(len(raw) <= 32 * 1024 * 1024, 'oversized private index')
    rows = strict_json(raw)['functions']
    need(len(rows) == len({row['entry'] for row in rows}) == 13694, 'private index identity set')
    index = {row['entry']: row for row in rows}
    controls = 0
    with (folder / 'functions.jsonl').open('rb') as stream:
        for which, case in enumerate(doc['cases']):
            row = index[case['entry'][2:]]
            need(canonical_sha(row) == case['private_index_row_sha256'], 'private index row pin')
            need(row['issues'] == [] and row['byte_and_instruction_validation_pass'] is True and
                 row['canonical_hash_match'] is True and row['uncovered_body_byte_count'] == 0,
                 'private row validation')
            offset, length = row['jsonl_byte_offset'], row['jsonl_byte_length']
            need(type(offset) is int and type(length) is int and 0 <= offset < 512 * 1024 * 1024 and
                 0 < length < 10000, 'private offset bounds')
            stream.seek(offset); encoded = stream.read(length)
            need(len(encoded) == length and sha(encoded) == case['private_record_raw_sha256'], 'private raw record pin')
            record = strict_json(encoded)
            body = validate_record(record, case, which)
            # Decode bytes as 32-bit DATA using GNU binutils, never execute them.
            binary = temporary / ('original-static-' + str(which) + '.bin')
            binary.write_bytes(body)
            result = run(['objdump', '-D', '-b', 'binary', '-m', 'i386', '-Mintel', '-w', binary]).stdout
            decoded = parse_disassembly(result, '.data')
            expected = ([('rdtsc', ''), ('ret', '')] if which == 0 else
                        [('mov', 'ecx,DWORD PTR [esp+0x4]'), ('rdtsc', ''),
                         ('mov', 'DWORD PTR [ecx],eax'), ('mov', 'DWORD PTR [ecx+0x4],edx'),
                         ('xor', 'eax,eax'), ('inc', 'eax'), ('ret', '0x4')])
            need(decoded == expected, 'independent original static decode differs')
            for byte in range(len(body)):
                mutant = copy.deepcopy(record); data = bytearray(body); data[byte] ^= 1
                mutant['body_ranges'][0]['bytes_hex'] = data.hex()
                controls += rejected(lambda: validate_record(mutant, case, which))
            for key, value in [('flow_override', 'CALL_RETURN'), ('is_length_overridden', True),
                               ('is_fallthrough_overridden', True), ('fallthrough', None), ('flows', ['bad'])]:
                mutant = copy.deepcopy(record); mutant['instructions'][0][key] = value
                controls += rejected(lambda: validate_record(mutant, case, which))
    print('PASS private static evidence: 20 bytes / 9 instructions; original XBE not reauthenticated', flush=True)
    return controls


def fixture_header(header):
    need(header.count('"rdtsc"') == 1, 'fixture primitive seam differs')
    result = header.replace('"rdtsc"',
        '"movl bf_timestamp_fixture_low(%%rip), %%eax\\n\\t"\n'
        '                     "movl bf_timestamp_fixture_high(%%rip), %%edx\\n\\t"\n'
        '                     "incl bf_timestamp_fixture_reads(%%rip)"', 1)
    result, count = re.subn(r'( : "=a"\((?:low|high)\), "=d"\((?:low|high)\))\);',
                            r'\1 : : "cc", "memory");', result)
    need(count == 1, 'fixture constraints seam differs')
    return result


def compile_graph(compiler, flags, include, source, out, which):
    run([compiler, '-std=c++17', '-Wall', '-Wextra', '-Werror', *flags,
         '-I' + str(include), '-c', source, '-o', out])
    assembly = run(['objdump', '-d', '-Mintel', '-w', out]).stdout
    graph = parse_disassembly(assembly, SYMBOLS[which])
    check_graph(graph, which == 1)
    return graph


def controlled_run(compiler, flags, root, folder, header, sources, success=True):
    folder.mkdir(parents=True, exist_ok=True)
    (folder / Path(HEADER).name).write_text(fixture_header(header))
    local = []
    for which, source in enumerate(sources):
        p = folder / ('leaf' + str(which) + '.cpp'); p.write_bytes(source); local.append(p)
    exe = folder / 'transport'
    run([compiler, '-std=c++17', '-Wall', '-Wextra', '-Werror', *flags,
         '-I' + str(folder), '-I' + str(root / 'include'), root / FIXTURE, *local, '-o', exe])
    result = run([exe], success=success)
    if success:
        need('PASS 2627 controlled low/high transports' in result.stdout, 'fixture case count differs')
    return result


def graph_mutations():
    base = [('rdtsc', ''), ('mov', 'DWORD PTR [rdi],eax'),
            ('mov', 'DWORD PTR [rdi+0x4],edx'), ('mov', 'eax,0x1'), ('ret', '')]
    check_graph(base, True)
    variants = [base[1:], base[:1] + [('rdtsc', '')] + base[1:],
                [('rdtscp', '')] + base[1:], [('lfence', '')] + base,
                base[:1] + [('mov', 'ecx,DWORD PTR [rdi]')] + base[1:],
                base[:1] + [('mov', 'DWORD PTR [rdi+0x8],eax')] + base[1:],
                [base[0], base[2], base[1], *base[3:]],
                [base[0], ('mov', 'DWORD PTR [rdi],edx'), base[2], *base[3:]],
                [base[0], ('mov', 'QWORD PTR [rdi],rax'), *base[2:]],
                base[:-2] + [('mov', 'eax,0x0'), base[-1]],
                base[:-1] + [('call', '0x0'), base[-1]],
                base + [('nop', '')], [('endbr64', ''), ('endbr64', '')] + base,
                [('mov', 'DWORD PTR [rdi-0x4],eax')] + base,
                [('mov', 'rax,QWORD PTR [rsp]')] + base,
                [('sub', 'rsp,0x8')] + base,
                [('mov', 'ebx,0x1')] + base]
    return sum(rejected(lambda variant=variant: check_graph(variant, True)) for variant in variants)


def compiler_checks(compiler, args, root, doc, temp):
    header = (root / HEADER).read_text()
    sources = [(root / case['source']).read_bytes() for case in doc['cases']]
    controls = graph_mutations()
    count = 0
    arches = ['x86-64', 'x86-64-v3'] if args.matrix else ['x86-64']
    cets = ['none', 'branch', 'full'] if args.matrix else ['none', 'branch']
    for opt in ['-O0', '-O2']:
        for arch in arches:
            for cet in cets:
                flags = [opt, '-march=' + arch, '-fcf-protection=' + cet]
                name = f'{opt[1:]}-{arch}-{cet}'
                folder = temp / name; folder.mkdir()
                for which, case in enumerate(doc['cases']):
                    graph = compile_graph(compiler, flags, root / 'include', root / case['source'],
                                          folder / ('leaf' + str(which) + '.o'), which)
                    if cet != 'none':
                        need(graph[0] == ('endbr64', ''), 'expected CET entry marker absent')
                controlled_run(compiler, flags, root, folder / 'fixture', header, sources)
                count += 1
    print(f'PASS {compiler}: {count} optimization/ISA/CET variants, both native graphs and controlled transport', flush=True)
    for case in doc['cases']:
        before = (root / case['preimage']).read_text()
        old = run([compiler, '-std=c++17', '-I' + str(root / 'include'), '-x', 'c++', '-fsyntax-only', '-'],
                  success=False, stdin=before)
        need('rdtsc' in old.stderr, 'original missing-rdtsc diagnostic absent')
        controls += 1
    for flag in ['-U__x86_64__', '-U__linux__', '-D_WIN32']:
        old = run([compiler, '-std=c++17', flag, '-I' + str(root / 'include'), '-x', 'c++', '-fsyntax-only', '-'],
                  success=False, stdin='#include "bf_native_timestamp_operation.h"\n')
        need('timestamp projection requires' in old.stderr, 'unsupported native target did not fail closed')
        controls += 1
    # These source/header mutants are compiled, not merely checked by hashes.
    changes = [
        ('wrong_shift', header.replace('high) << 32', 'high) << 31'), sources, True),
        ('swapped_halves', header.replace('"=a"(low), "=d"(high)', '"=a"(high), "=d"(low)'), sources, True),
        ('lost_high', header.replace('(static_cast<std::uint64_t>(high) << 32)', 'UINT64_C(0)'), sources, True),
        ('fence', header.replace('"rdtsc"', '"lfence\\n\\trdtsc"'), sources, False),
        ('second_read', header.replace('"rdtsc"', '"rdtsc\\n\\trdtsc"'), sources, False),
        ('changed_primitive', header.replace('"rdtsc"', '"rdtscp"').replace('"=d"(high));', '"=d"(high) : : "rcx");'), sources, False),
    ]
    pointer = sources[1].decode()
    low = '  output[0] = static_cast<undefined4>(uVar1);\n'
    high = '  output[1] = static_cast<undefined4>(uVar1 >> 32);\n'
    pointer_changes = [
        ('reordered_stores', pointer.replace(low + high, high + low), False),
        ('wrong_offset', pointer.replace('output[1]', 'output[2]'), True),
        ('wrong_return', pointer.replace('return 1;', 'return 0;'), True),
        ('extra_load', pointer.replace('  return 1;', '  (void)output[2];\n  return 1;'), False),
        ('merged_store', pointer.replace(low + high, '  *reinterpret_cast<volatile undefined8 *>(param_1) = uVar1;\n').replace('  volatile undefined4 *output = param_1;\n', ''), False),
        ('extra_store', pointer.replace('  return 1;', '  output[2] = 0;\n  return 1;'), True),
        ('two_helper_calls', pointer.replace('uVar1 >> 32', 'bf_native_timestamp_unsynchronized() >> 32'), True),
    ]
    changes += [(name, header, [sources[0], text.encode()], runtime) for name, text, runtime in pointer_changes]
    for name, changed_header, changed_sources, runtime in changes:
        folder = temp / ('mutant-' + name); folder.mkdir()
        (folder / Path(HEADER).name).write_text(changed_header)
        rejected_graphs = 0
        for which, source in enumerate(changed_sources):
            p = folder / ('leaf' + str(which) + '.cpp'); p.write_bytes(source)
            # Include canonical type aliases; the mutant header is adjacent to source.
            out = folder / ('leaf' + str(which) + '.o')
            run([compiler, '-std=c++17', '-Wall', '-Wextra', '-Werror', '-O2',
                 '-I' + str(root / 'include'), '-c', p, '-o', out])
            assembly = run(['objdump', '-d', '-Mintel', '-w', out]).stdout
            graph = parse_disassembly(assembly, SYMBOLS[which])
            try:
                check_graph(graph, which == 1)
            except ValueError:
                rejected_graphs += 1
        need(rejected_graphs > 0, 'compiled mutant accepted: ' + name)
        controls += rejected_graphs
        if runtime:
            controlled_run(compiler, ['-O2'], root, folder / 'fixture', changed_header, changed_sources, success=False)
            controls += 1
    for mode, enabled in [('address,undefined', args.sanitize), ('undefined', args.ubsan)]:
        if not enabled:
            continue
        # Runtime/linker failures stay visible. Do not disable leak detection or alter host settings.
        folder = temp / ('sanitizer-' + mode)
        controlled_run(compiler, ['-O1', '-g', '-fsanitize=' + mode, '-fno-sanitize-recover=all',
                                 '-fno-omit-frame-pointer'], root, folder, header, sources)
        invalid = run([folder / 'transport', '--misaligned'], success=False)
        need('misaligned address' in invalid.stderr and 'runtime error:' in invalid.stderr,
             'intentional alignment violation not rejected by sanitizer')
        controls += 1
        print('PASS controlled transport and alignment rejection under ' + mode, flush=True)
    return controls


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=Path, default=ROOT)
    parser.add_argument('--compiler', default=shutil.which('clang++') or shutil.which('g++'))
    parser.add_argument('--matrix', action='store_true', help='both amd64 ISA levels and none/branch/full CET')
    parser.add_argument('--sanitize', action='store_true', help='ASan+UBSan, including normal leak checks')
    parser.add_argument('--ubsan', action='store_true', help='separate UBSan-only run; does not certify ASan')
    parser.add_argument('--private-export', type=Path)
    args = parser.parse_args()
    need(args.compiler, 'C++17 compiler required')
    doc = load_manifest(args.root)
    verify_source(args.root, doc)
    controls = 0
    for case in doc['cases']:
        raw = (args.root / case['source']).read_bytes()
        before = (args.root / case['preimage']).read_bytes()
        for changed, old in [(raw+b' ', before), (raw.replace(b'\n', b'\r\n'), before),
                             (raw, before+b' '), (raw, before.replace(b'\n', b'\r\n'))]:
            controls += rejected(lambda: restore(case, changed, old))
    controls += rejected(lambda: strict_json('{"x":1,"x":2}'))
    controls += rejected(lambda: strict_json('{"x":NaN}'))
    with tempfile.TemporaryDirectory(prefix='bf-timestamp-') as temporary:
        temp = Path(temporary)
        if args.private_export:
            controls += private_checks(args.private_export, doc, temp)
        controls += compiler_checks(args.compiler, args, args.root, doc, temp)
    print(f'PASS exact source reversal, inventory/body pins and {controls} negative controls')
    print('Native unsynchronized read/transport only. No Xbox values, frequency, CPU ordering, guest ABI or original-runtime equivalence claim.')


if __name__ == '__main__':
    main()
