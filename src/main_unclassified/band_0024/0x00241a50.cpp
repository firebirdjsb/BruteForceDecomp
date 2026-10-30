/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F052286ADA5B43BD94316EA9655874CD11A1117BA7F8AFF22649B3CCF48C2F16
 * Entry: 0x00241a50, Ghidra index: 8020, label: FUN_00241a50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00241a50(void)

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
  /* Original entry+5: push 0x00308be0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308be0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (in_ECX < 0xccccccd) {
    if (*(int *)(in_EDX + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(in_EDX + 0xc) - *(int *)(in_EDX + 4)) / 0x14;
    }
    if (uVar2 < in_ECX) {
      iVar1 = FUN_002ea01d();
      local_8 = 0;
      FUN_00248e70();
      local_8 = 0xffffffff;
      if (*(int *)(in_EDX + 4) == 0) {
        *(uint *)(in_EDX + 0xc) = in_ECX * 0x14 + iVar1;
        *(int *)(in_EDX + 8) = iVar1;
        *(int *)(in_EDX + 4) = iVar1;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      FUN_000e3c30(*(undefined4 *)(in_EDX + 8));
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
