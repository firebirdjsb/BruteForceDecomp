/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 62D5B7DC847D004BB410F1D6361CD704FD231AFF2D6162F4733673C4AABFE02E
 * Entry: 0x001dcd30, Ghidra index: 6591, label: FUN_001dcd30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dcd30(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = in_ECX[2];
    *(undefined1 *)(in_EAX + 3) = *(undefined1 *)(in_ECX + 3);
  }
  return;
}
