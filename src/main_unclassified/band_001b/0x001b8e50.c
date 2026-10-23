/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 397B592625476C2C688A053AC9BCC9371CF0699B7C281849D74E3FE249D1D483
 * Entry: 0x001b8e50, Ghidra index: 5709, label: FUN_001b8e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b8e50(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  int local_20;
  int local_1c;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00309410;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_001c9470();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0xac;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0xac;
    }
    if (0x17d05f4U - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0xac;
      }
      if (uVar5 < iVar2 + param_3) {
        if (0x17d05f4 - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0xac;
        }
        if (uVar5 < iVar3 + param_3) {
          iVar3 = FUN_00131df0();
          uVar5 = iVar3 + param_3;
        }
        iVar2 = FUN_002ea01d();
        local_8 = 0;
        FUN_001cdd90();
        FUN_001cb660();
        FUN_001cdd90();
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0xac;
        }
        if (iVar3 != 0) {
          FUN_000e1590();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = uVar5 * 0xac + iVar2;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0xac + iVar2;
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0xac) < param_3) {
          FUN_001cdd90();
          local_8 = 2;
          FUN_001cb660();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0xac;
        }
        else {
          uVar1 = FUN_001cdd90();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001cf260(param_2);
        }
        FUN_001cf230();
      }
    }
  }
  if (local_20 == 0) {
    FUN_000e3780();
    FUN_000e3780();
    *unaff_FS_OFFSET = local_10;
    return;
  }
  for (; local_20 != local_1c; local_20 = local_20 + 0xc) {
    FUN_000e35e0();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
