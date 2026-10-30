/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF692597AAFC2BB4FA314580F96446EA1C1C3DB4D74F76CB093BE34131F3B227
 * Entry: 0x0006a2b0, Ghidra index: 1189, label: FUN_0006a2b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006a2b0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x34) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x34));
  }
  *(undefined4 *)(unaff_EDI + 0x34) = 0;
  iVar2 = *(int *)(unaff_EDI + 0x1c);
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EDI + 0x1c) = 0;
    *(undefined4 *)(unaff_EDI + 0x20) = 0;
    *(undefined4 *)(unaff_EDI + 0x24) = 0;
    if (*(int *)(unaff_EDI + 0x14) == 0) {
      *(undefined4 *)(unaff_EDI + 0x14) = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x14));
  }
  iVar1 = *(int *)(unaff_EDI + 0x20);
  for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
    FUN_000e35e0(0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x1c));
}
