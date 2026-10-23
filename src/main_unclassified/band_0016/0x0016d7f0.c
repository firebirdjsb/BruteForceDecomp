/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E66F5582A54D0E65DFD63C98A1A1280876602948D952F49E4CB1F3CA2BE6ED6
 * Entry: 0x0016d7f0, Ghidra index: 4797, label: FUN_0016d7f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016d7f0(int param_1)

{
  undefined4 uVar1;
  uint in_ECX;
  int in_EDX;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_44 [48];
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003080f0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff78;
  FUN_0003d6c0(local_44);
  iVar3 = *(int *)(in_EDX + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(in_EDX + 0xc) - iVar3) / 0x34;
  }
  if (in_ECX != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EDX + 8) - iVar3) / 0x34;
    }
    if (0x4ec4ec4U - iVar2 < in_ECX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EDX + 8) - iVar3) / 0x34;
    }
    if (uVar5 < iVar2 + in_ECX) {
      if (0x4ec4ec4 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_EDX + 8) - iVar3) / 0x34;
      }
      if (uVar5 < iVar3 + in_ECX) {
        iVar3 = FUN_0016d2e0();
        uVar5 = iVar3 + in_ECX;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce960(in_EDX);
      FUN_0016daf0();
      FUN_001ce960(in_EDX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_EDX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_EDX + 8) - iVar3) / 0x34;
      }
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_EDX + 0xc) = uVar5 * 0x34 + iVar2;
      *(uint *)(in_EDX + 8) = (in_ECX + iVar4) * 0x34 + iVar2;
      *(int *)(in_EDX + 4) = iVar2;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)((*(int *)(in_EDX + 8) - param_1) / 0x34) < in_ECX) {
      FUN_001ce960(in_EDX);
      local_8 = 2;
      FUN_0016daf0();
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 0x34;
    }
    else {
      uVar1 = FUN_001ce960(in_EDX);
      *(undefined4 *)(in_EDX + 8) = uVar1;
      FUN_001d13d0(param_1);
    }
    FUN_001d13a0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
