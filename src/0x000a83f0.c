/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 51202350E7E1F03145B65AA5FC74256F3A9CDBB6E6019F83152B88E53FA9E27F
 * Entry: 0x000a83f0, Ghidra index: 2003, label: FUN_000a83f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a83f0(void)

{
  char cVar1;
  int *piVar2;
  int *in_EAX;
  
  piVar2 = (int *)*in_EAX;
  cVar1 = *(char *)((int)piVar2 + 0x19);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x19);
  }
  return;
}
