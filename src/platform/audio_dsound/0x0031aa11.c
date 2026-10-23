/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FCDFDCC9314FF91F389600A02A15149F83B1952F38562B06124D348F004F54C1
 * Entry: 0x0031aa11, Ghidra index: 12268, label: FUN_0031aa11
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031aa11(int *param_1,undefined2 param_2,undefined2 param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = *param_4;
  param_1[1] = (int)param_4;
  *param_1 = iVar1;
  *(int **)(iVar1 + 4) = param_1;
  *(int **)param_1[1] = param_1;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 2) = param_2;
  *(undefined2 *)((int)param_1 + 10) = param_3;
  return;
}
