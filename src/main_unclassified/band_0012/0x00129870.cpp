/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4384BEB4D293A43FA66F5FFC09A8A204A22E78E824DCC6F3DDCD42E80E47D44
 * Entry: 0x00129870, Ghidra index: 3750, label: FUN_00129870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* The original free thunk forwards a guest32 word; full ABI unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_00129870(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_00129870(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
