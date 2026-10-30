/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B0BB34CE85FDA25060A313F58B90C55BC4CAE98A8E83D68EDCD61B8CEE213D4
 * Entry: 0x001bd760, Ghidra index: 5748, label: FUN_001bd760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001bd760(int param_1,uint param_2)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_20;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00307d30; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307d30U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar3 = *(int *)(in_ECX + 4);
  if (iVar3 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = *(int *)(in_ECX + 0xc) - iVar3 >> 3;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8) - iVar3 >> 3;
    }
    if (0x1fffffffU - iVar2 < param_2) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8) - iVar3 >> 3;
    }
    if (local_20 < iVar2 + param_2) {
      if (0x1fffffff - (local_20 >> 1) < local_20) {
        local_20 = 0;
      }
      else {
        local_20 = local_20 + (local_20 >> 1);
      }
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(in_ECX + 8) - iVar3 >> 3;
      }
      if (local_20 < iVar2 + param_2) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(in_ECX + 8) - iVar3 >> 3;
        }
        local_20 = iVar3 + param_2;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      uVar1 = FUN_00236f00();
      FUN_00144b10(uVar1,param_2);
      FUN_00236f00();
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_ECX + 8) - iVar3 >> 3;
      }
      if (iVar3 != 0) {
        for (; iVar3 != *(int *)(in_ECX + 8); iVar3 = iVar3 + 8) {
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_ECX + 0xc) = iVar2 + local_20 * 8;
      *(uint *)(in_ECX + 8) = iVar2 + (param_2 + iVar4) * 8;
      *(int *)(in_ECX + 4) = iVar2;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)(*(int *)(in_ECX + 8) - param_1 >> 3) < param_2) {
      FUN_00236f00();
      local_8 = 2;
      FUN_00144b10(*(int *)(in_ECX + 8),param_2 - (*(int *)(in_ECX + 8) - param_1 >> 3));
      local_8 = 0xffffffff;
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 8;
    }
    else {
      uVar1 = FUN_00236f00();
      *(undefined4 *)(in_ECX + 8) = uVar1;
      FUN_001ceb90(param_1);
    }
    FUN_00256380();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
