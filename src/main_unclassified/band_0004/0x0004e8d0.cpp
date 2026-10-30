/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B393DCE170404514A8B0A8F614AAEA7748F5C7CC3D9FC493C80211158073238
 * Entry: 0x0004e8d0, Ghidra index: 676, label: FUN_0004e8d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0004e8d0(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x4c) == 0) {
    return 0;
  }
  return *(int *)(in_EAX + 0x50) - *(int *)(in_EAX + 0x4c) >> 2;
}
