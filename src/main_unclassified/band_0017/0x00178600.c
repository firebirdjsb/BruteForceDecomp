/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 29637160170C8A926BC15DFAC885405744BA0FEA2BF03CAFF285269BCE6ED2E0
 * Entry: 0x00178600, Ghidra index: 4966, label: FUN_00178600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00178600(void)

{
  int in_ECX;
  uint uVar1;
  
  if (-1 < (int)*(uint *)(in_ECX + 0x10)) {
    if (*(int *)(in_ECX + 4) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x1c;
    }
    if (*(uint *)(in_ECX + 0x10) < uVar1) {
      return 1;
    }
  }
  return 0;
}
