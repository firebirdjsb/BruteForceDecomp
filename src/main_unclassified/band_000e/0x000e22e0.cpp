/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4875EBD2E279B2ABA46EE9A7A42227E6CEF546A51ED06BFA7AA0EBBA6717645A
 * Entry: 0x000e22e0, Ghidra index: 2790, label: FUN_000e22e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Single 32-bit guest free operand; caller x86 ABI still unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_000e22e0(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_000e22e0(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
