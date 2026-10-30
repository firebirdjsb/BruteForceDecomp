/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE36C172C10C792ADB2FBC01BCA7A756AD33E6F4DAE424EF0CC2EBE4458C90DC
 * Entry: 0x00269780, Ghidra index: 8748, label: FUN_00269780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00269780(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float *pfVar12;
  float local_528;
  float local_524;
  float local_518 [324];
  float local_8;
  float local_4;
  
  fVar3 = param_3[0x145];
  local_524 = param_2[0x144];
  local_8 = local_524;
  local_4 = fVar3;
  if (local_524 != 0.0) {
    pfVar6 = param_2;
    do {
      if (fVar3 != 0.0) {
        fVar4 = param_2[0x145];
        pfVar10 = (float *)(((int)local_518 - (int)param_2) + (int)pfVar6);
        pfVar12 = param_3;
        local_528 = fVar3;
        do {
          *pfVar10 = 0.0;
          if (fVar4 != 0.0) {
            fVar5 = 0.0;
            pfVar7 = pfVar6;
            pfVar9 = pfVar12;
            fVar11 = fVar4;
            do {
              fVar1 = *pfVar7;
              pfVar7 = pfVar7 + 1;
              fVar2 = *pfVar9;
              pfVar9 = pfVar9 + 0x12;
              fVar11 = (float)((int)fVar11 + -1);
              fVar5 = fVar1 * fVar2 + fVar5;
            } while (fVar11 != 0.0);
            *pfVar10 = fVar5;
          }
          pfVar10 = pfVar10 + 1;
          pfVar12 = pfVar12 + 1;
          local_528 = (float)((int)local_528 + -1);
        } while (local_528 != 0.0);
      }
      pfVar6 = pfVar6 + 0x12;
      local_524 = (float)((int)local_524 + -1);
    } while (local_524 != 0.0);
  }
  pfVar6 = local_518;
  for (iVar8 = 0x146; iVar8 != 0; iVar8 = iVar8 + -1) {
    *param_1 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    param_1 = param_1 + 1;
  }
  return;
}
