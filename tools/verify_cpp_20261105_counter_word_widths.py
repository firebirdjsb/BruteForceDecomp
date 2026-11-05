#!/usr/bin/env python3
"""Seven unresolved counter WORD externs. Data-only evidence, never game execution."""
from __future__ import annotations
import argparse,csv,hashlib,json,re,sys
from pathlib import Path
from body_hash_labels import read_body_digest
from source_layout import source_path

ROOT=Path(__file__).resolve().parents[1]
NAME='metadata/cpp_20261105_counter_word_widths.json'
MANIFEST_SHA='f21931924ea7c42ccde29b00284942e8321f84fc3ad3da0d8f71e641b120ba69'
CONTRACT_SHA='64915d719ff8dc5e6b436565d058867ee9861b8dd2d76d38ac081eab17ff1f57'
WORD_ACCESS=((0x37fb5e,'store_cx',0x4a8fe2),(0x37fb65,'store_ax',0x4a8fe6),
             (0x385141,'inc',0x4a8fe6),(0x38514d,'inc',0x4a8fe2),
             (0x38527c,'inc',0x4a8fe2),
             (0x385d4a,'cmp_ax',0x4a8fe2),(0x385d57,'sub_ax',0x4a8fe2),
             (0x385d69,'cmp_ax',0x4a8fe6),(0x385d76,'sub_ax',0x4a8fe6))
WORD_PREFIX={'store_cx':b'\x66\x89\x0d','store_ax':b'\x66\xa3','inc':b'\x66\xff\x05',
             'cmp_ax':b'\x66\x39\x05','sub_ax':b'\x66\x29\x05'}
TAIL_EXITS=((0x38513c,0x3860ee),(0x385148,0x386141),(0x385154,0x38618e))
CI_STEP='      - name: Verify two WORD counter operands (quarantined flows and ABI remain unresolved)\n        run: python3 tools/test_cpp_20261105_counter_word_widths.py\n'

def need(ok,message):
    if not ok:raise ValueError(message)
def sha(raw):return hashlib.sha256(raw).hexdigest()
def canonical_sha(value):return sha(json.dumps(value,sort_keys=True,separators=(',',':')).encode())
def unique(pairs):
    result={}
    for key,value in pairs:
        need(key not in result,'duplicate JSON key');result[key]=value
    return result
def strict_json(raw):
    return json.loads(raw,object_pairs_hook=unique,parse_constant=lambda _:(_ for _ in ()).throw(ValueError('nonfinite JSON')))
def hex_bytes(value):
    need(isinstance(value,str) and re.fullmatch(r'(?:[0-9a-f]{2})+',value),'invalid hex bytes')
    return bytes.fromhex(value)
def validate_word(window,expected):
    site,operation,address=expected
    need(window=={'address':f'{site:08x}','bytes':(WORD_PREFIX[operation]+address.to_bytes(4,'little')).hex()},
         'counter WORD operation/width/address differs')
def validate_drain(windows,entry,address):
    base=int(entry,16);displacement=address.to_bytes(4,'little').hex()
    encoded=['668b442404','663905'+displacement,'7304','33c0','eb0a','662905'+displacement,'33c0','40','c20400']
    expected=[];at=base
    for raw in encoded:expected.append({'address':f'{at:08x}','bytes':raw});at+=len(raw)//2
    need(windows==expected,'stack WORD, unsigned JAE, subtraction, full EAX result or RET4 differs')
def validate_contract(doc):
    need(canonical_sha(doc)==CONTRACT_SHA,'immutable counter contract differs')
    need([c['entry'] for c in doc['cases']]==['0x0037f9a9','0x00385128','0x0038524e','0x00385d45','0x00385d64'],'case set differs')
    need(sum(len(c['edits']) for c in doc['cases'])==7,'seven extern edits required')
    for key in ['original_xbe_reauthenticated','canonical_functions_executed','original_machine_code_executed','global_definitions_added','global_mapping_recovered','object_layout_or_aliases_recovered','abi_recovered','quarantined_index_rows_promoted']:
        need(doc[key] is False,'unresolved boundary changed')
    windows={int(w['address'],16):w for c in doc['cases'] for w in c['instruction_windows']}
    for expected in WORD_ACCESS:validate_word(windows[expected[0]],expected)
    for case,address in zip(doc['cases'][-2:],(0x4a8fe2,0x4a8fe6)):validate_drain(case['instruction_windows'],case['entry'],address)
    for site,target in TAIL_EXITS:
        need(windows[site]['bytes']==(b'\xe9'+(target-site-5).to_bytes(4,'little',signed=True)).hex(),'raw tail JMP differs')
def load_bytes(raw):
    need(len(raw)<=1024*1024 and sha(raw)==MANIFEST_SHA,'manifest bytes differ');doc=strict_json(raw);validate_contract(doc);return doc
