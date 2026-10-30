/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8A677E59B5943D215D6C7CDE7C3B27B439215C610569047B04A05D236A82604
 * Entry: 0x000dee40, Ghidra index: 2726, label: FUN_000dee40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000dee40(float *param_1,float param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_ECX;
  float *in_EDX;
  float *unaff_ESI;
  float fVar6;
  
  fVar6 = (*unaff_ESI - *in_ECX) * *param_1 +
          (unaff_ESI[1] - in_ECX[1]) * param_1[1] + (unaff_ESI[2] - in_ECX[2]) * param_1[2];
  if (fVar6 < 0.0) {
    fVar6 = in_ECX[2];
    fVar4 = in_ECX[1];
    *in_EDX = *in_ECX;
    in_EDX[1] = fVar4;
    in_EDX[2] = fVar6;
    return (uint)fVar4 & 0xffffff00;
  }
  if (param_2 <= fVar6) {
    fVar6 = param_2;
  }
  fVar4 = *param_1;
  uVar1 = *(undefined8 *)(param_1 + 1);
  fVar5 = fVar6 * (float)((ulonglong)uVar1 >> 0x20) + in_ECX[2];
  fVar2 = in_ECX[1];
  fVar3 = *in_ECX;
  in_EDX[2] = fVar5;
  in_EDX[1] = fVar6 * (float)uVar1 + fVar2;
  *in_EDX = fVar6 * fVar4 + fVar3;
  return CONCAT31((int3)((uint)fVar5 >> 8),1);
}
