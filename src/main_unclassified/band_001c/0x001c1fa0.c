/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 38A20AC7DC6F3D9FB48675D7CC016B30CA8BAC26A36413EE043C7D57B72C8F03
 * Entry: 0x001c1fa0, Ghidra index: 5776, label: FUN_001c1fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c1fa0(int param_1,int param_2)

{
  undefined4 uVar1;
  uint in_EDX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_60;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00308170;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_001c9de0();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    local_60 = 0;
  }
  else {
    local_60 = (*(int *)(param_1 + 0xc) - iVar3) / 0x48;
  }
  if (in_EDX != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x48;
    }
    if (0x38e38e3U - iVar2 < in_EDX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x48;
    }
    if (local_60 < iVar2 + in_EDX) {
      if (0x38e38e3 - (local_60 >> 1) < local_60) {
        local_60 = 0;
      }
      else {
        local_60 = local_60 + (local_60 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x48;
      }
      if (local_60 < iVar3 + in_EDX) {
        iVar3 = FUN_0023dba0();
        local_60 = iVar3 + in_EDX;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce4e0();
      FUN_001cc800();
      FUN_001ce4e0();
      local_8 = 0xffffffff;
      iVar3 = *(int *)(param_1 + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x48;
      }
      if (iVar3 == 0) {
        *(uint *)(param_1 + 0xc) = iVar2 + local_60 * 0x48;
        *(uint *)(param_1 + 8) = iVar2 + (in_EDX + iVar4) * 0x48;
        *(int *)(param_1 + 4) = iVar2;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar3 != *(int *)(param_1 + 8); iVar3 = iVar3 + 0x48) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
    if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x48) < in_EDX) {
      FUN_001ce4e0();
      local_8 = 2;
      FUN_001cc800();
      local_8 = 0xffffffff;
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + in_EDX * 0x48;
    }
    else {
      uVar1 = FUN_001ce4e0();
      *(undefined4 *)(param_1 + 8) = uVar1;
      FUN_001d08a0(param_2);
    }
    FUN_001d0870();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
