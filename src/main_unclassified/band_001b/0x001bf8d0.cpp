/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92E5B6FB182B42A361B1D4AC0927BA26E9478F71F7D1E2A36D29BB8C40354A92
 * Entry: 0x001bf8d0, Ghidra index: 5765, label: FUN_001bf8d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001bf8d0(int param_1)

{
  undefined4 uVar1;
  uint in_ECX;
  int in_EDX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_44;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x003081c0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003081c0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar3 = *(int *)(in_EDX + 4);
  if (iVar3 == 0) {
    local_44 = 0;
  }
  else {
    local_44 = (*(int *)(in_EDX + 0xc) - iVar3) / 0x2c;
  }
  if (in_ECX != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EDX + 8) - iVar3) / 0x2c;
    }
    if (0x5d1745dU - iVar2 < in_ECX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EDX + 8) - iVar3) / 0x2c;
    }
    if (local_44 < iVar2 + in_ECX) {
      if (0x5d1745d - (local_44 >> 1) < local_44) {
        local_44 = 0;
      }
      else {
        local_44 = local_44 + (local_44 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_EDX + 8) - iVar3) / 0x2c;
      }
      if (local_44 < iVar3 + in_ECX) {
        iVar3 = FUN_00240d60();
        local_44 = iVar3 + in_ECX;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce270();
      FUN_001cc680();
      FUN_001ce270();
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_EDX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_EDX + 8) - iVar3) / 0x2c;
      }
      if (iVar3 != 0) {
        for (; iVar3 != *(int *)(in_EDX + 8); iVar3 = iVar3 + 0x2c) {
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_EDX + 0xc) = local_44 * 0x2c + iVar2;
      *(uint *)(in_EDX + 8) = (in_ECX + iVar4) * 0x2c + iVar2;
      *(int *)(in_EDX + 4) = iVar2;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)((*(int *)(in_EDX + 8) - param_1) / 0x2c) < in_ECX) {
      FUN_001ce270();
      local_8 = 2;
      FUN_001cc680();
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 0x2c;
    }
    else {
      uVar1 = FUN_001ce270();
      *(undefined4 *)(in_EDX + 8) = uVar1;
      FUN_001d02d0(param_1);
    }
    FUN_001d0260();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
