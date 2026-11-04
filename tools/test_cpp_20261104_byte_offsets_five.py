#!/usr/bin/env python3
"""Five byte-displacement expressions: syntax and valid-buffer tests, not Xbox ABI.

BF_GHIDRA_EXPORT_DIR optionally names the private immutable all-v1 export.
No original function or supplied machine-code body is executed.
"""
from __future__ import annotations
import copy
import csv
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
# Staging may borrow only headers/inventory from the frozen checkout.
SUPPORT = Path(os.environ.get("BF_BYTE_OFFSET_SUPPORT_ROOT", ROOT))
MANIFEST = ROOT / "metadata/cpp_20261104_byte_offsets_five.json"
MANIFEST_SHA = "924bcfde06ee2ee7f638eb591ce62bebb7167034988a10aa294ebefbe463331b"
EXPECTED_WINDOWS = {
    "0x0005c5e0": [(0x5c600,"39500c"),(0x5c603,"7305"),(0x5c605,"8b4008"),(0x5c608,"eb04"),(0x5c60a,"8bf0"),(0x5c60c,"8b00"),(0x5c60e,"80781d00"),(0x5c612,"74ec")],
    "0x000a7770": [(0xa77b0,"39410c"),(0xa77b3,"7305"),(0xa77b5,"8b4908"),(0xa77b8,"eb04"),(0xa77ba,"8bf1"),(0xa77bc,"8b09"),(0xa77be,"80791900"),(0xa77c2,"74ec")],
    "0x000fe560": [(0xfe586,"b308"),(0xfe590,"8b4904"),(0xfe593,"8b6908"),(0xfe596,"845d65"),(0xfe599,"750a")],
    "0x0017bf40": [(0x17bf80,"39410c"),(0x17bf83,"7305"),(0x17bf85,"8b4908"),(0x17bf88,"eb04"),(0x17bf8a,"8bf1"),(0x17bf8c,"8b09"),(0x17bf8e,"80b98100000000"),(0x17bf95,"74e9")],
    "0x0024efa0": [(0x24efc0,"39700c"),(0x24efc3,"7d05"),(0x24efc5,"8b4008"),(0x24efc8,"eb04"),(0x24efca,"8bd0"),(0x24efcc,"8b00"),(0x24efce,"8a5815"),(0x24efd1,"84db"),(0x24efd3,"74eb")],
}

def reverse_source(source, case):
    if hashlib.sha256(source.encode()).hexdigest() != case["source_after_sha256"]:
        raise ValueError("source differs from reviewed expression repair")
    old, new = (case["replacement"][key] for key in ("old", "new"))
    if source.count(new) != 1 or old in source:
        raise ValueError("replacement occurrence changed")
    original = source.replace(new, old, 1)
    if hashlib.sha256(original.encode()).hexdigest() != case["source_before_sha256"]:
        raise ValueError("preimage source digest changed")
    data = original.encode()
    if hashlib.sha1(b"blob " + str(len(data)).encode() + b"\0" + data).hexdigest() != case["preimage_git_blob"]:
        raise ValueError("preimage Git blob changed")
    return original


def check_windows(case):
    observed = [(int(w["address"], 16), w["bytes"]) for w in case["instruction_windows"]]
    if observed != EXPECTED_WINDOWS[case["entry"]]:
        raise ValueError("producer, branch, byte access, or predicate bytes changed")
    # Explicitly decode the five changed memory operands, not listing text.
    access = next((a,b) for a,b in observed if a in (0x5c60e,0xa77be,0xfe596,0x17bf8e,0x24efce))
    data = bytes.fromhex(access[1])
    if access[0] == 0x17bf8e:
        if data[:2] != b"\x80\xb9" or data[-1] != 0:
            raise ValueError("expected byte CMP [ECX+disp32],0")
        disp = int.from_bytes(data[2:6], "little", signed=True)
    else:
        # 80 /7 = byte CMP imm8; 84 /r = byte TEST; 8A /r = byte load.
        if data[0] not in (0x80,0x84,0x8a) or data[1] >> 6 != 1:
            raise ValueError("expected a byte access with disp8")
        disp = int.from_bytes(data[2:3], "little", signed=True)
    if disp != case["displacement"]:
        raise ValueError("byte displacement changed")
    if case["predicate_mask"] != (8 if case["entry"] == "0x000fe560" else 0):
        raise ValueError("zero/nonzero or bit-3 predicate changed")


