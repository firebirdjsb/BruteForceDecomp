#!/usr/bin/env python3
"""Two source-only C++17 declarations: not Xbox ABI, linkage, or behavior proof."""
import hashlib
from pathlib import Path
import re
import subprocess
import tempfile

# caller, callee, declaration, audited source preimage, patched source,
# callee draft digest, original XBE body label, source callsite, callee signature
CASES = [
    ("0024bbb0", "00248340", "extern int FUN_00248340(int);",
     "eb0bf3eb76a8da885919a541650d45a860e9af55492804c4b6637f29cfe891a6",
     "25a10c69d31d5d6276a3c5a04fbc0a6e2a72d3094d5ce5f54daaf1a1514b038e",
     "dc12d31f7f29e195649b5966140558f2ec8a65615e67946e5ced20dd3842e0e5",
     "FB673243D69EC433A86B048EDCA514E339AC38949917C28776562F776E2319CE",
     "FUN_00248340(unaff_ESI);", r"\bint\s+FUN_00248340\s*\(\s*int\s+param_1\s*\)"),
    ("002e9c60", "002e7b70", "extern int FUN_002e7b70(int,int,uint,uint);",
     "9ab5680cb99fe7ae9fef3a7b300d2d701fcd54a206811cf18514f2f5e40ea8b5",
     "ac481aa4f5ca6f32ce625a9e66f511b3a21f64913d83c39d4529b196a2b6c86f",
     "cafa1fc3455522e2d1603679b959d3e4eff861591deafeab5f74dd4d675ed1f3",
     "E72D31920D36B43889259A6AD092169921A9F27C55072A20FA56E8E1811E76CC",
     "FUN_002e7b70(*(undefined4 *)(in_ECX + 4),*(int *)(in_ECX + 0xc),*(int *)(in_ECX + 0x14),",
     r"\bint\s+FUN_002e7b70\s*\(\s*int\s+param_1\s*,\s*int\s+param_2\s*,\s*uint\s+param_3\s*,\s*uint\s+param_4\s*\)"),
]
NOTE = b"/* Source-matched C++17 declaration only; Xbox ABI_UNVERIFIED. */\n"
ROOT = Path(__file__).resolve().parents[1]


def path(entry):
    return ROOT / "src" / "main_unclassified" / ("band_" + entry[:4]) / ("0x" + entry + ".cpp")


def sha(b):
    return hashlib.sha256(b).hexdigest()


def check(b, opt):
    with tempfile.TemporaryDirectory() as d:
        f = Path(d) / "source.cpp"
        f.write_bytes(b)
        return subprocess.run(["clang++", "-std=c++17", "-fsyntax-only", "-ferror-limit=0",
                               "-Werror=pointer-to-int-cast", opt, "-I", str(ROOT / "include"), str(f)],
                              text=True, capture_output=True, check=False)


def main():
    for caller, callee, decl, old_sha, new_sha, callee_sha, body, call, signature in CASES:
        b = path(caller).read_bytes()
        addition = NOTE + (decl + "\n").encode()
        assert sha(b) == new_sha and b.count(addition) == 1
        assert b.count(body.encode()) == 1 and b.count(call.encode()) == 1
        original = b.replace(addition, b"")
        assert sha(original) == old_sha, "original Ghidra draft statements changed"
        c = path(callee).read_bytes()
        assert sha(c) == callee_sha and re.search(signature, c.decode()), "callee draft changed"
        for opt in ("-O0", "-O2"):
            good = check(b, opt)
            assert good.returncode == 0, good.stderr
            removed = check(original, opt)
            assert removed.returncode != 0 and "undeclared identifier" in removed.stderr
            bad = b.replace(decl.encode(), ("extern int FUN_" + callee + "(void);").encode())
            wrong = check(bad, opt)
            assert wrong.returncode != 0 and ("too many arguments" in wrong.stderr or
                                              "no matching function" in wrong.stderr)
        print("PASS", caller, "->", callee, "C++17 O0/O2, SHA-256, negative controls")
    print("ABI_UNVERIFIED; LINK_UNVERIFIED; BEHAVIOR_UNVERIFIED")


if __name__ == "__main__":
    main()
