/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E38AB1E940B6ED89930674C7754EF8175D8E1C2FC3ADF6E6DBE966B4A803BE6
 * Entry: 0x0016d4d0, Ghidra index: 4796, label: FUN_0016d4d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016d4d0(int param_1)

{
  undefined4 uVar1;
  uint in_ECX;
  int in_EDX;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307d10;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar3 = *(int *)(in_EDX + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(in_EDX + 0xc) - iVar3) / 0x14;
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
    if (uVar5 < iVar2 + in_ECX) {
      if (0xccccccc - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_EDX + 8) - iVar3) / 0x14;
      }
      if (uVar5 < iVar3 + in_ECX) {
        iVar3 = FUN_0017c210();
        uVar5 = iVar3 + in_ECX;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_0016db30(in_EDX);
      FUN_0016d400();
      FUN_0016db30(in_EDX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_EDX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_EDX + 8) - iVar3) / 0x14;
      }
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_EDX + 0xc) = uVar5 * 0x14 + iVar2;
      *(uint *)(in_EDX + 8) = iVar2 + (in_ECX + iVar4) * 0x14;
      *(int *)(in_EDX + 4) = iVar2;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)((*(int *)(in_EDX + 8) - param_1) / 0x14) < in_ECX) {
      FUN_0016db30(in_EDX);
      local_8 = 2;
      FUN_0016d400();
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 0x14;
    }
    else {
      uVar1 = FUN_0016db30(in_EDX);
      *(undefined4 *)(in_EDX + 8) = uVar1;
      FUN_0016dbb0(param_1);
    }
    FUN_0016db60();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
