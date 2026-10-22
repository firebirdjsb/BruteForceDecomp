/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E7FDD8316DB333096F3EA27C854A62732C7BE0C0A6B5D46E1AB0E9782AF5759
 * Entry: 0x0017dd90, Ghidra index: 5092, label: FUN_0017dd90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017dd90(uint param_1)

{
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0xc) != 0) {
    FUN_000e3c30(*(undefined4 *)(unaff_EDI + 0x10),unaff_EDI + 8,param_1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0xc));
  }
  *(undefined4 *)(unaff_EDI + 0xc) = 0;
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
