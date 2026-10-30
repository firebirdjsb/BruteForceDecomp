/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7EEC533CCC5E31FD6F8D93CCE34F189AEEBC16B60E1D6CA10D38705812B9EB22
 * Entry: 0x00270d60, Ghidra index: 8799, label: FUN_00270d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00270d60(void)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  
  iVar2 = *(int *)(in_EAX + 8);
  cVar1 = *(char *)(iVar2 + 0x2d);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x2d);
  }
  return;
}
