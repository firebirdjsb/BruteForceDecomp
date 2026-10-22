/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B7AD4FA4893AE0FFC06F14731B6B428BEB3915EFA30E3841700ECAF0D60994D
 * Entry: 0x00314e18, Ghidra index: 12095, label: FUN_00314e18
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00314e18(float *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  fVar1 = param_1[0x14];
  iVar2 = *(int *)param_1[0x12];
  *param_1 = *(float *)((int)fVar1 + 4);
  param_1[1] = *(float *)((int)fVar1 + 8);
  param_1[2] = *(float *)((int)fVar1 + 0xc);
  if (*(int *)((int)fVar1 + 0x3c) != 1) {
    *param_1 = *param_1 - *(float *)(iVar2 + 4);
    param_1[1] = param_1[1] - *(float *)(iVar2 + 8);
    param_1[2] = param_1[2] - *(float *)(iVar2 + 0xc);
  }
  fVar3 = (float10)FUN_00317454(param_1);
  param_1[3] = (float)fVar3;
  return;
}
