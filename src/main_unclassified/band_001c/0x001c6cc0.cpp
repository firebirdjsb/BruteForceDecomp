/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F0FC457BB943581EE612F2A644298A6F9699B2C9D61191CA18785A981FA0056E
 * Entry: 0x001c6cc0, Ghidra index: 5807, label: FUN_001c6cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c6cc0(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *unaff_FS_OFFSET;
  uint local_84;
  undefined4 local_78 [5];
  undefined4 local_64 [5];
  undefined4 local_50 [5];
  undefined4 local_3c [5];
  undefined4 local_28 [5];
  /* XBE 0x001C6CE1: MOV [EBP-0x10],ESP saves the guest SEH frame.
   * Ghidra's synthetic stack0xffffff3c only flowed into a dead
   * local_14 assignment. Do not create a fake host stack pointer.
   * Native FS:0/SEH translation remains ABI_UNVERIFIED. */
  undefined4 local_10;
  /* Original x86 pushes a guest 32-bit SEH handler address; this is
   * not a native host pointer or a completed Windows SEH adaptation. */
  uint32_t puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00308100);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar5 = (undefined4 *)(param_3 + 8);
  puVar6 = local_78;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(param_3 + 0x1c);
  puVar6 = local_64;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(param_3 + 0x30);
  puVar6 = local_50;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(param_3 + 0x44);
  puVar6 = local_3c;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(param_3 + 0x58);
  puVar6 = local_28;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    local_84 = 0;
  }
  else {
    local_84 = (*(int *)(in_ECX + 0xc) - iVar2) / 0x6c;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - iVar2) / 0x6c;
    }
    if (0x25ed097U - iVar3 < param_2) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - iVar2) / 0x6c;
    }
    if (local_84 < iVar3 + param_2) {
      if (0x25ed097 - (local_84 >> 1) < local_84) {
        local_84 = 0;
      }
      else {
        local_84 = local_84 + (local_84 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x6c;
      }
      if (local_84 < iVar2 + param_2) {
        iVar2 = FUN_0017c570();
        local_84 = iVar2 + param_2;
      }
      iVar3 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce870();
      FUN_001ccf10();
      FUN_001ce870();
      local_8 = 0xffffffff;
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_ECX + 8) - iVar2) / 0x6c;
      }
      if (iVar2 == 0) {
        *(uint *)(in_ECX + 0xc) = local_84 * 0x6c + iVar3;
        *(uint *)(in_ECX + 8) = (param_2 + iVar4) * 0x6c + iVar3;
        *(int *)(in_ECX + 4) = iVar3;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar2 != *(int *)(in_ECX + 8); iVar2 = iVar2 + 0x6c) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
    if ((uint)((*(int *)(in_ECX + 8) - param_1) / 0x6c) < param_2) {
      FUN_001ce870();
      local_8 = 2;
      FUN_001ccf10();
      local_8 = 0xffffffff;
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x6c;
    }
    else {
      uVar1 = FUN_001ce870();
      *(undefined4 *)(in_ECX + 8) = uVar1;
      FUN_001d1190(param_1);
    }
    FUN_001d1110();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
