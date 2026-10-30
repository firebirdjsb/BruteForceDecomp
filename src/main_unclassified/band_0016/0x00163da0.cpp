/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3DDFD4A07B3F08269880BD0372FE9DD2C4C7A515EE90CF914296CA9D70425A96
 * Entry: 0x00163da0, Ghidra index: 4673, label: FUN_00163da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00163da0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_28 [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar3 = (in_EAX - param_1) / 0x18;
  if (1 < iVar3) {
    puVar6 = (undefined4 *)(in_EAX + -0x18);
    if (iVar3 < 2) goto LAB_00163e1b;
    do {
      uVar1 = *puVar6;
      uStack_14 = 0;
      uStack_18 = param_2;
      uVar2 = puVar6[1];
      puVar5 = local_28;
      iVar3 = 8 - (int)puVar5;
      iVar4 = 4;
      do {
        *puVar5 = *(undefined4 *)((int)puVar6 + iVar3 + (int)puVar5);
        puVar5 = puVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      FUN_00165440(uVar1,uVar2);
LAB_00163e1b:
      puVar6 = puVar6 + -6;
    } while (1 < ((0x18 - param_1) + (int)puVar6) / 0x18);
  }
  return;
}
