/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F3C248037E052940516B2BF88D84A341657C7B99482F01B3C5580836F0F2DA69
 * Entry: 0x000fe560, Ghidra index: 3183, label: FUN_000fe560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000fe560(void)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int in_EAX;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  puVar2 = *(undefined4 **)(in_EAX + 8);
  uVar5 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)*puVar2;
  }
  puVar6 = puVar2;
  if (puVar2 != puVar7) {
    while( true ) {
      puVar6 = (undefined4 *)puVar6[1];
      piVar3 = (int *)puVar6[2];
      if ((*(byte *)((int)piVar3 + 0x65) & 8) != 0) break;
      if (puVar6 == puVar7) {
        return uVar5;
      }
    }
    if (piVar3 != (int *)0x0) {
      if (*(undefined4 **)(in_EAX + 8) == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = (undefined4 *)**(undefined4 **)(in_EAX + 8);
      }
      for (; puVar7 != puVar2; puVar7 = (undefined4 *)*puVar7) {
        piVar4 = (int *)puVar7[2];
        bVar1 = *(byte *)(piVar4 + 10);
        bVar8 = piVar4 == piVar3;
        if ((bool)(bVar1 >> 1 & 1) != bVar8) {
          *(byte *)(piVar4 + 10) = (bVar8 << 1 ^ bVar1) & 2 ^ bVar1;
          (**(code **)(*piVar4 + 0x24))();
        }
        bVar1 = *(byte *)(piVar4 + 10);
        if (bVar8 != (bool)(bVar1 >> 2 & 1)) {
          *(byte *)(piVar4 + 10) = (bVar8 << 2 ^ bVar1) & 4 ^ bVar1;
          (**(code **)(*piVar4 + 0x28))();
        }
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}
