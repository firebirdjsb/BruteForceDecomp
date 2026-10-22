/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39319E98BB06DEE4C57339CB83A9C46CC7D786032EB8E9FEC1B6F3FEBF62A455
 * Entry: 0x00173560, Ghidra index: 4882, label: FUN_00173560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00173560(void)

{
  int unaff_EDI;
  
  FUN_00064490();
  if (*(int *)(unaff_EDI + 8) == 0) {
    return *(int *)(unaff_EDI + 8) + -4;
  }
  return *(int *)(unaff_EDI + 8) + -4 +
         (*(int *)(unaff_EDI + 0xc) - *(int *)(unaff_EDI + 8) >> 3) * 8;
}
