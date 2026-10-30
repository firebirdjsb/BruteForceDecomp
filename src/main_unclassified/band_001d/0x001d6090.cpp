/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B68BC9071A9652385A1B77445BF2E5282F2CBC76DEF3CFCEB3E27CBD5D60477B
 * Entry: 0x001d6090, Ghidra index: 6348, label: FUN_001d6090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d6090(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_ECX;
  int in_EDX;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00308030; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308030U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar2 = *(int *)(in_EDX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_EDX + 0xc) - iVar2 >> 1;
  }
  if (in_ECX != 0) {
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_EDX + 8) - iVar2 >> 1;
    }
    if (0x7fffffffU - iVar5 < in_ECX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_EDX + 8) - iVar2 >> 1;
    }
    if (uVar1 < iVar5 + in_ECX) {
      if (0x7fffffff - (uVar1 >> 1) < uVar1) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar1 + (uVar1 >> 1);
      }
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_EDX + 8) - iVar2 >> 1;
      }
      if (uVar1 < iVar5 + in_ECX) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(in_EDX + 8) - iVar2 >> 1;
        }
        uVar1 = iVar2 + in_ECX;
      }
      iVar5 = FUN_002ea01d();
      local_8 = 0;
      uVar3 = FUN_001dcbf0();
      FUN_001e0c80(uVar3);
      FUN_001dcbf0();
      local_8 = 0xffffffff;
      iVar2 = *(int *)(in_EDX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_EDX + 8) - iVar2 >> 1;
      }
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_EDX + 0xc) = uVar1 * 2 + iVar5;
      *(uint *)(in_EDX + 8) = iVar5 + (in_ECX + iVar4) * 2;
      *(int *)(in_EDX + 4) = iVar5;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)(*(int *)(in_EDX + 8) - param_1 >> 1) < in_ECX) {
      FUN_001dcbf0();
      local_8 = 2;
      FUN_001e0c80(*(int *)(in_EDX + 8),in_ECX - (*(int *)(in_EDX + 8) - param_1 >> 1));
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 2;
    }
    else {
      uVar3 = FUN_001dcbf0();
      *(undefined4 *)(in_EDX + 8) = uVar3;
      FUN_001dcc40(param_1);
    }
    FUN_001dcc20();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
