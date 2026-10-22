/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B98D09132EF469E6BE5F4287FA887863C5FCF47A86BFBFAF554CFA690020585
 * Entry: 0x0031aa47, Ghidra index: 12269, label: FUN_0031aa47
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031aa47(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  param_1[1] = (int)param_3;
  *param_1 = iVar1;
  *(int **)(iVar1 + 4) = param_1;
  *(int **)param_1[1] = param_1;
  param_1[3] = 0;
  param_1[2] = param_2;
  return;
}
