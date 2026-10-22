/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 787AC5C3867D8F8AA5D229EE36C80B0EBAFA5BDD47B76F23BAF3ADB544F1F622
 * Entry: 0x00270bf0, Ghidra index: 8795, label: FUN_00270bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00270bf0(void)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int unaff_EDI;
  
  puVar4 = *(undefined4 **)(in_EAX + 4);
  if (*(char *)((int)puVar4[1] + 0x2d) == '\0') {
    puVar3 = puVar4;
    puVar5 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar5;
      piVar1 = (int *)(unaff_EDI + 4);
      if (0xf < *(uint *)(unaff_EDI + 0x18)) {
        piVar1 = (int *)*(int *)(unaff_EDI + 4);
      }
      iVar2 = FUN_000e0b20(0,piVar1,*(undefined4 *)(unaff_EDI + 0x14));
      if (iVar2 < 0) {
        puVar5 = (undefined4 *)puVar4[2];
        puVar4 = puVar3;
      }
      else {
        puVar5 = (undefined4 *)*puVar4;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar5 + 0x2d) == '\0');
  }
  return puVar4;
}
