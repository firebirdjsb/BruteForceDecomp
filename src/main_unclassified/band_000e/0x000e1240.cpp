/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44C70CA3488B78F1E6E23AC20A8ADD3405DBEEB575BD8D357A62CCFD0D02AF67
 * Entry: 0x000e1240, Ghidra index: 2766, label: FUN_000e1240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e1240(byte param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_EDI + 0x10);
  if (iVar2 != 0) {
    iVar1 = *(int *)(unaff_EDI + 0x14);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x2c) {
      FUN_000e35e0(0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x10));
  }
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  *(undefined4 *)(unaff_EDI + 0x18) = 0;
  if ((param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
