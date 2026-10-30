/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA7CCB5517FC5654E2C77A259AD098FB223A7B5649666F370677CD0BAA2622A2
 * Entry: 0x00181380, Ghidra index: 5150, label: FUN_00181380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Reuse original one-DWORD free-thunk interface; caller ABI unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_00181380(int param_1)

{
  if (*(char *)(param_1 + 0x41) == '\0') {
    FUN_00181380(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
