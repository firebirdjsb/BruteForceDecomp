/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 759A59B65D2A241BDD11D6C681FA7135D8D350BAEAE07F15D6F2CFFF0E94849D
 * Entry: 0x0034c772, Ghidra index: 12967, label: FUN_0034c772
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034c772(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  undefined1 local_218 [512];
  undefined1 local_18 [20];
  
  uVar1 = FUN_00352eeb(local_218,0x200);
  FUN_0034c3e0(param_1 + 0x10,0x14,param_1 + 8,8,local_218,uVar1,local_18,0x14);
  iVar2 = in_ECX + 0x84;
  XcRC4Key(iVar2,0x14,local_18);
  XcRC4Crypt(iVar2,0x100,local_218);
  XcRC4Crypt(iVar2,0x14,param_1 + 0x10);
  return;
}
