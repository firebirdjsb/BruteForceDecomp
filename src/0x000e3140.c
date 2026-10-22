/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B2751361ED9ECC709EA1779431E87229268971B6FFE37AECD4D5249BED824E2
 * Entry: 0x000e3140, Ghidra index: 2808, label: FUN_000e3140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e3140(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  for (param_2 = param_2 - (int)param_1; 1 < param_2 >> 2; param_2 = param_2 + -4) {
    uVar1 = *(undefined4 *)((int)param_1 + param_2 + -4);
    *(undefined4 *)((int)param_1 + param_2 + -4) = *param_1;
    FUN_000e3ad0(param_1,0,param_2 + -4 >> 2,uVar1,param_3);
  }
  return;
}
