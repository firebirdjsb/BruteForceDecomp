/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 009D950E37AE78190FCACA6EC7D457DCE5A26A068B7237B45D3D4512C522B48B
 * Entry: 0x000b16f0, Ghidra index: 2115, label: FUN_000b16f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Single 32-bit guest free operand; caller x86 ABI still unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_000b16f0(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_000b16f0(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
