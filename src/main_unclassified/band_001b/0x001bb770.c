/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B74FAFDC9CB78611E0224826158786295A991F8817E2727FE8C642ABEB1A3FC6
 * Entry: 0x001bb770, Ghidra index: 5734, label: FUN_001bb770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001bb770(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  uint local_34;
  int local_20;
  int local_1c;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003093a0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_001e0dd0();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    local_34 = 0;
  }
  else {
    local_34 = (*(int *)(param_1 + 0xc) - iVar3) / 0x1c;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x1c;
    }
    if (0x9249249U - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x1c;
      }
      if (local_34 < iVar3 + param_3) {
        if (0x9249249 - (local_34 >> 1) < local_34) {
          local_34 = 0;
        }
        else {
          local_34 = local_34 + (local_34 >> 1);
        }
        iVar3 = FUN_0015e840();
        if (local_34 < iVar3 + param_3) {
          iVar3 = FUN_0015e840();
          local_34 = iVar3 + param_3;
        }
        iVar3 = FUN_002ea01d();
        local_8 = 0;
        FUN_001cdf40(param_1);
        FUN_001cbb10();
        FUN_001cdf40(param_1);
        local_8 = 0xffffffff;
        iVar2 = FUN_0015e840();
        if (*(int *)(param_1 + 4) != 0) {
          FUN_000e2df0(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = local_34 * 0x1c + iVar3;
        *(uint *)(param_1 + 8) = (param_3 + iVar2) * 0x1c + iVar3;
        *(int *)(param_1 + 4) = iVar3;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x1c) < param_3) {
          FUN_001cdf40(param_1);
          local_8 = 2;
          FUN_001cbb10();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x1c;
        }
        else {
          uVar1 = FUN_001cdf40(param_1);
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001cf710(param_2);
        }
        FUN_001cf6d0();
      }
    }
  }
  if (local_20 != 0) {
    for (; local_20 != local_1c; local_20 = local_20 + 4) {
      FUN_000e35e0();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
