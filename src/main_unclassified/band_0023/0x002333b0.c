/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43F0D4453372A1B4E5F54209D1CA198B28D4FDF32EBD4DE09D3B667501340A7E
 * Entry: 0x002333b0, Ghidra index: 7782, label: FUN_002333b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002333b0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *in_EDX;
  
  fVar3 = 2.0 / (param_1[2] * param_1[2] + *param_1 * *param_1 +
                param_1[3] * param_1[3] + param_1[1] * param_1[1]);
  fVar9 = fVar3 * param_1[2];
  fVar8 = fVar3 * param_1[3];
  fVar11 = fVar3 * param_1[1] * *param_1;
  fVar1 = *param_1;
  fVar2 = *param_1;
  fVar10 = fVar3 * param_1[1] * param_1[1];
  fVar3 = param_1[1];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[2];
  fVar7 = param_1[3];
  *in_EDX = 1.0 - (fVar9 * fVar5 + fVar8 * fVar7);
  in_EDX[1] = fVar9 * fVar3 - fVar8 * fVar2;
  in_EDX[2] = fVar8 * fVar4 + fVar9 * fVar1;
  in_EDX[3] = fVar9 * fVar3 + fVar8 * fVar2;
  in_EDX[4] = 1.0 - (fVar8 * fVar7 + fVar10);
  in_EDX[5] = fVar8 * fVar6 - fVar11;
  in_EDX[6] = fVar8 * fVar4 - fVar9 * fVar1;
  in_EDX[7] = fVar8 * fVar6 + fVar11;
  in_EDX[8] = 1.0 - (fVar9 * fVar5 + fVar10);
  return;
}
