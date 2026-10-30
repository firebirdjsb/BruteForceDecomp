/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D51B232A9A573FEE65AE7A4D5CACE4D7FE9E75F8F5D543583C223F726BD867DC
 * Entry: 0x001adb90, Ghidra index: 5547, label: FUN_001adb90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001adb90(uint param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  uint32_t puStack_c; /* original 32-bit SEH word; guest FS:0 pending */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x003083c0); /* x86 push imm32 0x001adb95 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  if (param_1 < 0x5d1745e) {
    if (*(int *)(in_ECX + 4) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (*(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4)) / 0x2c;
    }
    if (uVar3 < param_1) {
      iVar1 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce270();
      local_8 = 0xffffffff;
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 != 0) {
        for (; iVar2 != *(int *)(in_ECX + 8); iVar2 = iVar2 + 0x2c) {
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_ECX + 0xc) = param_1 * 0x2c + iVar1;
      *(int *)(in_ECX + 8) = iVar1;
      *(int *)(in_ECX + 4) = iVar1;
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
