#!/usr/bin/env python3
"""WORD placeholder fidelity gates; initialized test objects are not guest globals."""
from __future__ import annotations
import argparse
import copy
import json
from pathlib import Path
import re
import shutil
import subprocess
import sys
import tempfile
import unittest
import verify_cpp_20261105_word_limit_widths as evidence

ROOT=Path(__file__).resolve().parents[1]
PRIVATE_EXPORT=None
AUDIT=None


def leaves(value,path=()):
    if isinstance(value,dict):
        for key,item in value.items(): yield from leaves(item,path+(key,))
    elif isinstance(value,list):
        for key,item in enumerate(value): yield from leaves(item,path+(key,))
    else: yield path,value


def altered(value,path,replacement):
    value=copy.deepcopy(value);node=value
    for key in path[:-1]: node=node[key]
    node[path[-1]]=replacement
    return value


def fixture(declarations, variant='positive'):
    # No game definitions. The extern spellings are used ONLY in unevaluated
    # decltype assertions. Runtime values live in initialized local WORD arrays.
    compare='limit < request'
    store='words[2] = value;'
    addition='words[2] = static_cast<std::uint16_t>(words[2] + delta);'
    if variant=='signed-compare': compare='static_cast<std::int16_t>(limit) < static_cast<std::int16_t>(request)'
    if variant=='inclusive-compare': compare='limit <= request'
    if variant=='reversed-compare': compare='limit > request'
    if variant=='wide-value': compare='(std::uint32_t(limit) | (std::uint32_t(words[3]) << 16)) < request'
    if variant=='byte-value': compare='static_cast<std::uint8_t>(limit) < request'
    if variant=='missing-store': store='(void)value;'
    if variant=='short-store': store='words[2] = static_cast<std::uint16_t>((words[2] & 0xff00u) | (value & 0xffu));'
    if variant=='neighbor-store': store='words[3] = value;'
    if variant=='wide-effect': store='words[2] = value; words[3] = 0;'
    if variant=='missing-add': addition='(void)delta;'
    if variant=='carry-to-neighbor': addition+=' if (std::uint32_t(value) + delta > 65535u) ++words[3];'
    assertions='\n'.join('static_assert(std::is_same<decltype('+name+'),std::uint16_t>::value,"WORD extern type");'
                         for name in ('DAT_004a8fe0','DAT_004a8fe4'))
    return r'''#include <cstdint>
#include <type_traits>
DECLARATIONS
ASSERTIONS
int main() {
    static_assert(sizeof(std::uint16_t)==2,"WORD size");
    constexpr std::uint16_t bounds[]={0,1,255,256,32767,32768,65534,65535};
    unsigned checks=0;
    for(auto limit:bounds) for(auto request:bounds) {
        std::uint16_t words[5]={0xa55a,0x1357,limit,0xb68d,0x5aa5};
        const bool actual=COMPARE;
        if(actual!=(std::uint32_t(limit)<std::uint32_t(request)))return 42;
        if(words[0]!=0xa55a||words[1]!=0x1357||words[2]!=limit||words[3]!=0xb68d||words[4]!=0x5aa5)return 42;
        ++checks;
    }
    for(auto value:bounds) for(auto delta:bounds) {
        std::uint16_t words[5]={0xa55a,0x1357,static_cast<std::uint16_t>(value ^ 0xffffu),0xb68d,0x5aa5};
        STORE
        if(words[2]!=value||words[0]!=0xa55a||words[1]!=0x1357||words[3]!=0xb68d||words[4]!=0x5aa5)return 42;
        ADDITION
        if(words[2]!=static_cast<std::uint16_t>(std::uint32_t(value)+delta)||words[0]!=0xa55a||words[1]!=0x1357||words[3]!=0xb68d||words[4]!=0x5aa5)return 42;
        ++checks;
    }
    // Observed initializer value operations: byte zero extension and WORD
    // addition. This does not supply its hidden EBX/config pointer or call ABI.
    for(unsigned first=0;first<256;++first)for(unsigned extra=0;extra<256;++extra){
        std::uint16_t words[5]={0xa55a,0x1357,0xffff,0xb68d,0x5aa5};
        words[2]=static_cast<std::uint16_t>(static_cast<std::uint8_t>(first));
        words[2]=static_cast<std::uint16_t>(words[2]+static_cast<std::uint8_t>(extra));
        if(words[2]!=first+extra||words[0]!=0xa55a||words[1]!=0x1357||words[3]!=0xb68d||words[4]!=0x5aa5)return 42;
        ++checks;
    }
    return checks==65664?0:43;
}
'''.replace('DECLARATIONS',declarations).replace('ASSERTIONS',assertions).replace('COMPARE',compare).replace('STORE',store).replace('ADDITION',addition)


