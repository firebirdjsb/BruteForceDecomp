/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C58AAD8E9F35B523943522EE27356CF79551F28027414C7FF63E6BC95B90CAD7
 * Entry: 0x001adcc0, Ghidra index: 5548, label: FUN_001adcc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001adcc0(uint param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003083b0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (param_1 < 0x924924a) {
    if (*(int *)(in_ECX + 4) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (*(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4)) / 0x1c;
    }
    if (uVar3 < param_1) {
      iVar1 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce2a0(in_ECX);
      local_8 = 0xffffffff;
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        *(uint *)(in_ECX + 0xc) = param_1 * 0x1c + iVar1;
        *(int *)(in_ECX + 8) = iVar1;
        *(int *)(in_ECX + 4) = iVar1;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar2 != *(int *)(in_ECX + 8); iVar2 = iVar2 + 0x1c) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
  }
  else {
    FUN_00038940();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
