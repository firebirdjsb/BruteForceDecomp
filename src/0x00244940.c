/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F6AD9E6CE98A3A436DB25382E360CC996E3D0551BB03F41D371D452F1F8E019
 * Entry: 0x00244940, Ghidra index: 8076, label: FUN_00244940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00244940(int param_1)

{
  undefined4 uVar1;
  uint in_ECX;
  int in_EDX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_48;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307f60;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar3 = *(int *)(in_EDX + 4);
  if (iVar3 == 0) {
    local_48 = 0;
  }
  else {
    local_48 = (*(int *)(in_EDX + 0xc) - iVar3) / 0x30;
  }
  if (in_ECX != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EDX + 8) - iVar3) / 0x30;
    }
    if (0x5555555U - iVar2 < in_ECX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EDX + 8) - iVar3) / 0x30;
    }
    if (local_48 < iVar2 + in_ECX) {
      if (0x5555555 - (local_48 >> 1) < local_48) {
        local_48 = 0;
      }
      else {
        local_48 = local_48 + (local_48 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_EDX + 8) - iVar3) / 0x30;
      }
      if (local_48 < iVar3 + in_ECX) {
        iVar3 = FUN_001f7510();
        local_48 = iVar3 + in_ECX;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_00248ea0();
      FUN_002484e0();
      FUN_00248ea0();
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_EDX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_EDX + 8) - iVar3) / 0x30;
      }
      if (iVar3 == 0) {
        *(uint *)(in_EDX + 0xc) = local_48 * 0x30 + iVar2;
        *(uint *)(in_EDX + 8) = (in_ECX + iVar4) * 0x30 + iVar2;
        *(int *)(in_EDX + 4) = iVar2;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar3 != *(int *)(in_EDX + 8); iVar3 = iVar3 + 0x30) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
    if ((uint)((*(int *)(in_EDX + 8) - param_1) / 0x30) < in_ECX) {
      FUN_00248ea0();
      local_8 = 2;
      FUN_002484e0();
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 0x30;
    }
    else {
      uVar1 = FUN_00248ea0();
      *(undefined4 *)(in_EDX + 8) = uVar1;
      FUN_00249230(param_1);
    }
    FUN_002491c0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
