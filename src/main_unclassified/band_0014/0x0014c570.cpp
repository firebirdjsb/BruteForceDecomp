/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15BA904583566CE2168E5848152A492D00B1501E8E12DA3597796C1C95C62186
 * Entry: 0x0014c570, Ghidra index: 4339, label: FUN_0014c570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original guest32 free-dispatch argument; caller ABI remains unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_0014c570(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_0014c570(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
