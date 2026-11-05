#!/usr/bin/env python3
"""Provenance and bounded-native operation gate for 002eaa70.
Only initialized compiled C++ runs. Original x86 bytes are decoded, never run.
Guest mapping/wrap, register/flags/RET transport and 1:1 runtime are unverified.
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
from source_layout import relative_source_path

ROOT = Path(__file__).resolve().parents[1]
ENTRY = '0x002eaa70'
SOURCE = 'src/main_unclassified/band_002e/0x002eaa70.cpp'
PREIMAGE = 'tests/fixtures/002eaa70_before.cpp.txt'
FIXTURE = 'tests/fixtures/002eaa70_native_model.cpp'
MANIFEST = 'metadata/cpp_002eaa70_bounded_length.json'
MANIFEST_SHA = 'fba855db7fbccb2727e8774cd2d409f0c7e0160381f5a72b8a378d5a662f16f8'
FIXTURE_SHA = '189b5ca532a762fa6babbcf1b38ccd7522c5765db0d879e3b129102d8b468bf4'
BEFORE_SHA = '127b3aeb95429bc817d4092f6f0474db01b1b39bae4d83d314b745bd79ed23cf'
AFTER_SHA = '916c139a16084a113a24f512e98843917b6bd12e5f7a675eebb77c169dd969af'
GIT_BLOB = '02972748ce3c900492d65a542e33bde1f64f4c3d'
BODY_SHA = 'AB4BAB194AAE7751EAE686A11B9B3777DD65C29138D9A7D064CC8A88CB137299'
XBE_SHA = 'B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721'
BASELINE = 'dcfa46ea5ff5774364e45f18e0cb521c44559801'
PRIVATE_SHA = '0c6006354ce3926a08612d90efac8f0af7d4bfe80497ed80ff517098396859a7'
SIGNATURE = 'int FUN_002eaa70(short *param_1)'
BEFORE = '  return ((int)psVar2 - (int)param_1 >> 1) + -1;'
AFTER = "  // Bounded native object only: two's-complement 16-bit short, 32-bit int,\n  // first zero at L <= 0x3ffffffe and L+1 <= PTRDIFF_MAX in one live short array.\n  // Reads through the zero and the final one-past advance must be valid.\n  // Guest32 mapping/wrap, registers/flags and RET transport remain ABI_UNVERIFIED.\n  return static_cast<int>(psVar2 - param_1) - 1;"
# Independently encoded instruction schedule, not trusted decompiler text.
SCHEDULE = [('8b442404', 'MOV', ['EAX', 'dword ptr [ESP + 0x4]'], 'mov', '0x4(%esp),%eax'),
 ('668b08', 'MOV', ['CX', 'word ptr [EAX]'], 'mov', '(%eax),%cx'),
 ('40', 'INC', ['EAX'], 'inc', '%eax'),
 ('40', 'INC', ['EAX'], 'inc', '%eax'),
 ('6685c9', 'TEST', ['CX', 'CX'], 'test', '%cx,%cx'),
 ('75f6', 'JNZ', ['0x002eaa74'], 'jne', '0x2eaa74'),
 ('2b442404', 'SUB', ['EAX', 'dword ptr [ESP + 0x4]'], 'sub', '0x4(%esp),%eax'),
 ('d1f8', 'SAR', ['EAX', '0x1'], 'sar', '$1,%eax'),
 ('48', 'DEC', ['EAX'], 'dec', '%eax'),
 ('c3', 'RET', [], 'ret', '')]
RAW = bytes.fromhex(''.join(s[0] for s in SCHEDULE))
EXPECTED_OUTPUT = '2113265 initialized native cases; 100030 independent DWORD arithmetic cases passed'


def need(condition, message):
    if not condition:
        raise ValueError(message)


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def windows():
    result = []
    address = int(ENTRY, 16)
    for raw, mnemonic, operands, _, _ in SCHEDULE:
        result.append({'address': f'0x{address:08x}', 'bytes': raw,
                       'mnemonic': mnemonic, 'operands': operands})
        address += len(bytes.fromhex(raw))
    need(address == 0x002eaa86 and len(RAW) == 22 and sha(RAW).upper() == BODY_SHA,
         'complete original body identity')
    need(0x002eaa7c+2+int.from_bytes(RAW[13:14], 'little', signed=True) == 0x002eaa74,
         'nonzero branch rereads next word')
    return result


def validate_manifest(doc):
    # This pin also rejects unreviewed fields, boundary relaxations and whitespace
    # canonicalization changes. Individual checks below do not trust mutable pins.
    need(sha((json.dumps(doc, indent=2)+'\n').encode()) == MANIFEST_SHA, 'immutable manifest')
    need(doc['schema_version'] == 1 and doc['entry'] == ENTRY and doc['source'] == SOURCE
         and doc['baseline_commit'] == BASELINE and doc['preimage_fixture'] == PREIMAGE,
         'manifest scope and exact baseline')
    need(doc['original_xbe_sha256'] == XBE_SHA and doc['original_body_sha256'] == BODY_SHA,
         'original identities')
    need((doc['source_before_sha256'], doc['source_after_sha256'], doc['preimage_git_blob']) ==
         (BEFORE_SHA, AFTER_SHA, GIT_BLOB), 'immutable source pins')
    need(doc['signature'] == SIGNATURE and doc['replacement'] ==
         {'before': BEFORE, 'after': AFTER, 'count': 1}, 'only admitted source spelling')
    validate_body(doc['body_ranges'], doc['instruction_count'], doc['instruction_windows'])


def validate_body(ranges, count, listed_windows):
    need(ranges == [{'start': '002eaa70', 'end_inclusive': '002eaa85',
                     'length': 22, 'bytes_hex': RAW.hex()}], 'exact complete body range')
    need(count == 10 and listed_windows == windows(), 'all raw instruction boundaries and semantics')


def validate_source(before, after):
    need(sha(before) == BEFORE_SHA and sha(after) == AFTER_SHA, 'immutable source pre/post hashes')
    need(hashlib.sha1(b'blob '+str(len(before)).encode()+b'\0'+before).hexdigest() == GIT_BLOB,
         'historical Git blob')
    old, new = before.decode(), after.decode()
    need(old.count(BEFORE) == new.count(AFTER) == 1, 'unique reversible replacement')
    need(old.replace(BEFORE, AFTER) == new and new.replace(AFTER, BEFORE) == old,
         'exact source reversal, including loop/access order')
    need(old.count(SIGNATURE) == new.count(SIGNATURE) == 1, 'unchanged int(short*) signature')
    for text in (old, new):
        need('Input x86 body SHA-256: '+BODY_SHA in text and 'Entry: '+ENTRY in text,
             'unchanged original identity labels')
    need("two's-complement 16-bit short" in new, 'word representation contract')
    need('L <= 0x3ffffffe and L+1 <= PTRDIFF_MAX' in new, 'bounded defined pointer subtraction and conversion')


def reject(call, label):
    try:
        call()
    except (ValueError, KeyError, TypeError):
        return
    raise ValueError('negative unexpectedly admitted: '+label)


def run(command, env=None):
    return subprocess.run(command, text=True, capture_output=True, timeout=120, env=env)


def success(command, env=None):
    result = run(command, env)
    need(result.returncode == 0, 'command failed: '+' '.join(map(str, command))+'\n'+result.stdout+result.stderr)
    return result


def independent_decode(work):
    objdump = shutil.which('objdump')
    need(objdump, 'GNU objdump required for independent i386 decoding')
    binary = work/'original-body.decode-only.bin'
    binary.write_bytes(RAW)
    result = success([objdump, '-D', '-b', 'binary', '-m', 'i386', '--adjust-vma='+ENTRY, str(binary)])
    decoded = []
    for line in result.stdout.splitlines():
        match = re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2}\s+)+)\s*(\S+)\s*(.*?)\s*$', line)
        if match:
            decoded.append((int(match[1], 16), ''.join(match[2].split()), match[3], match[4].replace(' ', '')))
    expected = [(int(w['address'], 16), w['bytes'], spec[3], spec[4])
                for w, spec in zip(windows(), SCHEDULE)]
    need(decoded == expected, 'independent objdump exact complete opcode/operand/branch decode')
    print('Independent i386 decode: all 22 bytes / 10 instructions matched; no original bytes executed.')


def validate_private(status, record):
    need(record['entry'] == status['entry'] == '002eaa70' and record['name'] == 'FUN_002eaa70'
         and record['is_thunk'] is False, 'private identity')
    need(record['program_memory_body_sha256'] == status['program_memory_body_sha256'] == BODY_SHA
         == status['canonical_body_sha256'], 'private original body hashes')
    need(record['body_byte_count'] == status['body_byte_count'] == 22
         and record['instruction_count'] == status['instruction_count'] == 10, 'private complete counts')
    need(status['canonical_hash_match'] is True and status['byte_and_instruction_validation_pass'] is True
         and status['issues'] == [] and status['uncovered_body_byte_count'] == 0
         and status['first_uncovered_addresses'] == [] and status['prefetch_listing_disagreements'] == [],
         'private clean coverage and validation')
    observed = [{'address': '0x'+i['address'], 'bytes': i['bytes_hex'],
                 'mnemonic': i['mnemonic'], 'operands': i['operands']} for i in record['instructions']]
    validate_body(record['body_ranges'], record['instruction_count'], observed)
    for instruction, window in zip(record['instructions'], windows()):
        raw = bytes.fromhex(window['bytes']); address = int(window['address'], 16)
        need(instruction['length'] == instruction['parsed_length'] == len(raw), 'private lengths')
        need(instruction['text'] == (window['mnemonic']+' '+','.join(window['operands'])).rstrip(), 'private instruction text')
        need(instruction['listing_metadata_is_analyzed_not_byte_proof'] is True
             and instruction['is_length_overridden'] is False and instruction['flow_override'] == 'NONE'
             and instruction['is_fallthrough_overridden'] is False, 'private no analyzed overrides')
        flow, flows, fallthrough = 'FALL_THROUGH', [], f'{address+len(raw):08x}'
        if raw[0] in (0x74, 0x75):
            flow = 'CONDITIONAL_JUMP'
            flows = [f"{address+2+int.from_bytes(raw[1:], 'little', signed=True):08x}"]
        elif raw[0] == 0xc3:
            flow, fallthrough = 'TERMINATOR', None
        need(instruction['flow_type'] == flow and instruction['flows'] == flows
             and instruction['fallthrough'] == fallthrough, 'private raw-derived control flow')


def private_replay(folder):
    validation = json.loads((folder/'validation.json').read_text())
    statuses = [s for s in validation['functions'] if s['entry'] == '002eaa70']
    need(len(statuses) == 1, 'one selected private record')
    status = statuses[0]
    need(status['jsonl_byte_offset'] == 254732994 and status['jsonl_byte_length'] == 3747,
         'pinned private input record location')
    with (folder/'functions.jsonl').open('rb') as f:
        f.seek(status['jsonl_byte_offset']); raw = f.read(status['jsonl_byte_length'])
    need(sha(raw) == PRIVATE_SHA, 'immutable selected private record bytes')
    record = json.loads(raw)
    validate_private(status, record)
    count = 0
    for field, value in [('entry', '00000000'), ('program_memory_body_sha256', '0'*64),
                         ('canonical_body_sha256', '0'*64), ('body_byte_count', 21), ('instruction_count', 9),
                         ('canonical_hash_match', False), ('byte_and_instruction_validation_pass', False),
                         ('issues', ['bad']), ('uncovered_body_byte_count', 1),
                         ('first_uncovered_addresses', ['002eaa85']), ('prefetch_listing_disagreements', ['bad'])]:
        bad = copy.deepcopy(status); bad[field] = value
        reject(lambda: validate_private(bad, record), 'private status '+field); count += 1
    for field, value in [('name', 'FUN_wrong'), ('entry', '00000000'), ('is_thunk', True),
                         ('program_memory_body_sha256', '0'*64), ('body_byte_count', 21), ('instruction_count', 9)]:
        bad = copy.deepcopy(record); bad[field] = value
        reject(lambda: validate_private(status, bad), 'private record '+field); count += 1
    for index in range(10):
        for field, value in [('address', '00000000'), ('bytes_hex', '90'), ('length', 0), ('parsed_length', 0),
                             ('mnemonic', 'CALL'), ('operands', ['wrong']), ('text', 'CALL wrong'),
                             ('listing_metadata_is_analyzed_not_byte_proof', False), ('is_length_overridden', True),
                             ('flow_override', 'CALL_RETURN'), ('is_fallthrough_overridden', True),
                             ('flow_type', 'UNCONDITIONAL_JUMP'), ('flows', ['00000000']), ('fallthrough', '00000000')]:
            bad = copy.deepcopy(record); bad['instructions'][index][field] = value
            reject(lambda: validate_private(status, bad), f'private instruction {index} {field}'); count += 1
    bad = copy.deepcopy(record); bad['instructions'].pop()
    reject(lambda: validate_private(status, bad), 'missing final RET instruction'); count += 1
    bad = copy.deepcopy(record); bad['body_ranges'][0]['bytes_hex'] = RAW[:-1].hex()
    reject(lambda: validate_private(status, bad), 'missing final RET byte'); count += 1
    print(f'Private selected-record replay: {count} corruptions rejected; whole XBE not reauthenticated.')


def public_negatives(doc, before, after):
    source_count = manifest_count = body_count = 0
    for index in range(len(RAW)):
        bad = copy.deepcopy(doc['body_ranges']); raw = bytearray(RAW); raw[index] ^= 1; bad[0]['bytes_hex'] = raw.hex()
        reject(lambda: validate_body(bad, 10, windows()), f'body byte {index}'); body_count += 1
    for index in range(10):
        for field, value in [('address', '0x00000000'), ('bytes', '90'), ('mnemonic', 'CALL'), ('operands', ['wrong'])]:
            bad = windows(); bad[index] = dict(bad[index], **{field: value})
            reject(lambda: validate_body(doc['body_ranges'], 10, bad), f'body window {index} {field}'); body_count += 1
    for size in (0, 9, 11):
        reject(lambda: validate_body(doc['body_ranges'], size, windows()), 'instruction count'); body_count += 1
    for field, value in [('start', '002eaa71'), ('end_inclusive', '002eaa84'), ('length', 21)]:
        bad = copy.deepcopy(doc['body_ranges']); bad[0][field] = value
        reject(lambda: validate_body(bad, 10, windows()), 'body range '+field); body_count += 1
    for field in doc:
        bad = copy.deepcopy(doc); bad[field] = None
        reject(lambda: validate_manifest(bad), 'manifest '+field); manifest_count += 1
    for needle, replacement in [(SIGNATURE, 'unsigned int FUN_002eaa70(short *param_1)'),
                                ('psVar2 = param_1;', 'psVar2 = param_1 + 1;'),
                                ('sVar1 = *psVar2;', 'sVar1 = psVar2[1];'),
                                ('psVar2 = psVar2 + 1;', 'psVar2 = psVar2 + 2;'),
                                ('L <= 0x3ffffffe and L+1 <= PTRDIFF_MAX', 'L is unrestricted'),
                                (BODY_SHA, '0'*64), (ENTRY, '0x002eaa71'),
                                ('static_cast<int>(psVar2 - param_1) - 1', 'static_cast<int>(param_1 - psVar2) - 1')]:
        need(after.decode().count(needle) == 1, 'unique source mutation target')
        bad = after.decode().replace(needle, replacement).encode()
        reject(lambda: validate_source(before, bad), 'source '+needle); source_count += 1
    reject(lambda: validate_source(before+b'\n', after), 'preimage corruption'); source_count += 1
    print(f'Public negative controls: {source_count} source, {manifest_count} manifest, {body_count} body/window corruptions rejected.')


def native_checks(root, work, before, after, sanitize):
    compiler = shutil.which('clang++'); need(compiler, 'clang++ required')
    fixture = root/FIXTURE
    for optimization in ('-O0', '-O2'):
        command = [compiler, '-std=c++17', optimization, '-x', 'c++', '-fsyntax-only', '-ferror-limit=0',
                   '-I', str(root/'include')]
        negative = run(command+[str(root/PREIMAGE)])
        errors = re.findall(r': error: ([^\n]+)', negative.stderr)
        need(negative.returncode != 0 and len(errors) == 2
             and all('cast from pointer to smaller type' in e for e in errors),
             'exact two original pointer-to-int errors')
        success(command+[str(root/SOURCE)])
        binary = work/('native'+optimization)
        success([compiler, '-std=c++17', optimization, '-Wall', '-Wextra', '-Werror', '-I', str(root/'include'),
                 str(fixture), str(root/SOURCE), '-o', str(binary)])
        result = success([str(binary)])
        need(result.stdout.strip() == EXPECTED_OUTPUT, 'deterministic native/model count')
        print(optimization+': '+result.stdout.strip())
    if sanitize:
        gcc = shutil.which('g++'); need(gcc, 'g++ required for optional sanitizers')
        binary = work/'native-sanitized'
        success([gcc, '-std=c++17', '-O2', '-g', '-Wall', '-Wextra', '-Werror', '-fsanitize=address,undefined',
                 '-fno-omit-frame-pointer', '-I', str(root/'include'), str(fixture), str(root/SOURCE), '-o', str(binary)])
        env = dict(os.environ, ASAN_OPTIONS='detect_leaks=0', UBSAN_OPTIONS='halt_on_error=1')
        result = success([str(binary)], env)
        need(result.stdout.strip() == EXPECTED_OUTPUT, 'sanitized model count')
        print('ASan+UBSan: '+result.stdout.strip()+'; LeakSanitizer disabled.')
    # Every executable mutant must compile and fail by the explicit value-model
    # mismatch status. Crashes, sanitizer failures and compiler failures do not count.
    mutants = [('wrong_start', 'psVar2 = param_1;', 'psVar2 = param_1 + 1;'),
     ('skip_first_read', 'sVar1 = *psVar2;', 'sVar1 = psVar2[1];'),
     ('wrong_stride', 'psVar2 = psVar2 + 1;', 'psVar2 = psVar2 + 2;'),
     ('off_by_one', 'static_cast<int>(psVar2 - param_1) - 1', 'static_cast<int>(psVar2 - param_1)'),
     ('off_by_minus_one',
      'static_cast<int>(psVar2 - param_1) - 1',
      'static_cast<int>(psVar2 - param_1) - 2'),
     ('reverse_sub', 'static_cast<int>(psVar2 - param_1)', 'static_cast<int>(param_1 - psVar2)'),
     ('low_byte_only',
      '} while (sVar1 != 0);',
      '} while ((static_cast<unsigned short>(sVar1) & 0xffU) != 0);'),
     ('high_byte_only',
      '} while (sVar1 != 0);',
      '} while ((static_cast<unsigned short>(sVar1) & 0xff00U) != 0);'),
     ('negative_terminates', '} while (sVar1 != 0);', '} while (sVar1 > 0);'),
     ('one_iteration', '} while (sVar1 != 0);', '} while (sVar1 != 0 && false);'),
     ('double_halving', 'static_cast<int>(psVar2 - param_1)', 'static_cast<int>(psVar2 - param_1) / 2')]
    for name, needle, replacement in mutants:
        text = after.decode(); need(text.count(needle) == 1, 'unique executable mutation '+name)
        mutated = work/(name+'.cpp'); mutated.write_text(text.replace(needle, replacement))
        binary = work/name
        success([compiler, '-std=c++17', '-O2', '-Wall', '-Wextra', '-Werror', '-I', str(root/'include'),
                 str(fixture), str(mutated), '-o', str(binary)])
        result = run([str(binary)])
        need(result.returncode == 42 and result.stderr == 'MODEL_MISMATCH: model mismatch\n',
             'mutant must fail by expected value-model mismatch: '+name)
    print(f'{len(mutants)} executable mutations compiled and failed by expected model mismatch.')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=Path, default=ROOT)
    parser.add_argument('--private-export', type=Path)
    parser.add_argument('--sanitize', action='store_true')
    args = parser.parse_args(); root = args.root.resolve()
    need(relative_source_path(root, ENTRY).as_posix() == SOURCE, 'canonical source-layout routing')
    doc_bytes = (root/MANIFEST).read_bytes(); need(sha(doc_bytes) == MANIFEST_SHA, 'manifest file SHA')
    doc = json.loads(doc_bytes); validate_manifest(doc)
    before, after = (root/PREIMAGE).read_bytes(), (root/SOURCE).read_bytes()
    validate_source(before, after)
    need(sha((root/FIXTURE).read_bytes()) == FIXTURE_SHA, 'immutable independent fixture')
    with (root/'metadata/bulk_13694_inventory.csv').open(newline='') as stream:
        rows = [r for r in csv.DictReader(stream) if r['entry'] == ENTRY]
    need(len(rows) == 1 and rows[0]['original_body_sha256'] == BODY_SHA, 'original inventory body identity')
    public_negatives(doc, before, after)
    if args.private_export:
        private_replay(args.private_export)
    with tempfile.TemporaryDirectory(prefix='bf-002eaa70-') as temp:
        work = Path(temp)
        independent_decode(work)
        native_checks(root, work, before, after, args.sanitize)
    print('002eaa70 bounded native operation and source gate passed; guest ABI/wrap and 1:1 remain unverified.')


if __name__ == '__main__':
    main()
