/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5ECB78D46A394664D35F26CB9318E836A15A2B58F0B99AEFD228EF5B757FA372
 * Entry: 0x0006a330, Ghidra index: 1191, label: FUN_0006a330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006a330(void)

{
  int in_EAX;
  int unaff_ESI;
  
  for (; in_EAX != unaff_ESI; in_EAX = in_EAX + 0x38) {
    FUN_0006a540();
  }
  return;
}
