/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82001598E2D27A593C7EBB85D4A1977B27D9236A7904A73C98D6B89B3EEA65BE
 * Entry: 0x001c2e10, Ghidra index: 5781, label: FUN_001c2e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c2e10(int param_1,int param_2,uint param_3)

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
  puStack_c = &LAB_00309760;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_001ca1d0();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x1a8;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x1a8;
    }
    if (0x9a90e7U - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x1a8;
      }
      if (uVar5 < iVar2 + param_3) {
        if (0x9a90e7 - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x1a8;
        }
        if (uVar5 < iVar3 + param_3) {
          iVar3 = FUN_001627c0();
          uVar5 = iVar3 + param_3;
        }
        iVar2 = FUN_002ea01d();
        local_8 = 0;
        FUN_001ce570();
        FUN_001cc8c0();
        FUN_001ce570();
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x1a8;
        }
        if (iVar3 != 0) {
          FUN_00162a90(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar5 * 0x1a8 + iVar2;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x1a8 + iVar2;
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x1a8) < param_3) {
          FUN_001ce570();
          local_8 = 2;
          FUN_001cc8c0();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x1a8;
        }
        else {
          uVar1 = FUN_001ce570();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001d0a00(param_2);
        }
        FUN_001d09d0();
      }
    }
  }
  FUN_001602c0();
  *unaff_FS_OFFSET = local_10;
  return;
}
