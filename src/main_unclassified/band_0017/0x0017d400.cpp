/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E02E78BDF6C18406C3E12F00CDFDC225C73ACC1F4C6395A746C1EEC088F53231
 * Entry: 0x0017d400, Ghidra index: 5067, label: FUN_0017d400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original guest32 free-dispatch argument; caller ABI remains unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_0017d400(int param_1)

{
  if (*(char *)(param_1 + 0x81) == '\0') {
    FUN_0017d400(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
