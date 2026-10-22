/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CECF36A307C91A3B5E081679A43EEF7F9A40930159A40E2AF14494A80653EC5E
 * Entry: 0x001c1c40, Ghidra index: 5775, label: FUN_001c1c40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x001c1f81) */

void FUN_001c1c40(int param_1,int param_2,uint param_3,int param_4)

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
  puStack_c = &LAB_00308e10;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uVar5 = 0;
  FUN_0001f4f0(param_4 + 0x10);
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 != 0) {
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
        FUN_001ce4b0();
        FUN_001cc7e0();
        FUN_001ce4b0();
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x2c;
        }
        if (iVar3 != 0) {
          FUN_001629c0(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar5 * 0x2c + iVar2;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x2c + iVar2;
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x2c) < param_3) {
          FUN_001ce4b0();
          local_8 = 2;
          FUN_001cc7e0();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x2c;
        }
        else {
          uVar1 = FUN_001ce4b0();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001d0810(param_2);
        }
        FUN_001d07c0();
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
