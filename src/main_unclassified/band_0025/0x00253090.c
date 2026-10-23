/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4DEC8CC61AD37320ECE43C69D2F707F55AF19FA52EA40FBAD6E38671C026B6A8
 * Entry: 0x00253090, Ghidra index: 8393, label: FUN_00253090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00253090(int param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307a40;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  piVar1 = *(int **)(param_4 + 0xc);
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
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar3 >> 4;
    }
    if (0xfffffffU - iVar5 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar3 >> 4;
      }
      if (uVar2 < iVar5 + param_3) {
        if (0xfffffff - (uVar2 >> 1) < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (iVar3 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar3 >> 4;
        }
        if (uVar2 < iVar5 + param_3) {
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(param_1 + 8) - iVar3 >> 4;
          }
          uVar2 = iVar3 + param_3;
        }
        iVar5 = FUN_002ea01d();
        local_8 = 0;
        FUN_002533a0();
        FUN_00253380();
        FUN_002533a0();
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(param_1 + 8) - iVar3 >> 4;
        }
        if (iVar3 != 0) {
          FUN_0023c540();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = uVar2 * 0x10 + iVar5;
        *(uint *)(param_1 + 8) = (param_3 + iVar6) * 0x10 + iVar5;
        *(int *)(param_1 + 4) = iVar5;
      }
      else {
        if ((uint)(*(int *)(param_1 + 8) - param_2 >> 4) < param_3) {
          FUN_002533a0();
          local_8 = 2;
          FUN_00253380();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x10;
        }
        else {
          uVar4 = FUN_002533a0();
          *(undefined4 *)(param_1 + 8) = uVar4;
          FUN_002533d0(param_2);
        }
        FUN_00253400();
      }
    }
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
