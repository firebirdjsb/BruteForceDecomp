#!/usr/bin/env python3
"""Counter declaration/operation gates. Authored locals are not game globals."""
from __future__ import annotations
import argparse,copy,json,re,shutil,subprocess,sys,tempfile,unittest
from pathlib import Path
import verify_cpp_20261105_counter_word_widths as evidence

ROOT=Path(__file__).resolve().parents[1]
PRIVATE_EXPORT=None
def leaves(value,path=()):
    if isinstance(value,dict):
        for key,item in value.items():yield from leaves(item,path+(key,))
    elif isinstance(value,list):
        for key,item in enumerate(value):yield from leaves(item,path+(key,))
    else:yield path,value
def altered(value,path,replacement):
    value=copy.deepcopy(value);node=value
    for key in path[:-1]:node=node[key]
    node[path[-1]]=replacement;return value
def fixture(declarations,variant='positive'):
    compare='request <= words[2]';subtract='words[2] = static_cast<std::uint16_t>(words[2] - request);'
    increment='words[2] = static_cast<std::uint16_t>(words[2] + 1);'
    assignment='words[2] = value;'
    if variant=='signed':compare='(int(request) - (request >= 32768 ? 65536 : 0)) <= (int(words[2]) - (words[2] >= 32768 ? 65536 : 0))'
    if variant=='exclusive':compare='request < words[2]'
    if variant=='reverse':compare='request >= words[2]'
    if variant=='wide-compare':compare='request <= (std::uint32_t(words[2]) | (std::uint32_t(words[3]) << 16))'
    if variant=='byte-compare':compare='request <= static_cast<std::uint8_t>(words[2])'
    if variant=='missing-sub':subtract='(void)request;'
    if variant=='add-not-sub':subtract='words[2] = static_cast<std::uint16_t>(words[2] + request);'
    if variant=='byte-sub':subtract='words[2] = static_cast<std::uint16_t>((words[2] & 0xff00u) | (static_cast<std::uint8_t>(words[2] - request)));'
    if variant=='wide-sub-effect':subtract+=' words[3] = 0;'
    if variant=='wrong-sub-slot':subtract='words[3] = static_cast<std::uint16_t>(words[3] - request);'
    if variant=='missing-inc':increment=';'
    if variant=='saturating-inc':increment='if(words[2] != 65535) ++words[2];'
    if variant=='byte-inc':increment='words[2] = static_cast<std::uint16_t>((words[2] & 0xff00u) | static_cast<std::uint8_t>(words[2]+1));'
    if variant=='inc-carry':increment+=' if(words[2]==0) ++words[3];'
    if variant=='wrong-inc-slot':increment='++words[3];'
    if variant=='missing-copy':assignment='(void)value;'
    if variant=='byte-copy':assignment='words[2] = static_cast<std::uint8_t>(value);'
    if variant=='wide-copy-effect':assignment+=' words[3] = 0;'
    if variant=='wrong-copy-slot':assignment='words[3] = value;'
    drain='if (accepted) { SUBTRACT }'
    if variant=='unconditional-sub':drain='SUBTRACT'
    if variant=='reject-write':drain+=' else { words[2] = 0; }'
    return r'''#include <cstdint>
#include <type_traits>
DECLARATIONS
static_assert(std::is_same<decltype(DAT_004a8fe2),std::uint16_t>::value,"WORD e2");
static_assert(std::is_same<decltype(DAT_004a8fe6),std::uint16_t>::value,"WORD e6");
static bool guards(const std::uint16_t *words) {
    return words[0]==0xa55a && words[1]==0x1357 && words[3]==0xb68d && words[4]==0x5aa5;
}
static bool check_drain(std::uint16_t counter,std::uint16_t request) {
    std::uint16_t words[5]={0xa55a,0x1357,counter,0xb68d,0x5aa5};
    const bool accepted=COMPARE;
    DRAIN
    const bool expected=std::uint32_t(counter)>=std::uint32_t(request);
    const unsigned result=expected?unsigned(counter)-unsigned(request):unsigned(counter);
    return accepted==expected && words[2]==result && guards(words);
}
int main(){
    static_assert(sizeof(std::uint16_t)==2,"WORD size");
    constexpr std::uint16_t bounds[]={0,1,255,256,32767,32768,65534,65535};
    unsigned checks=0;
    // Both abstract counters independently; no assumption of original adjacency.
    for(unsigned slot=0;slot<2;++slot) {
        for(unsigned input=0;input<65536;++input) {
            auto value=static_cast<std::uint16_t>(input);
            for(auto bound:bounds) {
                if(!check_drain(value,bound) || !check_drain(bound,value))return 42;
                checks+=2;
            }
            std::uint16_t words[5]={0xa55a,0x1357,value,0xb68d,0x5aa5};
            INCREMENT
            if(words[2]!=((input+1)&65535u) || !guards(words))return 42;
            ++checks;
            words[2]=static_cast<std::uint16_t>(value ^ 0xffffu);
            ASSIGNMENT
            if(words[2]!=value || !guards(words))return 42;
            ++checks;
        }
    }
    return checks==2359296 ? 0 : 43;
}
'''.replace('DECLARATIONS',declarations).replace('COMPARE',compare).replace('DRAIN',drain).replace('SUBTRACT',subtract).replace('INCREMENT',increment).replace('ASSIGNMENT',assignment)

