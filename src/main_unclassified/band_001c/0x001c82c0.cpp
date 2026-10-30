/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A275A5AE4529B842624622F4CD74C238184CB0A24F81033BE1668BF7390996C1
 * Entry: 0x001c82c0, Ghidra index: 5817, label: FUN_001c82c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c82c0(int param_1)

{
  undefined4 uVar1;
  uint in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_EDX;
  undefined4 *unaff_FS_OFFSET;
  uint local_38;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x003080d0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003080d0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar3 = *(int *)(in_EDX + 4);
  if (iVar3 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = *(int *)(in_EDX + 0xc) - iVar3 >> 5;
  }
  if (in_ECX != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_EDX + 8) - iVar3 >> 5;
    }
    if (0x7ffffffU - iVar2 < in_ECX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_EDX + 8) - iVar3 >> 5;
    }
    if (local_38 < iVar2 + in_ECX) {
      if (0x7ffffff - (local_38 >> 1) < local_38) {
        local_38 = 0;
      }
      else {
        local_38 = local_38 + (local_38 >> 1);
      }
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(in_EDX + 8) - iVar3 >> 5;
      }
      if (local_38 < iVar2 + in_ECX) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(in_EDX + 8) - iVar3 >> 5;
        }
        local_38 = iVar3 + in_ECX;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce9c0(in_EDX);
      FUN_001cd270();
      FUN_001ce9c0(in_EDX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_EDX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_EDX + 8) - iVar3 >> 5;
      }
      if (iVar3 == 0) {
        *(uint *)(in_EDX + 0xc) = local_38 * 0x20 + iVar2;
        *(uint *)(in_EDX + 8) = (in_ECX + iVar4) * 0x20 + iVar2;
        *(int *)(in_EDX + 4) = iVar2;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar3 != *(int *)(in_EDX + 8); iVar3 = iVar3 + 0x20) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
    if ((uint)(*(int *)(in_EDX + 8) - param_1 >> 5) < in_ECX) {
      FUN_001ce9c0(in_EDX);
      local_8 = 2;
      FUN_001cd270();
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 0x20;
    }
    else {
      uVar1 = FUN_001ce9c0(in_EDX);
      *(undefined4 *)(in_EDX + 8) = uVar1;
      FUN_001d14e0(param_1);
    }
    FUN_001d1480();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
