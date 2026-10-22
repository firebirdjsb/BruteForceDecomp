/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 423FF3DD83B013290E0AC8CBBE860510B2535C35AEFAB5FF9B12E8B6FCCF9CD2
 * Entry: 0x002b55c0, Ghidra index: 9797, label: FUN_002b55c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b55c0(void)

{
  uint uVar1;
  int unaff_EDI;
  
  uVar1 = (uint)*(ushort *)(unaff_EDI + 0xde);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (**(code **)**(undefined4 **)(*(int *)(unaff_EDI + 0xe0) + uVar1 * 4))(&stack0xfffffff8);
  }
  return;
}
