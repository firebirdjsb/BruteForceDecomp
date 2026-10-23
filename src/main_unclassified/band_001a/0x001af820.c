/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DC5BD30E03AC278CF9A7186ADBC6E43425A8256A1121477E22CA39108606AA2
 * Entry: 0x001af820, Ghidra index: 5571, label: FUN_001af820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001af820(void)

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
  puStack_c = &LAB_00309490;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (in_ECX < 0xdd67c9) {
    iVar3 = 0;
    if (*(int *)(in_EDX + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(in_EDX + 0xc) - *(int *)(in_EDX + 4)) / 0x128;
    }
    if (uVar2 < in_ECX) {
      iVar1 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce630();
      local_8 = 0xffffffff;
      if (*(int *)(in_EDX + 4) != 0) {
        iVar3 = (*(int *)(in_EDX + 8) - *(int *)(in_EDX + 4)) / 0x128;
      }
      if (*(int *)(in_EDX + 4) != 0) {
        FUN_00161680();
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_EDX + 0xc) = in_ECX * 0x128 + iVar1;
      *(int *)(in_EDX + 8) = iVar3 * 0x128 + iVar1;
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
