#!/usr/bin/env python3
"""Verify only 0x00237F00's original 0x104-byte guest scratch-buffer aliases.

The original 228-byte function and 20 opcode sites are checked when --xbe is
provided locally. GitHub CI uses source negative controls and isolated Clang.
Platform API ABI, guest address translation, formatting semantics, output and
native runtime remain unverified.
"""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

import argparse,hashlib,re,shutil,struct,subprocess
from pathlib import Path

IMAGE_SHA='b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
BODY_SHA='c1fa422f4af19bbd850bb89527c3139c36dae504a5771f8cdea71327ec9d804e'
START=0x00237F00
END=START+228
SITES={
  0x00237F00:'a0495b4a00',0x00237F05:'81ec04010000',
  0x00237F1C:'53',0x00237F28:'a1405b4a00',
  0x00237F35:'8b84240c010000',0x00237F3C:'50',
  0x00237F45:'68306c4000',0x00237F4A:'8d542414',
  0x00237F4E:'6804010000',0x00237F53:'52',
  0x00237F54:'e8c02a0b00',0x00237F59:'8d44241c',
  0x00237F5D:'50',0x00237F5E:'e8226a0c00',
  0x00237F63:'83c41c',0x00237F70:'6800000040',
  0x00237F75:'8d4c241c',0x00237F79:'51',
  0x00237F7A:'e8c0ab0b00',0x00237FDD:'81c404010000',
  0x00237FE3:'c3',
}
SRC=Path('src/main_unclassified/band_0023/0x00237f00.c')
FLAGS=['-std=c11','-fsyntax-only','-ferror-limit=3',
 '-Wno-implicit-function-declaration','-Wno-int-conversion',
 '-Wno-incompatible-pointer-types','-Wno-pointer-to-int-cast',
 '-Wno-int-to-pointer-cast','-Wno-return-type',
 '-Wno-deprecated-non-prototype']

def check_source(source):
 if ('Input x86 body SHA-256: '+BODY_SHA.upper() not in source or
     'Entry: 0x00237f00,' not in source or
     'ABI_UNVERIFIED' not in source):
  raise ValueError('Source lost function-body identity or native ABI caveat')
 c=re.sub(r'/\*.*?\*/|//[^\n]*','',source,flags=re.S)
 for token in (
    'char guest_log_path[0x104];',
    '_Static_assert(sizeof(guest_log_path) == 0x104,',
    'FUN_002eaa19(guest_log_path,0x104,',
    'thunk_FUN_002fe95d(guest_log_path);',
    'iVar1 = FUN_002f2b3f(guest_log_path,0x40000000,0,0,2,0,0);',
 ):
  if c.count(token)!=1:raise ValueError('Changed guest buffer contract: '+token)
 if re.search(r'\bstack0x[0-9a-fA-F]+\b',c):
  raise ValueError('Synthetic Ghidra stack identifier remains')
 if c.find('char guest_log_path[0x104];')>c.find('FUN_002eaa19(guest_log_path'):
  raise ValueError('Buffer storage must precede first use')
 if re.search(r'\bguest_log_path\s*\[[^]]+\]\s*=(?!=)|\bmemset\s*\(\s*guest_log_path',c):
  raise ValueError('Invented buffer contents/initialization')

def negative_source(original):
 muts=(
 ('char guest_log_path[0x104];','char guest_log_path[0x100];'),
 ('char guest_log_path[0x104];','char guest_log_path[0x105];'),
 ('0x104,s_d__mem','0x100,s_d__mem'),
 ('thunk_FUN_002fe95d(guest_log_path);','thunk_FUN_002fe95d(0);'),
 ('FUN_002f2b3f(guest_log_path,','FUN_002f2b3f(0,'),
 ('FUN_002eaa19(guest_log_path,','FUN_002eaa19(&guest_log_path[1],'),
 ('  if ((DAT_004a5b49','  guest_log_path[0]=0;\n  if ((DAT_004a5b49'),
 )
 for old,new in muts:
  bad=original.replace(old,new)
  if bad==original:raise ValueError('Mutation did not alter source')
  try:check_source(bad)
  except ValueError:continue
  raise ValueError('Negative source mutation escaped verifier: '+old)
 return len(muts)

def verify_xbe(data):
 if hashlib.sha256(data).hexdigest()!=IMAGE_SHA:
  raise ValueError('Wrong original Xbox XBE')
 if data[:4]!=b'XBEH':raise ValueError('Bad XBE header')
 base=struct.unpack_from('<I',data,0x104)[0]
 cnt,tbl=struct.unpack_from('<II',data,0x11c)
 secs=[struct.unpack_from('<IIIII',data,tbl-base+i*56) for i in range(cnt)]
 def read(va,n):
  for _,v,vs,raw,rs in secs:
   if v<=va and va+n<=v+min(vs,rs):return data[raw+va-v:raw+va-v+n]
  raise ValueError('Original guest VA unmapped: '+hex(va))
 if hashlib.sha256(read(START,END-START)).hexdigest()!=BODY_SHA:
  raise ValueError('Original function SHA mismatch')
 for va,opcode in SITES.items():
  if read(va,len(opcode)//2)!=bytes.fromhex(opcode):
   raise ValueError('Instruction mismatch at '+hex(va))
 for site,end,target in (
     (0x00237F54,0x00237F59,0x002EAA19),
     (0x00237F5E,0x00237F63,0x002FE985),
     (0x00237F7A,0x00237F7F,0x002F2B3F)):
  offset=struct.unpack('<i',read(site+1,4))[0]
  if end+offset!=target:
   raise ValueError('Original direct-call edge not preserved: '+hex(site))
 # An LEA changed in an otherwise-matching image must fail the local contract.
 mutation=bytearray(data)
 for _,v,vs,raw,rs in secs:
  if v<=0x00237F75<v+min(vs,rs):
   mutation[raw+0x00237F75-v]^=1
   break
 else:raise ValueError('Original mutation site not found')
 if bytes(mutation)==data or mutation[raw+0x00237F75-v]==data[raw+0x00237F75-v]:
  raise ValueError('Invalid binary mutation negative control')
 # Check the mutated opcode at the same guest VA through its section mapping.
 for _,secva,vs,off,rs in secs:
  if secva<=0x00237F75<secva+min(vs,rs):
   bad=bytes(mutation[off+0x00237F75-secva:off+0x00237F75-secva+4]);break
 if bad==bytes.fromhex(SITES[0x00237F75]):
  raise ValueError('Corrupted LEA unexpectedly matches')

def main():
 ap=argparse.ArgumentParser(description=__doc__)
 ap.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
 ap.add_argument('--xbe',type=Path)
 args=ap.parse_args();root=args.root.resolve()
 s=(root/SRC).read_text()
 check_source(s);negative_source(s)
 clang=shutil.which('clang')
 if not clang:raise RuntimeError('Clang missing')
 for opt in ('-O0','-O2'):
  p=subprocess.run([clang,*FLAGS,opt,'-I',str(root/'include'),str(root/SRC)],capture_output=True,text=True,timeout=60)
  if p.returncode:raise ValueError('Clang '+opt+': '+p.stderr[-2500:])
 if args.xbe:verify_xbe(args.xbe.read_bytes())
 print(f'PASS 0x00237F00: {len(SITES)} x86 opcode windows, 3 call edges, 7 source mutations, '
       'Clang O0/O2; original XBE '+('verified' if args.xbe else 'not supplied')+'; '
       'host API and runtime UNVERIFIED')
if __name__=='__main__':main()