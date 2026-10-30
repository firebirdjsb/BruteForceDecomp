/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15DCF6CEDCE524C6B4FA488BE4BF70A7CC4AEEF6A4E815DF2ABDC7CF4FD145BE
 * Entry: 0x001b7d50, Ghidra index: 5703, label: FUN_001b7d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b7d50(int param_1,int param_2)

{
  undefined4 uVar1;
  uint in_EDX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_44;
  undefined4 local_10;
  uint32_t puStack_c; /* Xbox guest32 SEH word, native FS:0 unresolved */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00308280); /* x86 push imm32 at 0x001b7d55 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  FUN_001c9400();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    local_44 = 0;
  }
  else {
    local_44 = (*(int *)(param_1 + 0xc) - iVar3) / 0x2c;
  }
  if (in_EDX != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x2c;
    }
    if (0x5d1745dU - iVar2 < in_EDX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x2c;
    }
    if (local_44 < iVar2 + in_EDX) {
      if (0x5d1745d - (local_44 >> 1) < local_44) {
        local_44 = 0;
      }
      else {
        local_44 = local_44 + (local_44 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x2c;
      }
      if (local_44 < iVar3 + in_EDX) {
        iVar3 = FUN_00240d60();
        local_44 = iVar3 + in_EDX;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001cdc70();
      FUN_001cb400();
      FUN_001cdc70();
      local_8 = 0xffffffff;
      iVar3 = *(int *)(param_1 + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0x2c;
      }
      if (iVar3 != 0) {
        for (; iVar3 != *(int *)(param_1 + 8); iVar3 = iVar3 + 0x2c) {
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(param_1 + 0xc) = local_44 * 0x2c + iVar2;
      *(uint *)(param_1 + 8) = (in_EDX + iVar4) * 0x2c + iVar2;
      *(int *)(param_1 + 4) = iVar2;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x2c) < in_EDX) {
      FUN_001cdc70();
      local_8 = 2;
      FUN_001cb400();
      local_8 = 0xffffffff;
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + in_EDX * 0x2c;
    }
    else {
      uVar1 = FUN_001cdc70();
      *(undefined4 *)(param_1 + 8) = uVar1;
      FUN_001cefe0(param_2);
    }
    FUN_001cef50();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
