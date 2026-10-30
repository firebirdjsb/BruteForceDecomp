/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E16AD83EF8D6CA32987822465A13AD8FEE002EB67CABEA84960935054F59E7E6
 * Entry: 0x001ad150, Ghidra index: 5538, label: FUN_001ad150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ad150(uint param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  uint32_t puStack_c; /* original 32-bit SEH word; guest FS:0 pending */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00309860); /* x86 push imm32 0x001ad155 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  if (param_1 < 0x3333334) {
    if (*(int *)(in_ECX + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4)) / 0x50;
    }
    if (uVar2 < param_1) {
      iVar1 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce0f0();
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 != 0) {
        iVar1 = *(int *)(in_ECX + 8);
        for (; iVar3 != iVar1; iVar3 = iVar3 + 0x50) {
          FUN_0006a3d0();
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_ECX + 0xc) = param_1 * 0x50 + iVar1;
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
