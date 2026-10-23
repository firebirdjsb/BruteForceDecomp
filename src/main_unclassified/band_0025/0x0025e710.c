/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 12C13AE7DA37A70C3107FC4556BA171AF673F38B2A96A09F3F675D65F098BAE4
 * Entry: 0x0025e710, Ghidra index: 8598, label: FUN_0025e710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025e710(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  iVar1 = *(int *)(in_EAX + 0xc);
  for (iVar2 = *(int *)(in_EAX + 8); iVar2 != iVar1; iVar2 = iVar2 + 0x2c) {
    FUN_0025e640();
  }
  return;
}
