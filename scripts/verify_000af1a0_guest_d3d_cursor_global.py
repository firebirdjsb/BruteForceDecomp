#!/usr/bin/env python3
"""Pin original guest Direct3D command-cursor pointer at 0x0037DD88.

This regression checks exact declaration and XBE instructions, NOT
function C11 syntax or Windows/Linux/Android D3D guest memory mapping.
The function has additional known source type errors until repaired.
"""
import argparse
import hashlib
from pathlib import Path

SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SRC = "src/main_unclassified/band_000a/0x000af1a0.c"
SITES = (
 (0x000af5b7,"8b1588dd3700","read original guest device cursor pointer"),
 (0x000af5f6,"8902","store updated cursor through EDX"),
 (0x000af813,"8b0d88dd3700","read original guest device pointer again"),
 (0x000af829,"8901","store updated cursor through ECX"),
 (0x000af8e2,"8b3588dd3700","related original guest device command writer"),
)
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
 p.add_argument("--xbe",type=Path)
 a=p.parse_args()
 s=(a.root/SRC).read_text(encoding="utf8")
 assert "Entry: 0x000af1a0," in s and "Input x86 body SHA-256:" in s
 assert "ABI_UNVERIFIED" in s or "UNVERIFIED" in s
 assert s.count("extern uint32_t *D3D8__D3D_g_pDevice;") == 1
 assert "0x0037DD88" in s
 assert s.count("puVar7 = D3D8__D3D_g_pDevice;") == 1
 assert "puVar6 = D3D8__D3D_g_pDevice" in s
 print("PASS original guest Direct3D command-cursor pointer type and uses")
 if a.xbe:
  b=a.xbe.read_bytes()
  assert hashlib.sha256(b).hexdigest()==SHA,"wrong original Xbox executable"
  for va,hexbytes,why in SITES:
   expected=bytes.fromhex(hexbytes)
   got=b[va-0x10000:va-0x10000+len(expected)]
   assert got==expected,f"0x{va:08X}: {why}, found {got.hex()}"
  print(f"PASS {len(SITES)} original XBE instruction windows")
 else:print("NOTE: original XBE instruction validation is local-only")
 print("NOTE: this check does not assert isolated C11 compile success")
if __name__=="__main__":
 main()
