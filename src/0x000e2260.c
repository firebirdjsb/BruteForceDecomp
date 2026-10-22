/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25D6741BD41963F8C2DB4C08FAA5C34779194BC0D72320EA3DB23060D87DDCAC
 * Entry: 0x000e2260, Ghidra index: 2788, label: FUN_000e2260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e2260(void)

{
  int in_EAX;
  int unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x68) {
    FUN_000e3720();
  }
  return;
}
