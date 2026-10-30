/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9DCA0E2C4052C41428691A1204F484A97E9FF03A5AD69DC2E9F5F1804C83506C
 * Entry: 0x002ccff0, Ghidra index: 10161, label: FUN_002ccff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ccff0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  for (; iVar1 = *param_1, iVar1 != 0; param_1 = (int *)((int)param_1 + iVar1)) {
    FUN_002ccff0(param_1 + 7,param_2);
  }
  FUN_002b98e0(param_1[1] + (int)param_1);
  return;
}
