/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5EBBEA8D33A6C8E4CB5085CE9FDF6E8E4FF0B371DB88987F614B6C8FE932D0C8
 * Entry: 0x002b70c0, Ghidra index: 9841, label: FUN_002b70c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b70c0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *in_ECX;
  float *in_EDX;
  int iVar8;
  int iVar9;
  float local_4;
  
  fVar7 = *in_EDX;
  fVar1 = in_EDX[2];
  iVar8 = 0;
  in_ECX[1] = in_EDX[1];
  *in_ECX = fVar7;
  in_ECX[2] = fVar1;
  local_4 = 0.0;
  iVar9 = 2;
  do {
    if (local_4 < ABS(in_ECX[iVar9])) {
      iVar8 = iVar9;
      local_4 = ABS(in_ECX[iVar9]);
    }
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  fVar1 = in_ECX[iVar8];
  iVar9 = iVar8 + -1;
  in_ECX[iVar8] = fVar1 * -1.0;
  if (iVar9 < 0) {
    iVar9 = 2;
  }
  in_ECX[iVar8] = in_ECX[iVar9];
  in_ECX[iVar9] = fVar1 * -1.0;
  fVar1 = *in_ECX;
  fVar7 = in_EDX[1];
  fVar2 = in_ECX[1];
  fVar3 = *in_EDX;
  fVar4 = *in_EDX;
  fVar5 = in_EDX[2];
  fVar6 = *in_ECX;
  *in_ECX = in_EDX[2] * in_ECX[1] - in_EDX[1] * in_ECX[2];
  in_ECX[1] = fVar4 * in_ECX[2] - fVar5 * fVar6;
  in_ECX[2] = fVar1 * fVar7 - fVar2 * fVar3;
  return;
}
