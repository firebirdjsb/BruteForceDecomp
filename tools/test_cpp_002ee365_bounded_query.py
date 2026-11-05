#!/usr/bin/env python3
"""Exact reversible 002ee365 query repair and bounded-native/model gate.
Original bytes are decode-only data. Only a renamed, initialized host test seam
executes. No native mixed-width overlap, guest ABI, or Xbox 1:1 claim is made.
"""
from __future__ import annotations
import argparse,copy,hashlib,json,os,re,shutil,subprocess,tempfile
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
ENTRY='0x002ee365'
SOURCE='src/main_unclassified/band_002e/0x002ee365.cpp'
PREIMAGE='tests/fixtures/002ee365_before.cpp.txt'
FIXTURE='tests/fixtures/002ee365_native_model.cpp'
MANIFEST='metadata/cpp_002ee365_bounded_query.json'
MANIFEST_SHA='b8a70d4e6a9318c63682c731775374af04ea2e20bd73f1cdfb981ea3f2d344ae'
FIXTURE_SHA='22b76beca4461da7ee054828a518a37130f09ea4250f1e0dd78694019708f3c0'
BEFORE_SHA='f164bc530a4c6d5761ec423e9cc9a49972bf5a8db1c11a638a763a4363e2a083'
AFTER_SHA='00a7c7fdb3ea315b6e90bc9e72787198287e58bf480c477e38a6a793b9dc3993'
GIT_BLOB='01cd5204e548812fd24b5ea4093afc0c68fad307'
BODY_SHA='10A53C6D2C7A4B1EB2BF0213EC7CBEF4B63BAC4D7D97799377DCCDE1906854B8'
PRIVATE_SHA='c0339c6c07efb8f80393d3969df964ec2ca5357062afda5e541816d6867be1db'
XBE_SHA='B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721'
BASELINE='03217aaba3f880229e72769a88b013e1286729cc'
SIGNATURE='uint FUN_002ee365(ushort *param_1,char *param_2,uint param_3)'
BEFORE='    uVar3 = (int)param_2 - (int)pcVar1;'
AFTER='''    // Bounded native query only: first zero at L <= min(UINT32_MAX,PTRDIFF_MAX),
    // in one live char array, with the final one-past advance valid. The copy
    // branch is unchanged. Guest32 mapping/wrap and ABI remain unverified.
    uVar3 = static_cast<uint>(param_2 - pcVar1);'''
PARTS='55 8bec 8b5508 33c0 85d2 56 7422 394510 742c 762a 8b4d0c 03c8 660fb631 668932 803900 7419 40 42 42 3b4510 72e7 eb0f 8b450c 8d5001 8a08 40 84c9 75f9 2bc2 5e 5d c3'.split()
RAW=bytes.fromhex(''.join(PARTS))
# Independent GNU i386 opcode/operand schedule for all 32 instructions.
DECODE=[('push','%ebp'),('mov','%esp,%ebp'),('mov','0x8(%ebp),%edx'),('xor','%eax,%eax'),('test','%edx,%edx'),('push','%esi'),('je','0x2ee394'),('cmp','%eax,0x10(%ebp)'),('je','0x2ee3a3'),('jbe','0x2ee3a3'),('mov','0xc(%ebp),%ecx'),('add','%eax,%ecx'),('movzbw','(%ecx),%si'),('mov','%si,(%edx)'),('cmpb','$0x0,(%ecx)'),('je','0x2ee3a3'),('inc','%eax'),('inc','%edx'),('inc','%edx'),('cmp','0x10(%ebp),%eax'),('jb','0x2ee379'),('jmp','0x2ee3a3'),('mov','0xc(%ebp),%eax'),('lea','0x1(%eax),%edx'),('mov','(%eax),%cl'),('inc','%eax'),('test','%cl,%cl'),('jne','0x2ee39a'),('sub','%edx,%eax'),('pop','%esi'),('pop','%ebp'),('ret','')]
EXPECTED_OUTPUT='202441 initialized native cases; 90553 overlap-memory model cases; 100090 DWORD arithmetic model cases passed'
def need(ok,msg):
    if not ok: raise ValueError(msg)
