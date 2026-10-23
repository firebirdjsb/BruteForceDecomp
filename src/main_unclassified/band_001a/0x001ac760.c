/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F9261249291408342E025461ECEBC27C8E9897FF1609D1F9BCEABAD10C889D4
 * Entry: 0x001ac760, Ghidra index: 5526, label: FUN_001ac760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ac760(void)

{
  int iVar1;
  uint in_ECX;
  int in_EDX;
  uint uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00308f40;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (in_ECX < 0x71c71c8) {
    if (*(int *)(in_EDX + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(in_EDX + 0xc) - *(int *)(in_EDX + 4)) / 0x24;
    }
    if (uVar2 < in_ECX) {
      iVar1 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce000();
      local_8 = 0xffffffff;
      if (*(int *)(in_EDX + 4) == 0) {
        *(uint *)(in_EDX + 0xc) = in_ECX * 0x24 + iVar1;
        *(int *)(in_EDX + 8) = iVar1;
        *(int *)(in_EDX + 4) = iVar1;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      FUN_000e2ea0(*(undefined4 *)(in_EDX + 8));
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_EDX + 4));
    }
  }
  else {
    FUN_00038940();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
