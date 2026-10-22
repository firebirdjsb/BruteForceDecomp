/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2017923B9DAFA37C6929E52378266C00B15888A28714256215D02FAC92A48278
 * Entry: 0x001a99c0, Ghidra index: 5475, label: FUN_001a99c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001a99c0(byte param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x3c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x3c));
  }
  *(undefined4 *)(unaff_EDI + 0x3c) = 0;
  iVar2 = *(int *)(unaff_EDI + 0x30);
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EDI + 0x30) = 0;
    *(undefined4 *)(unaff_EDI + 0x34) = 0;
    *(undefined4 *)(unaff_EDI + 0x38) = 0;
    if ((param_1 & 1) == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  iVar1 = *(int *)(unaff_EDI + 0x34);
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
    FUN_000e35e0(0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x30));
}
