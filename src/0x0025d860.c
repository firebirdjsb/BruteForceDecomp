/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7EB2A9EBD7E9105F93434774B3A684DC73A2EF5E03590FAD2C62C63A41389EE
 * Entry: 0x0025d860, Ghidra index: 8572, label: FUN_0025d860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025d860(void)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  
  iVar2 = *(int *)(in_EAX + 8);
  cVar1 = *(char *)(iVar2 + 0x25);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x25);
  }
  return;
}
