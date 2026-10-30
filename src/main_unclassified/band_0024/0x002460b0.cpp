/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 548445EC7780C5DC96C71331061C47AFF8A7A272A61D7B399374CDA17207A8A3
 * Entry: 0x002460b0, Ghidra index: 8089, label: FUN_002460b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00246378) */

void FUN_002460b0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_ECX;
  int iVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00308b40; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308b40U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_0001f4f0(in_ECX);
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 0xc) - iVar2 >> 5;
  }
  if (param_3 != 0) {
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar2 >> 5;
    }
    if (0x7ffffffU - iVar5 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar2 >> 5;
      }
      if (uVar1 < iVar5 + param_3) {
        if (0x7ffffff - (uVar1 >> 1) < uVar1) {
          uVar1 = 0;
        }
        else {
          uVar1 = uVar1 + (uVar1 >> 1);
        }
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar2 >> 5;
        }
        if (uVar1 < iVar5 + param_3) {
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(param_1 + 8) - iVar2 >> 5;
          }
          uVar1 = iVar2 + param_3;
        }
        iVar5 = FUN_002ea01d();
        local_8 = 0;
        FUN_00248f90();
        FUN_00248810();
        FUN_00248f90();
        local_8 = 0xffffffff;
        iVar2 = *(int *)(param_1 + 4);
        if (iVar2 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 8) - iVar2 >> 5;
        }
        if (iVar2 != 0) {
          FUN_0024a7f0();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar1 * 0x20 + iVar5;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x20 + iVar5;
        *(int *)(param_1 + 4) = iVar5;
      }
      else {
        if ((uint)(*(int *)(param_1 + 8) - param_2 >> 5) < param_3) {
          FUN_00248f90();
          local_8 = 2;
          FUN_00248810();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x20;
        }
        else {
          uVar3 = FUN_00248f90();
          *(undefined4 *)(param_1 + 8) = uVar3;
          FUN_00249510(param_2);
        }
        FUN_002494e0();
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
