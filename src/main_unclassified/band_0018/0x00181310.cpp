/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DED1071EF6D3CCE2FAE02C36D054C2AB7B0D6011F6E8F294FF4A0907F317201
 * Entry: 0x00181310, Ghidra index: 5148, label: FUN_00181310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Reuse original one-DWORD free-thunk interface; caller ABI unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_00181310(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_00181310(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
