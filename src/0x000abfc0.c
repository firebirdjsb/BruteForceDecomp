/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AD883F1C26665CA72C0F0D946F2A8D6FE21A7194DE9504EF3940F7FC463E0C3E
 * Entry: 0x000abfc0, Ghidra index: 2055, label: FUN_000abfc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000abfc0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  iVar1 = *(int *)(*(int *)(*(int *)(unaff_ESI + 0x28) + 0xe0) + 0x2e8);
  iVar2 = *(int *)(iVar1 + 0x1c0);
  iVar1 = *(int *)(iVar1 + 0x1c4);
  FUN_0014da70();
  iVar3 = *(int *)(*(int *)(*(int *)(unaff_ESI + 0x28) + 0xe0) + 0x2e8);
  if ((iVar2 != *(int *)(iVar3 + 0x1c0)) || (iVar1 != *(int *)(iVar3 + 0x1c4))) {
    FUN_000bb220(0xf8f93c5e);
  }
  return;
}
