/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB0425AD05CEDE9B420BDA767B5AA703D37620C397003E024FF6F41FC4773B66
 * Entry: 0x003439f6, Ghidra index: 12720, label: FUN_003439f6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003439f6(undefined4 *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  
  if (param_4 != (int *)0x0) {
    *param_4 = (int)param_1;
  }
  if (param_5 == (int *)0x0) {
    if (param_3 != 0) goto LAB_00343a22;
  }
  else {
    if (param_3 == 0) {
      param_2 = param_1[9] + param_2;
      goto LAB_00343a56;
    }
LAB_00343a22:
    param_2 = (param_1[5] - param_1[9]) + param_1[4];
  }
  iVar1 = FUN_00343900(*param_1,param_1[3],param_4,param_1[9],param_2,param_1);
  if (iVar1 < 0) {
    return 0;
  }
  if (param_3 == 0) {
    param_2 = *(int *)(*param_4 + 0x14) + *(int *)(*param_4 + 0x10);
  }
  else {
    param_2 = 0;
  }
LAB_00343a56:
  *param_5 = param_2;
  return 1;
}
