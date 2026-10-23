/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A541682884BBA55FA29A0868C275DCDC3FC20A93FD0AB8FA64943BFAF0996CDF
 * Entry: 0x00242d60, Ghidra index: 8042, label: FUN_00242d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00242d60(void)

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
  puStack_c = &LAB_003095e0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (in_ECX < 0x5d1745e) {
    if (*(int *)(in_EDX + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(in_EDX + 0xc) - *(int *)(in_EDX + 4)) / 0x2c;
    }
    if (uVar2 < in_ECX) {
      iVar1 = FUN_002ea01d();
      local_8 = 0;
      FUN_002490b0(in_EDX);
      local_8 = 0xffffffff;
      if (*(int *)(in_EDX + 4) == 0) {
        *(uint *)(in_EDX + 0xc) = in_ECX * 0x2c + iVar1;
        *(int *)(in_EDX + 8) = iVar1;
        *(int *)(in_EDX + 4) = iVar1;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      FUN_0024a990(*(undefined4 *)(in_EDX + 8));
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
