/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8F6EA0D02CAC39E000903D382821F92AF94C602C89ACEE1702B549180402417
 * Entry: 0x000a24a0, Ghidra index: 1923, label: FUN_000a24a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000a24a0(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  uVar2 = 0;
  if (((-1 < (int)param_1) && (iVar1 = *(int *)(in_ECX + 8), iVar1 != 0)) &&
     (param_1 < (uint)(*(int *)(in_ECX + 0xc) - iVar1 >> 2))) {
    uVar2 = (**(code **)(**(int **)(iVar1 + param_1 * 4) + 4))();
  }
  return uVar2;
}
