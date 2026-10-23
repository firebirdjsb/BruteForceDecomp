/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC0232491E3171360F2E54157CD95306E7A9FCF0762B5040747E58348785FBEA
 * Entry: 0x001c50e0, Ghidra index: 5792, label: FUN_001c50e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c50e0(int param_1)

{
  undefined4 uVar1;
  uint in_ECX;
  int in_EDX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_3c;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00308130; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308130U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar3 = *(int *)(in_EDX + 4);
  if (iVar3 == 0) {
    local_3c = 0;
  }
  else {
    local_3c = (*(int *)(in_EDX + 0xc) - iVar3) / 0x24;
  }
  if (in_ECX != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EDX + 8) - iVar3) / 0x24;
    }
    if (0x71c71c7U - iVar2 < in_ECX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EDX + 8) - iVar3) / 0x24;
    }
    if (local_3c < iVar2 + in_ECX) {
      if (0x71c71c7 - (local_3c >> 1) < local_3c) {
        local_3c = 0;
      }
      else {
        local_3c = local_3c + (local_3c >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_EDX + 8) - iVar3) / 0x24;
      }
      if (local_3c < iVar3 + in_ECX) {
        iVar3 = FUN_0017c240();
        local_3c = iVar3 + in_ECX;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce720(in_EDX);
      FUN_001ccbd0();
      FUN_001ce720(in_EDX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_EDX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_EDX + 8) - iVar3) / 0x24;
      }
      if (iVar3 != 0) {
        for (; iVar3 != *(int *)(in_EDX + 8); iVar3 = iVar3 + 0x24) {
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_EDX + 0xc) = iVar2 + local_3c * 0x24;
      *(uint *)(in_EDX + 8) = iVar2 + (in_ECX + iVar4) * 0x24;
      *(int *)(in_EDX + 4) = iVar2;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)((*(int *)(in_EDX + 8) - param_1) / 0x24) < in_ECX) {
      FUN_001ce720(in_EDX);
      local_8 = 2;
      FUN_001ccbd0();
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 0x24;
    }
    else {
      uVar1 = FUN_001ce720(in_EDX);
      *(undefined4 *)(in_EDX + 8) = uVar1;
      FUN_001d0dc0(param_1);
    }
    FUN_001d0d70();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
