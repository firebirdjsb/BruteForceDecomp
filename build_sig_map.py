import re, glob, json
SIG_RE = re.compile(r'^\s*(?:extern\s+)?([\w:*&\[\]]+?)\s+(FUN_0[0-9a-f]{7})\s*\(([^)]*)\)\s*\{?\s*$')
callee_sig = {}
for f in glob.glob("src/**/*.cpp", recursive=True):
    text = open(f, encoding="utf-8", errors="replace").read()
    for line in text.splitlines():
        m = SIG_RE.match(line)
        if m and ")" not in m.group(1):
            name = m.group(2)
            if name not in callee_sig:
                callee_sig[name] = f"{m.group(1).strip()} {name}({m.group(3).strip()})"
print("total callees with signatures:", len(callee_sig))
top = ["FUN_002ea01d","thunk_FUN_00237ec0","FUN_000120f0","FUN_0008f6a0",
       "FUN_0008f6e0","SQRT","FUN_0001fed0","FUN_00012090","FUN_0001c460"]
for t in top:
    print(t, "->", callee_sig.get(t, "NOT IN TREE"))
json.dump(callee_sig, open("callee_sig_map.json", "w"), indent=2)
