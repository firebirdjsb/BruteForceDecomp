/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 162CBDD521AFDA4BA939232C85D4768D2428DD01EE77D4C5492CD22487158527
 * Entry: 0x001dd040, Ghidra index: 6609, label: FUN_001dd040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dd040(void)

{
  int in_EAX;
  int unaff_ESI;
  
  if (in_EAX != 0) {
    FUN_000fdc90(unaff_ESI);
    FUN_001e0dd0(in_EAX + 0x28);
    *(undefined4 *)(in_EAX + 0x38) = *(undefined4 *)(unaff_ESI + 0x38);
  }
  return;
}
