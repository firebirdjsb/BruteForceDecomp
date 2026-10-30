/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB08AFB1066D1CE3138F01C322FCB0F7BF0EDF228B2578A172FC4D9A25C37F15
 * Entry: 0x0024f870, Ghidra index: 8322, label: FUN_0024f870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024f870(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_2 != param_1) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)*puVar1;
    }
    puVar2 = *(undefined4 **)(param_2 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)*puVar2;
    }
    while (puVar6 != puVar1) {
      if (puVar5 == puVar2) {
        return;
      }
      if ((float)puVar6[2] <= (float)puVar5[2]) {
        puVar6 = (undefined4 *)*puVar6;
      }
      else {
        puVar3 = (undefined4 *)*puVar5;
        FUN_000b2a50();
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
        *(undefined4 **)puVar5[1] = puVar3;
        *(undefined4 **)puVar3[1] = puVar6;
        *(undefined4 **)puVar6[1] = puVar5;
        uVar4 = puVar6[1];
        puVar6[1] = puVar3[1];
        puVar3[1] = puVar5[1];
        puVar5[1] = uVar4;
        puVar5 = puVar3;
      }
    }
    if (puVar5 != puVar2) {
      FUN_0024ff90(puVar1,puVar5,puVar2);
    }
  }
  return;
}
