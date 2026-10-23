/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 503B5AA2474028DE8129B8760BBCFE52978BB4072963DD925A739B9CCFA3D9E9
 * Entry: 0x00263ec0, Ghidra index: 8696, label: FUN_00263ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00263ec0(int param_1)

{
  undefined4 uVar1;
  uint in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_EDX;
  undefined4 *unaff_FS_OFFSET;
  uint local_20;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00307a00; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307a00U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar3 = *(int *)(in_EDX + 4);
  if (iVar3 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = *(int *)(in_EDX + 0xc) - iVar3 >> 3;
  }
  if (in_ECX != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_EDX + 8) - iVar3 >> 3;
    }
    if (0x1fffffffU - iVar2 < in_ECX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_EDX + 8) - iVar3 >> 3;
    }
    if (local_20 < iVar2 + in_ECX) {
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
        iVar2 = *(int *)(in_EDX + 8) - iVar3 >> 3;
      }
      if (local_20 < iVar2 + in_ECX) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(in_EDX + 8) - iVar3 >> 3;
        }
        local_20 = iVar3 + in_ECX;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce3c0();
      FUN_001cc660();
      FUN_001ce3c0();
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_EDX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_EDX + 8) - iVar3 >> 3;
      }
      if (iVar3 == 0) {
        *(uint *)(in_EDX + 0xc) = iVar2 + local_20 * 8;
        *(uint *)(in_EDX + 8) = iVar2 + (in_ECX + iVar4) * 8;
        *(int *)(in_EDX + 4) = iVar2;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar3 != *(int *)(in_EDX + 8); iVar3 = iVar3 + 8) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
    if ((uint)(*(int *)(in_EDX + 8) - param_1 >> 3) < in_ECX) {
      FUN_001ce3c0();
      local_8 = 2;
      FUN_001cc660();
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 8;
    }
    else {
      uVar1 = FUN_001ce3c0();
      *(undefined4 *)(in_EDX + 8) = uVar1;
      FUN_001ceb90(param_1);
    }
    FUN_00256380();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
