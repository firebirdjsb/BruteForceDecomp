/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E777A8A25DE222FC105F017A47FEBED876ACFD3890FE6F5CF9E9932E66109C4
 * Entry: 0x001bff50, Ghidra index: 5767, label: FUN_001bff50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001bff50(int param_1)

{
  undefined4 uVar1;
  uint in_ECX;
  int in_EDX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_2c;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x003081a0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003081a0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar3 = *(int *)(in_EDX + 4);
  if (iVar3 == 0) {
    local_2c = 0;
  }
  else {
    local_2c = (*(int *)(in_EDX + 0xc) - iVar3) / 0x14;
  }
  if (in_ECX != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EDX + 8) - iVar3) / 0x14;
    }
    if (0xcccccccU - iVar2 < in_ECX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EDX + 8) - iVar3) / 0x14;
    }
    if (local_2c < iVar2 + in_ECX) {
      if (0xccccccc - (local_2c >> 1) < local_2c) {
        local_2c = 0;
      }
      else {
        local_2c = local_2c + (local_2c >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_EDX + 8) - iVar3) / 0x14;
      }
      if (local_2c < iVar3 + in_ECX) {
        iVar3 = FUN_0017c210();
        local_2c = iVar3 + in_ECX;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce2d0(in_EDX);
      FUN_001cc6c0();
      FUN_001ce2d0(in_EDX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_EDX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_EDX + 8) - iVar3) / 0x14;
      }
      if (iVar3 == 0) {
        *(uint *)(in_EDX + 0xc) = iVar2 + local_2c * 0x14;
        *(uint *)(in_EDX + 8) = iVar2 + (in_ECX + iVar4) * 0x14;
        *(int *)(in_EDX + 4) = iVar2;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar3 != *(int *)(in_EDX + 8); iVar3 = iVar3 + 0x14) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
    if ((uint)((*(int *)(in_EDX + 8) - param_1) / 0x14) < in_ECX) {
      FUN_001ce2d0(in_EDX);
      local_8 = 2;
      FUN_001cc6c0();
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 0x14;
    }
    else {
      uVar1 = FUN_001ce2d0(in_EDX);
      *(undefined4 *)(in_EDX + 8) = uVar1;
      FUN_001d03d0(param_1);
    }
    FUN_001d0390();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
