/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 176861212C8F6BDC8CDF3CBC0DFE5205A016D6AA4E359D60A5F5FD3B0021A139
 * Entry: 0x000a2790, Ghidra index: 1926, label: FUN_000a2790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a2790(void)

{
  int *unaff_EDI;
  
  if (*unaff_EDI != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*unaff_EDI);
  }
  unaff_EDI[1] = 0;
  *unaff_EDI = 0;
  unaff_EDI[2] = 0;
  return;
}
