/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 792BA86BD48C0C43FDF95D5042F0CDC1321343E0607333DDEFAB932CD0527CD9
 * Entry: 0x002b6080, Ghidra index: 9816, label: FUN_002b6080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b6080(void)

{
  undefined4 uVar1;
  int unaff_EBX;
  uint uVar2;
  int unaff_EDI;
  
  if (**(int **)(unaff_EBX + 0x54) == 0) {
    uVar1 = 0xf4e3b802;
  }
  else {
    uVar1 = *(undefined4 *)(**(int **)(unaff_EBX + 0x54) + 0x8c);
  }
  FUN_002be9e0(unaff_EBX,uVar1);
  uVar2 = (uint)*(ushort *)(unaff_EDI + 0x12);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    (**(code **)**(undefined4 **)(*(int *)(unaff_EDI + 0x14) + uVar2 * 4))();
  }
  return;
}
