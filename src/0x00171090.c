/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4975EA2FC4989381F80BA09A4C0BED3BB62AD3558D93EF140874618BD01F957
 * Entry: 0x00171090, Ghidra index: 4846, label: FUN_00171090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00171090(int param_1,uint param_2)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307cf0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_001713d0();
  iVar3 = *(int *)(in_ECX + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(in_ECX + 0xc) - iVar3) / 100;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar3) / 100;
    }
    if (0x28f5c28U - iVar2 < param_2) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar3) / 100;
    }
    if (uVar5 < iVar2 + param_2) {
      if (0x28f5c28 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_ECX + 8) - iVar3) / 100;
      }
      if (uVar5 < iVar3 + param_2) {
        iVar3 = FUN_00170fd0();
        uVar5 = iVar3 + param_2;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001714e0();
      FUN_00171070();
      FUN_001714e0();
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_ECX + 8) - iVar3) / 100;
      }
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_ECX + 0xc) = uVar5 * 100 + iVar2;
      *(uint *)(in_ECX + 8) = (param_2 + iVar4) * 100 + iVar2;
      *(int *)(in_ECX + 4) = iVar2;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)((*(int *)(in_ECX + 8) - param_1) / 100) < param_2) {
      FUN_001714e0();
      local_8 = 2;
      FUN_00171070();
      local_8 = 0xffffffff;
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 100;
    }
    else {
      uVar1 = FUN_001714e0();
      *(undefined4 *)(in_ECX + 8) = uVar1;
      FUN_00171540(param_1);
    }
    FUN_00171510();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
