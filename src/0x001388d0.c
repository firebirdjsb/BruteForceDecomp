/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1BB92068A478E58B1756177ABC05BF9D6E2F4C79EE71DD2BF97E3A52F24811FD
 * Entry: 0x001388d0, Ghidra index: 3930, label: FUN_001388d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00138c13) */

void FUN_001388d0(int param_1,int param_2,uint param_3,int param_4)

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
  puStack_c = &LAB_00308950;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uVar5 = 0;
  if (*(int *)(param_4 + 0x10) != 0) {
    FUN_0008f6a0();
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 != 0) {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x14;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x14;
    }
    if (0xcccccccU - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x14;
      }
      if (uVar5 < iVar2 + param_3) {
        if (0xccccccc - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x14;
        }
        if (uVar5 < iVar3 + param_3) {
          iVar3 = FUN_0017c210();
          uVar5 = iVar3 + param_3;
        }
        iVar2 = FUN_002ea01d();
        local_8 = 0;
        FUN_001394d0(param_1);
        FUN_00137ea0();
        FUN_001394d0(param_1);
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x14;
        }
        if (iVar3 != 0) {
          FUN_00139bf0();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar5 * 0x14 + iVar2;
        *(uint *)(param_1 + 8) = iVar2 + (param_3 + iVar4) * 0x14;
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x14) < param_3) {
          FUN_001394d0(param_1);
          local_8 = 2;
          FUN_00137ea0();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x14;
        }
        else {
          uVar1 = FUN_001394d0(param_1);
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_00139590(param_2);
        }
        FUN_00139500();
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
