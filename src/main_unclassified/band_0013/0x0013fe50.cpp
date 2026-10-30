/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E20402D767D5239C56EC05CFD83F2975BCF0F633707F695AD0BECC57F625B9B0
 * Entry: 0x0013fe50, Ghidra index: 4069, label: FUN_0013fe50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0013fe50(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  
  if ((*(int *)(in_ECX + 0x10) != 0) &&
     (((*(byte *)(*(int *)(in_ECX + 0x10) + 0x70) & 1) == 0 || ((*(byte *)(in_ECX + 0x44) & 1) != 0)
      ))) {
    if ((*(byte *)(in_ECX + 0x44) & 2) == 0) {
      iVar1 = FUN_0013fde0(param_1);
      if (iVar1 != 0) {
        FUN_0013fbf0(param_1,iVar1);
        return 1;
      }
    }
    else {
      for (iVar1 = *(int *)(in_ECX + 0x28); iVar1 != *(int *)(in_ECX + 0x2c); iVar1 = iVar1 + 0x2c)
      {
        FUN_0013fbf0(param_1,iVar1);
      }
    }
  }
  return 1;
}
