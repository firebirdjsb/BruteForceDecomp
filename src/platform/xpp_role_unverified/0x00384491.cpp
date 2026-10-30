/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D1A2F6938D3BBA0C89DF929FFDD63F992F9652F455689A1B0E6A6AF3D79263F
 * Entry: 0x00384491, Ghidra index: 13646, label: FUN_00384491
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00384491(undefined4 param_1,undefined4 param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_00380fc4();
  if ((*pbVar1 & 2) == 0) {
    if (*(short *)(pbVar1 + 0x3a) == 0) {
      FUN_003843be(param_2);
    }
    else {
      FUN_00383d44(param_2);
    }
  }
  else {
    FUN_00383ffe(param_2);
  }
  return;
}
