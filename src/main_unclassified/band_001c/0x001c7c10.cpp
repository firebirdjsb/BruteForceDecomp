/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F50BF57DC9F43348707B4700023B088EA7EC8DE78ED9DBADDB6A0DDC5407AE3
 * Entry: 0x001c7c10, Ghidra index: 5815, label: FUN_001c7c10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c7c10(int param_1,int param_2,uint param_3)

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
  /* Original entry+5: push 0x00309b40; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309b40U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  FUN_001ca850();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0x6c;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x6c;
    }
    if (0x25ed097U - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x6c;
      }
      if (uVar5 < iVar2 + param_3) {
        if (0x25ed097 - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x6c;
        }
        if (uVar5 < iVar3 + param_3) {
          iVar3 = FUN_0017c570();
          uVar5 = iVar3 + param_3;
        }
        iVar2 = FUN_002ea01d();
        local_8 = 0;
        FUN_001ce930();
        FUN_001cd230();
        FUN_001ce930();
        local_8 = 0xffffffff;
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x6c;
        }
        if (iVar3 != 0) {
          FUN_00085960();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = uVar5 * 0x6c + iVar2;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x6c + iVar2;
        *(int *)(param_1 + 4) = iVar2;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x6c) < param_3) {
          FUN_001ce930();
          local_8 = 2;
          FUN_001cd230();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x6c;
        }
        else {
          uVar1 = FUN_001ce930();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001d1340(param_2);
        }
        FUN_001d1310();
      }
    }
  }
  FUN_00086ed0();
  *unaff_FS_OFFSET = local_10;
  return;
}
