/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 91CAA2B4691ED59BB88BA16664C3D6453549DF40849D5550C0E0B4DBB5505444
 * Entry: 0x001b0f00, Ghidra index: 5595, label: FUN_001b0f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b0f00(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003082f0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (param_1 < 0x8000000) {
    if (*(int *)(in_ECX + 4) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4) >> 5;
    }
    if (uVar1 < param_1) {
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce9c0(in_ECX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        *(uint *)(in_ECX + 0xc) = param_1 * 0x20 + iVar2;
        *(int *)(in_ECX + 8) = iVar2;
        *(int *)(in_ECX + 4) = iVar2;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar3 != *(int *)(in_ECX + 8); iVar3 = iVar3 + 0x20) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
  }
  else {
    FUN_00038940();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
