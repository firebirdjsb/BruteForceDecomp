#!/usr/bin/env python3
"""Bounded timestamp caller declaration/local-storage gate, not a caller runtime test.

Public checks use the small committed opcode windows, C++17, and GNU objdump.
Optional private evidence is read as data only. Only an authored deterministic
storage example is executed; neither canonical caller nor original game bytes run.
"""
from __future__ import annotations
import argparse
import copy
import csv
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import tempfile

from body_hash_labels import read_body_digest
from source_layout import source_path

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = 'metadata/cpp_20261105_timestamp_caller_storage.json'
MANIFEST_SHA = '097d989bf4c04a866437030b450053514a71a48b679c8e5e7c8ca03060c410be'
CALLEE = 'src/main_unclassified/band_002f/0x002f2986.cpp'
FIXTURE = 'tests/test_timestamp_caller_storage.cpp'
DECLARATION = b'extern undefined4 XAPILIB__QueryPerformanceCounter(undefined4 *param_1);'
DEFINITION = b'undefined4 XAPILIB__QueryPerformanceCounter(undefined4 *param_1)'
CI_STEP = ('      - name: Verify two timestamp caller declarations and local storage (not caller ABI)\n'
           '        run: python3 tools/test_cpp_timestamp_caller_storage.py --sanitizers\n')


def need(value, message):
    if not value:
        raise ValueError(message)


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def canonical_sha(value):
    return sha(json.dumps(value, sort_keys=True, separators=(',', ':')).encode())


def strict_json(raw):
    def unique(pairs):
        result = {}
        for key, value in pairs:
            need(key not in result, 'duplicate JSON key')
            result[key] = value
        return result
    def nonfinite(_):
        raise ValueError('nonfinite JSON')
    return json.loads(raw, object_pairs_hook=unique, parse_constant=nonfinite)


def rejected(operation):
    try:
        operation()
    except (ValueError, KeyError, TypeError, IndexError, UnicodeError):
        return 1
    raise ValueError('negative control unexpectedly accepted')


def run(command, success=True, diagnostic=None, sanitizer=False):
    env = os.environ.copy()
    if sanitizer:
        env['ASAN_OPTIONS'] = 'detect_leaks=0'
    result = subprocess.run([str(x) for x in command], capture_output=True,
                            text=True, timeout=120, env=env)
    need((result.returncode == 0) == success,
         'unexpected command result: ' + ' '.join(map(str, command)) + '\n' +
         result.stdout + result.stderr)
    if diagnostic:
        need(diagnostic in result.stderr, 'expected diagnostic missing: ' + diagnostic)
    return result


def load_manifest(root):
    raw = (root / MANIFEST).read_bytes()
    need(len(raw) < 100000 and sha(raw) == MANIFEST_SHA, 'manifest raw bytes differ')
    return strict_json(raw)


def apply_edits(before, edits):
    result = before
    for edit in edits:
        old, new = edit['before'].encode(), edit['after'].encode()
        need(result.count(old) == 1, 'nonunique forward edit')
        result = result.replace(old, new, 1)
    return result


def verify_case(case, after, before):
    need(type(after) is bytes and type(before) is bytes, 'raw source bytes required')
    need(sha(after) == case['source_after_sha256'], 'postimage differs')
    need(sha(before) == case['source_before_sha256'], 'preimage differs')
    need(hashlib.sha1(b'blob ' + str(len(before)).encode() + b'\0' + before).hexdigest() ==
         case['preimage_git_blob'], 'preimage Git blob differs')
    restored = after
    for edit in reversed(case['edits']):
        old, new = edit['before'].encode(), edit['after'].encode()
        need(restored.count(new) == 1, 'nonunique reverse edit')
        restored = restored.replace(new, old, 1)
    need(restored == before, 'source reversal is not byte-exact')
    need(apply_edits(before, case['edits']) == after, 'source forward roundtrip differs')
    declaration_only = apply_edits(before, case['edits'][:1])
    need(sha(declaration_only) == case['declaration_only_sha256'], 'declaration-only drift')
    need(after.count(DECLARATION) == 1, 'exact matching declaration absent')
    for raw in (before, after):
        digest, conflict = read_body_digest(raw.decode('utf-8'))
        need(not conflict and digest == case['original_body_sha256'], 'body label differs')
        need(raw.count(('Entry: ' + case['entry']).encode()) == 1, 'entry differs')
        need(raw.count(b'ABI_UNVERIFIED') == 1, 'status differs')
    need(after.split(b'#include', 1)[0] == before.split(b'#include', 1)[0], 'header changed')
    # The complete raw reversal also pins hidden ECX, addresses, branch, writes,
    # call-result nonuse, return, whitespace and all other unenumerated content.
    return declaration_only


