/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8958E29537920B46CCD9D6BCEF9FA6F4E836884617AE6BDF638E03895D4476B9
 * Entry: 0x00247c10, Ghidra index: 8108, label: FUN_00247c10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00247c10(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_003098a0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_00248040();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x2c;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x2c;
    }
    if (0x5d1745dU - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x2c;
      }
      if (uVar5 < iVar2 + param_3) {
        if (0x5d1745d - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x2c;
        }
        if (uVar5 < iVar3 + param_3) {
          iVar3 = FUN_00240d60();
          uVar5 = iVar3 + param_3;
        }
        iVar2 = FUN_002ea01d();
        local_8 = 0;
        FUN_002490e0();
        FUN_002489b0();
        FUN_002490e0();
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x2c;
        }
        if (iVar3 != 0) {
          FUN_002440c0();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = uVar5 * 0x2c + iVar2;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x2c + iVar2;
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x2c) < param_3) {
          FUN_002490e0();
          local_8 = 2;
          FUN_002489b0();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x2c;
        }
        else {
          uVar1 = FUN_002490e0();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_002498f0(param_2);
        }
        FUN_002498c0();
      }
    }
  }
  FUN_002430a0();
  *unaff_FS_OFFSET = local_10;
  return;
}
