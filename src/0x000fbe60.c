/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 887C3CF295064C763C4F883598C6D3CC8BB5A3B9EF3C6DEB20AAFFDF9B439560
 * Entry: 0x000fbe60, Ghidra index: 3145, label: FUN_000fbe60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000fbe60(void)

{
  int in_EAX;
  int unaff_EDI;
  
  if ((unaff_EDI != 0) && (in_EAX != 0)) {
    if (*(int *)(unaff_EDI + 8) != 0) {
      FUN_000fbd90();
    }
    if (*(int *)(unaff_EDI + 0xc) != 0) {
      FUN_000fbdd0();
    }
    if (*(int *)(unaff_EDI + 0x10) != 0) {
      FUN_000fbe20();
      return;
    }
  }
  return;
}
