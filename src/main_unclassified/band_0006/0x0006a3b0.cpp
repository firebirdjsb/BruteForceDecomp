/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA40CB54EC5B060D97C1F91661589053C0FD40BCEB62806FB14D2752DE807805
 * Entry: 0x0006a3b0, Ghidra index: 1195, label: FUN_0006a3b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0006a540(void);

void FUN_0006a3b0(void)

{
  int in_EAX;
  int unaff_ESI;
  
  for (; in_EAX != unaff_ESI; in_EAX = in_EAX + 0x3c) {
    FUN_0006a540();
  }
  return;
}
