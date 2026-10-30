/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F5EEB3306EB983828AC2667EA8D3D1B6C3950720EE57185B601A98B73F60D64
 * Entry: 0x0028f1f0, Ghidra index: 9215, label: FUN_0028f1f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float * FUN_0028f1f0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_ECX;
  
  fVar1 = in_ECX[3];
  fVar2 = in_ECX[2];
  fVar3 = in_ECX[1];
  fVar4 = 1.0 / (in_ECX[2] * in_ECX[2] + *in_ECX * *in_ECX +
                in_ECX[3] * in_ECX[3] + in_ECX[1] * in_ECX[1]);
  *param_1 = *in_ECX * fVar4;
  param_1[1] = -fVar3 * fVar4;
  param_1[2] = -fVar2 * fVar4;
  param_1[3] = -fVar1 * fVar4;
  return param_1;
}
