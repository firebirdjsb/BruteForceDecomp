/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F9B9ACF592E689E9FB0B680FCF48880C075BC3EE0B439A8CAF81628C6AD8569
 * Entry: 0x00278ad0, Ghidra index: 8923, label: FUN_00278ad0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00278ad0(float param_1)

{
  float fVar1;
  float *in_ECX;
  float *in_EDX;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (in_ECX[1] != param_1) {
    if (in_EDX[1] == param_1) {
      return (float10)*in_EDX;
    }
    fVar2 = (float10)in_EDX[1] - (float10)in_ECX[1];
    fVar1 = (float)(((float10)param_1 - (float10)in_ECX[1]) / fVar2);
    if (in_ECX[3] != -NAN) {
      fVar3 = (float10)fVar1 * (float10)fVar1;
      fVar4 = (float10)fVar1 * fVar3;
      return (fVar3 * (float10)3.0 - (fVar4 + fVar4)) * (float10)*in_EDX +
             (((fVar4 + fVar4) - fVar3 * (float10)3.0) + (float10)1.0) * (float10)*in_ECX +
             (fVar4 - fVar3) * (float10)in_EDX[2] * fVar2 +
             ((fVar4 - (fVar3 + fVar3)) + (float10)fVar1) * (float10)in_ECX[3] * fVar2;
    }
  }
  return (float10)*in_ECX;
}