def source_checks(root, doc):
    need((root / '.github/workflows/cpp-compatibility-audit.yml').read_bytes().count(
        CI_STEP.encode()) == 1, 'separate CI invocation absent or repeated')
    for pin in doc['dependency_pins'] + doc['artifact_pins']:
        need(sha((root / pin['path']).read_bytes()) == pin['sha256'],
             'dependency or artifact drift: ' + pin['path'])
    callee = (root / CALLEE).read_bytes()
    need(callee.count(DEFINITION + b'\n') == 1, 'callee exact definition differs')
    with (root / 'metadata/bulk_13694_inventory.csv').open(newline='') as stream:
        inventory = {row['entry']: row for row in csv.DictReader(stream)}
    controls = 0
    for case in doc['cases']:
        path = source_path(root, case['entry'])
        need(path.relative_to(root).as_posix() == case['source'], 'source routing differs')
        after, before = path.read_bytes(), (root / case['preimage']).read_bytes()
        verify_case(case, after, before)
        need(inventory[case['entry']]['original_body_sha256'] == case['original_body_sha256'],
             'canonical inventory body hash differs')
        mutations = [
            after.replace(DECLARATION, b''),
            after.replace(b'extern undefined4 XAPILIB__', b'extern void XAPILIB__'),
            after.replace(b'undefined4 *param_1', b'float *param_1'),
            after.replace(b'local_8[2];', b'local_8[1];'),
            after.replace(b'local_8[2];', b'local_8[2] = {};'),
            after.replace(b'(&local_8[0])', b'(&local_8[1])'),
            after.replace(b' = local_8[0];', b' = local_8[1];'),
            after.replace(b' = local_8[1];', b' = local_8[0];'),
            after.replace(b'int in_ECX;', b'int in_ECX = 0;'),
            after.replace(b'in_ECX + 0x10', b'in_ECX + 0x14'),
            after.replace(b' = 0;', b' = 1;', 1),
            after.replace(b'ABI_UNVERIFIED', b'ABI_VERIFIED'),
            after.replace(b'\n', b'\r\n'), after + b'\n', b'\xef\xbb\xbf' + after,
        ]
        if case['entry'] == '0x002e3f50':
            mutations.append(after.replace(b"!= '\\0'", b"== '\\0'"))
        for mutant in mutations:
            need(mutant != after, 'source mutation did not apply')
            controls += rejected(lambda: verify_case(case, mutant, before))
        controls += rejected(lambda: verify_case(case, after, before.replace(b'\n', b'\r\n')))
    print('PASS exact source declaration, raw preimage reversal and dependency pins', flush=True)
    return controls


def body_bytes(body):
    at = int(body['entry'], 16)
    chunks = []
    need(len(body['windows']) == body['instruction_count'], 'instruction count differs')
    for window in body['windows']:
        raw = bytes.fromhex(window['bytes_hex'])
        need(raw and window['address'] == f'{at:08x}', 'window boundary differs')
        chunks.append(raw)
        at += len(raw)
    result = b''.join(chunks)
    need(len(result) == body['body_byte_count'], 'complete body length differs')
    need(sha(result).upper() == body['original_body_sha256'], 'complete body hash differs')
    return result


