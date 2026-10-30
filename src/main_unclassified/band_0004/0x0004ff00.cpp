/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81615276C172ED718298C964090ABBEDD49B1D59C9127966AD63505FF4D62AC0
 * Entry: 0x0004ff00, Ghidra index: 701, label: FUN_0004ff00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Original mapped address; ABI/relocations unverified. */
void FUN_0004ff00(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  int local_24;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = ((unsigned char *)(uintptr_t)0x003089e0u);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  FUN_001e0dd0();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x18;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x18;
    }
    if (0xaaaaaaaU - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x18;
      }
      if (uVar5 < iVar2 + param_3) {
        if (0xaaaaaaa - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x18;
        }
        if (uVar5 < iVar3 + param_3) {
          iVar3 = FUN_0017c5a0();
          uVar5 = iVar3 + param_3;
        }
        iVar2 = FUN_002ea01d();
        local_8 = 0;
        FUN_00050820();
        FUN_0004f8b0();
        FUN_00050820();
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x18;
        }
        if (iVar3 != 0) {
          FUN_0017d800(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar5 * 0x18 + iVar2;
        *(uint *)(param_1 + 8) = iVar2 + (param_3 + iVar4) * 0x18;
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x18) < param_3) {
          FUN_00050820();
          local_8 = 2;
          FUN_0004f8b0();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x18;
        }
        else {
          uVar1 = FUN_00050820();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_00050880(param_2);
        }
        FUN_00050850();
      }
    }
  }
  if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
