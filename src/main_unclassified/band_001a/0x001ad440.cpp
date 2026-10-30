/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7EBC07E868B807752C5A843CC5B04E770C7040D0232F4BFD3961963E90CDB019
 * Entry: 0x001ad440, Ghidra index: 5541, label: FUN_001ad440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ad440(uint param_1)

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
  puStack_c = UINT32_C(0x00309840); /* x86 push imm32 0x001ad445 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  if (param_1 < 0x5d1745e) {
    if (*(int *)(in_ECX + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4)) / 0x2c;
    }
    if (uVar2 < param_1) {
      iVar1 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce150(in_ECX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 != 0) {
        iVar1 = *(int *)(in_ECX + 8);
        for (; iVar3 != iVar1; iVar3 = iVar3 + 0x2c) {
          FUN_0006a470();
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
