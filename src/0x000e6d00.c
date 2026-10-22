/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10DF6CE7BF4078F63ECB32BE6EADD83532A39E6526A40AC019313E29B19DAE2A
 * Entry: 0x000e6d00, Ghidra index: 2865, label: FUN_000e6d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000e6d00(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  bool local_5;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar7 = 0;
  local_5 = false;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*(int *)(param_1 + 8) - iVar2) / 0xc;
  }
  iVar4 = (iVar4 * 3 + -3) * 4;
  pfVar8 = (float *)(iVar2 + 8);
  while (iVar3 = -8 - iVar2, iVar2 != 0) {
    iVar5 = *(int *)(param_1 + 8) - iVar2;
    iVar3 = -(iVar5 >> 0x1f);
    if ((uint)(iVar5 / 0xc) <= uVar7) break;
    if ((((*pfVar8 < param_2[2] != (*pfVar8 == param_2[2])) &&
         (pfVar6 = (float *)(iVar4 + 8 + iVar2), param_2[2] < *pfVar6)) ||
        ((fVar1 = *(float *)(iVar4 + 8 + iVar2), pfVar6 = (float *)(iVar4 + 8 + iVar2),
         fVar1 < param_2[2] != (fVar1 == param_2[2]) && (param_2[2] < *pfVar8)))) &&
       (*param_2 <
        ((param_2[2] - *pfVar8) * (*(float *)(iVar4 + iVar2) - pfVar8[-2])) / (*pfVar6 - *pfVar8) +
        pfVar8[-2])) {
      local_5 = local_5 == false;
    }
    iVar4 = (-8 - iVar2) + (int)pfVar8;
    uVar7 = uVar7 + 1;
    pfVar8 = pfVar8 + 3;
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),local_5);
}
