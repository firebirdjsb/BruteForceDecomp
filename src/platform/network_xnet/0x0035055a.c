/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A89089D7B8088677548578D0B3A8CA5D8F7083A83FDE3D81D4A83639CC848CA
 * Entry: 0x0035055a, Ghidra index: 13050, label: FUN_0035055a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_0035055a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint in_ECX;
  undefined4 uStack_8;
  
  uStack_8 = in_ECX & 0xffffff;
  iVar1 = FUN_0034fedf(in_ECX + 0xf0,param_1 + -0xf0,param_2,param_3,param_4,param_5,param_6,
                       (int)&uStack_8 + 3);
  if (iVar1 == 0) {
    if ((uStack_8 & 0x1000000) != 0) {
      iVar1 = FUN_0034fedf(in_ECX + 0x6c,0x80,param_2,param_3,param_4,param_5,param_6,0);
      if (iVar1 != 0) goto LAB_003505df;
    }
    if ((uStack_8 & 0x2000000) != 0) {
      iVar1 = FUN_0034fedf(in_ECX + 0x2c,0x40,param_2,param_3,param_4,param_5,param_6,0);
      if (iVar1 != 0) goto LAB_003505df;
    }
    uVar2 = 0;
  }
  else {
LAB_003505df:
    uVar2 = 1;
  }
  return uVar2;
}
