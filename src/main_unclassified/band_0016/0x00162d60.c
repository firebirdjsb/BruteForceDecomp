/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2CB2740CC4F368BDEF928CCBFBE9FEB5D9143E67E6AE416ADDC3B125DE66654
 * Entry: 0x00162d60, Ghidra index: 4658, label: FUN_00162d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00162d60(void)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_ESI;
  int *unaff_EDI;
  bool bVar5;
  
  bVar2 = (**(code **)(*unaff_EDI + 0x3c))();
  uVar4 = 1 << (bVar2 & 0x1f);
  bVar5 = (*(uint *)(unaff_ESI + 0x108) & uVar4) == uVar4;
  if (!bVar5) {
    puVar3 = (undefined4 *)(unaff_ESI + 4);
    puVar1 = (undefined4 *)(unaff_ESI + 4 + *(int *)(unaff_ESI + 0x104) * 4);
    bVar5 = puVar3 == puVar1;
    if (!bVar5) {
      do {
        if ((int *)*puVar3 == unaff_EDI) break;
        puVar3 = puVar3 + 1;
      } while (puVar3 != puVar1);
      bVar5 = puVar3 == puVar1;
    }
    bVar5 = !bVar5;
  }
  return bVar5;
}
