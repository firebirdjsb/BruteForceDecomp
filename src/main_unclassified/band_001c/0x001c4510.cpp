/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3919963329CBC399F78F4188E779070D82C2B94008CB4376EE608950F7774ED0
 * Entry: 0x001c4510, Ghidra index: 5787, label: FUN_001c4510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c4510(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00309750; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309750U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_001ca410();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x1ac;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x1ac;
    }
    if (0x991f1aU - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x1ac;
      }
      if (uVar5 < iVar2 + param_3) {
        if (0x991f1a - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x1ac;
        }
        if (uVar5 < iVar3 + param_3) {
          iVar3 = FUN_001628b0();
          uVar5 = iVar3 + param_3;
        }
        iVar2 = FUN_002ea01d();
        local_8 = 0;
        FUN_001ce690();
        FUN_001cc9a0();
        FUN_001ce690();
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x1ac;
        }
        if (iVar3 != 0) {
          FUN_00161720();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = uVar5 * 0x1ac + iVar2;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x1ac + iVar2;
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x1ac) < param_3) {
          FUN_001ce690();
          local_8 = 2;
          FUN_001cc9a0();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x1ac;
        }
        else {
          uVar1 = FUN_001ce690();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001d0c60(param_2);
        }
        FUN_001d0c30();
      }
    }
  }
  FUN_001604c0();
  *unaff_FS_OFFSET = local_10;
  return;
}
