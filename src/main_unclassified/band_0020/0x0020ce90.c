/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F3953B1EADDD78502D9A40CFAE9A58CB732CB95FF25D372CE591DFF21EDD08F3
 * Entry: 0x0020ce90, Ghidra index: 7362, label: FUN_0020ce90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x0020d166) */

void FUN_0020ce90(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00307fc0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307fc0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)(param_4 + 4) != 0) {
    FUN_0008f6a0();
  }
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
        FUN_0005dc50(param_1);
        FUN_0020d190();
        FUN_0005dc50(param_1);
        local_8 = 0xffffffff;
        iVar2 = *(int *)(param_1 + 4);
        if (iVar2 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 8) - iVar2 >> 3;
        }
        if (iVar2 != 0) {
          FUN_0001d590();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar1 * 8 + iVar5;
        *(uint *)(param_1 + 8) = iVar5 + (param_3 + iVar3) * 8;
        *(int *)(param_1 + 4) = iVar5;
      }
      else {
        if ((uint)(*(int *)(param_1 + 8) - param_2 >> 3) < param_3) {
          FUN_0005dc50(param_1);
          local_8 = 2;
          FUN_0020d190();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 8;
        }
        else {
          uVar4 = FUN_0005dc50(param_1);
          *(undefined4 *)(param_1 + 8) = uVar4;
          FUN_0020d750(param_2);
        }
        FUN_0020d710();
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