def codegen(word='std::uint16_t',comparison='*limit < *request'):
    return '''#include <cstdint>
extern "C" bool compare_words(const WORD *limit,const WORD *request){return COMPARE;}
extern "C" void assign_word(WORD *destination,WORD value){*destination=value;}
extern "C" void add_word(WORD *destination,WORD value){*destination=static_cast<WORD>(*destination+value);}
'''.replace('WORD',word).replace('COMPARE',comparison)


def validate_codegen(ir):
    evidence.need(re.search(r'load i16,',ir) and re.search(r'store i16 ',ir), 'WORD memory operations absent')
    evidence.need(not re.search(r'(?:load|store) i32(?:,| )',ir), 'widened scalar memory operation')
    match=re.search(r'define[^\n]*@compare_words\b[\s\S]*?^}',ir,re.M)
    evidence.need(match is not None,'comparison function missing')
    comparison=match.group()
    # C++ promotes uint16_t to int. At O0 Clang may compare two zero-extended
    # i16 values with signed i32 comparison; their proven range makes it unsigned-word equivalent.
    unsigned=re.search(r'icmp ult i(?:16|32)',comparison)
    promoted=(len(re.findall(r'zext i16 .* to i32',comparison))==2 and re.search(r'icmp slt i32',comparison))
    evidence.need(unsigned or promoted,'unsigned WORD comparison absent')
    evidence.need(not re.search(r'sext i16|icmp slt i16',comparison),'signed WORD interpretation substituted')


class WordLimitTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.doc=evidence.load_manifest(ROOT)
        cls.compiler=shutil.which('clang++')
        if not cls.compiler: raise RuntimeError('clang++ required; no silent skips')

    def compile(self,source,opt,extra=()):
        command=[self.compiler,'-std=c++17',opt,'-Werror=pointer-to-int-cast',
                 '-Werror=float-conversion','-Werror=implicit-int-float-conversion',
                 '-ferror-limit=0','-I',str(ROOT/'include'),'-x','c++','-']
        command+=list(extra) if extra else ['-fsyntax-only']
        return subprocess.run(command,input=source,text=True,capture_output=True,timeout=60)

    def test_raw_source_reversal_and_only_four_types(self):
        evidence.verify_source(ROOT,self.doc)
        count=0
        for case in self.doc['cases']:
            new=evidence.source_at_width_stage(ROOT,case,(ROOT/case['source']).read_bytes());old=evidence.restore(case,new)
            self.assertEqual(evidence.apply(case,old),new)
            self.assertEqual(new[new.index(b'void)'):],old[old.index(b'void)'):])
            mutants=[new+b'\n',new.replace(b'\n',b'\r\n'),new.replace(b'ABI_UNVERIFIED',b'ABI_VERIFIED'),
                     new+b'\nextern void FUN_00386141(void);\n',new+b'\nuint16_t DAT_004a8fe0=0;\n']
            for edit in case['edits']:
                after=edit['after'].encode()
                mutants.extend([new.replace(after,edit['before'].encode()),new.replace(after,b''),
                                new.replace(after,after.replace(b'uint16_t',b'int16_t')),
                                new.replace(after,after.replace(b'extern ',b''))])
                count+=1
            for mutant in mutants:
                with self.assertRaises(ValueError):evidence.restore(case,mutant)
        self.assertEqual(count,4)

    def test_only_exact_later_declarations_reverse_to_width_stage(self):
        import verify_cpp_20261105_word_source_declarations as declarations
        later = declarations.load_manifest(ROOT)
        for case, approved in zip(self.doc['cases'][1:], later['cases']):
            raw = (ROOT/case['source']).read_bytes()
            recovered = evidence.source_at_width_stage(ROOT, case, raw)
            self.assertEqual(evidence.sha(recovered), case['source_after_sha256'])
            # Current source may be either approved stage. Always construct the
            # exact later postimage before exercising its reversal and mutants.
            postimage = declarations.apply(approved, recovered.decode()).encode()
            self.assertIn(raw, (recovered, postimage))
            raw = postimage
            self.assertEqual(evidence.source_at_width_stage(ROOT, case, raw), recovered)
            self.assertEqual(declarations.restore(approved, raw.decode()).encode(), recovered)
            self.assertEqual(evidence.source_at_width_stage(ROOT, case, recovered), recovered)
            self.assertEqual(evidence.apply(case, evidence.restore(case, recovered)), recovered)
            block = approved['added_declaration_block'].encode()
            mutants = [raw+b'\n', raw.replace(b'\n', b'\r\n'), raw+block,
                       raw.replace(block,b'',1)+block,
                       raw.replace(b'extern void ', b'extern int ',1),
                       raw.replace(b'extern uint16_t ',b'extern uint32_t ',1),
                       raw.replace(b'return 0x40000000;', b'return 0;',1),
                       raw.replace(b'ABI_UNVERIFIED',b'ABI_VERIFIED',1)]
            for mutant in mutants:
                self.assertNotEqual(mutant, raw)
                with self.assertRaises(ValueError):
                    evidence.source_at_width_stage(ROOT, case, mutant)
        # No unrelated initializer edits can be normalized away.
        first = self.doc['cases'][0]
        with self.assertRaises((ValueError, FileNotFoundError)):
            evidence.source_at_width_stage(ROOT, first, (ROOT/first['source']).read_bytes()+b'\n')
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            manifest = root/declarations.NAME
            manifest.parent.mkdir(parents=True)
            original = (ROOT/declarations.NAME).read_bytes()
            manifest.write_bytes(original+b'\n')
            with self.assertRaises(ValueError):
                evidence.source_at_width_stage(root, case, raw)

    def test_counter_and_declaration_layers_individually_and_combined(self):
        if not (ROOT/evidence.COUNTER_LAYER_NAME).exists():
            self.skipTest('optional independently authored counter layer not installed')
        import verify_cpp_20261105_word_source_declarations as declarations
        later = declarations.load_manifest(ROOT)
        counter_raw = (ROOT/evidence.COUNTER_LAYER_NAME).read_bytes()
        self.assertEqual(evidence.sha(counter_raw), evidence.COUNTER_LAYER_SHA)
        counters = evidence.strict_json(counter_raw)['cases']
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            paths = {p['path'] for p in self.doc['dependency_pins']} | {
                '.github/workflows/cpp-compatibility-audit.yml', declarations.NAME, evidence.COUNTER_LAYER_NAME}
            for rel in paths:
                (root/rel).parent.mkdir(parents=True, exist_ok=True)
                shutil.copyfile(ROOT/rel, root/rel)
            counter_sources = {}
            for case in counters:
                raw = (ROOT/case['source']).read_bytes()
                if evidence.sha(raw) == case['source_before_sha256']:
                    before = raw; after = raw
                    for edit in case['edits']:
                        after = after.replace(edit['before'].encode(), edit['after'].encode(), 1)
                else:
                    after = raw
                    before = evidence.reverse_counter_layer(root, case['source'], raw, case['source_before_sha256'])
                self.assertEqual(evidence.sha(after), case['source_after_sha256'])
                counter_sources[case['source']] = (before, after)
            declaration_sources = {}
            for case in later['cases']:
                raw = (ROOT/case['source']).read_bytes()
                if evidence.sha(raw) == case['source_before_sha256']:
                    before = raw; after = declarations.apply(case, raw.decode()).encode()
                else:
                    after = raw; before = declarations.restore(case, raw.decode()).encode()
                declaration_sources[case['source']] = (before, after)
            for counter_on, declaration_on in ((False,False),(True,False),(False,True),(True,True)):
                for source, versions in counter_sources.items():
                    (root/source).write_bytes(versions[int(counter_on)])
                for source, versions in declaration_sources.items():
                    (root/source).write_bytes(versions[int(declaration_on)])
                evidence.verify_source(root, self.doc)
            for case in counters:
                source = root/case['source']; before, after = counter_sources[case['source']]
                for mutant in (after+b'\n', after.replace(b'\n',b'\r\n'),
                               after.replace(b'ABI_UNVERIFIED',b'ABI_VERIFIED',1),
                               after.replace(case['edits'][0]['after'].encode(),b'',1)):
                    source.write_bytes(mutant)
                    with self.assertRaises(ValueError): evidence.verify_source(root, self.doc)
                source.write_bytes(after)
            manifest = root/evidence.COUNTER_LAYER_NAME
            manifest.write_bytes(counter_raw+b'\n')
            with self.assertRaises(ValueError): evidence.verify_source(root, self.doc)
            manifest.write_bytes(counter_raw); evidence.verify_source(root, self.doc)
        print('Exact predecessor projections: baseline, declaration-only, counter-only and combined; corruptions rejected')

    def test_unlimited_diagnostics_and_sweep_status_unchanged(self):
        for case in self.doc['cases']:
            new=evidence.source_at_width_stage(ROOT,case,(ROOT/case['source']).read_bytes());old=evidence.restore(case,new)
            for opt in ('-O0','-O2'):
                results=[self.compile(s.decode(),opt) for s in (old,new)]
                for result in results:
                    self.assertNotEqual(result.returncode,0)
                    self.assertEqual(result.stderr.count('error:'),case['diagnostic_count_unlimited'],result.stderr)
                errors=lambda result:re.findall(r'error: ([^\n]+)',result.stderr)
                self.assertEqual(errors(results[0]),errors(results[1]))
            # Reproduce the full sweep flags, without running any canonical body.
            results=[subprocess.run([self.compiler,'-std=c++17','-x','c++','-fsyntax-only','-ferror-limit=3',
                                     '-I',str(ROOT/'include'),'-'],input=s.decode(),text=True,capture_output=True,timeout=60)
                     for s in (old,new)]
            self.assertTrue(all(r.returncode for r in results))
            self.assertEqual(errors(results[0])[:3],errors(results[1])[:3])
        print('Recovered WORD stage: O0/O2 diagnostics unchanged: 19,1,1; historical sweep fail/fail/fail; zero width-only syntax gain')

    def test_manifest_windows_and_mutations(self):
        leaf_count=byte_count=0
        for path,value in leaves(self.doc):
            replacement=not value if isinstance(value,bool) else value+1 if isinstance(value,int) else value+'!'
            mutant=altered(self.doc,path,replacement)
            with self.assertRaises(ValueError):evidence.validate_contract(mutant)
            with self.assertRaises(ValueError):evidence.load_bytes((json.dumps(mutant)+'\n').encode())
            leaf_count+=1
        windows={int(w['address'],16):w for c in self.doc['cases'] for w in c['instruction_windows']}
        for expected in evidence.WORD_ACCESS:
            window=windows[expected[0]];evidence.validate_word(window,expected)
            for index in range(len(bytes.fromhex(window['bytes']))):
                raw=bytearray.fromhex(window['bytes']);raw[index]^=1
                with self.assertRaises(ValueError):evidence.validate_word(dict(window,bytes=raw.hex()),expected)
                byte_count+=1
            for raw in ('',window['bytes'][2:],'66'+window['bytes'],window['bytes']+'00'):
                with self.assertRaises(ValueError):evidence.validate_word(dict(window,bytes=raw),expected)
            with self.assertRaises(ValueError):evidence.validate_word(dict(window,address='00000000'),expected)
        for case,address in zip(self.doc['cases'][1:],(0x4a8fe4,0x4a8fe0)):
            for i,window in enumerate(case['instruction_windows']):
                for byte in range(len(bytes.fromhex(window['bytes']))):
                    raw=bytearray.fromhex(window['bytes']);raw[byte]^=1
                    mutant=altered(case['instruction_windows'],(i,'bytes'),raw.hex())
                    with self.assertRaises(ValueError):evidence.validate_query(mutant,case['entry'],address)
                    byte_count+=1
        for raw in ('{"a":1,"a":2}','{"a":NaN}','{"a":Infinity}'):
            with self.assertRaises(ValueError):evidence.strict_json(raw)
        print('Public controls:',leaf_count,'manifest leaves,',byte_count,'independent instruction-byte mutations')

    def test_dependency_region_and_additive_ci_pins(self):
        with tempfile.TemporaryDirectory() as temporary:
            root=Path(temporary)
            paths={p['path'] for p in self.doc['dependency_pins']}|{'.github/workflows/cpp-compatibility-audit.yml',
                    'metadata/cpp_20261105_word_source_declarations.json'}
            if (ROOT/evidence.COUNTER_LAYER_NAME).exists():
                paths.add(evidence.COUNTER_LAYER_NAME)
            for rel in paths:
                (root/rel).parent.mkdir(parents=True,exist_ok=True);shutil.copyfile(ROOT/rel,root/rel)
            evidence.verify_source(root,self.doc)
            for rel in ('include/bf_ghidra_types.h','src/platform/xpp_role_unverified/0x00385d45.cpp'):
                path=root/rel;old=path.read_bytes();path.write_bytes(old+b'\n')
                with self.assertRaises(ValueError):evidence.verify_source(root,self.doc)
                path.write_bytes(old)
            ci=root/'.github/workflows/cpp-compatibility-audit.yml';old=ci.read_bytes()
            for text in [self.doc['ci_addition'],*self.doc['ci_preserved_lines']]:
                ci.write_bytes(old.replace(text.encode(),b'',1))
                with self.assertRaises(ValueError):evidence.verify_source(root,self.doc)
            # A separately reviewed additive gate is compatible with this guard.
            addition=b'      - name: Unrelated future gate\n        run: true\n'
            ci.write_bytes(old.replace(self.doc['ci_addition'].encode(),addition+self.doc['ci_addition'].encode(),1))
            evidence.verify_source(root,self.doc);ci.write_bytes(old)
            fake=root/'src/extra.cpp';fake.write_text('extern uint16_t DAT_004a8fe0;\n')
            with self.assertRaises(ValueError):evidence.verify_source(root,self.doc)
            fake.unlink()
            # e2/e6 stay DWORD placeholders, not silently repaired by this package.
            self.assertTrue(all('uint32_t' in r['declaration'] for r in self.doc['region_labels']
                                if r['symbol'] in ('DAT_004a8fe2','DAT_004a8fe6')))

    def test_initialized_word_values_neighbors_and_negative_models(self):
        declarations='\n'.join(e['after'] for c in self.doc['cases'] for e in c['edits'])
        variants=['positive','signed-compare','inclusive-compare','reversed-compare','wide-value','byte-value',
                  'missing-store','short-store','neighbor-store','wide-effect','missing-add','carry-to-neighbor']
        with tempfile.TemporaryDirectory() as temporary:
            for opt in ('-O0','-O2'):
                for name in variants:
                    exe=Path(temporary)/(name+opt)
                    result=self.compile(fixture(declarations,name),opt,('-Wall','-Wextra','-Werror','-o',str(exe)))
                    self.assertEqual(result.returncode,0,result.stderr)
                    result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=20)
                    self.assertEqual(result.returncode,0 if name=='positive' else 42,name+opt+result.stderr)
                # Unevaluated extern declarations must all agree. No definition is supplied.
                mutant=declarations.replace('extern uint16_t DAT_004a8fe0;','extern uint32_t DAT_004a8fe0;',1)
                self.assertNotEqual(self.compile(fixture(mutant),opt).returncode,0)
        print('Authored local WORD model: 65,664 checks/run; 2 positive and 22 negative O0/O2 runs; no game globals')

    def test_word_codegen_and_width_signedness_negatives(self):
        with tempfile.TemporaryDirectory() as temporary:
            for opt in ('-O0','-O2'):
                for variant,source in [('positive',codegen()),('wide',codegen('std::uint32_t')),
                                      ('signed',codegen(comparison='static_cast<std::int16_t>(*limit) < static_cast<std::int16_t>(*request)'))]:
                    ir=Path(temporary)/(variant+opt+'.ll')
                    result=self.compile(source,opt,('-S','-emit-llvm','-o',str(ir)))
                    self.assertEqual(result.returncode,0,result.stderr)
                    if variant=='positive':validate_codegen(ir.read_text())
                    else:
                        with self.assertRaises(ValueError):validate_codegen(ir.read_text())

    def test_private_complete_body_flow_index_and_mutations(self):
        if PRIVATE_EXPORT is None:self.skipTest('optional private body replay not requested')
        from capstone import Cs,CS_ARCH_X86,CS_MODE_32
        decoder=Cs(CS_ARCH_X86,CS_MODE_32);decoder.detail=True
        records=evidence.read_records(PRIVATE_EXPORT,self.doc)
        index={r['entry']:r for r in evidence.strict_json((PRIVATE_EXPORT/'validation.json').read_bytes())['functions']}
        count=0
        for case in self.doc['cases']:
            record=records[case['entry']];evidence.validate_record(record,case,decoder)
            row=index[case['entry'][2:]]
            for path,value in leaves(row):
                replacement=not value if isinstance(value,bool) else value+1 if isinstance(value,int) else value+'!'
                with self.assertRaises(ValueError):evidence.validate_index_row(altered(row,path,replacement),case)
                count+=1
            mutations=[(('entry',),'00000000'),(('name',),'forged'),(('is_thunk',),True),
                       (('body_byte_count',),1),(('instruction_count',),1),
                       (('body_ranges',0,'start'),'00000000'),(('body_ranges',0,'end_inclusive'),'00000000'),
                       (('body_ranges',0,'length'),1),(('program_memory_body_sha256',),'0'*64)]
            raw=bytearray.fromhex(record['body_ranges'][0]['bytes_hex'])
            for i in range(len(raw)):
                changed=raw.copy();changed[i]^=1;mutations.append((('body_ranges',0,'bytes_hex'),changed.hex()))
            for i,ins in enumerate(record['instructions']):
                for key,value in [('address','00000000'),('bytes_hex','00'),('length',ins['length']+1),
                                  ('parsed_length',ins['parsed_length']+1),('flow_override','CALL_RETURN'),
                                  ('is_length_overridden',True),('is_fallthrough_overridden',True),
                                  ('flows',['00000000']),('fallthrough','00000000'),('flow_type','FORGED')]:
                    mutations.append((('instructions',i,key),value))
            for path,value in mutations:
                with self.assertRaises(ValueError):evidence.validate_record(altered(record,path,value),case,decoder)
                count+=1
        print('Private replay: 573 bytes / 174 boundaries / all flow,',count,'index/body/flow negative controls')

    def test_optional_exact_tree_full_audit(self):
        if AUDIT is None:self.skipTest('optional exact-tree full audit not supplied')
        evidence.verify_audit(AUDIT,ROOT,self.doc)
        report=evidence.strict_json(AUDIT.read_bytes())
        swapped=copy.deepcopy(report)
        passed=next(r for r in swapped['results'] if r['status']=='pass')
        failed=next(r for r in swapped['results'] if r['status']=='fail')
        passed['status'],failed['status']='fail','pass'
        with tempfile.TemporaryDirectory() as temporary:
            path=Path(temporary)/'mutant.json'
            for mutant in (swapped,altered(report,('counts','pass'),4052),altered(report,('scope',),'sample'),
                           altered(report,('results',0,'source_sha256'),'0'*64),
                           altered(report,('results',0,'original_body_sha256'),'0'*64),
                           altered(report,('results',0,'status'),'fail')):
                path.write_text(json.dumps(mutant))
                with self.assertRaises(ValueError):evidence.verify_audit(path,ROOT,self.doc)

if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--private-export',type=Path);parser.add_argument('--tooldeps',type=Path)
    parser.add_argument('--audit',type=Path)
    args,remaining=parser.parse_known_args();PRIVATE_EXPORT=args.private_export;AUDIT=args.audit
    if args.tooldeps:sys.path.insert(0,str(args.tooldeps))
    unittest.main(argv=[sys.argv[0],*remaining])
