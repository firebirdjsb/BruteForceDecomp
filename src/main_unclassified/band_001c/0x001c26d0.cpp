/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F2D811B4568F4B41648795F1C6F212092660067B269A04F85C702A981BDED46D
 * Entry: 0x001c26d0, Ghidra index: 5778, label: FUN_001c26d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c26d0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_EDX;
  undefined4 *unaff_FS_OFFSET;
  uint local_58;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00308160; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308160U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_001d1f40();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    local_58 = 0;
  }
  else {
    local_58 = *(int *)(param_1 + 0xc) - iVar3 >> 6;
  }
  if (in_EDX != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - iVar3 >> 6;
    }
    if (0x3ffffffU - iVar2 < in_EDX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - iVar3 >> 6;
    }
    if (local_58 < iVar2 + in_EDX) {
      if (0x3ffffff - (local_58 >> 1) < local_58) {
        local_58 = 0;
      }
      else {
        local_58 = local_58 + (local_58 >> 1);
      }
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_1 + 8) - iVar3 >> 6;
      }
      if (local_58 < iVar2 + in_EDX) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 8) - iVar3 >> 6;
        }
        local_58 = iVar3 + in_EDX;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce450();
      FUN_001cc850();
      FUN_001ce450();
      local_8 = 0xffffffff;
      iVar3 = *(int *)(param_1 + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 8) - iVar3 >> 6;
      }
      if (iVar3 != 0) {
        for (; iVar3 != *(int *)(param_1 + 8); iVar3 = iVar3 + 0x40) {
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(param_1 + 0xc) = local_58 * 0x40 + iVar2;
      *(uint *)(param_1 + 8) = (in_EDX + iVar4) * 0x40 + iVar2;
      *(int *)(param_1 + 4) = iVar2;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)(*(int *)(param_1 + 8) - param_2 >> 6) < in_EDX) {
      FUN_001ce450();
      local_8 = 2;
      FUN_001cc850();
      local_8 = 0xffffffff;
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + in_EDX * 0x40;
    }
    else {
      uVar1 = FUN_001ce450();
      *(undefined4 *)(param_1 + 8) = uVar1;
      FUN_001d0730(param_2);
    }
    FUN_001d0700();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
