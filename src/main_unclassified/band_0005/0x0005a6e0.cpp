/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 939038D081069C28ED30FD5C500A7ADF498E9A32A43F7739AC6087A24D6930D5
 * Entry: 0x0005a6e0, Ghidra index: 905, label: FUN_0005a6e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
unkbyte10 FUN_0005a6e0(char param_1)

{
  float fVar1;
  float fVar2;
  float *in_EAX;
  float *in_ECX;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  unkbyte10 Var6;
  
  fVar1 = *in_ECX * in_EAX[1] - in_ECX[1] * *in_EAX;
  fVar2 = in_ECX[2] * *in_EAX - in_EAX[2] * *in_ECX;
  fVar4 = (float10)in_ECX[1] * (float10)in_EAX[2] - (float10)in_ECX[2] * (float10)in_EAX[1];
  fVar4 = SQRT(fVar4 * fVar4 + (float10)fVar2 * (float10)fVar2 + (float10)fVar1 * (float10)fVar1);
  fVar5 = (float10)in_ECX[1] * (float10)in_EAX[1] +
          (float10)in_ECX[2] * (float10)in_EAX[2] + (float10)*in_ECX * (float10)*in_EAX;
  if (param_1 != '\0') {
    fVar3 = (float10)1.0 /
            (float10)SQRT((in_EAX[1] * in_EAX[1] + *in_EAX * *in_EAX + in_EAX[2] * in_EAX[2]) *
                          (*in_ECX * *in_ECX + in_ECX[1] * in_ECX[1] + in_ECX[2] * in_ECX[2]));
    fVar4 = fVar3 * fVar4;
    fVar5 = fVar3 * fVar5;
  }
  Var6 = fpatan(fVar4,fVar5);
  return Var6;
}
