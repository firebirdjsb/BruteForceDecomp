/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C79EBE3C1270F0EE163096F56B5E2862416864C2F7EA963BC70400411D66C983
 * Entry: 0x00291060, Ghidra index: 9233, label: FUN_00291060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00291060(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float *pfVar6;
  int *piVar7;
  float fVar8;
  float local_8;
  float local_4;
  
  puVar4 = param_2;
  piVar3 = param_1;
  fVar1 = (float)((short)param_1[3] + -1);
  if ((float)param_1[4] * 0.0 <= (float)param_2) {
    if ((float)param_2 < (float)(int)fVar1 * (float)param_1[4] !=
        ((float)param_2 == (float)(int)fVar1 * (float)param_1[4])) {
      local_8 = fVar1;
      pfVar6 = &local_8;
      if ((int)((float)param_2 / (float)param_1[4]) <= (int)fVar1) {
        pfVar6 = (float *)&param_1;
      }
      fVar1 = *pfVar6;
      if (fVar1 != (float)((short)param_1[3] + -1)) {
        pfVar6 = (float *)(param_1 + 4);
        param_2 = (undefined4 *)0x3f800000;
        param_1 = (undefined4 *)0x0;
        local_8 = ((float)puVar4 - (float)(int)fVar1 * *pfVar6) /
                  ((float)((int)fVar1 + 1) * (float)piVar3[4] - (float)(int)fVar1 * *pfVar6);
        local_4 = local_8;
        if (local_8 <= 0.0) {
          local_4 = 0.0;
        }
        if (1.0 <= local_4) {
          local_4 = 1.0;
        }
        piVar7 = piVar3;
        uVar5 = (**(code **)(*piVar3 + 0x1c))(piVar3,fVar1);
        *param_2 = uVar5;
        uVar5 = (**(code **)(*piVar3 + 0x1c))(piVar3,(int)fVar1 + 1);
        *param_1 = uVar5;
        return (float10)(float)piVar7;
      }
    }
    param_1 = (int *)fVar1;
    fVar8 = (float)param_1;
    uVar5 = (**(code **)(*piVar3 + 0x1c))(piVar3);
  }
  else {
    iVar2 = *param_1;
    fVar8 = 0.0;
    param_1 = (int *)fVar1;
    uVar5 = (**(code **)(iVar2 + 0x1c))(piVar3);
  }
  *param_3 = uVar5;
  *param_2 = uVar5;
  return (float10)fVar8;
}
