/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF2D8A708F09AE80580CD7D13F3EBC17DB3480FD35D2C40B4D956883671B33C6
 * Entry: 0x00250660, Ghidra index: 8346, label: FUN_00250660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Free-thunk single guest DWORD is known; full original call ABI is not. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_00250660(int param_1)

{
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_00250660(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
