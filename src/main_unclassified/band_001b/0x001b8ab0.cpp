/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82C53B9AD051BB9CCB3B4636416B30D218BAB76AAAD69EE053C0DF4FE374EF23
 * Entry: 0x001b8ab0, Ghidra index: 5707, label: FUN_001b8ab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b8ab0(int param_1,uint param_2)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_24;
  undefined4 local_10;
  uint32_t puStack_c; /* Xbox guest32 SEH word, native FS:0 unresolved */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00308240); /* x86 push imm32 at 0x001b8ab5 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar3 = *(int *)(in_ECX + 4);
  if (iVar3 == 0) {
    local_24 = 0;
  }
  else {
    local_24 = (*(int *)(in_ECX + 0xc) - iVar3) / 0xc;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar3) / 0xc;
    }
    if (0x15555555U - iVar2 < param_2) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar3) / 0xc;
    }
    if (local_24 < iVar2 + param_2) {
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
        iVar3 = (*(int *)(in_ECX + 8) - iVar3) / 0xc;
      }
      if (local_24 < iVar3 + param_2) {
        iVar3 = FUN_001aa460();
        local_24 = iVar3 + param_2;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001cdd60(in_ECX);
      FUN_001cb640();
      FUN_001cdd60(in_ECX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_ECX + 8) - iVar3) / 0xc;
      }
      if (iVar3 == 0) {
        *(uint *)(in_ECX + 0xc) = iVar2 + local_24 * 0xc;
        *(uint *)(in_ECX + 8) = iVar2 + (param_2 + iVar4) * 0xc;
        *(int *)(in_ECX + 4) = iVar2;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar3 != *(int *)(in_ECX + 8); iVar3 = iVar3 + 0xc) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
    if ((uint)((*(int *)(in_ECX + 8) - param_1) / 0xc) < param_2) {
      FUN_001cdd60(in_ECX);
      local_8 = 2;
      FUN_001cb640();
      local_8 = 0xffffffff;
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0xc;
    }
    else {
      uVar1 = FUN_001cdd60(in_ECX);
      *(undefined4 *)(in_ECX + 8) = uVar1;
      FUN_001cf200(param_1);
    }
    FUN_001cf1d0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
