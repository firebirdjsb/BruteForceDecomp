/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C477AC98B20180F50973D4E53F5140C432C6B06102C987C771D780192D46844
 * Entry: 0x001a97d0, Ghidra index: 5472, label: FUN_001a97d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001a97d0(byte param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_EDI + 0x5c);
  if (iVar2 != 0) {
    iVar1 = *(int *)(unaff_EDI + 0x60);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
      FUN_000e35e0(0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x5c));
  }
  *(undefined4 *)(unaff_EDI + 0x5c) = 0;
  *(undefined4 *)(unaff_EDI + 0x60) = 0;
  *(undefined4 *)(unaff_EDI + 100) = 0;
  iVar2 = *(int *)(unaff_EDI + 0x4c);
  if (iVar2 != 0) {
    iVar1 = *(int *)(unaff_EDI + 0x50);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
      FUN_000e35e0(0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x4c));
  }
  *(undefined4 *)(unaff_EDI + 0x4c) = 0;
  *(undefined4 *)(unaff_EDI + 0x50) = 0;
  *(undefined4 *)(unaff_EDI + 0x54) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
