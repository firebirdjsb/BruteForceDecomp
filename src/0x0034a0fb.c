/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7521BFBA8FBAA14B4082400BF2BAEC3A0A1E369FA829FF69515F2C6825459E28
 * Entry: 0x0034a0fb, Ghidra index: 12926, label: FUN_0034a0fb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0034a0fb(undefined4 param_1)

{
  byte *pbVar1;
  int in_ECX;
  undefined4 uVar2;
  
  KeRaiseIrqlToDpcLevel();
  pbVar1 = (byte *)FUN_00348472(param_1);
  if ((pbVar1 == (byte *)0x0) || (pbVar1 == *(byte **)(in_ECX + 0xae8))) {
LAB_0034a135:
    uVar2 = 0x2726;
  }
  else {
    if ((*pbVar1 & 3) == 0) {
      FUN_00349730(pbVar1,1);
    }
    else {
      if (pbVar1[2] == 1) goto LAB_0034a135;
      FUN_0034964a(pbVar1,1);
    }
    uVar2 = 0;
  }
  KfLowerIrql();
  return uVar2;
}
