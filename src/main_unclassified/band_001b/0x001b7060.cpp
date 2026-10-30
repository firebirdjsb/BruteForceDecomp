/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC23A64786ACDD73CAD079D84B0FD9E713A03FFEE186A4F96B978FFCB3477804
 * Entry: 0x001b7060, Ghidra index: 5696, label: FUN_001b7060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b7060(int param_1)

{
  undefined4 uVar1;
  uint in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_EDX;
  undefined4 *unaff_FS_OFFSET;
  uint local_28;
  undefined4 local_10;
  uint32_t puStack_c; /* Xbox guest32 SEH word, native FS:0 unresolved */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00308270); /* x86 push imm32 at 0x001b7065 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar3 = *(int *)(in_EDX + 4);
  if (iVar3 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = *(int *)(in_EDX + 0xc) - iVar3 >> 4;
  }
  if (in_ECX != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_EDX + 8) - iVar3 >> 4;
    }
    if (0xfffffffU - iVar2 < in_ECX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_EDX + 8) - iVar3 >> 4;
    }
    if (local_28 < iVar2 + in_ECX) {
      if (0xfffffff - (local_28 >> 1) < local_28) {
        local_28 = 0;
      }
      else {
        local_28 = local_28 + (local_28 >> 1);
      }
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(in_EDX + 8) - iVar3 >> 4;
      }
      if (local_28 < iVar2 + in_ECX) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(in_EDX + 8) - iVar3 >> 4;
        }
        local_28 = iVar3 + in_ECX;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001cdca0(in_EDX);
      FUN_001cb110();
      FUN_001cdca0(in_EDX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_EDX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_EDX + 8) - iVar3 >> 4;
      }
      if (iVar3 != 0) {
        for (; iVar3 != *(int *)(in_EDX + 8); iVar3 = iVar3 + 0x10) {
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_EDX + 0xc) = local_28 * 0x10 + iVar2;
      *(uint *)(in_EDX + 8) = (in_ECX + iVar4) * 0x10 + iVar2;
      *(int *)(in_EDX + 4) = iVar2;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)(*(int *)(in_EDX + 8) - param_1 >> 4) < in_ECX) {
      FUN_001cdca0(in_EDX);
      local_8 = 2;
      FUN_001cb110();
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 0x10;
    }
    else {
      uVar1 = FUN_001cdca0(in_EDX);
      *(undefined4 *)(in_EDX + 8) = uVar1;
      FUN_001cf040(param_1);
    }
    FUN_001cf010();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
