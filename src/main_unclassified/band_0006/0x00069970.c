/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5BDEB5AD2942B00BCB925F9EEF23DA650BE9BB88584829A33E077B84E5FC402A
 * Entry: 0x00069970, Ghidra index: 1169, label: FUN_00069970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00069970(void)

{
  int in_EAX;
  int unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x44) {
    FUN_00069e30();
  }
  return;
}
