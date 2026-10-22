/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F784386D5CD73546AE3E47A32F520807A751D36C3B6F84F38F49BFD421E121F
 * Entry: 0x00353125, Ghidra index: 13078, label: FUN_00353125
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00353125(int *param_1,int *param_2)

{
  int in_ECX;
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    param_2 = (int *)(in_ECX + 0x24);
    iVar1 = *param_2;
    *param_1 = iVar1;
    param_1[1] = (int)param_2;
  }
  else {
    *param_1 = *param_2;
    param_1[1] = (int)param_2;
    iVar1 = *param_2;
  }
  *(int **)(iVar1 + 4) = param_1;
  *param_2 = (int)param_1;
  return;
}
