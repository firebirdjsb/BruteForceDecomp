/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70860AA0CB61D701FC7F14BA1A94120F45602FC2F96207563E93D79B27EC0030
 * Entry: 0x0017db30, Ghidra index: 5087, label: FUN_0017db30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017db30(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  for (param_2 = param_2 - (int)param_1; 1 < param_2 >> 2; param_2 = param_2 + -4) {
    uVar1 = *(undefined4 *)((int)param_1 + param_2 + -4);
    *(undefined4 *)((int)param_1 + param_2 + -4) = *param_1;
    FUN_0017dfe0(param_1,uVar1,param_3);
  }
  return;
}