def decode_body(body, temporary):
    raw = body_bytes(body)
    path = temporary / ('static-' + body['entry'] + '.bin')
    path.write_bytes(raw)
    # GNU objdump decodes an inert data file in 32-bit mode. Never executable.
    output = run(['objdump', '-D', '-b', 'binary', '-m', 'i386', '-Mintel', '-w',
                  '--adjust-vma=' + body['entry'], path]).stdout
    decoded = []
    for line in output.splitlines():
        match = re.fullmatch(r'\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )+)\s*([a-z][a-z0-9]*)\s*(.*?)\s*', line)
        if match:
            decoded.append({'address': f'{int(match[1], 16):08x}',
                            'bytes_hex': bytes.fromhex(match[2]).hex(),
                            'mnemonic': match[3], 'operands': match[4]})
    need(decoded == body['windows'], 'independent complete static decode differs')
    calls = [x for x in decoded if x['mnemonic'] == 'call']
    if body['entry'] != '0x002f2986':
        need(len(calls) == 1, 'caller call count differs')
        call = calls[0]
        data = bytes.fromhex(call['bytes_hex'])
        need(len(data) == 5 and data[0] == 0xe8 and
             int(call['address'], 16) + 5 + int.from_bytes(data[1:], 'little', signed=True) ==
             0x002f2986, 'E8 target differs')
    else:
        need(not calls and [x['mnemonic'] for x in decoded] ==
             ['mov', 'rdtsc', 'mov', 'mov', 'xor', 'inc', 'ret'], 'callee sequence differs')
    return raw


def original_checks(root, doc, temporary):
    with (root / 'metadata/bulk_13694_inventory.csv').open(newline='') as stream:
        inventory = {row['entry']: row for row in csv.DictReader(stream)}
    controls = 0
    for body in doc['original_bodies']:
        raw = decode_body(body, temporary)
        need(body['original_body_sha256'] == inventory[body['entry']]['original_body_sha256'],
             'original body/inventory mismatch')
        for i, window in enumerate(body['windows']):
            for byte in range(len(bytes.fromhex(window['bytes_hex']))):
                mutant = copy.deepcopy(body)
                data = bytearray.fromhex(window['bytes_hex']); data[byte] ^= 1
                mutant['windows'][i]['bytes_hex'] = data.hex()
                controls += rejected(lambda: body_bytes(mutant))
        need(len(raw) > 0, 'empty body')
    print('PASS public original windows: 114 bytes / 43 instructions; static decode only', flush=True)
    return controls


def validate_private(row, encoded, body):
    need(canonical_sha(row) == body['private_validation_row_sha256'], 'private index row drift')
    need(row['issues'] == [] and row['uncovered_body_byte_count'] == 0 and
         row['canonical_hash_match'] is True and row['byte_and_instruction_validation_pass'] is True,
         'private validation quarantine')
    need(sha(encoded) == body['private_record_raw_sha256'], 'private raw record differs')
    record = strict_json(encoded)
    need(canonical_sha(record) == body['private_record_canonical_sha256'], 'private record differs')
    need(record['entry'] == body['entry'][2:] and record['name'] == body['label'] and
         record['is_thunk'] is False, 'private identity differs')
    need(len(record['body_ranges']) == 1, 'private range count differs')
    span = record['body_ranges'][0]
    raw = body_bytes(body)
    need(bytes.fromhex(span['bytes_hex']) == raw and span['start'] == record['entry'] and
         int(span['end_inclusive'], 16) == int(record['entry'], 16) + len(raw) - 1 and
         span['length'] == len(raw) == record['body_byte_count'] == row['body_byte_count'],
         'private full body coverage differs')
    need(record['program_memory_body_sha256'] == row['program_memory_body_sha256'] ==
         row['canonical_body_sha256'] == body['original_body_sha256'], 'private digest differs')
    need(record['instruction_count'] == row['instruction_count'] == len(body['windows']) ==
         len(record['instructions']), 'private instruction count differs')
    for ins, expected in zip(record['instructions'], body['windows']):
        need(ins['address'] == expected['address'] and ins['bytes_hex'] == expected['bytes_hex'] and
             ins['length'] == ins['parsed_length'] == len(bytes.fromhex(expected['bytes_hex'])),
             'private instruction boundaries differ')
        need(ins['flow_override'] == 'NONE' and ins['is_length_overridden'] is False and
             ins['is_fallthrough_overridden'] is False, 'private analyzed override')


