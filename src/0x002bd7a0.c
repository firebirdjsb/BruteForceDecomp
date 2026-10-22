/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 69747AF166C7C889178FB8DF3E54F043244FCECE86DFFABB842F2B76D366C84F
 * Entry: 0x002bd7a0, Ghidra index: 9953, label: FUN_002bd7a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bd7a0(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  iVar5 = (int)param_1;
  while( true ) {
    local_8 = 0;
    bVar3 = false;
    param_1 = (uint *)FUN_002ea01d(0x2c);
    if (param_1 == (uint *)0x0) {
      param_1 = (uint *)0x0;
    }
    else {
      *(undefined2 *)(param_1 + 3) = 2;
      *(undefined2 *)((int)param_1 + 0xe) = 0;
      *(undefined2 *)(param_1 + 5) = 0;
      param_1[4] = (uint)(param_1 + 6);
      *(undefined2 *)(param_1 + 8) = 0;
      *(undefined2 *)((int)param_1 + 0x22) = 0;
      *(undefined2 *)(param_1 + 10) = 1;
      param_1[9] = 0;
      *param_1 = *param_1 & 0xfffffcff;
      *(undefined1 *)param_1 = 8;
      *param_1 = *param_1 & 0xffffc3ff;
    }
    *(undefined1 *)param_1 = 1;
    iVar8 = *(int *)(*(int *)(param_2 + 0xc) + 8);
    uVar1 = *(uint *)(iVar8 + 0x18);
    param_1[2] = uVar1;
    if (uVar1 != 0) {
      *(uint **)(uVar1 + 4) = param_1;
    }
    param_1[1] = 0;
    *(uint **)(iVar8 + 0x18) = param_1;
    if (*(short *)(iVar5 + 0xe) != 0) {
      iVar8 = 0;
      do {
        iVar2 = *(int *)(*(int *)(iVar5 + 0x10) + iVar8 * 4);
        iVar6 = iVar2;
        iVar7 = iVar2;
        while (iVar4 = iVar6, iVar4 != 0) {
          iVar7 = iVar4;
          iVar6 = *(int *)(iVar4 + 0x1c8);
        }
        if (iVar7 == param_2) {
          iVar7 = iVar8;
          if (iVar8 < (int)(*(ushort *)(iVar5 + 0xe) - 1)) {
            do {
              *(undefined4 *)(*(int *)(iVar5 + 0x10) + iVar7 * 4) =
                   *(undefined4 *)(*(int *)(iVar5 + 0x10) + 4 + iVar7 * 4);
              iVar7 = iVar7 + 1;
            } while (iVar7 < (int)(*(ushort *)(iVar5 + 0xe) - 1));
          }
          *(short *)(iVar5 + 0xe) = *(short *)(iVar5 + 0xe) + -1;
          iVar8 = iVar8 + -1;
          if ((ushort)param_1[3] <= *(ushort *)((int)param_1 + 0xe)) {
            FUN_002ccf80();
          }
          *(int *)(param_1[4] + (uint)*(ushort *)((int)param_1 + 0xe) * 4) = iVar2;
          *(short *)((int)param_1 + 0xe) = *(short *)((int)param_1 + 0xe) + 1;
          *(uint **)(iVar2 + 0x170) = param_1;
          iVar2 = local_8;
        }
        else {
          iVar2 = iVar7;
          if ((local_8 != 0) && (iVar2 = local_8, iVar7 != local_8)) {
            bVar3 = true;
          }
        }
        local_8 = iVar2;
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)(uint)*(ushort *)(iVar5 + 0xe));
    }
    FUN_002bd5c0();
    if (!bVar3) break;
    param_2 = local_8;
  }
  return;
}
