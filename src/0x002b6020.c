/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5FF61939F89CD4ABA9CA25BAA959A0D090064D0A4F39ED1AD432CD6A611D4CA5
 * Entry: 0x002b6020, Ghidra index: 9814, label: FUN_002b6020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b6020(void)

{
  int unaff_EBX;
  uint uVar1;
  int unaff_EDI;
  
  FUN_002be9e0(unaff_EBX,*(undefined4 *)(unaff_EBX + 0x8c));
  uVar1 = (uint)*(ushort *)(unaff_EDI + 0x12);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (**(code **)**(undefined4 **)(*(int *)(unaff_EDI + 0x14) + uVar1 * 4))();
  }
  return;
}
