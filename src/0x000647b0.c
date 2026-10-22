/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 311665E857B8F7C4EA2E9DF41296863DDBC070727CBB40916C3EAD43E698CDFE
 * Entry: 0x000647b0, Ghidra index: 1092, label: FUN_000647b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000647b0(byte param_1)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0xc));
  }
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
