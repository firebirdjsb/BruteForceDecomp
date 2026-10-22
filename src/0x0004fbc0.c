/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06E4C0D4814ADFE26F8FEB741CBA907A247563C71B079F282C17DB58801CAC77
 * Entry: 0x0004fbc0, Ghidra index: 700, label: FUN_0004fbc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004fbc0(int param_1)

{
  undefined4 uVar1;
  uint in_ECX;
  int in_EDX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_24;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307ec0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar3 = *(int *)(in_EDX + 4);
  if (iVar3 == 0) {
    local_24 = 0;
  }
  else {
    local_24 = (*(int *)(in_EDX + 0xc) - iVar3) / 0xc;
  }
  if (in_ECX != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EDX + 8) - iVar3) / 0xc;
    }
    if (0x15555555U - iVar2 < in_ECX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EDX + 8) - iVar3) / 0xc;
    }
    if (local_24 < iVar2 + in_ECX) {
      if (0x15555555 - (local_24 >> 1) < local_24) {
        local_24 = 0;
      }
      else {
        local_24 = local_24 + (local_24 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_EDX + 8) - iVar3) / 0xc;
      }
      if (local_24 < iVar3 + in_ECX) {
        iVar3 = FUN_001aa460();
        local_24 = iVar3 + in_ECX;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_000507c0(in_EDX);
      FUN_0004f820();
      FUN_000507c0(in_EDX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_EDX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_EDX + 8) - iVar3) / 0xc;
      }
      if (iVar3 == 0) {
        *(uint *)(in_EDX + 0xc) = iVar2 + local_24 * 0xc;
        *(uint *)(in_EDX + 8) = iVar2 + (in_ECX + iVar4) * 0xc;
        *(int *)(in_EDX + 4) = iVar2;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar3 != *(int *)(in_EDX + 8); iVar3 = iVar3 + 0xc) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
    if ((uint)((*(int *)(in_EDX + 8) - param_1) / 0xc) < in_ECX) {
      FUN_000507c0(in_EDX);
      local_8 = 2;
      FUN_0004f820();
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 0xc;
    }
    else {
      uVar1 = FUN_000507c0(in_EDX);
      *(undefined4 *)(in_EDX + 8) = uVar1;
      FUN_000507f0(param_1);
    }
    FUN_002494b0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