def unique_json(pairs):
    result = {}
    for key, value in pairs:
        if key in result: raise ValueError("duplicate JSON key")
        result[key] = value
    return result


def check_record(record, case):
    if int(record["entry"],16) != int(case["entry"],16):
        raise ValueError("wrong entry")
    memory = {}
    spans = []
    prior = -1
    for r in record["body_ranges"]:
        start,end = int(r["start"],16),int(r["end_inclusive"],16)
        data = bytes.fromhex(r["bytes_hex"])
        if start <= prior or end < start or end-start+1 != r["length"] or len(data) != r["length"]:
            raise ValueError("invalid/overlapping recorded body range")
        spans.append({k:r[k] for k in ("start","end_inclusive","length")})
        memory.update((start+i,value) for i,value in enumerate(data))
        prior=end
    if spans != case["body_ranges"] or len(memory) != case["body_byte_count"]:
        raise ValueError("recorded body ranges changed")
    digest = hashlib.sha256(bytes(memory[a] for a in sorted(memory))).hexdigest().upper()
    if digest != case["original_body_sha256"] or record["program_memory_body_sha256"] != digest:
        raise ValueError("recorded body digest changed")
    covered={}
    last=-1
    if record["instruction_count"] != len(record["instructions"]): raise ValueError("instruction count changed")
    for ins in record["instructions"]:
        a=int(ins["address"],16); data=bytes.fromhex(ins["bytes_hex"])
        if a <= last or ins["length"] != len(data) or ins["parsed_length"] != len(data):
            raise ValueError("instruction ordering/length changed")
        last=a
        if ins["is_length_overridden"] or ins["is_fallthrough_overridden"] or ins["flow_override"] != "NONE":
            raise ValueError("analyzed-flow metadata requires separate continuation review")
        for i,b in enumerate(data):
            if a+i in covered or memory.get(a+i) != b: raise ValueError("instruction byte coverage changed")
            covered[a+i]=b
    if covered != memory: raise ValueError("instruction coverage incomplete")
    for w in case["instruction_windows"]:
        start=int(w["address"],16); data=bytes.fromhex(w["bytes"])
        if bytes(memory[start+i] for i in range(len(data))) != data:
            raise ValueError("instruction window differs from recorded body")


FIXTURE = r'''
#include "bf_ghidra_types.h"
static_assert(sizeof(byte)==1 && sizeof(char)==1 && sizeof(undefined4)==4 && sizeof(int)==4, "unchanged widths");
static_assert(std::is_same<byte, unsigned char>::value, "unsigned byte alias");
__attribute__((noinline)) READ_TYPE read_value(POINTER_TYPE *POINTER_VAR) {
    static_assert(std::is_same<decltype(EXPRESSION), READ_TYPE&>::value, "read type unchanged");
    return EXPRESSION;
}
int main() {
    // Typed pointers are never dereferenced here. Both char and byte may inspect
    // this live byte array, and all actual accesses remain inside the array.
    alignas(POINTER_TYPE) byte data[1024];
    for (unsigned base=0; base<64; base+=4) {
        for (unsigned value=0; value<256; ++value) {
            for (unsigned i=0; i<1024; ++i) data[i]=0xa5;
            data[base+DISPLACEMENT]=static_cast<byte>(value);
            auto *POINTER_VAR=reinterpret_cast<POINTER_TYPE*>(data+base);
            const READ_TYPE actual=read_value(POINTER_VAR);
            if (static_cast<byte>(actual) != value) return 1;
            const bool predicate=MASK ? (actual & MASK) != 0 : actual == 0;
            if (predicate != (MASK ? (value & MASK) != 0 : value == 0)) return 2;
            for (unsigned i=0; i<1024; ++i) {
                const byte expected=i==base+DISPLACEMENT ? static_cast<byte>(value) : byte(0xa5);
                if (data[i] != expected) return 3;
            }
        }
    }
    return 0;
}
'''
I386 = r'''
using byte=unsigned char;
using undefined4=unsigned int;
static_assert(sizeof(void*)==4 && sizeof(int)==4 && sizeof(undefined4)==4, "i386 expression only");
READ_TYPE read_value(POINTER_TYPE *POINTER_VAR) { return EXPRESSION; }
bool predicate(POINTER_TYPE *POINTER_VAR) { return MASK ? (EXPRESSION & MASK) != 0 : EXPRESSION == 0; }
'''

