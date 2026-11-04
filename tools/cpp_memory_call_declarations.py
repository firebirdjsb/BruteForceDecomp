"""Exact source-only overlays for two raw-byte-reviewed _memmove call edges.

This composes with the unchanged byte-offset-20 historical ledger. It never
turns the existing host pointer/size_t source interface into an Xbox ABI.
"""
from __future__ import annotations
import hashlib
import json
from pathlib import Path
import struct

MANIFEST = 'metadata/cpp_20261104_memory_call_declarations_2.json'
ENTRIES = {'0x002e0650', '0x002e7b00'}
SIGNATURE = 'void * __cdecl _memmove(void *__dest,void *__src,size_t __n)'
XBE_SHA256 = 'B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721'


def sha(text):
    return hashlib.sha256(text.encode('utf-8')).hexdigest()


def git_blob(text):
    raw = text.encode('utf-8')
    return hashlib.sha1(b'blob ' + str(len(raw)).encode() + b'\0' + raw).hexdigest()


def load_manifest(root):
    data = json.loads((Path(root) / MANIFEST).read_text())
    cases = data['cases']
    if (data['schema_version'] != 1 or len(cases) != 2 or
            {c['entry'] for c in cases} != ENTRIES or
            data['full_xbe_reauthenticated'] is not False or
            data['original_xbe_sha256'] != XBE_SHA256 or
            data['evidence_kind'] != 'stored_program_memory_body_bytes_matching_canonical_inventory' or
            data['callee']['entry'] != '0x002ea100' or
            data['callee']['signature'] != SIGNATURE or
            data['added_block'].count('extern ' + SIGNATURE + ';\n') != 1):
        raise ValueError('Changed memory-call overlay scope')
    return data


def restore_source(data, case, text):
    """Remove only a completely pinned added declaration, not source repairs."""
    block = data['added_block']
    if (case['entry'] not in ENTRIES or
            text.count(block) != 1 or sha(text) != case['source_after_sha256'] or
            'Input x86 body SHA-256: ' + case['original_body_sha256'] not in text):
        raise ValueError('Changed memory-call result source: ' + case['entry'])
    old = text.replace(block, '', 1)
    if sha(old) != case['source_before_sha256'] or git_blob(old) != case['preimage_git_blob']:
        raise ValueError('Changed memory-call preimage source: ' + case['entry'])
    return old


def restore_for_byte_offset_ledger(root, historical_case, text):
    if historical_case['entry'] not in ENTRIES:
        return text
    data = load_manifest(root)
    case = next(c for c in data['cases'] if c['entry'] == historical_case['entry'])
    if (historical_case['path'] != case['source'] or
            historical_case['original_body_sha256'] != case['original_body_sha256'] or
            historical_case['body_length'] != case['body_byte_count'] or
            case['historical_ledger'] != 'metadata/cpp_20261101_byte_offset_20.json'):
        raise ValueError('Memory-call and byte-offset ledgers disagree')
    old = restore_source(data, case, text)
    before, after = historical_case['before'], historical_case['after']
    if old.count(after) != 1 or before in old:
        raise ValueError('Historical byte-offset edit changed')
    historical_preimage = old.replace(after, before, 1)
    if git_blob(historical_preimage) != historical_case['preimage_git_blob']:
        raise ValueError('Historical byte-offset preimage changed')
    return old


def memory_bytes(record):
    result = {}
    for row in record['body_ranges']:
        start = int(row['start'], 16)
        for offset, byte in enumerate(bytes.fromhex(row['bytes_hex'])):
            if start + offset in result:
                raise ValueError('Overlapping recorded body ranges')
            result[start + offset] = byte
    return result


def read_bytes(record, site, size):
    memory = memory_bytes(record)
    start = int(site, 16)
    try:
        return bytes(memory[start + offset] for offset in range(size))
    except KeyError as error:
        raise ValueError('Contract bytes outside recorded body') from error


def expect_bytes(record, site, expected):
    raw = bytes.fromhex(expected)
    if read_bytes(record, site, len(raw)) != raw:
        raise ValueError('Changed raw contract at ' + site)


def validate_record(record, expected):
    if record['entry'] != expected['entry'][2:]:
        raise ValueError('Wrong recorded entry')
    ranges = record['body_ranges']
    if [{k:r[k] for k in ('start', 'end_inclusive', 'length')} for r in ranges] != expected['body_ranges']:
        raise ValueError('Changed recorded range boundaries')
    previous_end = -1
    digest = hashlib.sha256()
    for row in ranges:
        raw = bytes.fromhex(row['bytes_hex'])
        start, end = int(row['start'],16), int(row['end_inclusive'],16)
        if start <= previous_end or end-start+1 != row['length'] or len(raw) != row['length']:
            raise ValueError('Changed recorded range length/order')
        previous_end = end
        digest.update(raw)
    digest = digest.hexdigest().upper()
    if digest != expected['original_body_sha256'] or digest != record['program_memory_body_sha256']:
        raise ValueError('Changed complete recorded body digest')
    memory = memory_bytes(record)
    if len(memory) != expected['body_byte_count'] or len(memory) != record['body_byte_count']:
        raise ValueError('Changed body byte count')
    covered = set()
    if len(record['instructions']) != record['instruction_count']:
        raise ValueError('Changed instruction count')
    for instruction in record['instructions']:
        raw = bytes.fromhex(instruction['bytes_hex'])
        start = int(instruction['address'],16)
        if (instruction['length'] != len(raw) or instruction['parsed_length'] != len(raw) or
                instruction['is_length_overridden'] or instruction['flow_override'] != 'NONE' or
                instruction['is_fallthrough_overridden']):
            raise ValueError('Analyzed boundary override present')
        expect_bytes(record, instruction['address'], instruction['bytes_hex'])
        span = set(range(start,start+len(raw)))
        if covered & span:
            raise ValueError('Overlapping instruction coverage')
        covered |= span
    if covered != set(memory):
        raise ValueError('Incomplete recorded instruction coverage')


def validate_call_contract(record, case):
    # Decode rel32 from raw bytes, not the analyzed target label.
    raw = read_bytes(record, case['call_site'], 5)
    if raw[0] != 0xe8:
        raise ValueError('Expected raw E8 direct call')
    target = (int(case['call_site'],16) + 5 + struct.unpack('<i',raw[1:])[0]) & 0xffffffff
    if target != 0x002ea100 or case['target'] != '002ea100':
        raise ValueError('Wrong raw direct-call target')
    expect_bytes(record, case['call_site'], case['call_bytes'])
    # Raw ordered PUSH/LEA sequence establishes three DWORD stack values.
    expect_bytes(record, case['stack_setup_site'], case['stack_setup_bytes'])
    expect_bytes(record, case['caller_cleanup_site'], '83c40c')
    for site in case['return_sites']:
        expect_bytes(record, site, case['caller_return_bytes'])


def validate_callee_contract(record, case):
    expect_bytes(record, case['prologue_site'], case['prologue_bytes'])
    for site in case['return_load_and_epilogue_sites']:
        expect_bytes(record, site, '8b45085e5fc9c3')
