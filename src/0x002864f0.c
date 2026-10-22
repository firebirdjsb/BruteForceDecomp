/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D2240C44D169A02A2B3A50C4FED769EE9EDC56F6CAB66A588D9481836C707F24
 * Entry: 0x002864f0, Ghidra index: 9079, label: FUN_002864f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002864f0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x14);
  iVar2 = FUN_000ff730(in_ECX + 0x10,iVar1,*(undefined4 *)(iVar1 + 4),&stack0x00000004);
  FUN_000b2a50();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}
