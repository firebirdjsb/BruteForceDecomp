#!/usr/bin/env python3
"""Bounded guest DWORD values/source declarations; never a whole-function ABI claim."""
import argparse
from collections import Counter
import csv
import hashlib
import json
from pathlib import Path
import re
import shutil
import subprocess
import sys

from body_hash_labels import read_body_digest
from source_layout import source_path
from verify_cpp_guest_address_literals import mov_memory_imm32

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = 'metadata/cpp_20261101_literal_declarations.json'
OVERLAY_MANIFEST = 'metadata/cpp_20261101_literal_overlay_12.json'
XBE_SHA = 'B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721'


def sha(text):
    return hashlib.sha256(text.encode()).hexdigest()


def restore(case, text, overlays=None):
    # Compose only independently SHA-pinned later repairs; the original
    # literal-batch preimage and Git blob must still match exactly.
    overlay = (overlays or {}).get(case['entry'])
    if overlay is not None:
        if (case['status'] != 'partial'
                or sha(text) != overlay['current_sha256']
                or text.count(overlay['after']) != 1
                or overlay['before'] in text):
            raise ValueError('Changed independently reviewed overlay: ' + case['entry'])
        text = text.replace(overlay['after'], overlay['before'], 1)
        if sha(text) != overlay['prior_sha256'] or overlay['prior_sha256'] != case['result_source_sha256']:
            raise ValueError('Overlay is not an exact single-operand repair: ' + case['entry'])
    if sha(text) != case['result_source_sha256'] or text.count(case['added_block']) != 1:
        raise ValueError('Changed reviewed source: ' + case['entry'])
    before = text.replace(case['added_block'], '', 1)
    for edit in case['edits']:
        if before.count(edit['after']) != edit['count']:
            raise ValueError('Literal occurrence mismatch')
        before = before.replace(edit['after'], edit['before'])
    raw = before.encode()
    blob = hashlib.sha1(b'blob ' + str(len(raw)).encode() + b'\0' + raw).hexdigest()
    if sha(before) != case['source_sha256'] or blob != case['source_git_blob']:
        raise ValueError('Changes exceed reviewed operands/declarations')
    if overlay is not None:
        if before.count(overlay['before']) != 1 or overlay['after'] in before:
            raise ValueError('Original preimage overlay position differs: ' + case['entry'])
        before = before.replace(overlay['before'], overlay['after'], 1)
    return before


def compile_text(compiler, root, source, opt):
    result = subprocess.run([compiler, '-std=c++17', '-fsyntax-only', '-ferror-limit=0',
        '-Werror=pointer-to-int-cast', opt, '-I', str(root/'include'), '-x', 'c++', '-'],
        input=source, capture_output=True, text=True, timeout=60)
    errors = Counter(re.findall(r'error:\s*([^\n]+)', result.stderr))
    if result.returncode and not errors:
        raise ValueError('Compiler/tool failure: ' + result.stderr[-1200:])
    warnings = Counter(re.findall(r'warning:\s*([^\n]+)', result.stderr))
    locations = Counter((int(m[1]),m[2]) for m in re.finditer(r'<stdin>:(\d+):\d+: error:\s*([^\n]+)',result.stderr))
    return result.returncode, errors, warnings, locations


