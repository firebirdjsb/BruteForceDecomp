/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0BB51A7C057C78FCFF2B6744C160BB1C30C8E8BA2AF9AD878355D80BD591D664
 * Entry: 0x00241710, Ghidra index: 8014, label: FUN_00241710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00241710(byte param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_EDI + 0x24);
  if (iVar2 != 0) {
    iVar1 = *(int *)(unaff_EDI + 0x28);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
      FUN_000e35e0(0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x24));
  }
  *(undefined4 *)(unaff_EDI + 0x24) = 0;
  *(undefined4 *)(unaff_EDI + 0x28) = 0;
  *(undefined4 *)(unaff_EDI + 0x2c) = 0;
  if (*(uint *)(unaff_EDI + 0x18) < 0x10) {
    *(undefined4 *)(unaff_EDI + 0x14) = 0;
    *(undefined4 *)(unaff_EDI + 0x18) = 0xf;
    *(undefined1 *)(unaff_EDI + 4) = 0;
    if ((param_1 & 1) == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 4));
}
