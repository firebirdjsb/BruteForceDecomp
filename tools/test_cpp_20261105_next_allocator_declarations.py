#!/usr/bin/env python3
"""Exact declaration-only syntax gate; canonical callers never execute.

Optional private JSON replay checks complete stored bodies, not a fresh XBE.
"""
from __future__ import annotations
import argparse
import copy
import hashlib
import json
from pathlib import Path
import re
import subprocess
import sys
import tempfile

NAME = 'metadata/cpp_20261105_next_allocator_declarations.json'
MANIFEST_SHA = 'e1bf2fc52207ef775625e7de724de2704c4d21c8e6c0a2e55ef570dc0ac54d1e'
CONTRACT_SHA = '9d2905afa4a5ed80e235508f67eb531a17a746112c51f82aeb6003a56e9843ee'
ANCHOR = '#include "bf_ghidra_types.h"\n'

def require(ok, message):
    if not ok:
        raise ValueError(message)

def sha(raw):
    return hashlib.sha256(raw).hexdigest()

def contract(doc):
    require(sha(json.dumps(doc, sort_keys=True, separators=(',', ':')).encode()) == CONTRACT_SHA,
            'immutable evidence contract changed')
    require(not doc['original_xbe_reauthenticated'] and not doc['original_game_functions_executed'],
            'unsupported proof claim')
    require([x['entry'] for x in doc['cases']] == ['0x00235c00', '0x00243e90'], 'caller set drift')

def leaves(value, path=()):
    if isinstance(value, dict):
        for k, v in value.items():
            yield from leaves(v, path+(k,))
    elif isinstance(value, list):
        for k, v in enumerate(value):
            yield from leaves(v, path+(k,))
    else:
        yield path, value

def put(obj, path, value):
    for key in path[:-1]:
        obj=obj[key]
    obj[path[-1]]=value

def run_compile(compiler, root, path, opt, obj=None):
    command=[compiler,'-std=c++17','-pedantic-errors',opt,'-I',str(root/'include')]
    command += ['-fsyntax-only',str(path)] if obj is None else ['-c',str(path),'-o',str(obj)]
    return subprocess.run(command,capture_output=True,text=True)

