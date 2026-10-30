/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1264793BA1FA924689AB86B86D2C5283D0E7B0F16EC4434F8FEF095A4943E552
 * Entry: 0x001e10c0, Ghidra index: 6730, label: FUN_001e10c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e10c0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_ECX;
  int in_EDX;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00307990; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307990U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar2 = *(int *)(in_EDX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_EDX + 0xc) - iVar2 >> 3;
  }
  if (in_ECX != 0) {
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_EDX + 8) - iVar2 >> 3;
    }
    if (0x1fffffffU - iVar5 < in_ECX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_EDX + 8) - iVar2 >> 3;
    }
    if (uVar1 < iVar5 + in_ECX) {
      if (0x1fffffff - (uVar1 >> 1) < uVar1) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar1 + (uVar1 >> 1);
      }
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_EDX + 8) - iVar2 >> 3;
      }
      if (uVar1 < iVar5 + in_ECX) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(in_EDX + 8) - iVar2 >> 3;
        }
        uVar1 = iVar2 + in_ECX;
      }
      iVar5 = FUN_002ea01d();
      local_8 = 0;
      uVar3 = FUN_00236f00();
      FUN_00144b10(uVar3);
      FUN_00236f00();
      local_8 = 0xffffffff;
      iVar2 = *(int *)(in_EDX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_EDX + 8) - iVar2 >> 3;
      }
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_EDX + 0xc) = uVar1 * 8 + iVar5;
      *(uint *)(in_EDX + 8) = iVar5 + (in_ECX + iVar4) * 8;
      *(int *)(in_EDX + 4) = iVar5;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)(*(int *)(in_EDX + 8) - param_1 >> 3) < in_ECX) {
      FUN_00236f00();
      local_8 = 2;
      FUN_00144b10(*(int *)(in_EDX + 8),in_ECX - (*(int *)(in_EDX + 8) - param_1 >> 3));
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 8;
    }
    else {
      uVar3 = FUN_00236f00();
      *(undefined4 *)(in_EDX + 8) = uVar3;
      FUN_001ceb90(param_1);
    }
    FUN_00256380();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
