/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79779639DE79DBD7F0A5271383E73E5129D82A5CA33C7F4A8EA058E10E09CFCE
 * Entry: 0x00356e70, Ghidra index: 13149, label: FUN_00356e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00356e70(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int unaff_ESI;
  undefined4 *puVar8;
  
  if (*(uint *)(unaff_ESI + 0x40) < *(uint *)(unaff_ESI + 0x4c)) {
    iVar1 = *(int *)(unaff_ESI + 0x74);
    iVar2 = *(int *)(unaff_ESI + 0x70);
    iVar3 = *(int *)(unaff_ESI + 0x6c);
    uVar7 = *(uint *)(unaff_ESI + 0x4c) - *(uint *)(unaff_ESI + 0x40);
    puVar4 = (undefined4 *)(*(int *)(unaff_ESI + 0x38) - uVar7);
    puVar8 = *(undefined4 **)(unaff_ESI + 0x2c);
    *(undefined4 **)(unaff_ESI + 0x38) = puVar4;
    uVar6 = uVar7;
    if (puVar4 < puVar8) {
      uVar6 = (int)puVar8 - (int)puVar4;
      *(undefined1 **)(unaff_ESI + 0x38) = (undefined1 *)(*(int *)(unaff_ESI + 0x28) + (int)puVar4);
      for (uVar5 = uVar7 - uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar7 - uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar4 = *(undefined4 **)(unaff_ESI + 0x38);
    }
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(uint *)(unaff_ESI + 0x40) = *(int *)(unaff_ESI + 0x40) + uVar7;
    return (uVar7 * 1000) / ((uint)(iVar1 * iVar2 * iVar3) >> 3);
  }
  return 0;
}
