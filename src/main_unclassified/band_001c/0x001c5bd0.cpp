/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B0D4CA0E94A1DC7ABBD0C25C92D30EE07A01C220892EED61DC4775D3BAEDD8C
 * Entry: 0x001c5bd0, Ghidra index: 5798, label: FUN_001c5bd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c5bd0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  int local_20;
  int local_1c;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00309320; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309320U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  FUN_001ccaf0();
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 0xc) - iVar2 >> 4;
  }
  if (param_3 != 0) {
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar2 >> 4;
    }
    if (0xfffffffU - iVar5 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar2 >> 4;
      }
      if (uVar1 < iVar5 + param_3) {
        if (0xfffffff - (uVar1 >> 1) < uVar1) {
          uVar1 = 0;
        }
        else {
          uVar1 = uVar1 + (uVar1 >> 1);
        }
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar2 >> 4;
        }
        if (uVar1 < iVar5 + param_3) {
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(param_1 + 8) - iVar2 >> 4;
          }
          uVar1 = iVar2 + param_3;
        }
        iVar5 = FUN_002ea01d();
        local_8 = 0;
        FUN_001ce7b0();
        FUN_001cce90();
        FUN_001ce7b0();
        local_8 = 0xffffffff;
        iVar2 = *(int *)(param_1 + 4);
        if (iVar2 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 8) - iVar2 >> 4;
        }
        if (iVar2 != 0) {
          FUN_000518b0(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar1 * 0x10 + iVar5;
        *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x10 + iVar5;
        *(int *)(param_1 + 4) = iVar5;
      }
      else {
        if ((uint)(*(int *)(param_1 + 8) - param_2 >> 4) < param_3) {
          FUN_001ce7b0();
          local_8 = 2;
          FUN_001cce90();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x10;
        }
        else {
          uVar3 = FUN_001ce7b0();
          *(undefined4 *)(param_1 + 8) = uVar3;
          FUN_001d0f60(param_2);
        }
        FUN_001d0f30();
      }
    }
  }
  if (local_20 == 0) {
    *unaff_FS_OFFSET = local_10;
    return;
  }
  for (; local_20 != local_1c; local_20 = local_20 + 0x24) {
    FUN_000e35e0();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
