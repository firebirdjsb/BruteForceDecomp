#!/usr/bin/env python3
"""Five bounded DWORD repairs and a native primitive oracle, not game QA."""
import argparse
import csv
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile

from body_hash_labels import read_body_digest
from source_layout import source_path
from verify_cpp_literal_declaration_batch import compile_text

ROOT = Path(__file__).resolve().parents[1]
SHA = 'B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721'


def digest(text):
    return hashlib.sha256(text.encode()).hexdigest()


def verify(root, manifest, compiler, image=None):
    cases = manifest['cases']
    if len(cases)!=5 or len({c['entry'] for c in cases})!=5 or manifest['original_xbe_sha256']!=SHA:
        raise ValueError('Original identity/count changed')
    header=(root/manifest['header']).read_text(encoding='utf-8')
    if digest(header)!=manifest['header_sha256']:
        raise ValueError('Reviewed primitive implementation changed')
    inventory={r['entry']:r for r in csv.DictReader((root/'metadata/bulk_13694_inventory.csv').open(encoding='utf-8'))}
    for case in cases:
        path=source_path(root,case['entry']);text=path.read_text(encoding='utf-8')
        if path.relative_to(root).as_posix()!=case['source'] or digest(text)!=case['result_source_sha256']:
            raise ValueError('Reviewed source changed')
        if text.count(case['added_block'])!=1:raise ValueError('Missing scope/header block')
        before=text.replace(case['added_block'],'',1)
        for edit in case['edits']:
            if before.count(edit['after'])!=edit['count']:raise ValueError('View count changed')
            before=before.replace(edit['after'],edit['before'])
        raw=before.encode();blob=hashlib.sha1(b'blob '+str(len(raw)).encode()+b'\0'+raw).hexdigest()
        if digest(before)!=case['source_sha256'] or blob!=case['source_git_blob']:
            raise ValueError('Source changed outside bounded edit')
        if read_body_digest(text)!=(case['body_sha256'],False):raise ValueError('Body provenance changed')
        row=inventory[case['entry']]
        if row['original_body_sha256']!=case['body_sha256'] or row['c_sha256']!=digest(text):
            raise ValueError('Inventory/source mismatch')
        for opt in ('-O0','-O2'):
            old,_,_,_=compile_text(compiler,root,before,opt)
            result,errors,_,_=compile_text(compiler,root,text,opt)
            if not old or result:raise ValueError('Syntax/preimage negative failed: '+case['entry']+str(errors))
    with tempfile.TemporaryDirectory(prefix='bf_dword_oracle_') as tmp:
        for opt in ('-O0','-O2'):
            exe=Path(tmp)/('oracle.exe' if sys.platform=='win32' else 'oracle')
            command=[compiler,'-std=c++17',opt,'-fstrict-aliasing','-I',str(root/'include'),
                     str(root/'tests/cpp_dword_operations_oracle.cpp'),'-o',str(exe)]
            built=subprocess.run(command,capture_output=True,text=True,timeout=60)
            if built.returncode:raise ValueError(built.stderr)
            tested=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60)
            if tested.returncode:raise ValueError('Native flag/view oracle failed: '+str(tested.returncode))
        for expression in ('CARRY4(1.0f,1u)','SBORROW4((int*)0,1u)','CARRY4(UINT64_C(1),1u)','CARRY4(std::uint8_t(1),1u)'):
            test='#include "bf_x86_dword_operations.h"\nint main(){return '+expression+';}\n'
            result,_,_,_=compile_text(compiler,root,test,'-O0')
            if not result:raise ValueError('Unevidenced operand type was accepted')
    print('PASS five complete C++17 syntax repairs; preimage/type negatives; native x86 CF/OF oracle 262225 pairs at O0/O2; DWORD pointer/byte/sentinel checks')
    if image is not None:
        from audit_xbe_first_100 import mapped_span,xbe_sections
        from capstone import Cs,CS_ARCH_X86,CS_MODE_32
        if hashlib.sha256(image).hexdigest().upper()!=SHA:raise ValueError('Wrong original XBE')
        sections=xbe_sections(image);decoder=Cs(CS_ARCH_X86,CS_MODE_32)
        for case in cases:
            body=hashlib.sha256();decoded={}
            for span in case['body_ranges']:
                start=int(span['start'],16)
                if int(span['end_inclusive'],16)-start+1!=span['length']:raise ValueError('Body range differs')
                raw=mapped_span(image,sections,start,span['length']);body.update(raw)
                ins=list(decoder.disasm(raw,start))
                if sum(i.size for i in ins)!=len(raw):raise ValueError('Incomplete original decoding')
                decoded.update({i.address:i for i in ins})
            if body.hexdigest().upper()!=case['body_sha256']:raise ValueError('Body digest differs')
            for window in case['instruction_windows']:
                ins=decoded[int(window['site'],16)]
                if bytes(ins.bytes).hex()!=window['bytes'] or ins.op_str!=window['operands']:
                    raise ValueError('Original instruction window differs')
        print('PASS pinned XBE: five complete bodies and original DWORD view/ADD/ADC/CMP windows')
    else:print('Private XBE absent: original instruction authenticity not rechecked')
    print('Primitive behavior only; no original whole-function ABI, overflow policy, guest mapping or game execution claim')


if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--xbe',type=Path);p.add_argument('--tooldeps',type=Path);a=p.parse_args()
    if a.tooldeps:sys.path.insert(0,str(a.tooldeps))
    compiler=shutil.which('clang++')
    if not compiler:p.error('clang++ is required')
    manifest=json.loads((ROOT/'metadata/cpp_20261101_dword_operations.json').read_text(encoding='utf-8'))
    verify(ROOT,manifest,compiler,a.xbe.read_bytes() if a.xbe else None)
