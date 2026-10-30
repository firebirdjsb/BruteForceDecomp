/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 790B903780A840E3977994FE0CA7E50E49ADCA47A9B90E8033B8449CD56CB1EC
 * Entry: 0x0016ef80, Ghidra index: 4832, label: FUN_0016ef80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016ef80(float *param_1)

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