def private_checks(folder, doc):
    with (folder / 'validation.json').open('rb') as stream:
        raw = stream.read(32 * 1024 * 1024 + 1)
    need(len(raw) <= 32 * 1024 * 1024, 'oversized private index')
    index = strict_json(raw)
    rows = index['functions']
    need(len(rows) == len({x['entry'] for x in rows}) == 13694, 'private index identity set')
    need(index['summary']['stored_executable_hash_metadata_matches_pin'] is True and
         index['summary']['full_xbe_reauthenticated'] is False, 'private scope differs')
    rows = {x['entry']: x for x in rows}
    controls = 0
    with (folder / 'functions.jsonl').open('rb') as stream:
        for body in doc['original_bodies']:
            row = rows[body['entry'][2:]]
            offset, length = row['jsonl_byte_offset'], row['jsonl_byte_length']
            need(type(offset) is int and type(length) is int and 0 <= offset < 512 * 1024 * 1024
                 and 0 < length < 10000, 'private record bounds')
            stream.seek(offset); encoded = stream.read(length)
            need(len(encoded) == length, 'short private record')
            validate_private(row, encoded, body)
            controls += rejected(lambda: validate_private(row, encoded + b' ', body))
            mutant = copy.deepcopy(row); mutant['issues'] = ['flow_override']
            controls += rejected(lambda: validate_private(mutant, encoded, body))
    print('PASS optional private complete-record cross-check; full XBE not reauthenticated', flush=True)
    return controls


def compile_checks(compiler, root, doc, folder):
    controls = commands = 0
    strict = [compiler, '-std=c++17', '-pedantic-errors', '-ferror-limit=0',
              '-Werror=pointer-to-int-cast', '-I' + str(root / 'include')]
    for opt in ('-O0', '-O2'):
        for case in doc['cases']:
            before = (root / case['preimage']).read_bytes()
            after = (root / case['source']).read_bytes()
            declaration_only = verify_case(case, after, before)
            variants = [
                ('combined', after, True, None),
                ('declaration_only', declaration_only, True, None),
                ('baseline', before, False, "undeclared identifier 'XAPILIB__QueryPerformanceCounter'"),
                ('storage_only', apply_edits(before, case['edits'][1:]), False,
                 "undeclared identifier 'XAPILIB__QueryPerformanceCounter'"),
                ('wrong_pointer', after.replace(b'undefined4 *param_1', b'float *param_1'), False,
                 "no matching function for call to 'XAPILIB__QueryPerformanceCounter'"),
            ]
            for name, content, success, diagnostic in variants:
                source = folder / (case['entry'] + name + '.cpp'); source.write_bytes(content)
                for mode in ('syntax', 'object'):
                    output = ['-fsyntax-only'] if mode == 'syntax' else ['-c', '-o', folder / 'caller.o']
                    run([*strict, opt, *output, source], success=success, diagnostic=diagnostic)
                    commands += 1; controls += int(not success)
            # A same-TU source-definition probe checks return type too. No linking
            # or execution; a bare wrong return declaration can parse in isolation.
            for ret, good in ((b'undefined4', True), (b'void', False)):
                probe = folder / 'definition_probe.cpp'
                probe.write_bytes(b'#include "bf_ghidra_types.h"\n' +
                    DECLARATION.replace(b'extern undefined4', b'extern ' + ret) + b'\n' +
                    (root / CALLEE).read_bytes())
                for mode in ('syntax', 'object'):
                    output = ['-fsyntax-only'] if mode == 'syntax' else ['-c', '-o', folder / 'probe.o']
                    run([*strict, opt, *output, probe], success=good,
                        diagnostic=None if good else 'differ only in their return type')
                    commands += 1; controls += int(not good)
        for mode in ('syntax', 'object'):
            output = ['-fsyntax-only'] if mode == 'syntax' else ['-c', '-o', folder / 'callee.o']
            run([*strict, opt, *output, root / CALLEE]); commands += 1
    print(f'PASS {Path(compiler).name}: {commands} strict syntax/object commands; no caller execution', flush=True)
    return controls, commands