def sha(raw): return hashlib.sha256(raw).hexdigest()
def windows():
    at=int(ENTRY,16);out=[]
    for raw in PARTS:
        out.append({'address':f'0x{at:08x}','bytes':raw});at+=len(bytes.fromhex(raw))
    need(at==0x2ee3a6 and len(RAW)==65 and sha(RAW).upper()==BODY_SHA,'immutable full body')
    addresses={int(w['address'],16) for w in out}; targets=[]
    for w in out:
        raw=bytes.fromhex(w['bytes']);at=int(w['address'],16)
        if raw[0] in (0x72,0x74,0x75,0x76,0xeb):
            target=at+2+int.from_bytes(raw[1:],'little',signed=True)
            need(target in addresses,'branch leaves full body');targets.append(target)
    need(targets==[0x2ee394,0x2ee3a3,0x2ee3a3,0x2ee3a3,0x2ee379,0x2ee3a3,0x2ee39a], 'exact CFG edges')
    need(out[-1]['bytes']=='c3','complete RET')
    return out
def validate_body(ranges,count,ins):
    need(ranges==[{'start':'002ee365','end_inclusive':'002ee3a5','length':65,'bytes_hex':RAW.hex()}], 'complete body range')
    need(count==32 and ins==windows(),'exact all instruction bytes and boundaries')
def validate_manifest(doc):
    need(sha((json.dumps(doc,indent=2)+'\n').encode())==MANIFEST_SHA,'immutable whole manifest')
    need(doc['entry']==ENTRY and doc['source']==SOURCE and doc['preimage_fixture']==PREIMAGE and doc['baseline_commit']==BASELINE,'scope')
    need(doc['original_xbe_sha256']==XBE_SHA and doc['original_body_sha256']==BODY_SHA,'original pins')
    need(doc['source_before_sha256']==BEFORE_SHA and doc['source_after_sha256']==AFTER_SHA and doc['preimage_git_blob']==GIT_BLOB,'source pins')
    need(doc['signature']==SIGNATURE and doc['replacement']=={'before':BEFORE,'after':AFTER,'count':1},'only exact query repair')
    need(doc['original_xbe_reauthenticated'] is False and doc['original_machine_code_executed'] is False and doc['canonical_functions_executed'] is False,'boundaries')
    validate_body(doc['body_ranges'],doc['instruction_count'],doc['instruction_windows'])
def validate_source(before,after):
    need(sha(before)==BEFORE_SHA and sha(after)==AFTER_SHA,'immutable source hashes')
    need(hashlib.sha1(b'blob '+str(len(before)).encode()+b'\0'+before).hexdigest()==GIT_BLOB,'Git preimage')
    old,new=before.decode(),after.decode()
    need(old.count(BEFORE)==new.count(AFTER)==1,'unique source replacement')
    need(old.replace(BEFORE,AFTER)==new and new.replace(AFTER,BEFORE)==old,'exact forward/reverse repair')
    need(old.count(SIGNATURE)==new.count(SIGNATURE)==1,'unchanged signature')
    need(old[old.index('  else if '):]==new[new.index('  else if '):], 'copy branch byte-identical')
    need('Input x86 body SHA-256: '+BODY_SHA in new,'body provenance')
def reject(fn,label):
    try: fn()
    except (ValueError,KeyError,TypeError):return
    raise ValueError('negative control admitted: '+label)
def run(command,env=None):return subprocess.run(command,text=True,capture_output=True,timeout=120,env=env)
def success(command,env=None):
    p=run(command,env);need(p.returncode==0,'failed: '+' '.join(map(str,command))+'\n'+p.stdout+p.stderr);return p

def independent_decode(work):
    binary=work/'002ee365.decode-only.bin';binary.write_bytes(RAW)
    objdump=shutil.which('objdump');need(objdump,'GNU objdump required')
    p=success([objdump,'-D','-b','binary','-m','i386','--adjust-vma='+ENTRY,str(binary)])
    observed=[]
    for line in p.stdout.splitlines():
        m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2}\s+)+)\s*(\S+)\s*(.*?)\s*$',line)
        if m:observed.append((int(m[1],16),''.join(m[2].split()),m[3],m[4].replace(' ','')))
    expected=[(int(w['address'],16),w['bytes'],*d) for w,d in zip(windows(),DECODE)]
    need(observed==expected,'independent full i386 decode')
    print('Independent decode: 65 bytes / 32 instructions and closed CFG passed; original bytes never executed.')
