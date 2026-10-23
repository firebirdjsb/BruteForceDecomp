/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B4A5E656CC6DE682EA86D59C4D9829D87EEF76789C462208DA251B52291CAF9
 * Entry: 0x00269700, Ghidra index: 8747, label: FUN_00269700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00269700(float *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_EDX;
  float *pfVar7;
  float *pfVar8;
  float local_4c [18];
  float local_4;
  
  fVar5 = in_EDX[0x144];
  local_4 = fVar5;
  if (fVar5 != 0.0) {
    fVar3 = in_EDX[0x145];
    pfVar8 = local_4c;
    do {
      fVar6 = 0.0;
      *pfVar8 = 0.0;
      if (fVar3 != 0.0) {
        fVar4 = 0.0;
        pfVar7 = in_EDX;
        do {
          iVar1 = (int)fVar6 * 4;
          fVar6 = (float)((int)fVar6 + 1);
          fVar2 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          fVar4 = *(float *)(param_2 + iVar1) * fVar2 + fVar4;
        } while ((uint)fVar6 < (uint)fVar3);
        *pfVar8 = fVar4;
      }
      pfVar8 = pfVar8 + 1;
      in_EDX = in_EDX + 0x12;
      fVar5 = (float)((int)fVar5 + -1);
    } while (fVar5 != 0.0);
  }
  param_1[0x12] = local_4;
  pfVar8 = local_4c;
  for (; local_4 != 0.0; local_4 = (float)((int)local_4 + -1)) {
    *param_1 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    param_1 = param_1 + 1;
  }
  return;
}
