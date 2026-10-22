/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6EB7CC99BF3CB9329EC0E8D21AAC1E17CD62D5C1881CEBB345C776561A2024F
 * Entry: 0x002cc9a0, Ghidra index: 10150, label: FUN_002cc9a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002cc9a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_002c1560();
  iVar2 = FUN_002c1560();
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_002cb890(param_1,iVar1,iVar2);
  *(int *)(iVar1 + 100) = *(int *)(iVar1 + 100) + -1;
  *(int *)(iVar2 + 100) = *(int *)(iVar2 + 100) + -1;
  return;
}
