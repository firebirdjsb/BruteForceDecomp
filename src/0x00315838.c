/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D158D0CCD65EF260CAF2DE3C9B121BD3FB57E78D1130CAD0FCD7B15BC7AF0A1
 * Entry: 0x00315838, Ghidra index: 12105, label: FUN_00315838
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00315838(uint param_1,int *param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (**(int **)(in_ECX + 0x20) - 1U < param_1) {
    uVar1 = 0x88780032;
  }
  else {
    *param_2 = (int)(*(int **)(in_ECX + 0x20) + param_1 * 8 + 2);
    uVar1 = 0;
  }
  return uVar1;
}
