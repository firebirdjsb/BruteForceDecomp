/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44160CF4C00D683EF6A39C9A02698F0B3EF09834FDE11FC79C52D6BA8FF954CA
 * Entry: 0x001c14a0, Ghidra index: 5773, label: FUN_001c14a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c14a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_EDX;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_74;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00308180;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_001c9990();
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0) {
    local_74 = 0;
  }
  else {
    local_74 = (*(int *)(param_1 + 0xc) - iVar4) / 0x5c;
  }
  if (in_EDX != 0) {
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(param_1 + 8) - iVar4) / 0x5c;
    }
    if (0x2c8590bU - iVar3 < in_EDX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(param_1 + 8) - iVar4) / 0x5c;
    }
    if (local_74 < iVar4 + in_EDX) {
      if (0x2c8590b - (local_74 >> 1) < local_74) {
        local_74 = 0;
      }
      else {
        local_74 = local_74 + (local_74 >> 1);
      }
      iVar4 = FUN_00162700();
      if (local_74 < iVar4 + in_EDX) {
        iVar4 = FUN_00162700();
        local_74 = iVar4 + in_EDX;
      }
      iVar3 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce420();
      FUN_001cc790();
      FUN_001ce420();
      local_8 = 0xffffffff;
      iVar1 = FUN_00162700();
      iVar4 = *(int *)(param_1 + 4);
      if (iVar4 == 0) {
        *(uint *)(param_1 + 0xc) = local_74 * 0x5c + iVar3;
        *(uint *)(param_1 + 8) = (in_EDX + iVar1) * 0x5c + iVar3;
        *(int *)(param_1 + 4) = iVar3;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar4 != *(int *)(param_1 + 8); iVar4 = iVar4 + 0x5c) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
    if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x5c) < in_EDX) {
      FUN_001ce420();
      local_8 = 2;
      FUN_001cc790();
      local_8 = 0xffffffff;
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + in_EDX * 0x5c;
    }
    else {
      uVar2 = FUN_001ce420();
      *(undefined4 *)(param_1 + 8) = uVar2;
      FUN_001d06a0(param_2);
    }
    FUN_001d0670();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
