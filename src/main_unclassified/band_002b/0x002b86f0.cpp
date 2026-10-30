/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CDAE17E647F089B7644D739EA90DBFE5033878B76189B22431B982D0CC2E54EE
 * Entry: 0x002b86f0, Ghidra index: 9858, label: FUN_002b86f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b86f0(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_ECX;
  
  iVar1 = *param_1;
  if (*param_1 == 0) {
    FUN_002b8290(in_ECX,param_1[1] + (int)param_1);
    return;
  }
  fVar5 = ((float)param_1[2] - *in_ECX) * ((float)param_1[2] - *in_ECX);
  fVar6 = (float)param_1[5] * (float)param_1[5];
  if (((float)param_1[4] - in_ECX[2]) * ((float)param_1[4] - in_ECX[2]) + fVar5 <= fVar6) {
    fVar2 = in_ECX[1];
    fVar3 = in_ECX[9];
    fVar4 = (float)param_1[3];
    if (((fVar4 <= fVar2 + (float)param_1[5]) && (fVar3 - (float)param_1[5] <= fVar4)) &&
       (((fVar4 <= fVar2 && (fVar2 = fVar3, fVar3 <= fVar4)) ||
        ((fVar2 - fVar4) * (fVar2 - fVar4) + fVar5 <= fVar6)))) {
      FUN_002b86f0(param_1 + 7);
      FUN_002b86f0(iVar1 + (int)param_1);
      return;
    }
  }
  return;
}
