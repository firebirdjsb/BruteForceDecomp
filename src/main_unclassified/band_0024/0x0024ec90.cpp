/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 521C7F70591E4A7C4D966B2F1B959BF3C5470A34BF24E479C45EBCADC6AE1FFD
 * Entry: 0x0024ec90, Ghidra index: 8307, label: FUN_0024ec90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0024ec90(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int unaff_ESI;
  undefined1 local_4 [4];
  
  puVar2 = *(undefined4 **)(unaff_ESI + 0x98);
  if (puVar2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar2;
  }
  FUN_001298b0(local_4,uVar4,puVar2);
  puVar2 = *(undefined4 **)(unaff_ESI + 0x88);
  if (puVar2 != *(undefined4 **)(unaff_ESI + 0x8c)) {
    puVar1 = puVar2 + 1;
    do {
      (**(code **)(*(int *)*puVar2 + 0x10))(unaff_ESI + 0x58);
      puVar5 = *(undefined4 **)(unaff_ESI + 0x8c);
      if (puVar1 != puVar5) {
        puVar3 = puVar1;
        do {
          *(undefined4 *)(((int)puVar2 - (int)puVar1) + (int)puVar3) = *puVar3;
          puVar3 = puVar3 + 1;
        } while (puVar3 != puVar5);
      }
      puVar5 = (undefined4 *)(*(int *)(unaff_ESI + 0x8c) + -4);
      *(undefined4 **)(unaff_ESI + 0x8c) = puVar5;
    } while (puVar2 != puVar5);
  }
  return 0;
}
