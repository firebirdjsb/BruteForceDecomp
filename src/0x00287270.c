/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D8FDF6881F0370529AD6880C1C70CAD53020C8894A585B1C0E2875142C5B571B
 * Entry: 0x00287270, Ghidra index: 9087, label: FUN_00287270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00287270(int param_1,int param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_2c [2];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00308a30;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff90;
  local_2c[0] = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  puVar1 = &stack0xffffff90;
  if (in_ECX != local_2c) {
    local_2c[0] = *in_ECX;
    FUN_0023c430();
    FUN_0010bc40();
    local_18 = *(undefined1 *)(in_ECX + 5);
    *(undefined1 *)(in_ECX + 5) = 0;
    puVar1 = local_14;
  }
  local_14 = puVar1;
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)(param_1 + 0xc) - iVar4) / 0x18;
  }
  if (param_3 != 0) {
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(param_1 + 8) - iVar4) / 0x18;
    }
    if (0xaaaaaaaU - iVar3 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar4) / 0x18;
      }
      if (uVar6 < iVar3 + param_3) {
        if (0xaaaaaaa - (uVar6 >> 1) < uVar6) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar6 + (uVar6 >> 1);
        }
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar4) / 0x18;
        }
        if (uVar6 < iVar4 + param_3) {
          iVar4 = FUN_0017c5a0();
          uVar6 = iVar4 + param_3;
        }
        iVar3 = FUN_002ea01d();
        local_8 = 0;
        FUN_00287600();
        FUN_002875e0();
        FUN_00287600();
        local_8 = 0xffffffff;
        iVar4 = *(int *)(param_1 + 4);
        if (iVar4 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (*(int *)(param_1 + 8) - iVar4) / 0x18;
        }
        if (iVar4 != 0) {
          FUN_00261530(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar6 * 0x18 + iVar3;
        *(uint *)(param_1 + 8) = iVar3 + (param_3 + iVar5) * 0x18;
        *(int *)(param_1 + 4) = iVar3;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x18) < param_3) {
          FUN_00287600();
          local_8 = 2;
          FUN_002875e0();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x18;
        }
        else {
          uVar2 = FUN_00287600();
          *(undefined4 *)(param_1 + 8) = uVar2;
          FUN_00287670(param_2);
        }
        FUN_00287630();
      }
    }
  }
  FUN_0023c430();
  if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