def validate_private(status,record):
    need(status['entry']==record['entry']=='002ee365' and record['name']=='FUN_002ee365' and record['is_thunk'] is False,'private identity')
    need(status['program_memory_body_sha256']==status['canonical_body_sha256']==record['program_memory_body_sha256']==BODY_SHA,'private body pins')
    need(status['body_byte_count']==record['body_byte_count']==65 and status['instruction_count']==record['instruction_count']==32,'private counts')
    need(status['canonical_hash_match'] is True and status['byte_and_instruction_validation_pass'] is True and status['issues']==[] and status['uncovered_body_byte_count']==0 and status['first_uncovered_addresses']==[] and status['prefetch_listing_disagreements']==[],'private clean validation')
    ins=record['instructions'];validate_body(record['body_ranges'],record['instruction_count'],[{'address':'0x'+i['address'],'bytes':i['bytes_hex']} for i in ins])
    for i,w in zip(ins,windows()):
        raw=bytes.fromhex(w['bytes']);at=int(w['address'],16)
        need(i['length']==i['parsed_length']==len(raw),'private instruction lengths')
        need(i['flow_override']=='NONE' and i['is_length_overridden'] is False and i['is_fallthrough_overridden'] is False and i['listing_metadata_is_analyzed_not_byte_proof'] is True,'private no overrides')
        typ,flows,fall='FALL_THROUGH',[],f'{at+len(raw):08x}'
        if raw[0] in (0x72,0x74,0x75,0x76,0xeb):
            flows=[f"{at+2+int.from_bytes(raw[1:],'little',signed=True):08x}"]
            typ='UNCONDITIONAL_JUMP' if raw[0]==0xeb else 'CONDITIONAL_JUMP'
            if raw[0]==0xeb:fall=None
        if raw[0]==0xc3:typ,fall='TERMINATOR',None
        need(i['flow_type']==typ and i['flows']==flows and i['fallthrough']==fall,'private full raw-derived CFG')
def private_replay(folder):
    validation=json.loads((folder/'validation.json').read_text());matches=[s for s in validation['functions'] if s['entry']=='002ee365'];need(len(matches)==1,'unique private record');s=matches[0]
    need((s['jsonl_byte_offset'],s['jsonl_byte_length'])==(256590137,11425),'private indexed range')
    with (folder/'functions.jsonl').open('rb') as f:f.seek(s['jsonl_byte_offset']);raw=f.read(s['jsonl_byte_length'])
    need(sha(raw)==PRIVATE_SHA,'exact selected record bytes');r=json.loads(raw);validate_private(s,r);count=0
    for field,value in [('entry','0'),('program_memory_body_sha256','0'*64),('canonical_body_sha256','0'*64),('body_byte_count',64),('instruction_count',31),('canonical_hash_match',False),('byte_and_instruction_validation_pass',False),('issues',['bad']),('uncovered_body_byte_count',1)]:
        b=copy.deepcopy(s);b[field]=value;reject(lambda:validate_private(b,r),field);count+=1
    for n in range(32):
        for field,value in [('address','00000000'),('bytes_hex','90'),('length',0),('parsed_length',0),('flow_override','CALL_RETURN'),('is_length_overridden',True),('is_fallthrough_overridden',True),('flow_type','BAD'),('flows',['ffffffff']),('fallthrough','ffffffff')]:
            b=copy.deepcopy(r);b['instructions'][n][field]=value;reject(lambda:validate_private(s,b),f'{n}:{field}');count+=1
    print(f'Private selected-record replay passed; {count} corruptions rejected. Whole XBE not reauthenticated.')
