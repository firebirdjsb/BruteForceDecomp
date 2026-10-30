/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 31DFC94C95D21683333FB07C982865056243F656E2E6C30793C4D621FC9201E5
 * Entry: 0x0005d2f0, Ghidra index: 964, label: FUN_0005d2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image VA 0x00307e70; address-only label. Link definition and role unverified. */
extern unsigned char LAB_00307e70;

void FUN_0005d2f0(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint in_EDX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307e70;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (in_EDX < 0x20000000) {
    if (*(int *)(in_ECX + 4) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4) >> 3;
    }
    if (uVar1 < in_EDX) {
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_0005dc50(in_ECX);
      local_8 = 0xffffffff;
      if (*(int *)(in_ECX + 4) == 0) {
        *(uint *)(in_ECX + 0xc) = in_EDX * 8 + iVar2;
        *(int *)(in_ECX + 8) = iVar2;
        *(int *)(in_ECX + 4) = iVar2;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      FUN_0001d590();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_ECX + 4));
    }
  }
  else {
    FUN_00038940();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
