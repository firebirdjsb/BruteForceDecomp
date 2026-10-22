/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D502B4BFB2E66B77D41EC80291DD8224F9681A1214B33890E45D962C6376618
 * Entry: 0x003537fa, Ghidra index: 13091, label: FUN_003537fa
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003537fa(void)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = (int *)(in_ECX + 100);
  for (uVar1 = -(uint)((int *)*piVar2 != piVar2) & (uint)((int *)*piVar2 + -0x19);
      (uVar1 != 0 && ((*(byte *)(uVar1 + 0xc) & 0x40) == 0));
      uVar1 = -(uint)(*(int **)(uVar1 + 100) != piVar2) & (uint)(*(int **)(uVar1 + 100) + -0x19)) {
  }
  return;
}