def verify(root, manifest, compiler, image=None, approved_counts=None, overlays=None):
    cases = manifest['cases']
    expected = manifest['expected_counts']
    overlays = overlays or {}
    # The independent 209-case verifier reuses this function without overlays.
    if overlays and (len(overlays) != 12
            or any(c['entry'] in overlays and c['status'] != 'partial' for c in cases)
            or set(overlays) - {c['entry'] for c in cases}):
        raise ValueError('Reviewed 12-case overlay identity/status differs')
    if expected != (approved_counts if approved_counts is not None else {'total':250,'complete':29,'partial':221,'values':483}):
        raise ValueError('Reviewed batch totals changed')
    if len(cases) != expected['total'] or len({c['entry'] for c in cases}) != len(cases):
        raise ValueError('Batch size/identity differs')
    if manifest['original_xbe_sha256'] != XBE_SHA:
        raise ValueError('Original image identity changed')
    inventory = {r['entry']:r for r in csv.DictReader((root/'metadata/bulk_13694_inventory.csv').open(encoding='utf-8'))}
    texts = {c['entry']:source_path(root,c['entry']).read_text(encoding='utf-8') for c in cases}
    preimages = {c['entry']:restore(c,texts[c['entry']],overlays) for c in cases}
    full = partial = values = 0
    for case in cases:
        text = texts[case['entry']]
        path = source_path(root,case['entry'])
        if path.relative_to(root).as_posix() != case['source']:
            raise ValueError('Noncanonical source path')
        if read_body_digest(text) != (case['body_sha256'],False):
            raise ValueError('Original body label changed')
        row = inventory[case['entry']]
        inventory_sha = overlays[case['entry']]['prior_sha256'] if case['entry'] in overlays else sha(text)
        if row['original_body_sha256'] != case['body_sha256'] or row['c_sha256'] != inventory_sha:
            raise ValueError('Inventory fingerprint differs')
        if 'ABI_UNVERIFIED' not in text:
            raise ValueError('Verification boundary lost')
        for edit in case['edits']:
            if not re.fullmatch(r'&[A-Za-z_]\w*_[0-9a-f]{8}',edit['before']):
                raise ValueError('Not an address expression')
            address = int(edit['before'][-8:],16)
            if edit['after'] != f'UINT32_C(0x{address:08x})' or len(edit['instructions']) != edit['count']:
                raise ValueError('Address/occurrence mismatch')
            for ins in edit['instructions']:
                if mov_memory_imm32(bytes.fromhex(ins['bytes'])) != address:
                    raise ValueError('Not the original DWORD immediate')
                values += 1
        for dep in case['dependencies']:
            callee = source_path(root,dep['entry']).read_text(encoding='utf-8')
            if dep['entry'] in preimages:
                callee = preimages[dep['entry']]
            if sha(callee) != dep['source_sha256']:
                raise ValueError('Callee changed since review: '+dep['entry'])
            if ' '.join(dep['signature'].split())+' {' not in ' '.join(callee.split()):
                raise ValueError('Signature differs from real source definition')
            if 'extern '+dep['signature']+';\n' not in case['added_block']:
                raise ValueError('Declaration not source matched')
        effective_status = 'complete' if case['entry'] in overlays else case['status']
        for opt in ('-O0','-O2'):
            old_rc, old, old_warnings, old_locations = compile_text(compiler,root,preimages[case['entry']],opt)
            rc, errors, warnings, locations = compile_text(compiler,root,text.replace(case['added_block'],'',1) if effective_status=='partial' else text,opt)
            if effective_status == 'partial' and warnings-old_warnings:
                raise ValueError('Repair introduced a warning: '+case['entry']+str(warnings-old_warnings))
            if not old_rc:
                raise ValueError('Preimage was not a failure')
            if effective_status == 'complete':
                if rc:
                    raise ValueError('Whole-file syntax failed: '+case['entry']+str(errors))
            elif effective_status == 'partial':
                removed = old-errors
                original = preimages[case['entry']]
                address_lines = {original.count('\n',0,m.start())+1 for e in case['edits'] for m in re.finditer(re.escape(e['before']),original)}
                removed_locations = old_locations-locations
                if locations-old_locations or sum(removed_locations.values()) != sum(removed.values()):
                    raise ValueError('Diagnostic locations changed outside repaired expressions')
                for (line,message) in removed_locations:
                    if line not in address_lines or not re.search(r"'(?:undefined4|uint32_t|int32_t|uint|int)'",message) or not ('pointer to integer conversion' in message or ('cast from pointer' in message and 'loses information' in message)):
                        raise ValueError('Removed diagnostic is not a known-label DWORD conversion')
                if not rc or errors-old or not removed or sum(removed.values()) != sum(e['count'] for e in case['edits']):
                    raise ValueError('Partial diagnostic delta differs')
                if any('pointer' not in msg and 'cast from' not in msg for msg in removed):
                    raise ValueError('Removed error is outside address-value scope')
            else:
                raise ValueError('Unknown repair status')
        if effective_status == 'complete': full += 1
        else: partial += 1
        try:
            restore(case,text.replace(case['edits'][0]['after'],'UINT32_C(0)',1),overlays)
        except ValueError:
            pass
        else:
            raise ValueError('Changed-literal negative control escaped')
        if case['entry'] in overlays:
            changed = text.replace(overlays[case['entry']]['after'], overlays[case['entry']]['before'], 1)
            try:
                restore(case,changed,overlays)
            except ValueError:
                pass
            else:
                raise ValueError('Changed-overlay negative control escaped')
    if (full,partial,values) != (expected['complete']+len(overlays),expected['partial']-len(overlays),expected['values']):
        raise ValueError('Verification totals differ')
    print(f'PASS {full} complete C++17 repairs; {partial} partial repairs; {values} DWORD values; O0/O2 and preimage/corruption controls')
    if image is not None:
        verify_image(image, cases, overlays)
    else:
        print('Private XBE absent: instruction authenticity not rechecked')
    print('Syntax/operand facts only; original ABI, whole-function behavior and native linkage remain unverified')


