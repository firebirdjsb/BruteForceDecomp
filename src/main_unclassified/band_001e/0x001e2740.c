/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4548FCA11D80101F695E5C5B857C96D5BD3D82D8D0C648617927409513E030A
 * Entry: 0x001e2740, Ghidra index: 6752, label: FUN_001e2740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e2740(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_1c;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x003086f0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003086f0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uVar1 = (param_4 - param_3) / 0x1c;
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0) {
    local_1c = 0;
  }
  else {
    local_1c = (*(int *)(param_1 + 0xc) - iVar4) / 0x1c;
  }
  if (uVar1 != 0) {
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(param_1 + 8) - iVar4) / 0x1c;
    }
    if (0x9249249U - iVar3 < uVar1) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(param_1 + 8) - iVar4) / 0x1c;
    }
    if (local_1c < iVar4 + uVar1) {
      if (0x9249249 - (local_1c >> 1) < local_1c) {
        local_1c = 0;
      }
      else {
        local_1c = local_1c + (local_1c >> 1);
      }
      iVar4 = FUN_0015e840();
      if (local_1c < iVar4 + uVar1) {
        iVar4 = FUN_0015e840();
        local_1c = iVar4 + uVar1;
      }
      iVar4 = FUN_002ea01d();
      local_8 = 0;
      FUN_000e2820();
      FUN_001cf2f0();
      FUN_000e2820();
      local_8 = 0xffffffff;
      iVar3 = FUN_0015e840();
      if (*(int *)(param_1 + 4) != 0) {
        FUN_000762d0();
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
      }
      *(uint *)(param_1 + 0xc) = local_1c * 0x1c + iVar4;
      *(uint *)(param_1 + 8) = (uVar1 + iVar3) * 0x1c + iVar4;
      *(int *)(param_1 + 4) = iVar4;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x1c) < uVar1) {
      FUN_000e2820();
      local_8 = 2;
      FUN_001cf2f0();
      local_8 = 0xffffffff;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar1 * 0x1c;
    }
    else {
      uVar2 = FUN_000e2820();
      *(undefined4 *)(param_1 + 8) = uVar2;
      FUN_00076570(param_2);
    }
    FUN_001e2f50(param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
