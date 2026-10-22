/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 083C6247602542112F0B25730D7145032C3B9E1EF676356C514A9EAFEFEB88DE
 * Entry: 0x000e0d10, Ghidra index: 2760, label: FUN_000e0d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e0d10(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307de0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_ECX + 0xc) - iVar2 >> 2;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_ECX + 8) - iVar2 >> 2;
    }
    if (0x3fffffffU - iVar5 < param_2) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_ECX + 8) - iVar2 >> 2;
    }
    if (uVar1 < iVar5 + param_2) {
      if (0x3fffffff - (uVar1 >> 1) < uVar1) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar1 + (uVar1 >> 1);
      }
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_ECX + 8) - iVar2 >> 2;
      }
      if (uVar1 < iVar5 + param_2) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(in_ECX + 8) - iVar2 >> 2;
        }
        uVar1 = iVar2 + param_2;
      }
      iVar5 = FUN_002ea01d();
      local_8 = 0;
      uVar3 = FUN_001e0da0();
      FUN_0003efa0(uVar3,param_2);
      FUN_001e0da0();
      local_8 = 0xffffffff;
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_ECX + 8) - iVar2 >> 2;
      }
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_ECX + 0xc) = uVar1 * 4 + iVar5;
      *(uint *)(in_ECX + 8) = iVar5 + (param_2 + iVar4) * 4;
      *(int *)(in_ECX + 4) = iVar5;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)(*(int *)(in_ECX + 8) - param_1 >> 2) < param_2) {
      FUN_001e0da0();
      local_8 = 2;
      FUN_0003efa0(*(int *)(in_ECX + 8),param_2 - (*(int *)(in_ECX + 8) - param_1 >> 2));
      local_8 = 0xffffffff;
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 4;
    }
    else {
      uVar3 = FUN_001e0da0();
      *(undefined4 *)(in_ECX + 8) = uVar3;
      FUN_002614a0(param_1);
    }
    FUN_000a4790();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
