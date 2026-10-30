/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CB7E7B29129474AF172DD0FEDD02A4A625FC70F1240158366CBDEAA94782D58
 * Entry: 0x0015b450, Ghidra index: 4526, label: FUN_0015b450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

float10 FUN_0015b450(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_3c;
  
  fVar4 = param_1[5] - param_1[2];
  fVar5 = param_1[4] - param_1[1];
  fVar2 = param_1[3] - *param_1;
  fVar3 = fVar2 * (*param_2 - *param_1) +
          fVar5 * (param_2[1] - param_1[1]) + fVar4 * (param_2[2] - param_1[2]);
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
    fVar6 = fVar2 * fVar2 + fVar5 * fVar5 + fVar4 * fVar4;
    if (fVar3 < fVar6) {
      fVar3 = fVar3 / fVar6;
      fVar6 = param_1[2];
      fVar1 = param_1[1];
      *param_3 = fVar3 * fVar2 + *param_1;
      param_3[1] = fVar3 * fVar5 + fVar1;
      param_3[2] = fVar3 * fVar4 + fVar6;
      goto LAB_0015b5cd;
    }
    local_3c = param_1[5];
    fVar4 = param_1[4];
    fVar5 = param_1[3];
  }
  else {
    local_3c = param_1[2];
    fVar4 = param_1[1];
    fVar5 = *param_1;
  }
  *param_3 = fVar5;
  param_3[1] = fVar4;
  param_3[2] = local_3c;
LAB_0015b5cd:
  fVar4 = param_2[2] - param_3[2];
  fVar5 = param_2[1] - param_3[1];
  fVar2 = *param_2 - *param_3;
  fVar6 = SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar4 * fVar4);
  fVar3 = param_1[6] / fVar6;
  *param_3 = fVar3 * fVar2 + *param_3;
  param_3[1] = fVar3 * fVar5 + param_3[1];
  param_3[2] = fVar3 * fVar4 + param_3[2];
  fVar6 = fVar6 - param_1[6];
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  return (float10)fVar6;
}
