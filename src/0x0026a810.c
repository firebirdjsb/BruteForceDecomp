/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8B28CA66B84826C0BBCE3323287A85C919BA60D41F1D3C3C87F2C517EEDCBC81
 * Entry: 0x0026a810, Ghidra index: 8751, label: FUN_0026a810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0026a810(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float *pfVar11;
  float local_528;
  float local_524;
  float local_518 [324];
  float local_8;
  float local_4;
  
  local_524 = param_2[0x144];
  local_8 = local_524;
  local_4 = param_3[0x144];
  if (local_524 != 0.0) {
    fVar2 = param_3[0x145];
    pfVar5 = param_2;
    do {
      if (fVar2 != 0.0) {
        fVar3 = param_2[0x145];
        pfVar9 = (float *)(((int)local_518 - (int)param_2) + (int)pfVar5);
        pfVar11 = param_3;
        local_528 = fVar2;
        do {
          *pfVar9 = 0.0;
          if (fVar3 != 0.0) {
            fVar4 = 0.0;
            pfVar6 = pfVar5;
            pfVar8 = pfVar11;
            fVar10 = fVar3;
            do {
              fVar1 = *pfVar8;
              pfVar8 = pfVar8 + 1;
              fVar10 = (float)((int)fVar10 + -1);
              fVar4 = fVar1 * *pfVar6 + fVar4;
              pfVar6 = pfVar6 + 1;
            } while (fVar10 != 0.0);
            *pfVar9 = fVar4;
          }
          pfVar9 = pfVar9 + 1;
          pfVar11 = pfVar11 + 0x12;
          local_528 = (float)((int)local_528 + -1);
        } while (local_528 != 0.0);
      }
      pfVar5 = pfVar5 + 0x12;
      local_524 = (float)((int)local_524 + -1);
    } while (local_524 != 0.0);
  }
  pfVar5 = local_518;
  for (iVar7 = 0x146; iVar7 != 0; iVar7 = iVar7 + -1) {
    *param_1 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    param_1 = param_1 + 1;
  }
  return;
}
