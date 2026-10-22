/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DFF1CDD5378538A13D649940F2E7F414B628F4C178B7DC1AA3C166835200E1F
 * Entry: 0x00244180, Ghidra index: 8072, label: FUN_00244180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00244180(byte param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_EDI + 4);
  if (iVar2 != 0) {
    iVar1 = *(int *)(unaff_EDI + 8);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x38) {
      FUN_000e35e0(0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 4));
  }
  *(undefined4 *)(unaff_EDI + 4) = 0;
  *(undefined4 *)(unaff_EDI + 8) = 0;
  *(undefined4 *)(unaff_EDI + 0xc) = 0;
  if ((param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
