/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F321390DB44ACBE73476F2DD32C1016EFD94D896B97BDEB0819E1C585492EF1
 * Entry: 0x0017aa70, Ghidra index: 5020, label: FUN_0017aa70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0017aa70(float param_1)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float local_4;
  
  if ((*(int *)(in_ECX + 8) == 0) ||
     (iVar5 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 4, iVar5 == 0)) {
    return (float10)0.0 * (float10)0.01;
  }
  pfVar2 = *(float **)(in_ECX + 8);
  if (param_1 < *pfVar2) {
    return (float10)pfVar2[1] * (float10)0.01;
  }
  if (*(float *)(*(int *)(in_ECX + 0xc) + -0x10) < param_1) {
    return (float10)*(float *)(*(int *)(in_ECX + 0xc) + -0xc) * (float10)0.01;
  }
  local_4 = 0.0;
  if (0 < iVar5) {
    local_4 = *pfVar2;
  }
  iVar4 = 0;
  pfVar3 = pfVar2;
  if (0 < iVar5 + -2) {
    do {
      fVar1 = pfVar3[4];
      if ((local_4 <= param_1) && (param_1 < fVar1)) break;
      iVar4 = iVar4 + 1;
      pfVar3 = pfVar3 + 4;
      local_4 = fVar1;
    } while (iVar4 < iVar5 + -2);
  }
  fVar6 = ((float10)param_1 - (float10)local_4) * (float10)pfVar2[iVar4 * 4 + 3];
  return (fVar6 * (float10)pfVar2[iVar4 * 4 + 5] +
         ((float10)1.0 - fVar6) * (float10)pfVar2[iVar4 * 4 + 1]) * (float10)0.01;
}
