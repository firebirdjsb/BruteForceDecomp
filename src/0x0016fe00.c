/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3336AF0661C3AC28B07ED696441DFDFA8BF591226589BBEFBA36A8D202EB3FC8
 * Entry: 0x0016fe00, Ghidra index: 4836, label: FUN_0016fe00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0016fe00(float param_1)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  float10 fVar4;
  
  bVar1 = *(byte *)(in_ECX + 0x54);
  fVar3 = (float10)0.0;
  if ((bVar1 & 1) != 0) {
    if (((bVar1 & 2) == 0) &&
       (param_1 < *(float *)(in_ECX + 0x48) == (param_1 == *(float *)(in_ECX + 0x48)))) {
      fVar3 = ((float10)param_1 - (float10)*(float *)(in_ECX + 0x48)) /
              ((float10)1.0 - (float10)*(float *)(in_ECX + 0x48));
      return fVar3 * fVar3;
    }
    return (float10)0.0;
  }
  if ((bVar1 & 2) != 0) {
    if (param_1 < *(float *)(in_ECX + 0x48)) {
      fVar3 = (float10)param_1 / (float10)*(float *)(in_ECX + 0x48);
      return fVar3 * fVar3;
    }
    return (float10)1.0;
  }
  if ((bVar1 & 4) != 0) {
    fVar3 = (float10)param_1 - (float10)*(float *)(in_ECX + 0x48);
    if (param_1 < *(float *)(in_ECX + 0x48)) {
      fVar3 = fVar3 / (float10)*(float *)(in_ECX + 0x48);
      return (float10)1.0 - fVar3 * fVar3;
    }
    fVar3 = fVar3 / ((float10)1.0 - (float10)*(float *)(in_ECX + 0x48));
    return (float10)1.0 - fVar3 * fVar3;
  }
  iVar2 = *(int *)(in_ECX + 0x5c);
  if (iVar2 == 0) {
    fVar3 = ((float10)param_1 * (float10)*(float *)(in_ECX + 0x40) +
            (float10)*(float *)(in_ECX + 0x44)) * (float10)param_1;
  }
  else {
    if (iVar2 == 1) {
      return (float10)param_1 * (float10)param_1 *
             ((float10)param_1 * (float10)*(float *)(in_ECX + 0x40) +
             (float10)*(float *)(in_ECX + 0x44)) * (float10)*(float *)(in_ECX + 0x3c);
    }
    if (iVar2 == 2) {
      fVar3 = (float10)log2((float10)param_1);
      fVar4 = (float10)1.4426950408889634 *
              (float10)0.6931471805599453 * fVar3 * (float10)*(float *)(in_ECX + 0x50);
      fVar3 = ROUND(fVar4);
      fVar4 = (float10)f2xm1(fVar4 - fVar3);
      fVar3 = (float10)fscale((float10)1 + fVar4,fVar3);
      return fVar3 * (float10)*(float *)(in_ECX + 0x3c);
    }
  }
  return fVar3 * (float10)*(float *)(in_ECX + 0x3c);
}
