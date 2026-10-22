/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 137AA0EBCAB6233D3DE9A91BF9FB004FC9E1F75DC188E5C1AE94FA0FC5C9D86E
 * Entry: 0x001bda50, Ghidra index: 5749, label: FUN_001bda50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001bda50(int param_1,uint param_2)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_3c;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003081d0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar3 = *(int *)(in_ECX + 4);
  if (iVar3 == 0) {
    local_3c = 0;
  }
  else {
    local_3c = (*(int *)(in_ECX + 0xc) - iVar3) / 0x24;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar3) / 0x24;
    }
    if (0x71c71c7U - iVar2 < param_2) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar3) / 0x24;
    }
    if (local_3c < iVar2 + param_2) {
      if (0x71c71c7 - (local_3c >> 1) < local_3c) {
        local_3c = 0;
      }
      else {
        local_3c = local_3c + (local_3c >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_ECX + 8) - iVar3) / 0x24;
      }
      if (local_3c < iVar3 + param_2) {
        iVar3 = FUN_0017c240();
        local_3c = iVar3 + param_2;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce0c0(in_ECX);
      FUN_001cbcf0();
      FUN_001ce0c0(in_ECX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_ECX + 8) - iVar3) / 0x24;
      }
      if (iVar3 == 0) {
        *(uint *)(in_ECX + 0xc) = iVar2 + local_3c * 0x24;
        *(uint *)(in_ECX + 8) = iVar2 + (param_2 + iVar4) * 0x24;
        *(int *)(in_ECX + 4) = iVar2;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar3 != *(int *)(in_ECX + 8); iVar3 = iVar3 + 0x24) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
    if ((uint)((*(int *)(in_ECX + 8) - param_1) / 0x24) < param_2) {
      FUN_001ce0c0(in_ECX);
      local_8 = 2;
      FUN_001cbcf0();
      local_8 = 0xffffffff;
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x24;
    }
    else {
      uVar1 = FUN_001ce0c0(in_ECX);
      *(undefined4 *)(in_ECX + 8) = uVar1;
      FUN_001cfc30(param_1);
    }
    FUN_001cfbd0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
