/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B708C59C1A90BDE9F3DB2D81738916EB5B6C784DBC10C578BC1CD9F4F6B71C0F
 * Entry: 0x001ac3b0, Ghidra index: 5522, label: FUN_001ac3b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ac3b0(uint param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  uint32_t puStack_c; /* original 32-bit SEH guest word; FS:0 adapter pending */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00308f60); /* original XBE push imm32 at 0x001ac3b5 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  if (param_1 < 0x2762763) {
    if (*(int *)(in_ECX + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4)) / 0x68;
    }
    if (uVar2 < param_1) {
      iVar1 = FUN_002ea01d();
      local_8 = 0;
      FUN_001cdf70();
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        *(uint *)(in_ECX + 0xc) = param_1 * 0x68 + iVar1;
        *(int *)(in_ECX + 8) = iVar1;
        *(int *)(in_ECX + 4) = iVar1;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      iVar1 = *(int *)(in_ECX + 8);
      for (; iVar3 != iVar1; iVar3 = iVar3 + 0x68) {
        FUN_000e3720();
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
