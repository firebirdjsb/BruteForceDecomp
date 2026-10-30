/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7851BDA122BF85F828AE17C8341DD0E248DCC9D9B9349ED99DDC823CCD0284EA
 * Entry: 0x001c5830, Ghidra index: 5796, label: FUN_001c5830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c5830(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00308110; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308110U;
  uStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = uStack_10;
  FUN_001cd360();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0xc;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0xc;
    }
    if (0x15555555U - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0xc;
      }
      if (uVar5 < iVar2 + param_3) {
        if (0x15555555 - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0xc;
        }
        if (uVar5 < iVar3 + param_3) {
          iVar3 = FUN_001aa460();
          uVar5 = iVar3 + param_3;
        }
        iVar2 = FUN_002ea01d();
        local_8 = 0;
        FUN_001ce780();
        FUN_001ccda0();
        FUN_001ce780();
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0xc;
        }
        if (iVar3 != 0) {
          FUN_00051870();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = uVar5 * 0xc + iVar2;
        *(uint *)(param_1 + 8) = iVar2 + (param_3 + iVar4) * 0xc;
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0xc) < param_3) {
          FUN_001ce780();
          local_8 = 2;
          FUN_001ccda0();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0xc;
        }
        else {
          uVar1 = FUN_001ce780();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001d0f00(param_2);
        }
        FUN_001d0e90();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
