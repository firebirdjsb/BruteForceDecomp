/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9451152BD44E67F2069C051E5F078B4298D35DC536F7600AEBA429AF9C7CDD8B
 * Entry: 0x0014d430, Ghidra index: 4361, label: FUN_0014d430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0014d430(void)

{
  char cVar1;
  int *unaff_ESI;
  
  cVar1 = (**(code **)(*unaff_ESI + 0x20))();
  if (cVar1 != '\0') {
    return unaff_ESI[8];
  }
  return 0;
}
