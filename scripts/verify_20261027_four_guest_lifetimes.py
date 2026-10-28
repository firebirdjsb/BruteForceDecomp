#!/usr/bin/env python3
"""Four original-x86-backed C11 repairs: SSE reciprocal and three guest lifetimes.

Proves exact instruction bytes only with private --xbe, plus source invariants
and isolated host Clang C11. No Xbox calling-convention or native ABI proof.
"""
import argparse
import hashlib
import subprocess
from pathlib import Path
XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CASE={
 "0x000bf7a0":{
  "path":"src/main_unclassified/band_000b/0x000bf7a0.c",
  "body":"762D235EBA97653EA681FA7726DE9FCF54CD4D582A8662525AAC0420ED6163F7",
  "required":("include <xmmintrin.h>", "_mm_cvtss_f32(_mm_rcp_ss(_mm_set_ss((float)fVar11)))"),
  "absent":("auVar13._0_4_","auVar13 = rcpss("),
  "ops":{0x000BF92C:"d95c2418",0x000BF938:"f30f104c2418",0x000BF942:"f30f53c9",0x000BF94A:"0fc6c900",0x000BF952:"0f59c1"}
 },
 "0x00116480":{
  "path":"src/main_unclassified/band_0011/0x00116480.c",
  "body":"B6E368F2832B3AE39C1B6F077D2F8396CCF5DAABA517282735BA109FA08341D0",
  "required":("float guest_scalar_14;","guest_scalar_14 = *(float *)(iVar1 + 0x14);","fVar8 = guest_scalar_14;","<= guest_scalar_14","local_44 = (undefined4 *)FUN_00061500(&local_48);"),
  "absent":("(float)local_44",),
  "ops":{0x0011664F:"8b5014",0x00116655:"8b4818",0x00116682:"f30f1045e8",0x00116687:"f30f5d45e4",0x001166A2:"f30f5d45e0"}
 },
 "0x00234f90":{
  "path":"src/main_unclassified/band_0023/0x00234f90.c",
  "body":"5EDF9E9094205A6D79F450F94AF030BE53CF04A2A97DD2B9186B92996F35135A",
  "required":("float guest_position_z_sum;","guest_position_z_sum = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 6);","local_13c[1] = uVar5;"),
  "absent":("local_13c = (undefined4 *)((float)param_1[0x14]",),
  "ops":{0x00235085:"8b8424c4010000",0x0023508C:"d94050",0x0023508F:"d84018",0x00235092:"d99c2484000000"}
 },
 "0x000df0a0":{
  "path":"src/main_unclassified/band_000d/0x000df0a0.c",
  "body":"535B97EE2226120C0102B5C920BE589601911008A3645A59F7E38FB57EC884A3",
  "required":("((uint32_t *)local_8)[7]","(float *)(uintptr_t)*(uint32_t *)pfVar16","pfVar16 != (float *)0x0"),
  "absent":("(float *)local_8[7]","(float *)*pfVar16"),
  "ops":{0x000DF22F:"8b6a1c",0x000DF232:"85ed",0x000DF2D2:"8b6d00",0x000DF2D5:"85ed"}
 }
}
def xbe_at(data,addr,n):
    assert data[:4]==b"XBEH"
    base=int.from_bytes(data[0x104:0x108],"little")
    count=int.from_bytes(data[0x11c:0x120],"little")
    table=int.from_bytes(data[0x120:0x124],"little")-base
    for i in range(count):
        off=table+56*i
        va=int.from_bytes(data[off+4:off+8],"little")
        raw=int.from_bytes(data[off+12:off+16],"little")
        length=int.from_bytes(data[off+16:off+20],"little")
        if va<=addr and addr+n<=va+length:
            k=raw+addr-va
            return data[k:k+n]
    raise AssertionError(hex(addr))
def check(root,xbe):
    data=xbe.read_bytes() if xbe else None
    if data is not None:assert hashlib.sha256(data).hexdigest()==XBE_SHA,"Wrong original XBE"
    for entry,case in CASE.items():
        s=(root/case["path"]).read_text(encoding="utf8")
        assert "Input x86 body SHA-256: "+case["body"] in s,entry
        assert "Entry: "+entry in s
        for t in case["required"]:assert t in s,(entry,t)
        for t in case["absent"]:assert t not in s,(entry,t)
        # 0x000bf7a0 now has connected twelve-byte storage and a scoped
        # producer operation. Check its full source, like the other cases.
        # This still proves neither an original entry ABI nor runtime parity.
        subprocess.run(["clang","-std=c11","-fsyntax-only","-ferror-limit=0",
         "-Wno-implicit-function-declaration","-Wno-int-conversion",
         "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast","-Wno-return-type","-Wno-deprecated-non-prototype",
             "-I",str(root/"include"),str(root/case["path"])],check=True)
        if data:
            for addr,op in case["ops"].items():
                assert xbe_at(data,addr,len(op)//2)==bytes.fromhex(op),hex(addr)
        print("PASS",entry,"isolated C11/guest32 source"+("/original x86" if data else " (no private XBE)"))
    print("NOTE native linking, guest pointer translation, full behavioral equivalence UNVERIFIED")
if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    a=p.parse_args()
    check(a.root,a.xbe)
