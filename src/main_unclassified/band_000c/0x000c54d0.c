/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F088D993EC3C886F94F44B802691640B3C251E7AAE7744EC635829E969D696F
 * Entry: 0x000c54d0, Ghidra index: 2428, label: FUN_000c54d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c54d0(int *param_1,int param_2,float *param_3,undefined4 param_4,float param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined4 local_78;
  uint uStack_74;
  float fStack_68;
  float fStack_64;
  undefined4 local_60 [17];
  int *local_1c;
  undefined4 local_14;
  
  local_1c = (int *)0x0;
  puVar6 = local_60;
  for (iVar5 = 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_14 = 0;
  local_78 = 0;
  if (((param_1[0x2a] != 0) && (iVar5 = (**(code **)(*param_1 + 0x30))(), iVar5 != 0)) &&
     (iVar5 = FUN_00230040(param_2,*(undefined4 *)(param_2 + 0x1fc),param_3,param_4,local_60,
                           &param_5), iVar5 != 0)) {
    fStack_64 = (float)param_1[0x30];
    fStack_68 = (float)param_1[0x2f];
    fVar7 = (float)param_1[0x2e];
    iVar5 = (**(code **)(*param_1 + 0x30))();
    if (iVar5 != 0) {
      fStack_64 = (float)param_1[0x2d];
      fVar7 = (float)param_1[0x2b];
      fStack_68 = (float)param_1[0x2c];
    }
    fVar7 = SQRT((*param_3 - fVar7) * (*param_3 - fVar7) +
                 (param_3[1] - fStack_68) * (param_3[1] - fStack_68) +
                 (param_3[2] - fStack_64) * (param_3[2] - fStack_64));
    if (param_5 < fVar7 + 0.25) {
      iVar5 = (**(code **)(*param_1 + 0x30))();
      piVar1 = local_1c;
      iVar5 = *(int *)(iVar5 + 0x6c);
      if (*(int *)(iVar5 + 0x10) != 0) {
        iVar5 = *(int *)(iVar5 + 8);
      }
      iVar3 = -1;
      if (((local_1c != (int *)0x0) && (iVar3 = local_1c[0x1b], iVar3 != -1)) &&
         (*(int *)(iVar3 + 0x10) != 0)) {
        iVar3 = *(int *)(iVar3 + 8);
      }
      if (iVar3 != iVar5) {
        uStack_74 = (uint)fVar7 & 0xffffff00;
        if (local_1c != (int *)0x0) {
          piVar4 = (int *)(**(code **)(*local_1c + 0xec))();
          if ((piVar4 != (int *)0x0) && ((*(byte *)(piVar1 + 0x1c) & 1) == 0)) {
            (**(code **)(*(int *)(param_1[0x2a] + 0x1b4) + 0x9c))();
            (**(code **)(*piVar4 + 0x9c))();
            cVar2 = FUN_0004b960();
            if (cVar2 != '\0') {
              uStack_74 = CONCAT31((int3)((uint)fVar7 >> 8),1);
            }
          }
          cVar2 = *(char *)((int)piVar1 + 0x7a);
          if ((cVar2 == '\x02') || (cVar2 == '\x04')) {
            local_78 = 1;
          }
        }
        param_1[0x24] = param_1[0x24] | 8;
        (**(code **)(*(int *)param_1[0x26] + 0x34))(uStack_74,local_78);
      }
    }
  }
  if (local_1c != (int *)0x0) {
    FUN_0008f6e0();
  }
  return;
}
