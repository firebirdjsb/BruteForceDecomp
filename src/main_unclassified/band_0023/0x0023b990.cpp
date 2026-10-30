/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4C8FD2122948E02A64C2F0F7F647E867410BF2F6665C0C8D7ECA49DC46A8A01
 * Entry: 0x0023b990, Ghidra index: 7914, label: FUN_0023b990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Reuse original one-DWORD free-thunk interface; caller ABI unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_0023b990(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 4) = 1;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
