/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E933C5C89710123999E91278F9DDE110576C5164680655DCAF1C8D5DEA0C486
 * Entry: 0x00233f80, Ghidra index: 7795, label: FUN_00233f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_00233f80(undefined4 *param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  float local_18;
  float local_14;
  undefined4 *puStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  cVar5 = '\x01';
  if ((*(byte *)(param_1 + 9) & 2) == 0) {
    fVar1 = (float)param_1[0xe];
    piVar2 = (int *)((float *)*param_1)[3];
    fVar4 = param_2 * (float)param_1[10] + (float)param_1[0xe];
    if ((piVar2 != (int *)0x0) && (iVar9 = param_1[1], iVar9 != 0)) {
      if ((*(byte *)(param_1 + 9) & 4) == 0) {
        uVar10 = param_1[2];
        uVar8 = param_1[0xd];
        fVar6 = fVar1;
        fVar7 = fVar4;
      }
      else {
        local_18 = *(float *)*param_1;
        local_14 = local_18 - fVar1;
        if (local_18 - fVar1 <= 0.0) {
          local_14 = 0.0;
        }
        if (local_18 <= local_14) {
          local_14 = local_18;
        }
        fVar6 = local_18 - fVar4;
        if (local_18 - fVar4 <= 0.0) {
          fVar6 = 0.0;
        }
        if (local_18 <= fVar6) {
          fVar6 = local_18;
        }
        uVar10 = param_1[2];
        iVar9 = param_1[1];
        uVar8 = param_1[0xd];
        fVar7 = local_14;
      }
      (**(code **)(*piVar2 + 0x34))(piVar2,param_1,fVar6,fVar7,uVar8,iVar9,uVar10);
    }
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xef;
    cVar5 = FUN_00233d40(param_1,fVar1,fVar4);
    if (((cVar5 != '\0') && (param_1[7] == 0)) &&
       (puVar3 = (undefined4 *)param_1[1], puVar3 != (undefined4 *)0x0)) {
      uStack_4 = param_1[2];
      puStack_10 = param_1;
      uStack_c = 0xffffffff;
      uStack_8 = 0;
      local_18 = -6.090583e+35;
      local_14 = 0.0;
      (**(code **)*puVar3)(puVar3,&puStack_10,1,&local_18,&local_14);
      cVar5 = '\0';
    }
  }
  return cVar5;
}
