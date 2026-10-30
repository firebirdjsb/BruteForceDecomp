/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1F5DA4B97C738B09259A0270094F8447CBD8D6B387066E346E4DB32441CA575
 * Entry: 0x00058b60, Ghidra index: 881, label: FUN_00058b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00058b60(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  int unaff_EDI;
  
  uVar2 = 0;
  if (unaff_EBX == 0) {
    *(undefined4 *)(unaff_EDI + 0xc) = 0;
    *(undefined4 *)(unaff_EDI + 8) = 0;
  }
  else {
    puVar3 = (undefined4 *)(**(code **)(*(int *)(unaff_EBX + 8) + 4))();
    uVar1 = puVar3[2];
    uVar2 = *puVar3;
    *(undefined4 *)(unaff_EDI + 8) = puVar3[1];
    *(undefined4 *)(unaff_EDI + 0xc) = uVar1;
  }
  *(undefined4 *)(unaff_EDI + 4) = uVar2;
  if (*(int *)(unaff_EDI + 0x14) != unaff_EBX) {
    FUN_0008f6a0();
  }
  return;
}
