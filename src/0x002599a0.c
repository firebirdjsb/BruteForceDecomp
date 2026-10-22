/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D21B6A92D54AC71A84E97AC83B04389F55FB87E9513278BAC9F44A1BE6B9D4B7
 * Entry: 0x002599a0, Ghidra index: 8508, label: FUN_002599a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002599a0(void)

{
  char cVar1;
  undefined4 *puVar2;
  int in_EAX;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  int iVar5;
  undefined4 *puVar6;
  int unaff_EBX;
  undefined4 *local_8;
  undefined4 *local_4;
  
  puVar2 = *(undefined4 **)(unaff_EBX + 8);
  cVar1 = *(char *)((int)puVar2[1] + 0x19);
  local_8 = puVar2;
  puVar6 = (undefined4 *)puVar2[1];
  while (cVar1 == '\0') {
    if ((int)puVar6[3] < in_EAX) {
      puVar3 = (undefined4 *)puVar6[2];
      puVar6 = local_8;
    }
    else {
      puVar3 = (undefined4 *)*puVar6;
    }
    local_8 = puVar6;
    puVar6 = puVar3;
    cVar1 = *(char *)((int)puVar3 + 0x19);
  }
  if ((local_8 == puVar2) || (in_EAX < (int)local_8[3])) {
    local_4 = puVar2;
    ppuVar4 = &local_4;
  }
  else {
    ppuVar4 = &local_8;
  }
  puVar2 = *ppuVar4;
  if (puVar2 != *(undefined4 **)(unaff_EBX + 8)) {
    iVar5 = FUN_00259430();
    if (-1 < iVar5) {
      FUN_0025a390(unaff_EBX + 4,&local_4,puVar2);
      iVar5 = 0;
    }
    return iVar5;
  }
  return -0x7fffbffb;
}
