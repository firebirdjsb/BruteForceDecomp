/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 30E876ACED435F796CDA8BAE88BD9081D7CAC181376C4D369B9E4C8F325F4375
 * Entry: 0x000615d0, Ghidra index: 1027, label: FUN_000615d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000615d0(int param_1,int param_2,uint param_3,int *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *unaff_FS_OFFSET;
  int *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307a20;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff84;
  param_4 = (int *)*param_4;
  local_18 = param_4;
  puVar1 = &stack0xffffff84;
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 4))();
    puVar1 = local_14;
  }
  local_14 = puVar1;
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - iVar3 >> 2;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar3 >> 2;
    }
    if (0x3fffffffU - iVar5 < param_3) {
      FUN_00038940();
      param_4 = local_18;
    }
    else {
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar3 >> 2;
      }
      if (uVar2 < iVar5 + param_3) {
        if (0x3fffffff - (uVar2 >> 1) < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (iVar3 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar3 >> 2;
        }
        if (uVar2 < iVar5 + param_3) {
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(param_1 + 8) - iVar3 >> 2;
          }
          uVar2 = iVar3 + param_3;
        }
        iVar5 = FUN_002ea01d();
        local_8 = 0;
        uVar4 = FUN_00256320();
        FUN_00061c90(uVar4,param_3,&local_18);
        FUN_00256320();
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(param_1 + 8) - iVar3 >> 2;
        }
        if (iVar3 != 0) {
          FUN_00256480();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = uVar2 * 4 + iVar5;
        *(uint *)(param_1 + 8) = iVar5 + (param_3 + iVar6) * 4;
        *(int *)(param_1 + 4) = iVar5;
        param_4 = local_18;
      }
      else {
        if ((uint)(*(int *)(param_1 + 8) - param_2 >> 2) < param_3) {
          FUN_00256320();
          local_8 = 2;
          FUN_00061c90(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2 >> 2),
                       &local_18);
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 4;
        }
        else {
          uVar4 = FUN_00256320();
          *(undefined4 *)(param_1 + 8) = uVar4;
          FUN_00256350(param_2);
        }
        FUN_00263460();
        param_4 = local_18;
      }
    }
  }
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
