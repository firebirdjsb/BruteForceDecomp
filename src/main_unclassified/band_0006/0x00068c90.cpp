/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 081D7493476457529BC92F63A5BBC5F439A166B8C5F05D35DA1B817F40D3C4CB
 * Entry: 0x00068c90, Ghidra index: 1157, label: FUN_00068c90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00068c90(void)

{
  int *unaff_ESI;
  
  if (*unaff_ESI != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*unaff_ESI);
  }
  *unaff_ESI = 0;
  return;
}
