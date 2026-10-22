/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ACDCD2E04FEA96AC776D177B347A4F757C4B13E1B3B0B76BED5B5E243D087632
 * Entry: 0x000e3680, Ghidra index: 2816, label: FUN_000e3680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e3680(void)

{
  int *piVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0xc) != 0) {
    FUN_000e3c30(*(undefined4 *)(unaff_EDI + 0x10),unaff_EDI + 8);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0xc));
  }
  *(undefined4 *)(unaff_EDI + 0xc) = 0;
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  piVar1 = *(int **)(unaff_EDI + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_EDI + 4) = 0;
  }
  return;
}
