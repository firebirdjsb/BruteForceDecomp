/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 55E9F06AC892FE5038A4E9B552AC0824D0E47F849F7CD5B734EED9F79E20D417
 * Entry: 0x001c29e0, Ghidra index: 5780, label: FUN_001c29e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x001c2d7d) */

void FUN_001c29e0(int param_1,int param_2,uint param_3,int param_4)

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
  /* Original entry+5: push 0x00309770; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309770U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_001ca050();
  uVar5 = 0;
  FUN_0001f4f0(param_4 + 0x128);
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 != 0) {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x144;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x144;
    }
    if (0xca4587U - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x144;
      }
      if (uVar5 < iVar2 + param_3) {
        if (0xca4587 - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x144;
        }
        if (uVar5 < iVar3 + param_3) {
          iVar3 = FUN_00162790();
          uVar5 = iVar3 + param_3;
        }
        iVar2 = FUN_002ea01d();
        local_8 = 0;
        FUN_001ce540();
        FUN_001cc8a0();
        FUN_001ce540();
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x144;
        }
        if (iVar3 != 0) {
          FUN_00162a20(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar5 * 0x144 + iVar2;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x144 + iVar2;
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x144) < param_3) {
          FUN_001ce540();
          local_8 = 2;
          FUN_001cc8a0();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x144;
        }
        else {
          uVar1 = FUN_001ce540();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001d09a0(param_2);
        }
        FUN_001d0960();
      }
    }
  }
  FUN_00160220();
  *unaff_FS_OFFSET = local_10;
  return;
}
