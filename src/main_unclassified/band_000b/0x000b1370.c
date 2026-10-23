/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 66250F8D4F1A3DF224F1DEF7B688DE8515930C5E8E89A58A9B9A114EBEE2A867
 * Entry: 0x000b1370, Ghidra index: 2113, label: FUN_000b1370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b1370(int param_1,uint param_2)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  undefined4 *in_EDX;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_40 [11];
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307e10;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff7c;
  puVar5 = local_40;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *in_EDX;
    in_EDX = in_EDX + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)(in_ECX + 0xc) - iVar2) / 0x2c;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - iVar2) / 0x2c;
    }
    if (0x5d1745dU - iVar3 < param_2) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - iVar2) / 0x2c;
    }
    if (uVar6 < iVar3 + param_2) {
      if (0x5d1745d - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x2c;
      }
      if (uVar6 < iVar2 + param_2) {
        iVar2 = FUN_00240d60();
        uVar6 = iVar2 + param_2;
      }
      iVar3 = FUN_002ea01d();
      local_8 = 0;
      FUN_000b1770(in_ECX);
      FUN_000b1150();
      FUN_000b1770(in_ECX);
      local_8 = 0xffffffff;
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_ECX + 8) - iVar2) / 0x2c;
      }
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_ECX + 0xc) = uVar6 * 0x2c + iVar3;
      *(uint *)(in_ECX + 8) = (param_2 + iVar4) * 0x2c + iVar3;
      *(int *)(in_ECX + 4) = iVar3;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)((*(int *)(in_ECX + 8) - param_1) / 0x2c) < param_2) {
      FUN_000b1770(in_ECX);
      local_8 = 2;
      FUN_000b1150();
      local_8 = 0xffffffff;
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x2c;
    }
    else {
      uVar1 = FUN_000b1770(in_ECX);
      *(undefined4 *)(in_ECX + 8) = uVar1;
      FUN_000b17d0(param_1);
    }
    FUN_000b17a0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
