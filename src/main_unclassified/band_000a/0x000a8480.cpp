/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CECDACED90BEC995D236F009767DE77ED83BCAB742EEBDBF7310A0CF66E6E45E
 * Entry: 0x000a8480, Ghidra index: 2006, label: FUN_000a8480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a8480(void)

{
  char cVar1;
  int *piVar2;
  int *in_EAX;
  
  piVar2 = (int *)*in_EAX;
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}
