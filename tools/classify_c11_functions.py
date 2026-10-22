#!/usr/bin/env python3
"""Group source functions by verified XBE location and observed references.
Source syntax/labels are NOT proof of executable calling behavior.
"""
import csv
import re
from collections import Counter, defaultdict
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
OUT=ROOT/"metadata"/"function_groups"
OUT.mkdir(parents=True,exist_ok=True)
SECTIONS=[
(".text",0x12000,0x3118b0),("DSOUND",0x3118c0,0x33001c),
("XONLINE",0x330020,0x344f0c),("XNET",0x344f20,0x356c80),
("BINK",0x356c80,0x36438c),("BINK32",0x3643a0,0x365605),
("BINK32A",0x365620,0x366b99),("BINK16",0x366ba0,0x367ebc),
("BINK4444",0x367ec0,0x369460),("BINK5551",0x369460,0x36a594),
("BINKYUY2",0x36a5a0,0x36b448),("BINK16MX",0x36b460,0x36b590),
("BINK16X2",0x36b5a0,0x36baf8),("BINK16M",0x36bb00,0x36bcf8),
("BINK32MX",0x36bd00,0x36bebc),("BINK32X2",0x36bec0,0x36c44c),
("BINK32M",0x36c460,0x36c5ac),("D3D",0x36c5c0,0x37ec94),
("XPP",0x37eca0,0x38633c)]
LABELS={
".text":"Main executable/engine/runtime mixture — exact role unknown",
"DSOUND":"Xbox audio library support", "XONLINE":"Xbox online support",
"XNET":"Xbox networking support", "D3D":"Xbox graphics support",
"XPP":"XPP section — purpose unverified"}
CALL=re.compile(r"\bFUN_([0-9a-fA-F]{8})\s*\(")
from body_hash_labels import read_body_digest
def section(va):
    for name,start,end in SECTIONS:
        if start<=va<end:return name
    return "(unmapped)"
def desc(name):
    return "Bink video format/playback support" if name.startswith("BINK") else LABELS.get(name,"Unknown")
def readroles():
    p=ROOT/"metadata"/"asm_supported_readable_names.csv"
    result={}
    if p.exists():
        with p.open(encoding="utf-8",newline="") as f:
            for r in csv.DictReader(f):
                result[r["entry"].lower()]=r["readable_alias"]
    return result
def main():
    paths=sorted((ROOT/"src").glob("0x????????.c"))
    if len(paths)!=13694:
        raise SystemExit("Expected 13694 sources; found "+str(len(paths)))
    roles=readroles()
    rows=[]
    counts=Counter()
    groups=Counter()
    for p in paths:
        entry=p.stem.lower()
        va=int(entry,16)
        sec=section(va)
        content=p.read_text(encoding="utf-8",errors="replace")
        refs={int(m.group(1),16) for m in CALL.finditer(content)}
        refs.discard(va)
        deps=sorted({section(x) for x in refs if section(x) not in (".text","(unmapped)")})
        if sec==".text":
            if deps:group="MAIN-references-"+"+".join(deps)
            else:group="MAIN-undetermined-address-band-"+format(va>>16,"04X")
        else:group="LIBRARY-"+sec
        embedded_hash, hash_conflict=read_body_digest(content)
        risks=[]
        if hash_conflict:risks.append("conflicting-embedded-body-hashes")
        if re.search(r"\bstack0x[0-9a-f]+",content,re.I):risks.append("unresolved-stack")
        if re.search(r"\b(?:in|unaff|extraout)_(?:EAX|EBX|ECX|EDX|ESI|EDI)",content):risks.append("implicit-register")
        if "rsqrtss" in content or "in_XMM" in content:risks.append("SIMD")
        if "float10" in content:risks.append("x87")
        if "ABI_UNVERIFIED" in content:risks.append("ABI-unverified")
        row={
            "entry":entry,"section":sec,"functional_domain_supported_by_section":desc(sec),
            "group":group,"readable_role":roles.get(entry,"UNKNOWN"),
            "role_evidence":"assembly-reviewed" if entry in roles else "unverified",
            "observed_library_call_references":";".join(deps),
            "named_call_targets_in_C":len(refs),
            "original_body_sha256_embedded":embedded_hash or "",
            "review_flags":";".join(risks),"source_file":p.relative_to(ROOT).as_posix()}
        rows.append(row);counts[sec]+=1;groups[group]+=1
    with (OUT/"all_13694_functions.csv").open("w",newline="",encoding="utf-8") as f:
        writer=csv.DictWriter(f,fieldnames=rows[0].keys())
        writer.writeheader();writer.writerows(rows)
    with (OUT/"groups_summary.csv").open("w",newline="",encoding="utf-8") as f:
        writer=csv.writer(f)
        writer.writerow(["group","count","meaning"])
        for grp,n in sorted(groups.items(),key=lambda v:(-v[1],v[0])):
            writer.writerow([grp,n,"Location/reference based, not verified game mechanic"])
    with (OUT/"README.md").open("w",encoding="utf-8") as f:
        f.write("# All 13,694 function groups\n\n")
        f.write("This index uses original XBE section ranges and references in the current C draft files.\n")
        f.write("Unknown functions are NOT renamed to unproven gameplay roles. Name aliases are only taken from reviewed evidence.\n")
        f.write("The main .text section mixes game, engine and statically linked library functions.\n")
        f.write("Group IDs are address bands or observed platform-library references, NOT true original architecture modules.\n")
        f.write("A source call expression does not prove an executed machine-code call; virtual and indirect calls are incomplete.\n")
        f.write("Original XBE SHA256: B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721\n\n")
        for key,n in counts.most_common():f.write("* "+key+": "+str(n)+" discovered functions\n")
    print("Grouped",len(rows),"functions across",len(groups),"evidence-limited categories")
if __name__=="__main__":main()
