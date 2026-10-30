/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A0BF8DCC4C7F38966EDD8CA6C4A79BF92167DA904EE34998AFD9A25E9B8342B
 * Entry: 0x00265f50, Ghidra index: 8734, label: FUN_00265f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00265f50(float *param_1)

{
  float fVar1;
  float *in_ECX;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float local_c;
  
  fVar2 = SQRT((float10)param_1[2] * (float10)param_1[2] +
               (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1);
  if (fVar2 <= (float10)1e-05) {
    fVar1 = 1.0;
    fVar4 = 0.0;
    local_c = 0.0;
    fVar5 = 0.0;
  }
  else {
    fVar3 = (float10)fcos(fVar2);
    fVar1 = (float)fVar3;
    fVar3 = (float10)fsin(fVar2);
    fVar5 = (float)(fVar3 / fVar2);
    local_c = fVar5 * *param_1;
    fVar4 = fVar5 * (float)*(undefined8 *)(param_1 + 1);
    fVar5 = fVar5 * (float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20);
  }
  *in_ECX = fVar1;
  in_ECX[1] = local_c;
  in_ECX[3] = fVar5;
  in_ECX[2] = fVar4;
  return;
}
