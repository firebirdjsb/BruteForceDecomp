/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1A33172C7CDBF010568A44845D5370A01EA709DAF861F957AE3320BB8870EF3
 * Entry: 0x002d1e80, Ghidra index: 10193, label: FUN_002d1e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d1e80(int param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float local_10;
  float local_c;
  float fStack_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_10 = *param_3 - *param_2;
  local_c = (float)*(undefined8 *)(param_3 + 1) - (float)*(undefined8 *)(param_2 + 1);
  fStack_8 = (float)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20) -
             (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar3 = (float10)FUN_002b6500(&local_10);
  *(float *)(param_1 + 0x58) = (float)fVar3;
  *param_4 = local_10;
  param_4[1] = local_c;
  param_4[2] = fStack_8;
  if (0.9 <= *param_4 * *param_4) {
    fVar1 = 0.0;
    fVar2 = 1.0;
  }
  else {
    fVar1 = 1.0;
    fVar2 = 0.0;
  }
  param_4[0x1d] = fVar1 * param_4[2] - fVar2 * *param_4;
  param_4[0x1c] = fVar2 * param_4[1] - param_4[2] * 0.0;
  param_4[0x1e] = *param_4 * 0.0 - fVar1 * param_4[1];
  FUN_002b65a0(param_4 + 0x1c);
  fVar1 = param_2[2];
  fVar2 = *param_2;
  param_4[9] = param_2[1];
  param_4[8] = fVar2;
  param_4[10] = fVar1;
  return;
}