def verify_image(data, cases, overlays=None):
    from audit_xbe_first_100 import mapped_span, xbe_sections
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
    if hashlib.sha256(data).hexdigest().upper() != XBE_SHA:
        raise ValueError('Wrong original XBE')
    sections = xbe_sections(data)
    decoder = Cs(CS_ARCH_X86,CS_MODE_32)
    decoded = {}
    for case in cases:
        for record in [case,*case['dependencies']]:
            digest = hashlib.sha256(); instructions = {}
            for span in record['body_ranges']:
                start = int(span['start'],16)
                if int(span['end_inclusive'],16)-start+1 != span['length']:
                    raise ValueError('Body range mismatch')
                raw = mapped_span(data,sections,start,span['length']); digest.update(raw)
                ins = list(decoder.disasm(raw,start))
                if sum(i.size for i in ins) != len(raw): raise ValueError('Incomplete decoding')
                for i in ins:
                    if i.mnemonic.startswith('f') or re.search(r'\b[xyz]?mm\d\b|\b[fg]s:',i.op_str) or (i.mnemonic in ('call','jmp') and i.bytes[0] not in (0xe8,0xe9,0xeb)):
                        raise ValueError('Complex instruction escaped quarantine')
                    if i.mnemonic in ('sub','add','and','mov','lea') and i.op_str.startswith('esp,') and re.search(r'\b(?:eax|ecx|edx|ebx|esi|edi)\b',i.op_str.split(',',1)[1]):
                        raise ValueError('Dynamic guest stack contract escaped quarantine')
                    instructions[i.address] = i
            if digest.hexdigest().upper() != record['body_sha256']:
                raise ValueError('Complete original body SHA differs')
            decoded[record['entry']] = instructions
    for case in cases:
        instructions = decoded[case['entry']]
        for edit in case['edits']:
            for site in edit['instructions']:
                ins = instructions[int(site['site'],16)]
                if bytes(ins.bytes).hex() != site['bytes'] or ins.op_str != site['operands']:
                    raise ValueError('Store boundary/operands differ')
        for dep in case['dependencies']:
            for site in dep['call_sites']:
                ins = instructions[int(site['site'],16)]
                if bytes(ins.bytes).hex()!=site['bytes'] or ins.bytes[0]!=0xe8 or int(ins.op_str,16)!=int(dep['entry'],16):
                    raise ValueError('Original direct CALL differs')
        overlay = (overlays or {}).get(case['entry'])
        if overlay is not None:
            ins = instructions.get(int(overlay['site'], 16))
            if ins is None or bytes(ins.bytes).hex() != overlay['bytes']:
                raise ValueError('Independently reviewed byte/word operand differs')
    print(f'PASS pinned XBE; {len(decoded)} complete original bodies and all recorded store/CALL boundaries')


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--xbe',type=Path);p.add_argument('--tooldeps',type=Path);a=p.parse_args()
    if a.tooldeps: sys.path.insert(0,str(a.tooldeps))
    compiler=shutil.which('clang++')
    if not compiler:p.error('clang++ is required')
    overlay_doc = json.loads((ROOT/OVERLAY_MANIFEST).read_text(encoding='utf-8'))
    if (overlay_doc['original_xbe_sha256'] != XBE_SHA
            or len(overlay_doc['overlays']) != 12
            or len({c['entry'] for c in overlay_doc['overlays']}) != 12):
        raise ValueError('Independent 12-case overlay manifest identity differs')
    overlays = {c['entry']:c for c in overlay_doc['overlays']}
    verify(ROOT,json.loads((ROOT/MANIFEST).read_text(encoding='utf-8')),compiler,a.xbe.read_bytes() if a.xbe else None,overlays=overlays)


if __name__=='__main__':main()
