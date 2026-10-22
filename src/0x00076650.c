/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2728910265C345B63A5F34047ADAFD128C4D65A69FAD1F0C6DB3CA69D53D78D1
 * Entry: 0x00076650, Ghidra index: 1378, label: FUN_00076650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00076650(void)

{
  int iVar1;
  int unaff_EDI;
  
  if ((*(int *)(unaff_EDI + 0xc) == 4) && (iVar1 = *(int *)(unaff_EDI + 4), iVar1 != 0)) {
    FUN_000773c0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  return;
}