def fixture_checks(compiler, root, folder, sanitizers):
    raw = (root / FIXTURE).read_bytes()
    # These authored negative examples fail without reading an unwritten word.
    variants = [
        ('positive', raw, True, None),
        ('wrong_low', raw.replace(b'result.low = scratch.words[0];',
                                 b'result.low = scratch.words[1];'), False, 'low word'),
        ('wrong_high', raw.replace(b'result.high = scratch.words[1];',
                                  b'result.high = scratch.words[0];'), False, 'high word'),
        ('partial_output', raw.replace(b'destination[1] = high;\n  written |= 2;',
                                       b'(void)high;'), False, 'producer did not initialize both output words'),
        ('no_output', raw.replace(b'destination[0] = low;\n  written |= 1;\n  destination[1] = high;\n  written |= 2;',
                                  b'(void)destination; (void)low; (void)high; (void)written;'), False,
         'producer did not initialize both output words'),
        ('leading_sentinel', raw.replace(b'scratch.before = UINT32_C(0x13579bdf);',
                                         b'scratch.before = UINT32_C(0x13579bde);'), False, 'leading sentinel'),
        ('sentinel', raw.replace(b'scratch.after = UINT32_C(0x2468ace0);',
                                 b'scratch.after = UINT32_C(0x2468ace1);'), False, 'trailing sentinel'),
        ('inactive_path', raw.replace(b'if (enabled) {', b'if (true) {'), False,
         'inactive path accessed scratch'),
    ]
    controls = commands = 0
    for opt in ('-O0', '-O2'):
        modes = (False, True) if sanitizers else (False,)
        for sanitized in modes:
            flags = ['-fsanitize=address,undefined', '-fno-sanitize-recover=all',
                     '-fno-omit-frame-pointer', '-g'] if sanitized else []
            for name, content, success, diagnostic in variants:
                need(name == 'positive' or content != raw, 'fixture mutation did not apply')
                source = folder / ('fixture_' + name + '.cpp'); source.write_bytes(content)
                exe = folder / ('fixture_' + name)
                run([compiler, '-std=c++17', '-pedantic-errors', '-Wall', '-Wextra', '-Werror', opt,
                     *flags, '-I' + str(root / 'include'), source, '-o', exe])
                result = run([exe], success=success, diagnostic=diagnostic, sanitizer=sanitized)
                commands += 2; controls += int(not success)
                if success:
                    need(result.stdout == 'PASS 4194 authored two-word storage cases\n', 'fixture case count')
        # A one-element declaration cannot satisfy this fixture's storage extent.
        short = folder / 'fixture_short.cpp'
        short.write_bytes(raw.replace(b'words[2];', b'words[1];'))
        for mode in ('syntax', 'object'):
            output = ['-fsyntax-only'] if mode == 'syntax' else ['-c', '-o', folder / 'short.o']
            run([compiler, '-std=c++17', '-pedantic-errors', opt, '-I' + str(root / 'include'),
                 *output, short], success=False, diagnostic='static assertion failed')
            controls += 1; commands += 1
    print(f'PASS {Path(compiler).name}: authored fixture and controls, ASan/UBSan={sanitizers}', flush=True)
    return controls, commands


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=Path, default=ROOT)
    parser.add_argument('--compiler', action='append', help='Repeat to test multiple Clang compilers')
    parser.add_argument('--private-export', type=Path, help='Optional local static-evidence directory')
    parser.add_argument('--sanitizers', action='store_true')
    parser.add_argument('--sanitizer-compiler', default=shutil.which('g++'),
                        help='Compiler with ASan/UBSan runtimes; defaults to g++')
    args = parser.parse_args()
    root = args.root.resolve()
    compilers = args.compiler or [shutil.which('clang++')]
    need(all(compilers), 'Clang C++ compiler required')
    need(shutil.which('objdump'), 'GNU objdump required')
    doc = load_manifest(root)
    controls = source_checks(root, doc)
    controls += rejected(lambda: strict_json('{"x":1,"x":2}'))
    controls += rejected(lambda: strict_json('{"x":NaN}'))
    commands = 0
    with tempfile.TemporaryDirectory(prefix='bf-timestamp-callers-') as tmp:
        folder = Path(tmp)
        controls += original_checks(root, doc, folder)
        if args.private_export:
            controls += private_checks(args.private_export, doc)
        for compiler in compilers:
            print(run([compiler, '--version']).stdout.splitlines()[0], flush=True)
            n, count = compile_checks(compiler, root, doc, folder); controls += n; commands += count
            n, count = fixture_checks(compiler, root, folder, False); controls += n; commands += count
        if args.sanitizers:
            need(args.sanitizer_compiler, 'sanitizer compiler required')
            print(run([args.sanitizer_compiler, '--version']).stdout.splitlines()[0], flush=True)
            n, count = fixture_checks(args.sanitizer_compiler, root, folder, True)
            controls += n; commands += count
    print(f'PASS {controls} negative controls; {commands} compile/run commands. '
          'Declaration fixes syntax; array fixes bounded local storage only. '
          'Hidden ECX, guest objects, Xbox ABI and clock remain unverified.')


if __name__ == '__main__':
    main()
