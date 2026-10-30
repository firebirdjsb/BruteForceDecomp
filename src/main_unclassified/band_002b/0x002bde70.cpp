/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A75A5E5EA70212E0305F70C5AF401D14646DBA7F6C8A6BD660DB040F6307E5C6
 * Entry: 0x002bde70, Ghidra index: 9963, label: FUN_002bde70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bde70(undefined4 *param_1,int *param_2)

{
  byte *pbVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  
  piVar3 = param_2;
  iVar5 = (**(code **)(*param_2 + 8))();
  iVar10 = 0;
  iVar8 = *(ushort *)(iVar5 + 2) - 1;
  param_2 = (int *)0x0;
  bVar2 = false;
  bVar7 = 8;
  if (-1 < iVar8) {
    do {
      pbVar1 = *(byte **)(*(int *)(iVar5 + 4) + iVar8 * 4);
      if ((*pbVar1 & 0xc) == 0) {
        iVar6 = *(int *)(pbVar1 + 0x170);
        bVar7 = bVar7 & pbVar1[100];
        iVar4 = iVar6;
        if ((iVar10 != 0) && (iVar4 = (int)param_2, iVar6 != iVar10)) {
          FUN_002bda80(iVar10,iVar6);
          if (iVar6 != 0) {
            FUN_002bdc50();
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(iVar6);
          }
          bVar2 = true;
        }
        param_2 = (int *)iVar4;
        if (*(ushort *)(pbVar1 + 0x160) <= *(ushort *)(pbVar1 + 0x162)) {
          FUN_002ccf80();
        }
        *(int **)(*(int *)(pbVar1 + 0x164) + (uint)*(ushort *)(pbVar1 + 0x162) * 4) = piVar3;
        *(short *)(pbVar1 + 0x162) = *(short *)(pbVar1 + 0x162) + 1;
        iVar10 = *(int *)(pbVar1 + 0x170);
        iVar6 = *(ushort *)(iVar10 + 0x22) - 1;
        if (-1 < iVar6) {
          puVar9 = (undefined4 *)(*(int *)(iVar10 + 0x24) + iVar6 * 4);
          do {
            if (*(int **)*puVar9 == piVar3) goto LAB_002bdf55;
            iVar6 = iVar6 + -1;
            puVar9 = puVar9 + -1;
          } while (-1 < iVar6);
        }
        FUN_002bd740(iVar10,piVar3);
LAB_002bdf55:
        FUN_002bd6f0(pbVar1);
        FUN_002be0e0();
        iVar10 = (int)param_2;
      }
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    if (bVar2) {
      FUN_002bda00();
      FUN_002bd5c0();
    }
    if (bVar7 < 8) {
      FUN_002be1c0(*param_1);
    }
  }
  return;
}