def load_manifest(root=ROOT):return load_bytes((Path(root)/NAME).read_bytes())
def apply(case,old):
    need(isinstance(old,bytes) and sha(old)==case['source_before_sha256'],'raw counter preimage differs');new=old
    for edit in case['edits']:
        before,after=edit['before'].encode(),edit['after'].encode()
        need(new.count(before)==1 and after not in new,'unique extern substitution differs');new=new.replace(before,after,1)
    need(sha(new)==case['source_after_sha256'],'raw counter postimage differs');return new
def restore(case,new):
    need(isinstance(new,bytes) and sha(new)==case['source_after_sha256'],'raw repaired counter source differs');old=new
    for edit in reversed(case['edits']):
        before,after=edit['before'].encode(),edit['after'].encode()
        need(old.count(after)==1 and before not in old,'unique counter reversal differs');old=old.replace(after,before,1)
    need(sha(old)==case['source_before_sha256'],'counter preimage SHA differs')
    need(hashlib.sha1(b'blob '+str(len(old)).encode()+b'\0'+old).hexdigest()==case['preimage_git_blob'],'raw Git preimage differs')
    need(apply(case,old)==new,'roundtrip differs');return old
def region_labels(root):
    labels=[]
    for path in (Path(root)/'src').rglob('*.cpp'):
        text=path.read_text()
        for address in ('004a8fe0','004a8fe2','004a8fe4','004a8fe6'):
            symbol='DAT_'+address
            if symbol in text:
                lines=[line for line in text.splitlines() if line.startswith('extern ') and symbol in line]
                need(len(lines)==1,'region declaration missing/ambiguous')
                labels.append({'source':path.relative_to(root).as_posix(),'symbol':symbol,'declaration':lines[0],'occurrences':text.count(symbol)})
    return sorted(labels,key=lambda r:(r['source'],r['symbol']))
def verify_source(root,doc):
    root=Path(root)
    workflow=(root/'.github/workflows/cpp-compatibility-audit.yml').read_bytes()
    need(workflow.count(CI_STEP.encode())==1 and workflow.count(b'        run: python3 tools/test_cpp_20261105_word_limit_widths.py\n')==1,'counter/predecessor CI invocation absent or duplicated')
    for pin in doc['dependency_pins']:need(sha((root/pin['path']).read_bytes())==pin['sha256'],'dependency drift: '+pin['path'])
    need(region_labels(root)==doc['region_labels'],'counter-region declarations/reference footprint differs')
    with (root/'metadata/bulk_13694_inventory.csv').open(newline='') as stream:inventory={r['entry']:r for r in csv.DictReader(stream)}
    for case in doc['cases']:
        path=source_path(root,case['entry']);need(path.relative_to(root).as_posix()==case['source'],'source route differs')
        raw=path.read_bytes();restore(case,raw);digest,conflict=read_body_digest(raw.decode())
        need(not conflict and digest==case['original_body_sha256']==inventory[case['entry']]['original_body_sha256'],'original body identity differs')
        need(('Entry: '+case['entry']).encode() in raw and ('label: '+case['label']).encode() in raw and b'ABI_UNVERIFIED' in raw,'entry/name/status differs')
def validate_index_row(row,case):
    need(canonical_sha(row)==case['private_index_row_sha256'],'private index pin differs')
    need(row['canonical_hash_match'] is True and row['uncovered_body_byte_count']==0,'private body hash/coverage differs')
    need(row['issues']==case['private_index_issues'] and row['byte_and_instruction_validation_pass'] is case['private_index_validation_pass'],'quarantine state changed')
    need(row['canonical_body_sha256']==row['program_memory_body_sha256']==case['original_body_sha256'],'index body identity differs')
    offset,size=row['jsonl_byte_offset'],row['jsonl_byte_length']
    need(type(offset) is int and type(size) is int and 0<=offset<512*1024*1024 and 0<size<=1024*1024,'private bounds differ')
def read_records(folder,doc):
    with (Path(folder)/'validation.json').open('rb') as stream:raw=stream.read(32*1024*1024+1)
    need(len(raw)<=32*1024*1024,'oversized private index');rows=strict_json(raw)['functions']
    need(len(rows)==len({r['entry'] for r in rows})==13694,'private index set differs');index={r['entry']:r for r in rows};records={}
    with (Path(folder)/'functions.jsonl').open('rb') as stream:
        for case in doc['cases']:
            row=index[case['entry'][2:]];validate_index_row(row,case);stream.seek(row['jsonl_byte_offset']);raw=stream.read(row['jsonl_byte_length'])
            need(len(raw)==row['jsonl_byte_length'],'truncated private record');records[case['entry']]=strict_json(raw)
    return records
