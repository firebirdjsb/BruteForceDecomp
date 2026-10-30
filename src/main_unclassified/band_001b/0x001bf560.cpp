/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E8CFCFAA0999819D48DB75ADB60ADF5C9B6C0B106D8A8E0EDE75D7F872CE907
 * Entry: 0x001bf560, Ghidra index: 5764, label: FUN_001bf560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001bf560(int param_1,int param_2,uint param_3)

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
  /* Original entry+5: push 0x00309380; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309380U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  FUN_001cc3b0();
  FUN_001e0dd0();
  FUN_001e0dd0();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x44;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x44;
    }
    if (0x3c3c3c3U - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x44;
      }
      if (uVar5 < iVar2 + param_3) {
        if (0x3c3c3c3 - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x44;
        }
        if (uVar5 < iVar3 + param_3) {
          iVar3 = FUN_000e0c50();
          uVar5 = iVar3 + param_3;
        }
        iVar2 = FUN_002ea01d();
        local_8 = 0;
        FUN_001ce240();
        FUN_001cc640();
        FUN_001ce240();
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x44;
        }
        if (iVar3 != 0) {
          FUN_00132c50(iVar3,*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar5 * 0x44 + iVar2;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x44 + iVar2;
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x44) < param_3) {
          FUN_001ce240();
          local_8 = 2;
          FUN_001cc640();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x44;
        }
        else {
          uVar1 = FUN_001ce240();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001d0230(param_2);
        }
        FUN_001d01d0();
      }
    }
  }
  FUN_00132d60();
  *unaff_FS_OFFSET = local_10;
  return;
}
