/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E9C6077914699E9859D8D81771B7FF8B6420578451AD1D425F64D6B2CDD3D685
 * Entry: 0x000ba410, Ghidra index: 2256, label: FUN_000ba410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ba410(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  FUN_000ba460();
  iVar1 = *(int *)(in_EAX + 0x1364);
  iVar2 = FUN_000ff730(in_EAX + 0x1360,iVar1,*(undefined4 *)(iVar1 + 4),&stack0x00000004);
  FUN_000b2a50();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}
