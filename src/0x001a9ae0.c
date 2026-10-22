/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EFFB8BBA4D725DB30C1A8C26F50AB2316810C142536B06B2D33A89E864A3679B
 * Entry: 0x001a9ae0, Ghidra index: 5478, label: FUN_001a9ae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001a9ae0(byte param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_EDI + 0x1c);
  if (iVar2 != 0) {
    iVar1 = *(int *)(unaff_EDI + 0x20);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
      FUN_000e35e0(0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x1c));
  }
  *(undefined4 *)(unaff_EDI + 0x1c) = 0;
  *(undefined4 *)(unaff_EDI + 0x20) = 0;
  *(undefined4 *)(unaff_EDI + 0x24) = 0;
  if (*(int *)(unaff_EDI + 0x14) == 0) {
    *(undefined4 *)(unaff_EDI + 0x14) = 0;
    if ((param_1 & 1) == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x14));
}
