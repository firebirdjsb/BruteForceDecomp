/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7092BEAB3CE46647B947FD1772A5502B6F2150D90401B375A34CC49A7A1841DF
 * Entry: 0x001b6360, Ghidra index: 5690, label: FUN_001b6360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b6360(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  uint32_t puStack_c; /* original guest SEH 32-bit word; FS:0 pending */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00309430); /* x86 push imm32 at 0x001b6365 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  FUN_001cad10();
  FUN_001e0dd0();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x30;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x30;
    }
    if (0x5555555U - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x30;
      }
      if (uVar5 < iVar2 + param_3) {
        if (0x5555555 - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x30;
        }
        if (uVar5 < iVar3 + param_3) {
          iVar3 = FUN_001f7510();
          uVar5 = iVar3 + param_3;
        }
        iVar2 = FUN_002ea01d();
        local_8 = 0;
        FUN_001cdb20(param_1);
        FUN_001caef0();
        FUN_001cdb20(param_1);
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x30;
        }
        if (iVar3 != 0) {
          FUN_000870c0(iVar3,*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar5 * 0x30 + iVar2;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x30 + iVar2;
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x30) < param_3) {
          FUN_001cdb20(param_1);
          local_8 = 2;
          FUN_001caef0();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x30;
        }
        else {
          uVar1 = FUN_001cdb20(param_1);
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001ceb60(param_2);
        }
        FUN_001ceb10();
      }
    }
  }
  FUN_000872a0();
  *unaff_FS_OFFSET = local_10;
  return;
}
