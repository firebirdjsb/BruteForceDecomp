/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3168C2F158D8FF03CE6AC73A4DCEFE6F2123D20876D80CE2CE00D58097489490
 * Entry: 0x00051470, Ghidra index: 738, label: FUN_00051470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00051470(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (*(int *)*param_2 < *(int *)*param_1) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  if (*(int *)*param_3 < *(int *)*param_2) {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  if (*(int *)*param_2 < *(int *)*param_1) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}
