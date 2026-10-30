/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D4D6F244DF0BAD962CDDA9E25F961597D48C2E3E45507F428D12E5E977A5C9F8
 * Entry: 0x00051760, Ghidra index: 745, label: FUN_00051760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Recorded 0x002EA018 -> 0x00067BF0 -> initial 0x00237EC0
 * free-thunk boundary. The original target receives a guest32 stack
 * DWORD; this source callsite and its guest registers are ABI_UNVERIFIED. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_00051760(void)

{
  int *unaff_EDI;
  
  if (*unaff_EDI != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(*unaff_EDI + 0x10));
  }
  *unaff_EDI = 0;
  return;
}
