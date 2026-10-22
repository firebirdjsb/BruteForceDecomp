/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DEDE9528AE04F2D57582AFCF94E8986B8625A42B40F1E9EC6E1FC583AB9DC5FD
 * Entry: 0x002ad140, Ghidra index: 9683, label: FUN_002ad140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ad140(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003079b0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  piVar1 = (int *)*in_ECX;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - iVar3 >> 4;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 8) - iVar3 >> 4;
    }
    if (0xfffffffU - iVar6 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 8) - iVar3 >> 4;
      }
      if (uVar2 < iVar6 + param_3) {
        if (0xfffffff - (uVar2 >> 1) < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (iVar3 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(param_1 + 8) - iVar3 >> 4;
        }
        if (uVar2 < iVar6 + param_3) {
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(param_1 + 8) - iVar3 >> 4;
          }
          uVar2 = iVar3 + param_3;
        }
        iVar6 = FUN_002ea01d();
        local_8 = 0;
        FUN_002adaa0();
        FUN_002ad430();
        FUN_002adaa0();
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar3 >> 4;
        }
        if (iVar3 != 0) {
          FUN_002ad110();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = uVar2 * 0x10 + iVar6;
        *(uint *)(param_1 + 8) = (param_3 + iVar5) * 0x10 + iVar6;
        *(int *)(param_1 + 4) = iVar6;
      }
      else {
        if ((uint)(*(int *)(param_1 + 8) - param_2 >> 4) < param_3) {
          FUN_002adaa0();
          local_8 = 2;
          FUN_002ad430();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x10;
        }
        else {
          uVar4 = FUN_002adaa0();
          *(undefined4 *)(param_1 + 8) = uVar4;
          FUN_002adb20(param_2);
        }
        FUN_002adad0();
      }
    }
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
