/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2EE7F9838CD1639013A3CD282B85647746F78C442FE5382DC0F59D351EC3690D
 * Entry: 0x0023c660, Ghidra index: 7934, label: FUN_0023c660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023c660(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_EDX;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_50;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307af0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_0023c960();
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0) {
    local_50 = 0;
  }
  else {
    local_50 = (*(int *)(param_1 + 0xc) - iVar4) / 0x38;
  }
  if (in_EDX != 0) {
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(param_1 + 8) - iVar4) / 0x38;
    }
    if (0x4924924U - iVar3 < in_EDX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(param_1 + 8) - iVar4) / 0x38;
    }
    if (local_50 < iVar4 + in_EDX) {
      if (0x4924924 - (local_50 >> 1) < local_50) {
        local_50 = 0;
      }
      else {
        local_50 = local_50 + (local_50 >> 1);
      }
      iVar4 = FUN_00240d90();
      if (local_50 < iVar4 + in_EDX) {
        iVar4 = FUN_00240d90();
        local_50 = iVar4 + in_EDX;
      }
      iVar3 = FUN_002ea01d();
      local_8 = 0;
      FUN_0023ca00();
      FUN_0023c640();
      FUN_0023ca00();
      local_8 = 0xffffffff;
      iVar1 = FUN_00240d90();
      iVar4 = *(int *)(param_1 + 4);
      if (iVar4 == 0) {
        *(uint *)(param_1 + 0xc) = local_50 * 0x38 + iVar3;
        *(uint *)(param_1 + 8) = (in_EDX + iVar1) * 0x38 + iVar3;
        *(int *)(param_1 + 4) = iVar3;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar4 != *(int *)(param_1 + 8); iVar4 = iVar4 + 0x38) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
    if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x38) < in_EDX) {
      FUN_0023ca00();
      local_8 = 2;
      FUN_0023c640();
      local_8 = 0xffffffff;
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + in_EDX * 0x38;
    }
    else {
      uVar2 = FUN_0023ca00();
      *(undefined4 *)(param_1 + 8) = uVar2;
      FUN_0023ca60(param_2);
    }
    FUN_0023ca30();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
