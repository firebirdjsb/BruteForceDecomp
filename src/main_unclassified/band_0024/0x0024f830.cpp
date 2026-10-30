/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F7960E06D1D7E3DD8B85294811924BDBF7C9E2D3E35017A1471B351A23980F5
 * Entry: 0x0024f830, Ghidra index: 8321, label: FUN_0024f830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Free-thunk single guest DWORD is known; full original call ABI is not. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_0024f830(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_0024f830(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
