/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5EBC66191BAB0998E6CE481754EF93F44B0EEA372FE1070683C126ECE17AA6F4
 * Entry: 0x00050e40, Ghidra index: 727, label: FUN_00050e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00050e40(void)

{
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  if (unaff_ESI != (undefined4 *)0x0) {
    *unaff_ESI = *unaff_EDI;
    FUN_001e0dd0(unaff_ESI + 1);
    *(undefined1 *)(unaff_ESI + 5) = *(undefined1 *)(unaff_EDI + 5);
  }
  return;
}
