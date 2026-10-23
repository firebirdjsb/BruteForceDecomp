/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7378C227B48B1E9B8D35A6242C559566A83059EA50EFBE340E4132139DEF345
 * Entry: 0x003051c0, Ghidra index: 11093, label: FUN_003051c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003051c0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float local_10 [4];
  
  fVar1 = *param_2 + param_2[10] + param_2[5];
  if (0.0 < fVar1) {
    fVar4 = SQRT(fVar1 + 1.0);
    fVar1 = 0.5 / fVar4;
    *param_1 = (param_2[6] - param_2[9]) * fVar1;
    param_1[1] = (param_2[8] - param_2[2]) * fVar1;
    param_1[2] = (param_2[1] - param_2[4]) * fVar1;
    param_1[3] = fVar4 * 0.5;
    return;
  }
  local_10[0] = 1.4013e-45;
  local_10[1] = 2.8026e-45;
  local_10[2] = 0.0;
  uVar3 = (uint)(*param_2 < param_2[5]);
  if (param_2[uVar3 * 5] < param_2[10]) {
    uVar3 = 2;
  }
  fVar1 = local_10[uVar3];
  fVar4 = local_10[(int)fVar1];
  fVar5 = SQRT((param_2[uVar3 * 5] - (param_2[(int)fVar4 * 5] + param_2[(int)fVar1 * 5])) + 1.0);
  fVar2 = 0.5 / fVar5;
  local_10[uVar3] = fVar5 * 0.5;
  local_10[3] = (param_2[(int)fVar4 + (int)fVar1 * 4] - param_2[(int)fVar1 + (int)fVar4 * 4]) *
                fVar2;
  local_10[(int)fVar1] = (param_2[uVar3 + (int)fVar1 * 4] + param_2[(int)fVar1 + uVar3 * 4]) * fVar2
  ;
  local_10[(int)fVar4] = (param_2[uVar3 + (int)fVar4 * 4] + param_2[(int)fVar4 + uVar3 * 4]) * fVar2
  ;
  *param_1 = local_10[0];
  param_1[1] = local_10[1];
  param_1[2] = local_10[2];
  param_1[3] = local_10[3];
  return;
}
