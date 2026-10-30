/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D83A76CABF5BF45EE387A3E6CD40646324DBC3AFAFCCF7B2E488766700EA18EE
 * Entry: 0x00241930, Ghidra index: 8019, label: FUN_00241930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00241930(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00307ac0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307ac0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (param_1 < 0x10000000) {
    if (*(int *)(in_ECX + 4) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4) >> 4;
    }
    if (uVar1 < param_1) {
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce210(in_ECX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        *(uint *)(in_ECX + 0xc) = param_1 * 0x10 + iVar2;
        *(int *)(in_ECX + 8) = iVar2;
        *(int *)(in_ECX + 4) = iVar2;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar3 != *(int *)(in_ECX + 8); iVar3 = iVar3 + 0x10) {
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