def validate_record(record,case,decoder):
    from capstone import CS_GRP_CALL,CS_GRP_JUMP,CS_GRP_RET
    from capstone.x86 import X86_OP_IMM,X86_OP_MEM
    need(record['entry']==case['entry'][2:] and record['name']==case['label'] and record['is_thunk'] is False,'record identity differs')
    need(len(record['body_ranges'])==len(case['body_ranges'])==1,'body range count differs');span=record['body_ranges'][0]
    need({k:span[k] for k in ('start','end_inclusive','length')}==case['body_ranges'][0],'body range differs');raw=hex_bytes(span['bytes_hex']);start=int(span['start'],16)
    need(len(raw)==span['length']==record['body_byte_count']==case['body_byte_count'] and start+len(raw)-1==int(span['end_inclusive'],16),'body extent differs')
    need(sha(raw).upper()==record['program_memory_body_sha256']==case['original_body_sha256'],'body hash differs')
    instructions=record['instructions'];need(len(instructions)==record['instruction_count']==case['instruction_count'],'instruction count differs');offset=0
    overrides={int(o['address'],16):o for o in case['quarantined_flow_overrides']}
    for ins in instructions:
        encoded=hex_bytes(ins['bytes_hex']);site=int(ins['address'],16)
        need(site==start+offset and len(encoded)==ins['length']==ins['parsed_length'] and encoded==raw[offset:offset+len(encoded)],'instruction coverage differs')
        need(ins['is_length_overridden'] is False and ins['is_fallthrough_overridden'] is False,'length/fallthrough override')
        need(ins['flow_override']==(overrides[site]['override'] if site in overrides else 'NONE'),'unlisted or changed analyzed flow override');offset+=len(encoded)
    need(offset==len(raw),'uncovered bytes');decoded=list(decoder.disasm(raw,start));boundaries={i.address for i in decoded}
    need([(i.address,i.bytes.hex()) for i in decoded]==[(int(i['address'],16),i['bytes_hex']) for i in instructions],'independent full-body boundaries differ')
    indirect={int(i['address'],16):i for i in case['indirect_import_operands']}
    for ins,listed in zip(decoded,instructions):
        flows=[];fall=f'{ins.address+ins.size:08x}';kind='FALL_THROUGH'
        if ins.group(CS_GRP_CALL):
            if ins.operands[0].type==X86_OP_IMM:kind='UNCONDITIONAL_CALL';flows=[f'{ins.operands[0].imm:08x}']
            else:
                need(ins.address in indirect and ins.bytes.hex()==indirect[ins.address]['bytes'],'unlisted indirect operand')
                kind='COMPUTED_CALL';flows=indirect[ins.address]['analyzed_flows'] # analyzed only, not byte-proven target
        elif ins.group(CS_GRP_JUMP):
            need(ins.operands[0].type==X86_OP_IMM,'unresolved computed jump');target=ins.operands[0].imm;flows=[f'{target:08x}']
            kind='UNCONDITIONAL_JUMP' if ins.mnemonic=='jmp' else 'CONDITIONAL_JUMP'
            if ins.mnemonic=='jmp':fall=None
            if ins.address in overrides:
                pin=overrides[ins.address]
                need(ins.mnemonic=='jmp' and ins.bytes.hex()==pin['bytes'] and flows==[pin['target']] and target not in boundaries,'quarantined tail exit differs')
                kind=pin['analyzed_flow_type'] # Original bytes remain JMP, never a recovered call ABI.
            else:need(target in boundaries,'unlisted exit from selected body')
        elif ins.group(CS_GRP_RET):
            need(ins.bytes.hex()==('c20400' if case['entry'] in ('0x00385d45','0x00385d64') else 'c3'),'return cleanup differs');kind='TERMINATOR';fall=None
        if fall is not None:need(int(fall,16) in boundaries,'fallthrough leaves body')
        need(listed['flows']==flows and listed['fallthrough']==fall and listed['flow_type']==kind,'raw flow/analyzed annotation differs')
    by_address={i.address:i for i in decoded}
    for window in case['instruction_windows']:need(by_address[int(window['address'],16)].bytes.hex()==window['bytes'],'public window not in complete body')
    for site,operation,address in WORD_ACCESS:
        if site not in by_address:continue
        ins=by_address[site];mem=[o for o in ins.operands if o.type==X86_OP_MEM]
        need(len(mem)==1 and mem[0].size==2 and mem[0].mem.disp==address and mem[0].mem.base==mem[0].mem.index==0,'decoded absolute WORD operand differs')
    need(canonical_sha(record)==case['private_record_canonical_sha256'],'other record fields differ')
def main():
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--root',type=Path,default=ROOT);parser.add_argument('--private-export',type=Path);parser.add_argument('--tooldeps',type=Path);args=parser.parse_args()
    if args.tooldeps:sys.path.insert(0,str(args.tooldeps))
    doc=load_manifest(args.root);verify_source(args.root,doc);print('PASS seven raw-byte reversible counter WORD declarations; no source expressions changed')
    if args.private_export:
        from capstone import Cs,CS_ARCH_X86,CS_MODE_32
        decoder=Cs(CS_ARCH_X86,CS_MODE_32);decoder.detail=True;records=read_records(args.private_export,doc)
        for case in doc['cases']:validate_record(records[case['entry']],case,decoder)
        print('PASS 737 bytes / 239 independent boundaries; three raw JMP annotations remain quarantined')
    print('No definitions, alias/layout/mapping proof, native or guest ABI, original execution or whole-function equivalence')
if __name__=='__main__':main()
