/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B2CC72774487112609E56FFD2FCD4DD16083627836D2ADA97515B1ADE4B96E7A
 * Entry: 0x000ac020, Ghidra index: 2056, label: FUN_000ac020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_0014d8f0(void);
extern undefined4 FUN_000bb220(void);

void FUN_000ac020(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  iVar1 = *(int *)(*(int *)(*(int *)(unaff_ESI + 0x28) + 0xe0) + 0x2e8);
  iVar2 = *(int *)(iVar1 + 0x1c0);
  iVar1 = *(int *)(iVar1 + 0x1c4);
  FUN_0014d8f0();
  iVar3 = *(int *)(*(int *)(*(int *)(unaff_ESI + 0x28) + 0xe0) + 0x2e8);
  if ((iVar2 != *(int *)(iVar3 + 0x1c0)) || (iVar1 != *(int *)(iVar3 + 0x1c4))) {
    FUN_000bb220(0x1ab2fc23);
  }
  return;
}
