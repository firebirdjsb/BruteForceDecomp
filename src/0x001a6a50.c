/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 22BE9C1B1E9CE9F89BA4125A612A696710512AB005AD50E13C5AA538F11A599B
 * Entry: 0x001a6a50, Ghidra index: 5372, label: FUN_001a6a50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001a6a50(void)

{
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    return;
  }
  if (*(int *)(unaff_ESI + 0x4c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x4c));
  }
  *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  if (*(int *)(unaff_ESI + 0x3c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x3c));
  }
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  *(undefined4 *)(unaff_ESI + 0x40) = 0;
  *(undefined4 *)(unaff_ESI + 0x44) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
