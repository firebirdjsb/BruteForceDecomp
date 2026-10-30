/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16ACCD10D5F87C076833D3932D04263D35F0EAF2238A741EC76582841F5B647F
 * Entry: 0x00140040, Ghidra index: 4074, label: FUN_00140040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* The original free thunk forwards a guest32 word; full ABI unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_00140040(void)

{
  int unaff_ESI;
  undefined4 unaff_EDI;
  
  if (*(int *)(unaff_ESI + 0x48) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x48));
  }
  *(undefined4 *)(unaff_ESI + 0x48) = unaff_EDI;
  return;
}
