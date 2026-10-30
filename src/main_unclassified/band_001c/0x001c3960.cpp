/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82E49B06A06B6E6DA996C1AA808B1642AC7A2784B9A414A496066C7AF9FC78BC
 * Entry: 0x001c3960, Ghidra index: 5784, label: FUN_001c3960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c3960(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_EDX;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_54;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00308140; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308140U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  FUN_001ca330();
  iVar4 = *(int *)(in_EDX + 4);
  if (iVar4 == 0) {
    local_54 = 0;
  }
  else {
    local_54 = (*(int *)(in_EDX + 0xc) - iVar4) / 0x3c;
  }
  if (param_2 != 0) {
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_EDX + 8) - iVar4) / 0x3c;
    }
    if (0x4444444U - iVar3 < param_2) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(in_EDX + 8) - iVar4) / 0x3c;
    }
    if (local_54 < iVar4 + param_2) {
      if (0x4444444 - (local_54 >> 1) < local_54) {
        local_54 = 0;
      }
      else {
        local_54 = local_54 + (local_54 >> 1);
      }
      iVar4 = FUN_00162850();
      if (local_54 < iVar4 + param_2) {
        iVar4 = FUN_00162850();
        local_54 = iVar4 + param_2;
      }
      iVar3 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce600();
      FUN_001cc950();
      FUN_001ce600();
      local_8 = 0xffffffff;
      iVar1 = FUN_00162850();
      iVar4 = *(int *)(in_EDX + 4);
      if (iVar4 != 0) {
        for (; iVar4 != *(int *)(in_EDX + 8); iVar4 = iVar4 + 0x3c) {
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_EDX + 0xc) = local_54 * 0x3c + iVar3;
      *(uint *)(in_EDX + 8) = (param_2 + iVar1) * 0x3c + iVar3;
      *(int *)(in_EDX + 4) = iVar3;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)((*(int *)(in_EDX + 8) - param_1) / 0x3c) < param_2) {
      FUN_001ce600();
      local_8 = 2;
      FUN_001cc950();
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + param_2 * 0x3c;
    }
    else {
      uVar2 = FUN_001ce600();
      *(undefined4 *)(in_EDX + 8) = uVar2;
      FUN_001d0ba0(param_1);
    }
    FUN_001d0b20();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
