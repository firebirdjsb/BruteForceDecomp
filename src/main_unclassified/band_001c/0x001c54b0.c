/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 289DBB29B16478975A45CDACB4E398503DCBE8939A92928949180C6B86C76199
 * Entry: 0x001c54b0, Ghidra index: 5794, label: FUN_001c54b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c54b0(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 uStack_10;
  /* Original x86 pushes a guest 32-bit SEH handler address; this is
   * not a native host pointer or a completed Windows SEH adaptation. */
  uint32_t puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00308120);
  uStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_10;
  local_14 = &stack0xffffff80;
  local_1c = *param_4;
  local_18 = 0;
  FUN_001cd360();
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 0xc) - iVar2 >> 3;
  }
  if (param_3 != 0) {
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar2 >> 3;
    }
    if (0x1fffffffU - iVar5 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar2 >> 3;
      }
      if (uVar1 < iVar5 + param_3) {
        if (0x1fffffff - (uVar1 >> 1) < uVar1) {
          uVar1 = 0;
        }
        else {
          uVar1 = uVar1 + (uVar1 >> 1);
        }
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar2 >> 3;
        }
        if (uVar1 < iVar5 + param_3) {
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(param_1 + 8) - iVar2 >> 3;
          }
          uVar1 = iVar2 + param_3;
        }
        iVar5 = FUN_002ea01d();
        local_8 = 0;
        uVar3 = FUN_001ce750();
        FUN_001dbca0(uVar3,param_3,&local_1c);
        FUN_001ce750();
        local_8 = 0xffffffff;
        iVar2 = *(int *)(param_1 + 4);
        if (iVar2 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 8) - iVar2 >> 3;
        }
        if (iVar2 != 0) {
          FUN_00051850();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = uVar1 * 8 + iVar5;
        *(uint *)(param_1 + 8) = iVar5 + (param_3 + iVar4) * 8;
        *(int *)(param_1 + 4) = iVar5;
      }
      else {
        if ((uint)(*(int *)(param_1 + 8) - param_2 >> 3) < param_3) {
          FUN_001ce750();
          local_8 = 2;
          FUN_001dbca0(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2 >> 3),
                       &local_1c);
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 8;
        }
        else {
          uVar3 = FUN_001ce750();
          *(undefined4 *)(param_1 + 8) = uVar3;
          FUN_001d0e60(param_2);
        }
        FUN_001d0df0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
