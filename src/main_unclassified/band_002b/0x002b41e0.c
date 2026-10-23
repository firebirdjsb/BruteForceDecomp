/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 08040C96B3E6670BDCCAB2DF767A0A1B454575FEC4079EAD6E056E2228CD7BC6
 * Entry: 0x002b41e0, Ghidra index: 9783, label: FUN_002b41e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b41e0(float *param_1,float *param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float local_10 [4];
  
  fVar3 = param_2[5] + param_2[10] + *param_2;
  if (0.0 < fVar3) {
    fVar3 = SQRT(fVar3 + 1.0);
    param_1[3] = fVar3 * 0.5;
    fVar3 = 0.5 / fVar3;
    *param_1 = (param_2[9] - param_2[6]) * fVar3;
    param_1[1] = (param_2[2] - param_2[8]) * fVar3;
    param_1[2] = (param_2[4] - param_2[1]) * fVar3;
    FUN_002b4570(param_1);
    return;
  }
  local_10[0] = 1.4013e-45;
  local_10[1] = 2.8026e-45;
  local_10[2] = 0.0;
  uVar2 = (uint)(*param_2 < param_2[5]);
  if (param_2[uVar2 * 5] < param_2[10]) {
    uVar2 = 2;
  }
  fVar3 = local_10[uVar2];
  fVar1 = local_10[(int)fVar3];
  fVar4 = SQRT((param_2[uVar2 * 5] - (param_2[(int)fVar1 * 5] + param_2[(int)fVar3 * 5])) + 1.0);
  local_10[uVar2] = fVar4 * 0.5;
  if (fVar4 != 0.0) {
    fVar4 = 0.5 / fVar4;
  }
  local_10[3] = (param_2[(int)fVar3 + (int)fVar1 * 4] - param_2[(int)fVar1 + (int)fVar3 * 4]) *
                fVar4;
  local_10[(int)fVar3] = (param_2[uVar2 + (int)fVar3 * 4] + param_2[(int)fVar3 + uVar2 * 4]) * fVar4
  ;
  local_10[(int)fVar1] = (param_2[uVar2 + (int)fVar1 * 4] + param_2[(int)fVar1 + uVar2 * 4]) * fVar4
  ;
  *param_1 = local_10[0];
  param_1[1] = local_10[1];
  param_1[2] = local_10[2];
  param_1[3] = local_10[3];
  FUN_002b4570(param_1);
  return;
}
