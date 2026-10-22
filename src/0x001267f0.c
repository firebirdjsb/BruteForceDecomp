/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8FB6108E476B343758DEA10A6C96849021FED838E1CA966F712C9EB55C52909
 * Entry: 0x001267f0, Ghidra index: 3713, label: FUN_001267f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001267f0(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x5b8) != 0) {
    FUN_00143570();
    return;
  }
  FUN_00126730();
  return;
}
