/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80540795C6FAC24B003C04A305A05D891A8B8D7145517F1CBDB6F5963646745E
 * Entry: 0x001c35d0, Ghidra index: 5783, label: FUN_001c35d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c35d0(int param_1,int param_2)

{
  undefined4 uVar1;
  uint in_EDX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_a0;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00308150;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_001d2840();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    local_a0 = 0;
  }
  else {
    local_a0 = (*(int *)(param_1 + 0xc) - iVar3) / 0x88;
  }
  if (in_EDX != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x88;
    }
    if (0x1e1e1e1U - iVar2 < in_EDX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x88;
    }
    if (local_a0 < iVar2 + in_EDX) {
      if (0x1e1e1e1 - (local_a0 >> 1) < local_a0) {
        local_a0 = 0;
      }
      else {
        local_a0 = local_a0 + (local_a0 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x88;
      }
      if (local_a0 < iVar3 + in_EDX) {
        iVar3 = FUN_00162820();
        local_a0 = iVar3 + in_EDX;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce5d0();
      FUN_001cc920();
      FUN_001ce5d0();
      local_8 = 0xffffffff;
      iVar3 = *(int *)(param_1 + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x88;
      }
      if (iVar3 == 0) {
        *(uint *)(param_1 + 0xc) = local_a0 * 0x88 + iVar2;
        *(uint *)(param_1 + 8) = (in_EDX + iVar4) * 0x88 + iVar2;
        *(int *)(param_1 + 4) = iVar2;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar3 != *(int *)(param_1 + 8); iVar3 = iVar3 + 0x88) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
    if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x88) < in_EDX) {
      FUN_001ce5d0();
      local_8 = 2;
      FUN_001cc920();
      local_8 = 0xffffffff;
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + in_EDX * 0x88;
    }
    else {
      uVar1 = FUN_001ce5d0();
      *(undefined4 *)(param_1 + 8) = uVar1;
      FUN_001d0af0(param_2);
    }
    FUN_001d0ac0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
