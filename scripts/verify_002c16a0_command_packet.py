#!/usr/bin/env python3
"""Pin the original 0x002C16A0 0x81C-byte stack command packet.

Source/Clang CI is not proof of the Xbox indirect dispatch, implicit ESI/ECX
register ABI, native pointer identity, or uninitialized guest frame contents.
The original XBE can optionally be authenticated and byte-checked via --xbe.
"""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

import argparse
import hashlib
import re
import subprocess
from pathlib import Path

SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE="src/main_unclassified/band_002c/0x002c16a0.c"
SITES=(
 (0x002c16af,"81ec1c080000","reserve 0x81c guest stack bytes"),
 (0x002c16c8,"c744241400000000","initialize field +0x14"),
 (0x002c16d0,"89742400","store original incoming ESI into field +0"),
 (0x002c16d4,"c784241808000000000000","initialize last DWORD at +0x818"),
 (0x002c16df,"c744240400000000","initialize second DWORD at +4"),
 (0x002c171c,"8d4c2400","address full guest command packet"),
 (0x002c1720,"57","push saved EDI as input to dispatcher"),
 (0x002c1721,"51","push command packet address"),
 (0x002c1722,"ff1485e83d4400","dispatch original mode-dependent virtual call"),
 (0x002c17a0,"8d4c2404","address second DWORD in repeat call"),
 (0x002c17a7,"51","push repeat output pointer"),
 (0x002c17a8,"ff1485e83d4400","repeat indirect mode-dependent call"),
 (0x002c17c3,"81c41c080000","release original 0x81c frame"),
)
def source_without_comments(s):
 return re.sub(r"/\*.*?\*/|//[^\n]*","",s,flags=re.S)
def check_source(root):
 text=(root/SOURCE).read_text(encoding="utf8")
 s=source_without_comments(text)
 assert "Entry: 0x002c16a0," in text and "ABI_UNVERIFIED" in text
 for needle in (
  "uint32_t guest_command_words[0x207];",
  "_Static_assert(sizeof(guest_command_words)==0x81c,",
  "guest_command_words[0] = (uint32_t)(uintptr_t)unaff_ESI;",
  "guest_command_words[1] = 0;",
  "guest_command_words[5] = 0;",
  "guest_command_words[0x206] = 0;",
  "(guest_command_words);",
 ):
  assert needle in s,f"missing guest packet contract: {needle}"
 assert s.count("(guest_command_words);")==2
 assert "stack0xfffff7e4" not in s
 print("PASS 0x002C16A0 packet width and four observed writes only")
def check_clang(root):
 cmd=["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
      "-Wno-implicit-function-declaration","-Wno-int-conversion",
      "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
      "-Wno-int-to-pointer-cast","-Wno-return-type",
      "-Wno-deprecated-non-prototype","-I",str(root/"include"),str(root/SOURCE)]
 p=subprocess.run(cmd,text=True,capture_output=True)
 assert p.returncode==0,p.stderr[:1800]
 print("PASS 0x002C16A0 isolated Clang C11")
def check_xbe(path):
 data=path.read_bytes()
 assert hashlib.sha256(data).hexdigest()==SHA,"wrong original Xbox XBE"
 for va,code,label in SITES:
  expected=bytes.fromhex(code)
  actual=data[va-0x10000:va-0x10000+len(expected)]
  assert actual==expected,f"0x{va:08X} {label}: {actual.hex()} != {code}"
 print(f"PASS {len(SITES)} original Xbox instruction windows")
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
 p.add_argument("--xbe",type=Path)
 p.add_argument("--clang",action="store_true")
 a=p.parse_args()
 check_source(a.root)
 if a.clang:check_clang(a.root)
 if a.xbe:check_xbe(a.xbe)
 else:print("NOTE: no original XBE on CI; native ABI not certified")
if __name__=="__main__":main()
