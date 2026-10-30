/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B45B8839DC1BD3DD4D0A0C2848A9EBF8B28AA45347EBF323D60768EF1CAABFDF
 * Entry: 0x0006a370, Ghidra index: 1193, label: FUN_0006a370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006a370(void)

{
  int in_EAX;
  int unaff_ESI;
  
  for (; in_EAX != unaff_ESI; in_EAX = in_EAX + 0x28) {
    FUN_0006a470();
  }
  return;
}