def main(args):
    root=args.root.resolve(); overlay=(args.overlay or root).resolve()
    sys.path.insert(0,str(root/'tools'))
    from source_layout import relative_source_path
    from verify_cpp_20261105_allocator_declarations import strict_json, selected_records, validate_record
    raw=(overlay/NAME).read_bytes(); require(sha(raw)==MANIFEST_SHA,'manifest file drift')
    doc=strict_json(raw); contract(doc)
    for h in doc['headers']:
        require(sha((root/h['path']).read_bytes())==h['sha256'],'shared header drift')
    for d in doc['dependencies']:
        require(str(relative_source_path(root,d['entry']))==d['source'],'callee route drift')
        source=(root/d['source']).read_text()
        require(sha(source.encode())==d['source_sha256'],'callee source drift')
        require(re.search(re.escape(d['definition_signature'])+r'\s*\{',source),'exact callee definition absent')
    metadata_rejections=0
    for path,value in leaves(doc):
        mutant=copy.deepcopy(doc)
        put(mutant,path,not value if isinstance(value,bool) else value+1 if isinstance(value,int) else value+'x')
        try: contract(mutant)
        except ValueError: metadata_rejections+=1
        else: raise ValueError('accepted mutated metadata')
    byte_rejections=0
    for section in ['cases','dependencies']:
        for ix,item in enumerate(doc[section]):
            for name,window in item['instruction_windows'].items():
                raw=bytes.fromhex(window['bytes'])
                for n in range(len(raw)):
                    changed=bytearray(raw);changed[n]^=1
                    mutant=copy.deepcopy(doc);mutant[section][ix]['instruction_windows'][name]['bytes']=changed.hex()
                    try: contract(mutant)
                    except ValueError: byte_rejections+=1
                    else: raise ValueError('accepted mutated window')
    builds=negative_builds=scalar_runs=0
    with tempfile.TemporaryDirectory(prefix='bf-next-declarations-') as directory:
        work=Path(directory)
        for case in doc['cases']:
            require(str(relative_source_path(root,case['entry']))==case['source'],'caller route drift')
            source=(overlay/case['source']).read_text();block=case['added_block']
            require(source.count(block)==1 and sha(source.encode())==case['source_after_sha256'],'candidate source drift')
            old=source.replace(block,'',1);encoded=old.encode()
            require(sha(encoded)==case['source_before_sha256'],'source reversal SHA mismatch')
            require(hashlib.sha1(b'blob '+str(len(encoded)).encode()+b'\0'+encoded).hexdigest()==case['preimage_git_blob'],'source reversal blob mismatch')
            require(old.replace(ANCHOR,ANCHOR+block,1)==source,'not exactly additive')
            require(case['original_body_sha256'] in source,'body identity missing')
            candidate=work/(case['entry']+'.cpp');candidate.write_text(source)
            for opt in ['-O0','-O2']:
                for obj in [None,work/(case['entry']+opt+'.o')]:
                    result=run_compile(args.compiler,root,candidate,opt,obj)
                    require(result.returncode==0,result.stderr);builds+=1
            variants=[old]
            for line in block.splitlines(keepends=True):
                if line.startswith('#include') or line.startswith('extern'):
                    variants.append(source.replace(line,'',1))
            for n,variant in enumerate(variants):
                path=work/(case['entry']+f'-negative-{n}.cpp');path.write_text(variant)
                require(run_compile(args.compiler,root,path,'-O0').returncode!=0,'declaration-removal negative unexpectedly passed')
                negative_builds+=1
        # Only authored initialized scalars execute. No pointer conversion,
        # guest dereference, canonical caller, original bytes, or private code.
        scalar='''#include <cstdint>
#include <cstdlib>
#include "bf_002ea01d_allocator_guest32.h"
static std::uint32_t input_bits=0, observed=0, calls=0;
std::uint32_t FUN_002ea01d(std::uint32_t size) { observed=size; ++calls; return input_bits; }
int main() {
  std::uint32_t bits=0x13579bdfu;
  for (unsigned n=0;n<100008;++n) {
    const std::uint32_t edges[]={0u,1u,0x7fffffffu,0x80000000u,0xffffffffu,0xfffffffeu,0x12345678u,0x87654321u};
    bits=1664525u*bits+1013904223u; input_bits=n<8?edges[n]:bits;
    int iVar1=0;
    iVar1 = FUN_002ea01d(0x30);
    if (observed!=0x30u || static_cast<std::uint32_t>(iVar1)!=input_bits || calls!=n*2+1) return 1;
    const std::uint32_t result=FUN_002ea01d(0x68);
    if (observed!=0x68u || result!=input_bits || calls!=n*2+2) return 2;
  }
}
'''
        p=work/'initialized_scalar.cpp';p.write_text(scalar)
        for opt in ['-O0','-O2']:
            exe=work/('scalar'+opt)
            result=subprocess.run([args.compiler,'-std=c++17','-pedantic-errors',opt,'-I',str(root/'include'),str(p),'-o',str(exe)],capture_output=True,text=True)
            require(result.returncode==0,result.stderr)
            require(subprocess.run([str(exe)]).returncode==0,'initialized scalar fixture failed');scalar_runs+=1
            for tag,bad in [('wrong_size',scalar.replace('FUN_002ea01d(0x30);','FUN_002ea01d(0x31);')),
                            ('wrong_return',scalar.replace('return input_bits; }','return input_bits ^ 0x80000000u; }'))]:
                p.write_text(bad)
                result=subprocess.run([args.compiler,'-std=c++17','-pedantic-errors',opt,'-I',str(root/'include'),str(p),'-o',str(exe)],capture_output=True,text=True)
                require(result.returncode==0,result.stderr)
                require(subprocess.run([str(exe)]).returncode!=0,'scalar negative passed')
            p.write_text(scalar)
    report={'candidate_builds':builds,'declaration_negative_builds':negative_builds,'metadata_leaf_mutations_rejected':metadata_rejections,
            'window_byte_mutations_rejected':byte_rejections,'initialized_scalar_runs':scalar_runs,'scalar_observations_per_optimization':200016,
            'scalar_negative_runs':4,'original_game_functions_executed':False,'original_xbe_reauthenticated':False}
    if args.functions:
        import capstone
        decoder=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_32);decoder.detail=True
        items=doc['cases']+doc['dependencies'];records=selected_records(args.functions,{x['entry'] for x in items})
        counts={};rejections=0
        for item in items:
            rec=records[item['entry']];counts[item['entry']]=validate_record(rec,item,decoder)
            raw=bytes.fromhex(rec['body_ranges'][0]['bytes_hex']);ds=list(decoder.disasm(raw,int(rec['entry'],16)));addresses={i.address for i in ds}
            require(all(i.address+i.size in addresses for i in ds if i.mnemonic=='call'),'missing real call continuation')
            changes=[(('entry',),'ffffffff'),(('body_byte_count',),rec['body_byte_count']+1),
                     (('instruction_count',),rec['instruction_count']+1),(('program_memory_body_sha256',),'0'*64),
                     (('body_ranges',0,'start'),'ffffffff'),(('body_ranges',0,'end_inclusive'),rec['entry']),
                     (('body_ranges',0,'length'),rec['body_byte_count']+1),
                     (('instructions',0,'address'),'ffffffff'),(('instructions',0,'flow_override'),'CALL_RETURN'),
                     (('instructions',0,'is_length_overridden'),True),(('instructions',0,'is_fallthrough_overridden'),True),
                     (('instructions',0,'parsed_length'),rec['instructions'][0]['length']+1)]
            for path in [('body_ranges',0,'bytes_hex'),('instructions',0,'bytes_hex')]:
                node=rec
                for key in path: node=node[key]
                bad=bytearray.fromhex(node);bad[0]^=1;changes.append((path,bad.hex()))
            for path,value in changes:
                mutant=copy.deepcopy(rec);put(mutant,path,value)
                try: validate_record(mutant,item,decoder)
                except ValueError: rejections+=1
                else: raise ValueError('private mutation accepted')
        report.update(complete_bodies=len(counts),instruction_counts=counts,private_mutations_rejected=rejections,decoder='Capstone '+capstone.__version__)
    print(json.dumps(report,sort_keys=True))

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument('--overlay',type=Path)
    p.add_argument('--compiler',default='clang++')
    p.add_argument('--functions',type=Path)
    main(p.parse_args())
