/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 564F21A779AD358C4A8E588CAC1E882B2C85468298EDA5FF3347D1E41884051C
 * Entry: 0x00210740, Ghidra index: 7425, label: FUN_00210740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00210740(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int in_EAX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint unaff_EBX;
  int iVar6;
  undefined4 *puVar7;
  
  puVar2 = *(undefined4 **)(in_EAX + 8);
  puVar5 = (undefined4 *)puVar2[1];
  iVar6 = 0;
  cVar1 = *(char *)((int)puVar5 + 0x15);
  puVar7 = puVar2;
  puVar4 = puVar5;
  while (cVar1 == '\0') {
    if (unaff_EBX < (uint)puVar4[3]) {
      puVar3 = (undefined4 *)*puVar4;
      puVar7 = puVar4;
    }
    else {
      puVar3 = (undefined4 *)puVar4[2];
    }
    puVar4 = puVar3;
    cVar1 = *(char *)((int)puVar3 + 0x15);
  }
  cVar1 = *(char *)((int)puVar5 + 0x15);
  while (cVar1 == '\0') {
    if ((uint)puVar5[3] < unaff_EBX) {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    else {
      puVar4 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x15);
  }
  while (puVar2 != puVar7) {
    if (puVar2[4] != 0) {
      *(undefined4 *)(param_1 + iVar6 * 4) = puVar2[4];
      iVar6 = iVar6 + 1;
    }
    FUN_0012aba0();
  }
  return iVar6;
}
