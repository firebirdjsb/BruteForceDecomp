/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9EB5B6795D9F4E11EC350EAEE325A976896DF9DE5E04E7E52DE2600C64F66664
 * Entry: 0x002ac5d0, Ghidra index: 9668, label: FUN_002ac5d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002ac5d0(void)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  int in_EAX;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar4 = FUN_002383b0();
  puVar2 = *(uint **)(in_EAX + 8);
  cVar1 = *(char *)((int)puVar2[1] + 0x1d);
  puVar3 = puVar2;
  puVar6 = (uint *)puVar2[1];
  while (cVar1 == '\0') {
    if (puVar6[3] < uVar4) {
      puVar5 = (uint *)puVar6[2];
      puVar6 = puVar3;
    }
    else {
      puVar5 = (uint *)*puVar6;
    }
    puVar3 = puVar6;
    puVar6 = puVar5;
    cVar1 = *(char *)((int)puVar5 + 0x1d);
  }
  if ((puVar3 != puVar2) && (puVar3[3] <= uVar4)) {
    return CONCAT31((int3)((uint)puVar3 >> 8),puVar3 != puVar2);
  }
  return (uint)puVar2 & 0xffffff00;
}
