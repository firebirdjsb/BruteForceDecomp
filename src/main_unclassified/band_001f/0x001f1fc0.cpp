/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 237149BD5239820407E7A7E673F1AA4898C801094C7C38C29D11D5848D73940C
 * Entry: 0x001f1fc0, Ghidra index: 6998, label: FUN_001f1fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_001f1fc0(void)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_ESI;
  
  if (*(char *)(unaff_ESI + 0x27c) != '\0') {
    return 0xffffffff;
  }
  iVar4 = *(int *)(unaff_ESI + 0x284);
  piVar1 = (int *)(unaff_ESI + 0x284);
  if (iVar4 == 0) {
    uVar3 = FUN_001f2020(piVar1);
    *(undefined4 *)(unaff_ESI + 0x280) = uVar3;
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *(undefined1 *)(unaff_ESI + 0x27c) = 1;
      return 0xffffffff;
    }
  }
  *piVar1 = iVar4 + -1;
  bVar2 = **(byte **)(unaff_ESI + 0x280);
  *(byte **)(unaff_ESI + 0x280) = *(byte **)(unaff_ESI + 0x280) + 1;
  return (uint)bVar2;
}