def public_negatives(doc,before,after):
    count=0
    for n in range(len(RAW)):
        ranges=copy.deepcopy(doc['body_ranges']);b=bytearray(RAW);b[n]^=1;ranges[0]['bytes_hex']=b.hex();reject(lambda:validate_body(ranges,32,doc['instruction_windows']),f'body byte {n}');count+=1
    for n in range(32):
        w=copy.deepcopy(doc['instruction_windows']);w[n]['address']='0x00000000';reject(lambda:validate_body(doc['body_ranges'],32,w),f'boundary {n}');count+=1
    for field,value in [('entry','0x00000000'),('source_after_sha256','0'*64),('instruction_count',31),('native_copy_test_contract',['arbitrary native overlap allowed']),('original_xbe_reauthenticated',True)]:
        b=copy.deepcopy(doc);b[field]=value;reject(lambda:validate_manifest(b),field);count+=1
    for old,new in [(b'static_cast<uint>(param_2 - pcVar1)',b'static_cast<uint>(param_2 - pcVar1) + 1'),(b'if (param_2[uVar3] == 0)',b'if (*param_1 == 0)'),(b'*param_1 = (ushort)(byte)param_2[uVar3];',b'*param_1 = (ushort)param_2[uVar3];'),(b'uVar3 < param_3',b'uVar3 <= param_3'),(b'uint FUN_002ee365',b'int FUN_002ee365')]:
        need(after.count(old)==1,'mutation point');reject(lambda:validate_source(before,after.replace(old,new)),old.decode());count+=1
    print(f'Public source/body/manifest negative controls: {count} rejected.')
def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--root',type=Path,default=ROOT);p.add_argument('--include-root',type=Path);p.add_argument('--private-export',type=Path);p.add_argument('--sanitize',action='store_true');args=p.parse_args()
    root=args.root.resolve();inc=(args.include_root or root)/'include';compiler=shutil.which('clang++');need(compiler,'clang++ required')
    manifest=(root/MANIFEST).read_bytes();need(sha(manifest)==MANIFEST_SHA,'manifest file pin');doc=json.loads(manifest);validate_manifest(doc)
    before=(root/PREIMAGE).read_bytes();after=(root/SOURCE).read_bytes();validate_source(before,after)
    fixture=(root/FIXTURE).read_bytes();need(sha(fixture)==FIXTURE_SHA,'fixture pin');public_negatives(doc,before,after)
    if args.private_export:private_replay(args.private_export)
    with tempfile.TemporaryDirectory(prefix='bf-002ee365-gate-') as tmp:
        work=Path(tmp);independent_decode(work)
        seam=after.decode().replace('FUN_002ee365','bounded_native_002ee365');need(after.count(b'FUN_002ee365')==2,'source label and definition only')
        (work/'002ee365.test-seam.inc').write_text(seam);(work/'native.cpp').write_bytes(fixture)
        for opt in ('-O0','-O2'):
            cmd=[compiler,'-std=c++17',opt,'-x','c++','-fsyntax-only','-Werror=pointer-to-int-cast','-I',str(inc)]
            old=run(cmd+[str(root/PREIMAGE)]);need(old.returncode!=0 and old.stderr.count('error: cast from pointer to smaller type')==2,'original must fail exactly two pointer truncations')
            success(cmd+[str(root/SOURCE)])
            exe=work/('native'+opt);success([compiler,'-std=c++17',opt,'-Wall','-Wextra','-Werror','-I',str(inc),str(work/'native.cpp'),'-o',str(exe)]);result=success([str(exe)]);need(result.stdout.strip()==EXPECTED_OUTPUT,'coverage output');print(opt+': '+result.stdout.strip())
        # Compiled behavioral negative: a changed query length must fail the independent oracle.
        (work/'002ee365.test-seam.inc').write_text(seam.replace('static_cast<uint>(param_2 - pcVar1);','static_cast<uint>(param_2 - pcVar1) + 1;'))
        exe=work/'mutant';success([compiler,'-std=c++17','-O2','-I',str(inc),str(work/'native.cpp'),'-o',str(exe)]);need(run([str(exe)]).returncode!=0,'behavior mutant must fail');print('Compiled query off-by-one mutant rejected.')
        (work/'002ee365.test-seam.inc').write_text(seam)
        if args.sanitize:
            gcc=shutil.which('g++');need(gcc,'GCC required');exe=work/'native-sanitized'
            success([gcc,'-std=c++17','-O1','-g','-Wall','-Wextra','-Werror','-fsanitize=address,undefined','-fno-omit-frame-pointer','-I',str(inc),str(work/'native.cpp'),'-o',str(exe)])
            env=dict(os.environ,ASAN_OPTIONS='detect_leaks=0');result=success([str(exe)],env);need(result.stdout.strip()==EXPECTED_OUTPUT,'sanitizer coverage');print('GCC ASan/UBSan: '+result.stdout.strip())
    print('Bounded native query spelling passed. Copy overlap, guest mapping/wrap, ABI, runtime and byte-identical rebuild remain unverified.')
if __name__=='__main__':main()
