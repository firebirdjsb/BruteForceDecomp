/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D6A6263CD132414BFF09E1B22678CD37369C467CAB4E5FBDC3087F26C33B59A
 * Entry: 0x0012ab60, Ghidra index: 3771, label: FUN_0012ab60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* The original free thunk forwards a guest32 word; full ABI unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_0012ab60(int param_1)

{
  if (*(char *)(param_1 + 0x21) == '\0') {
    FUN_0012ab60(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
