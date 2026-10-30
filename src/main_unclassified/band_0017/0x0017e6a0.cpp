/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE630614AEAF99872C693BF4B6388454FCCC3F5F97A2F24CA118E7C52C595985
 * Entry: 0x0017e6a0, Ghidra index: 5106, label: FUN_0017e6a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017e6a0(void)

{
  int iVar1;
  uint in_ECX;
  int in_EDX;
  uint uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00308460; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308460U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  if (in_ECX < 0x15555556) {
    iVar3 = 0;
    if (*(int *)(in_EDX + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(in_EDX + 0xc) - *(int *)(in_EDX + 4)) / 0xc;
    }
    if (uVar2 < in_ECX) {
      iVar1 = FUN_002ea01d();
      local_8 = 0;
      FUN_00053940(in_EDX);
      local_8 = 0xffffffff;
      if (*(int *)(in_EDX + 4) != 0) {
        iVar3 = (*(int *)(in_EDX + 8) - *(int *)(in_EDX + 4)) / 0xc;
      }
      if (*(int *)(in_EDX + 4) != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_EDX + 0xc) = in_ECX * 0xc + iVar1;
      *(int *)(in_EDX + 8) = iVar1 + iVar3 * 0xc;
      *(int *)(in_EDX + 4) = iVar1;
      *unaff_FS_OFFSET = local_10;
      return;
    }
  }
  else {
    FUN_00038940();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
