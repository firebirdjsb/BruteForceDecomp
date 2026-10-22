/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE198F333F6A411D9E0D91B5761DE708200861CAB53229183CCC7D41EABE0C92
 * Entry: 0x00302430, Ghidra index: 11078, label: FUN_00302430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00302430(void)

{
  int iVar1;
  int unaff_ESI;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(unaff_ESI + 0x1e);
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    iVar1 = (**(code **)(**(int **)(*(int *)(unaff_ESI + 0x20) + uVar2 * 4) + 8))();
    *(int *)(unaff_ESI + 0x18) = *(int *)(unaff_ESI + 0x18) + iVar1;
  }
  return;
}