def codegen(word='std::uint16_t',signed=False):
    comparison='request <= *counter' if not signed else 'static_cast<std::int16_t>(request) <= static_cast<std::int16_t>(*counter)'
    return '''#include <cstdint>
extern "C" bool drain_counter(WORD *counter,WORD request){bool enough=COMPARISON;if(enough)*counter=static_cast<WORD>(*counter-request);return enough;}
extern "C" void increment_counter(WORD *counter){*counter=static_cast<WORD>(*counter+1);}
extern "C" void copy_counter(WORD *counter,WORD value){*counter=value;}
'''.replace('WORD',word).replace('COMPARISON',comparison)
def validate_codegen(ir):
    evidence.need(re.search(r'load i16,',ir) and re.search(r'store i16 ',ir),'WORD memory absent')
    evidence.need(not re.search(r'(?:load|store) i32(?:,| )',ir),'widened scalar memory')
    comparison=re.search(r'define[^\n]*@drain_counter\b[\s\S]*?^}',ir,re.M).group()
    unsigned=re.search(r'icmp u(?:le|ge|gt|lt) i(?:16|32)',comparison)
    promoted=(len(re.findall(r'zext i16 .* to i32',comparison))>=2 and re.search(r'icmp s(?:le|ge|gt|lt) i32',comparison))
    evidence.need(unsigned or promoted,'unsigned WORD comparison absent')
    evidence.need(not re.search(r'sext i16|icmp s(?:le|ge|gt|lt) i16',comparison),'signed WORD comparison')
    evidence.need(re.search(r'sub(?: nsw)? i(?:16|32)',comparison),'WORD subtraction absent')

class CounterWordTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.doc=evidence.load_manifest(ROOT);cls.compiler=shutil.which('clang++')
        if not cls.compiler:raise RuntimeError('clang++ required')
    def compile(self,source,opt,extra=(),compiler=None):
        command=[compiler or self.compiler,'-std=c++17',opt,'-I',str(ROOT/'include'),'-x','c++','-']
        if compiler is None:command+=['-ferror-limit=0']
        command+=list(extra) if extra else ['-fsyntax-only']
        return subprocess.run(command,input=source,text=True,capture_output=True,timeout=90)
    def test_raw_sources_seven_exact_reversible_types(self):
        evidence.verify_source(ROOT,self.doc);count=0
        for case in self.doc['cases']:
            new=(ROOT/case['source']).read_bytes();old=evidence.restore(case,new);self.assertEqual(evidence.apply(case,old),new)
            self.assertEqual(old[old.index(b'\n{'):],new[new.index(b'\n{'):])
            mutants=[new+b'\n',new.replace(b'\n',b'\r\n'),new.replace(b'ABI_UNVERIFIED',b'ABI_VERIFIED'),new+b'\nuint16_t DAT_004a8fe2=0;\n',new+b'\nextern void FUN_00386141(void);\n']
            for edit in case['edits']:
                after=edit['after'].encode();count+=1
                mutants.extend([new.replace(after,edit['before'].encode()),new.replace(after,b''),new.replace(after,after.replace(b'uint16_t',b'int16_t')),new.replace(after,after.replace(b'extern ',b''))])
            for mutant in mutants:
                with self.assertRaises(ValueError):evidence.restore(case,mutant)
        self.assertEqual(count,7)
    def test_unchanged_strict_diagnostics_and_status(self):
        for case in self.doc['cases']:
            new=(ROOT/case['source']).read_bytes();old=evidence.restore(case,new)
            for opt in ('-O0','-O2'):
                results=[self.compile(s.decode(),opt,('-Werror=pointer-to-int-cast','-Werror=float-conversion','-Werror=implicit-int-float-conversion','-fsyntax-only')) for s in (old,new)]
                self.assertEqual(bool(results[0].returncode),case['audit_status']=='fail')
                for result in results:self.assertEqual(result.stderr.count('error:'),case['diagnostic_count_unlimited'],result.stderr)
                errors=lambda r:re.findall(r'error: ([^\n]+)',r.stderr)
                self.assertEqual(errors(results[0]),errors(results[1]))
                self.assertEqual(bool(results[0].returncode),bool(results[1].returncode))
        print('O0/O2 unchanged diagnostic counts 19/3/5/0/0; zero syntax gain')
    def test_manifest_and_independent_encoding_controls(self):
        count=byte_count=0
        for path,value in leaves(self.doc):
            replacement=not value if isinstance(value,bool) else value+1 if isinstance(value,int) else value+'!'
            mutant=altered(self.doc,path,replacement)
            with self.assertRaises(ValueError):evidence.validate_contract(mutant)
            with self.assertRaises(ValueError):evidence.load_bytes((json.dumps(mutant)+'\n').encode())
            count+=1
        windows={int(w['address'],16):w for c in self.doc['cases'] for w in c['instruction_windows']}
        for expected in evidence.WORD_ACCESS:
            w=windows[expected[0]]
            for i in range(len(bytes.fromhex(w['bytes']))):
                raw=bytearray.fromhex(w['bytes']);raw[i]^=1
                with self.assertRaises(ValueError):evidence.validate_word(dict(w,bytes=raw.hex()),expected)
                byte_count+=1
        for case,address in zip(self.doc['cases'][-2:],(0x4a8fe2,0x4a8fe6)):
            for i,w in enumerate(case['instruction_windows']):
                for j in range(len(bytes.fromhex(w['bytes']))):
                    raw=bytearray.fromhex(w['bytes']);raw[j]^=1
                    with self.assertRaises(ValueError):evidence.validate_drain(altered(case['instruction_windows'],(i,'bytes'),raw.hex()),case['entry'],address)
                    byte_count+=1
        for raw in ('{"a":1,"a":2}','{"a":NaN}','{"a":Infinity}'):
            with self.assertRaises(ValueError):evidence.strict_json(raw)
        print('Counter public controls:',count,'metadata leaves;',byte_count,'independent instruction-byte mutations')
    def test_source_dependency_region_controls(self):
        with tempfile.TemporaryDirectory() as temporary:
            root=Path(temporary);paths={p['path'] for p in self.doc['dependency_pins']}|{r['source'] for r in self.doc['region_labels']}|{'metadata/asm_supported_readable_names.csv','.github/workflows/cpp-compatibility-audit.yml'}
            for rel in paths:(root/rel).parent.mkdir(parents=True,exist_ok=True);shutil.copyfile(ROOT/rel,root/rel)
            evidence.verify_source(root,self.doc)
            for rel in paths:
                path=root/rel;old=path.read_bytes();path.write_bytes(old+b'\n')
                # Region-only unchanged caller sources deliberately permit independent
                # reviewed call declarations. Their footprint, not whole file, is pinned.
                if rel in {p['path'] for p in self.doc['dependency_pins']}|{c['source'] for c in self.doc['cases']}:
                    with self.assertRaises(ValueError):evidence.verify_source(root,self.doc)
                path.write_bytes(old)
            ci=root/'.github/workflows/cpp-compatibility-audit.yml';old=ci.read_bytes()
            for token in (evidence.CI_STEP.encode(),b'        run: python3 tools/test_cpp_20261105_word_limit_widths.py\n'):
                for replacement in (b'',token+token):
                    ci.write_bytes(old.replace(token,replacement,1))
                    with self.assertRaises(ValueError):evidence.verify_source(root,self.doc)
            ci.write_bytes(old)
            extra=root/'src/extra.cpp';extra.write_text('extern uint16_t DAT_004a8fe2;\n')
            with self.assertRaises(ValueError):evidence.verify_source(root,self.doc)
    def test_initialized_local_model_and_negatives(self):
        declarations='\n'.join(e['after'] for c in self.doc['cases'] for e in c['edits'])
        variants=['positive','signed','exclusive','reverse','wide-compare','byte-compare','missing-sub','add-not-sub','byte-sub','wide-sub-effect','wrong-sub-slot','unconditional-sub','reject-write','missing-inc','saturating-inc','byte-inc','inc-carry','wrong-inc-slot','missing-copy','byte-copy','wide-copy-effect','wrong-copy-slot']
        with tempfile.TemporaryDirectory() as temporary:
            for opt in ('-O0','-O2'):
                for variant in variants:
                    exe=Path(temporary)/(variant+opt);result=self.compile(fixture(declarations,variant),opt,('-Wall','-Wextra','-Werror','-o',str(exe)))
                    self.assertEqual(result.returncode,0,result.stderr);result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
                    self.assertEqual(result.returncode,0 if variant=='positive' else 42,variant+opt+result.stderr)
            compiler=shutil.which('g++-14')
            if compiler:
                exe=Path(temporary)/'sanitized';result=self.compile(fixture(declarations),'-O2',('-Wall','-Wextra','-Werror','-fsanitize=address,undefined','-fno-sanitize-recover=all','-o',str(exe)),compiler)
                self.assertEqual(result.returncode,0,result.stderr)
                import os
                result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60,env=dict(os.environ,ASAN_OPTIONS='detect_leaks=0'))
                self.assertEqual(result.returncode,0,result.stderr)
            else:self.fail('g++-14 required for authored ASan+UBSan model')
        print('Authored local counters: 2,359,296 checks/run; O0/O2 and GCC14 ASan+UBSan pass; 42 negative runs')
    def test_word_codegen(self):
        with tempfile.TemporaryDirectory() as temporary:
            for opt in ('-O0','-O2'):
                for variant,source in [('positive',codegen()),('wide',codegen('std::uint32_t')),('signed',codegen(signed=True))]:
                    ir=Path(temporary)/(variant+opt+'.ll');result=self.compile(source,opt,('-S','-emit-llvm','-o',str(ir)));self.assertEqual(result.returncode,0,result.stderr)
                    if variant=='positive':validate_codegen(ir.read_text())
                    else:
                        with self.assertRaises(ValueError):validate_codegen(ir.read_text())
    def test_private_boundaries_flows_quarantine_and_controls(self):
        if PRIVATE_EXPORT is None:self.skipTest('private export not requested')
        from capstone import Cs,CS_ARCH_X86,CS_MODE_32
        decoder=Cs(CS_ARCH_X86,CS_MODE_32);decoder.detail=True;records=evidence.read_records(PRIVATE_EXPORT,self.doc)
        index={r['entry']:r for r in evidence.strict_json((PRIVATE_EXPORT/'validation.json').read_bytes())['functions']};count=0
        for case in self.doc['cases']:
            record=records[case['entry']];evidence.validate_record(record,case,decoder);row=index[case['entry'][2:]]
            for path,value in leaves(row):
                replacement=not value if isinstance(value,bool) else value+1 if isinstance(value,int) else value+'!'
                with self.assertRaises(ValueError):evidence.validate_index_row(altered(row,path,replacement),case)
                count+=1
            mutations=[(('entry',),'00000000'),(('name',),'forged'),(('is_thunk',),True),(('body_byte_count',),1),(('instruction_count',),1),(('body_ranges',0,'start'),'00000000'),(('body_ranges',0,'end_inclusive'),'00000000'),(('body_ranges',0,'length'),1),(('program_memory_body_sha256',),'0'*64)]
            raw=bytearray.fromhex(record['body_ranges'][0]['bytes_hex'])
            for i in range(len(raw)):
                changed=raw.copy();changed[i]^=1;mutations.append((('body_ranges',0,'bytes_hex'),changed.hex()))
            for i,ins in enumerate(record['instructions']):
                for key,value in [('address','00000000'),('bytes_hex','00'),('length',ins['length']+1),('parsed_length',ins['parsed_length']+1),('flow_override','NONE' if ins['flow_override']!='NONE' else 'CALL_RETURN'),('is_length_overridden',True),('is_fallthrough_overridden',True),('flows',['00000000']),('fallthrough','00000000'),('flow_type','FORGED')]:mutations.append((('instructions',i,key),value))
            for path,value in mutations:
                with self.assertRaises(ValueError):evidence.validate_record(altered(record,path,value),case,decoder)
                count+=1
        print('Private counter replay: 737 bytes/239 boundaries; index remains quarantined where applicable;',count,'corruption controls')

if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--private-export',type=Path);parser.add_argument('--tooldeps',type=Path);args,remaining=parser.parse_known_args();PRIVATE_EXPORT=args.private_export
    if args.tooldeps:sys.path.insert(0,str(args.tooldeps))
    unittest.main(argv=[sys.argv[0],*remaining])