def fixture(case, expression, template=FIXTURE):
    replacements={"READ_TYPE":case["read_type"],"POINTER_TYPE":case["pointer_type"],"POINTER_VAR":case["pointer_variable"],"EXPRESSION":expression,"DISPLACEMENT":str(case["displacement"]),"MASK":str(case["predicate_mask"])}
    for old,new in replacements.items(): template=template.replace(old,new)
    return template


class ByteOffsetTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.manifest=json.loads(MANIFEST.read_text(),object_pairs_hook=unique_json)
        cls.cases=cls.manifest["cases"]
        cls.compiler=shutil.which("clang++")
        if not cls.compiler: raise unittest.SkipTest("clang++ unavailable, no compiler result claimed")

    def compile(self,path,*flags):
        return subprocess.run([self.compiler,"-std=c++17","-I",str(SUPPORT/"include"),*flags,str(path)],capture_output=True,text=True,timeout=60)

    def test_manifest_and_exact_source_reversal(self):
        self.assertEqual(hashlib.sha256(MANIFEST.read_bytes()).hexdigest(),MANIFEST_SHA)
        self.assertFalse(self.manifest["original_xbe_reauthenticated"])
        self.assertEqual(set(c["entry"] for c in self.cases),set(EXPECTED_WINDOWS))
        with (SUPPORT/"metadata/bulk_13694_inventory.csv").open() as f:
            inventory={r["entry"]:r for r in csv.DictReader(f)}
        for case in self.cases:
            self.assertEqual(inventory[case["entry"]]["original_body_sha256"],case["original_body_sha256"])
            source=(ROOT/case["source"]).read_text()
            reverse_source(source,case)
            for token in ("Entry: "+case["entry"],"Input x86 body SHA-256: "+case["original_body_sha256"],"ABI_UNVERIFIED"):
                self.assertIn(token,source)
            for bad in (source+"\n",source.replace(case["replacement"]["new"],case["replacement"]["old"],1)):
                with self.assertRaises(ValueError): reverse_source(bad,case)
            for field in ("source_before_sha256","source_after_sha256","preimage_git_blob"):
                mutated=copy.deepcopy(case);mutated[field]="0"*len(case[field])
                with self.assertRaises(ValueError): reverse_source(source,mutated)

    def test_producer_access_branch_and_every_byte_corruption(self):
        for case in self.cases:
            check_windows(case)
            for i,window in enumerate(case["instruction_windows"]):
                for j in range(len(bytes.fromhex(window["bytes"]))):
                    mutated=copy.deepcopy(case)
                    data=bytearray.fromhex(window["bytes"]);data[j]^=1
                    mutated["instruction_windows"][i]["bytes"]=data.hex()
                    with self.assertRaises(ValueError): check_windows(mutated)
                mutated=copy.deepcopy(case);mutated["instruction_windows"][i]["address"]=hex(int(window["address"],16)+1)
                with self.assertRaises(ValueError): check_windows(mutated)
            for field in ("displacement","predicate_mask"):
                mutated=copy.deepcopy(case);mutated[field]+=1
                with self.assertRaises(ValueError): check_windows(mutated)

    def test_complete_sources_objects_and_original_failure_controls(self):
        with tempfile.TemporaryDirectory() as temp:
            for case in self.cases:
                path=ROOT/case["source"]
                original=Path(temp)/(case["entry"]+".cpp")
                original.write_text(reverse_source(path.read_text(),case))
                for opt in ("-O0","-O2"):
                    for flags in (("-fsyntax-only",),("-c","-o",str(Path(temp)/(case["entry"]+opt+".o")))):
                        good=self.compile(path,opt,"-Werror=pointer-to-int-cast",*flags)
                        self.assertEqual(good.returncode,0,good.stderr)
                    bad=self.compile(original,opt,"-fsyntax-only","-Werror=pointer-to-int-cast")
                    self.assertNotEqual(bad.returncode,0)
                    self.assertEqual(bad.stderr.count("error:"),1,bad.stderr)
                    self.assertIn("cast from pointer to smaller type",bad.stderr)

    def test_byte_values_sentinels_signedness_wrong_offsets_and_scaling(self):
        with tempfile.TemporaryDirectory() as temp:
            for case in self.cases:
                typ,var,disp=case["read_type"],case["pointer_variable"],case["displacement"]
                # Model wrong scaling with byte arithmetic, avoiding typed-array
                # pointer arithmetic on the synthetic byte-only backing array.
                expressions=[("correct",case["replacement"]["new"],0),
                             ("minus_one",f"*(reinterpret_cast<{typ}*>({var}) + {disp-1})",1),
                             ("plus_one",f"*(reinterpret_cast<{typ}*>({var}) + {disp+1})",1),
                             ("scaled",f"*(reinterpret_cast<{typ}*>({var}) + {disp} * sizeof(*{var}))",1)]
                for name,expression,expected in expressions:
                    path=Path(temp)/(case["entry"]+name+".cpp");path.write_text(fixture(case,expression))
                    for opt in ("-O0","-O2"):
                        for char_flag in (("-fsigned-char","-funsigned-char") if name=="correct" else ("-fsigned-char",)):
                            exe=path.with_suffix(".out")
                            r=self.compile(path,opt,char_flag,"-Wall","-Wextra","-Werror","-pedantic-errors","-o",str(exe))
                            self.assertEqual(r.returncode,0,r.stderr)
                            r=subprocess.run([str(exe)],capture_output=True,timeout=10)
                            self.assertEqual(r.returncode,expected,(case["entry"],name,opt,char_flag,r.stderr))

    def test_header_free_i386_original_and_repaired_expressions(self):
        with tempfile.TemporaryDirectory() as temp:
            for case in self.cases:
                for name,expression in case["replacement"].items():
                    path=Path(temp)/(case["entry"]+name+".cpp");path.write_text(fixture(case,expression,I386))
                    for opt in ("-O0","-O2"):
                        r=self.compile(path,opt,"-target","i386-unknown-none-elf","-ffreestanding","-nostdinc","-Wall","-Wextra","-Werror","-pedantic-errors","-S","-o",os.devnull)
                        self.assertEqual(r.returncode,0,r.stderr)

    def test_optional_private_recorded_bodies_and_corruption(self):
        export=os.environ.get("BF_GHIDRA_EXPORT_DIR")
        if not export: self.skipTest("private Ghidra export not supplied; no private replay claimed")
        export=Path(export)
        validation=json.loads((export/"validation.json").read_text(),object_pairs_hook=unique_json)
        index={r["entry"]:r for r in validation["functions"]}
        with (export/"functions.jsonl").open("rb") as stream:
            for case in self.cases:
                record=index[case["entry"][2:]]
                self.assertEqual(record["issues"],[])
                self.assertTrue(record["byte_and_instruction_validation_pass"])
                stream.seek(record["jsonl_byte_offset"])
                data=json.loads(stream.read(record["jsonl_byte_length"]),object_pairs_hook=unique_json)
                check_record(data,case)
                for mutate in ("entry","bytes","override","coverage","ranges"):
                    bad=copy.deepcopy(data)
                    if mutate=="entry": bad["entry"]="ffffffff"
                    elif mutate=="bytes":
                        blob=bytearray.fromhex(bad["body_ranges"][0]["bytes_hex"]);blob[0]^=1
                        bad["body_ranges"][0]["bytes_hex"]=blob.hex()
                    elif mutate=="override": bad["instructions"][0]["flow_override"]="CALL_RETURN"
                    elif mutate=="coverage": bad["instructions"].pop();bad["instruction_count"]-=1
                    else: bad["body_ranges"][0]["start"]=hex(int(bad["body_ranges"][0]["start"],16)+1)
                    with self.assertRaises(ValueError): check_record(bad,case)

if __name__=="__main__": unittest.main()
