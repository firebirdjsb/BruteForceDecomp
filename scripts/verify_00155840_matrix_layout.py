#!/usr/bin/env python3
"""Verify exact raw 621C0 read offsets and guarded returned object bases.

Private x86-64 Windows original-byte comparison; no universal matrix schema.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
import verify_00155840_tail_operation as tail_check

ROOT = Path(__file__).resolve().parents[1]
MATRIX_SHA = "c45fc4b215f579d4ba970255ff50cd9c6c1e44ad505f8a07ff0540fba626c757"
WINDOWS = {
    0x155a7e: "8b4d088b414883c148ff50148bc88d55988d45d4e829c7f0ff",
    0x39adf0: "90f81000",              # table+04 -> 10F890
    0x39ae00: "509a0500",              # table+14 -> 59A50
    0x59a50: "8b01ff6004",
    0x10f890: "8d41b8c3",
    0x22d39d: "c70640433900c74648ecad3900",
    0x149f50: "c70608b53900c74648ecad3900",
    0x14a026: "c70608b53900c74648ecad3900",
    0x162ece: "c706e0a83900c74648ecad3900",
    0x22d365: "33c08bcee8a2cbf1ff",    # original constructor chain
    0x149f44: "33c08bcee8e3c90000",
    0x162ec2: "33c08bcee8653affff",
    0x156967: "e8d4e9ffff",            # common base constructor155340
    0x15534d: "897e04",                # clear +04 before unknown return
    0x155381: "894604",                # unknown helper EAX -> +04
    0x155389: "66894622",              # partial 16-bit +22
    0x155398: "66897e24",              # partial 16-bit +24
    0x1553ac: "c74618ffffffff",         # raw +18 word, not fabricated float
    0x1553b3: "66c74620ffff",           # partial 16-bit +20
    0x1553b9: "c6462620",              # partial byte +26
}


def native_matrix(raw):
    if raw[:3] != bytes.fromhex("83ec08") or raw[-4:] != bytes.fromhex("83c408c3"):
        raise ValueError("Original621C0 scratch boundary mismatch")
    # Windows x64 RCX=output,RDX=coefficients,R8=vector. Bind original
    # EAX/ECX/EDX equivalents using 64-bit pointers to low guest allocations.
    prefix=bytes.fromhex("4889c84889d14c89c2")
    return prefix+b"\x48"+raw[:-4]+b"\x48"+raw[-4:]


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--xbe",type=Path,required=True)
    ap.add_argument("--clang",default=shutil.which("clang"))
    ap.add_argument("--tooldeps",type=Path)
    args=ap.parse_args()
    if sys.platform!="win32" or not args.clang:
        ap.error("Windows x64 and Clang required")
    if args.tooldeps:sys.path.insert(0,str(args.tooldeps))
    image=args.xbe.read_bytes()
    tail,getter=tail_check.authenticated(image)
    sections=tail_check.xbe_sections(image)
    for address,expected_hex in WINDOWS.items():
        expected=bytes.fromhex(expected_hex)
        if tail_check.mapped_span(image,sections,address,len(expected))!=expected:
            raise ValueError(f"Original layout window mismatch: {address:x}")
    raw=tail_check.mapped_span(image,sections,0x621c0,102)
    if hashlib.sha256(raw).hexdigest()!=MATRIX_SHA:
        raise ValueError("Original621C0 body hash mismatch")
    events,addresses=tail_check.access_trace(tail)
    native=tail_check.oracle(tail,getter)
    with tempfile.TemporaryDirectory(prefix="bf155840_layout_") as directory:
        temp=Path(directory)
        generated="static const unsigned char tail_oracle_bytes[]={"+",".join(str(b) for b in native)+"};\n"
        generated+="static const char expected_tail_events[]={"+",".join(repr(e) for e in events)+"};\n"
        generated+="static const uint32_t expected_tail_offsets[]={"+",".join(hex(a) for a in addresses)+"};\n"
        generated+="static const unsigned char matrix_oracle_bytes[]={"+",".join(str(b) for b in native_matrix(raw))+"};\n"
        (temp/"tail_private_oracle.h").write_text(generated,encoding="utf-8")
        sources={p.name:p.read_text(encoding="utf-8") for p in (ROOT/"include").glob("bf_00155840*.h")}
        def restore():
            for name,source in sources.items():(temp/name).write_text(source,encoding="utf-8")
        restore()
        for optimization in ("-O0","-O2"):
            flags=[args.clang,"-std=c11",optimization,"-Wall","-Wextra","-Werror","-pedantic-errors",
                   "-ffp-contract=off","-I",str(temp),"-I",str(ROOT/"include")]
            def run(test,label):
                exe=temp/(label+optimization+".exe")
                subprocess.run([*flags,str(ROOT/"tests"/test),"-o",str(exe)],check=True)
                return subprocess.run([str(exe)],capture_output=True,text=True)
            for test in ("test_00155840_matrix_layout.c","test_00155840_concrete_frame.c"):
                result=run(test,test)
                if result.returncode:raise RuntimeError(result.stdout+result.stderr)
                print(optimization+": "+result.stdout.strip())
            bridge="bf_00155840_x87_call_bridge.h"
            for name,old,new in (("shift-first-coefficient","r.ecx_guest + 8u","r.ecx_guest + 4u"),
                                 ("shift-final-coefficient","r.ecx_guest + 44u","r.ecx_guest + 40u")):
                if sources[bridge].count(old)!=1:raise ValueError("Negative-control anchor changed")
                (temp/bridge).write_text(sources[bridge].replace(old,new),encoding="utf-8")
                result=run("test_00155840_matrix_layout.c",name)
                restore()
                if result.returncode==0 or "memcmp(actual,expected,12)" not in result.stderr:
                    raise RuntimeError("Coefficient negative control did not fail arithmetic: "+name+result.stderr)
                print(optimization+": rejected "+name)
            concrete="bf_00155840_concrete_virtual.h"
            start=sources[concrete].index("    if (!mem->read_u32(mem->ctx,receiver_ecx-UINT32_C(0x48)")
            end=sources[concrete].index("    *eax_after_call",start)
            mutant=sources[concrete][:start]+"    (void)primary;\n"+sources[concrete][end:]
            (temp/concrete).write_text(mutant,encoding="utf-8")
            result=run("test_00155840_concrete_frame.c","remove-layout-guard")
            restore()
            if result.returncode==0 or "!bf_00155840_known_matrix_virtual" not in result.stderr:
                raise RuntimeError("Invented first-float negative control survived: "+result.stderr)
            print(optimization+": rejected remove-layout-guard")
    print(f"PASS pinned original621C0 body and {len(WINDOWS)} constructor/dispatch/read windows")
    print("Returned object fields remain raw/unresolved; no caller integration or matrix initialization claim")


if __name__=="__main__":main()
