/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33266985A320CB0B9FF63D516833A6A4C295378D580A496DCE9C7D3A7D233725
 * Entry: 0x0027cb90, Ghidra index: 8991, label: FUN_0027cb90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027cb90(void)

{
  char cVar1;
  int *piVar2;
  int *in_EAX;
  
  piVar2 = (int *)*in_EAX;
  cVar1 = *(char *)((int)piVar2 + 0x21);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return;
}
