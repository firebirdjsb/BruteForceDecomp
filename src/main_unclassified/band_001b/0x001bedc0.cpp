/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A0D91F8B806C5A0933477036642AA5868E02AA478993F5C4AE6D063887DD7E5
 * Entry: 0x001bedc0, Ghidra index: 5760, label: FUN_001bedc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001bedc0(int param_1,int param_2,uint param_3)

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
  /* Original entry+5: push 0x00309790; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309790U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_000fdc90();
  FUN_000fdaa0();
  FUN_000fdba0();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x30;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x30;
    }
    if (0x5555555U - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x30;
      }
      if (uVar5 < iVar2 + param_3) {
        if (0x5555555 - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x30;
        }
        if (uVar5 < iVar3 + param_3) {
          iVar3 = FUN_001f7510();
          uVar5 = iVar3 + param_3;
        }
        iVar2 = FUN_002ea01d();
        local_8 = 0;
        FUN_001ce1b0(param_1);
        FUN_001cc290();
        FUN_001ce1b0(param_1);
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x30;
        }
        if (iVar3 != 0) {
          FUN_0006a390();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = uVar5 * 0x30 + iVar2;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x30 + iVar2;
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x30) < param_3) {
          FUN_001ce1b0(param_1);
          local_8 = 2;
          FUN_001cc290();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x30;
        }
        else {
          uVar1 = FUN_001ce1b0(param_1);
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001d0030(param_2);
        }
        FUN_001cff40();
      }
    }
  }
  FUN_0006a4c0();
  *unaff_FS_OFFSET = local_10;
  return;
}
