/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43BC95BCB5C32D5D3C91FFE47991772B546AEE149C89750A5845789DBE91DEDF
 * Entry: 0x00245160, Ghidra index: 8080, label: FUN_00245160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00245160(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  int *local_3c;
  int local_24;
  int local_20;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x003090a0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003090a0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_00247f40();
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
        FUN_00248f00();
        FUN_002486e0();
        FUN_00248f00();
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x2c;
        }
        if (iVar3 != 0) {
          FUN_0024a730(iVar3,*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar5 * 0x2c + iVar2;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x2c + iVar2;
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x2c) < param_3) {
          FUN_00248f00();
          local_8 = 2;
          FUN_002486e0();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x2c;
        }
        else {
          uVar1 = FUN_00248f00();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_002492f0(param_2);
        }
        FUN_002492c0();
      }
    }
  }
  if (local_24 != 0) {
    for (; local_24 != local_20; local_24 = local_24 + 0x30) {
      FUN_000e35e0();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  if (local_3c != (int *)0x0) {
    (**(code **)(*local_3c + 8))();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
