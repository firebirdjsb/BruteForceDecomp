/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59E555C5F41F8B54754C9BFDBDE42DD5F30FEDF1829AB12B299644EDACBF59E8
 * Entry: 0x00058610, Ghidra index: 871, label: FUN_00058610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00058610(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x40))();
  fVar1 = *param_2 - *(float *)(iVar3 + 0x24);
  fVar2 = param_2[2] - *(float *)(iVar3 + 0x2c);
  FUN_00058590(SQRT(fVar1 * fVar1 + fVar2 * fVar2));
  return;
}
