/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F629722E1C092FF356AE5231F20680377341B951D88EF3069DCF6DD392B00126
 * Entry: 0x002339d0, Ghidra index: 7788, label: FUN_002339d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float * FUN_002339d0(float *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float *in_ECX;
  uint uVar4;
  int local_c [3];
  
  fVar3 = in_ECX[4] + *in_ECX + in_ECX[8];
  if (0.0 < fVar3) {
    fVar3 = SQRT(fVar3 + 1.0);
    *param_1 = fVar3 * 0.5;
    fVar3 = 0.5 / fVar3;
    param_1[1] = (in_ECX[7] - in_ECX[5]) * fVar3;
    param_1[2] = (in_ECX[2] - in_ECX[6]) * fVar3;
    param_1[3] = (in_ECX[3] - in_ECX[1]) * fVar3;
    return param_1;
  }
  uVar4 = (uint)(*in_ECX < in_ECX[4]);
  if (in_ECX[uVar4 * 4] < in_ECX[8]) {
    uVar4 = 2;
  }
  local_c[0] = 1;
  local_c[1] = 2;
  local_c[2] = 0;
  iVar1 = local_c[uVar4];
  iVar2 = local_c[iVar1];
  fVar3 = SQRT((in_ECX[uVar4 * 4] - (in_ECX[iVar2 * 4] + in_ECX[iVar1 * 4])) + 1.0);
  param_1[uVar4 + 1] = fVar3 * 0.5;
  fVar3 = 0.5 / fVar3;
  *param_1 = (in_ECX[iVar2 * 3 + iVar1] - in_ECX[iVar1 * 3 + iVar2]) * fVar3;
  param_1[iVar1 + 1] = (in_ECX[uVar4 * 3 + iVar1] + in_ECX[iVar1 * 3 + uVar4]) * fVar3;
  param_1[iVar2 + 1] = (in_ECX[uVar4 * 3 + iVar2] + in_ECX[iVar2 * 3 + uVar4]) * fVar3;
  return param_1;
}
