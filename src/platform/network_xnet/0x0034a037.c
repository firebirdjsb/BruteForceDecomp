/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89A174B525F44E8E318A2F811B0BA997971B974B81BDF18F67C332B44BAE70A3
 * Entry: 0x0034a037, Ghidra index: 12925, label: FUN_0034a037
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0034a037(undefined4 param_1)

{
  ushort *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  KeRaiseIrqlToDpcLevel();
  puVar2 = (undefined4 *)FUN_00347b83(param_1);
  if (puVar2 == (undefined4 *)0x0) {
    uVar7 = 0x2726;
  }
  else {
    FUN_0034f178(puVar2[0x3c]);
    puVar2[0x3c] = 0;
    uVar5 = (uint)*(byte *)(in_ECX + 0xe);
    puVar1 = (ushort *)(in_ECX + 0xacc);
    *puVar1 = *puVar1 - 1;
    iVar3 = *(int *)(in_ECX + 0xac4);
    puVar6 = (undefined4 *)((uint)*puVar1 * 0xf4 + *(int *)(in_ECX + 0xac0));
    puVar8 = puVar6;
    puVar9 = puVar2;
    for (iVar4 = 0x3d; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      if (*(char *)(iVar3 + 2) != '\0') {
        if (*(undefined4 **)(iVar3 + 0xc0) == puVar2) {
          FUN_00349730(iVar3,1);
        }
        else if (*(undefined4 **)(iVar3 + 0xc0) == puVar6) {
          *(undefined4 **)(iVar3 + 0xc0) = puVar2;
        }
      }
      iVar3 = iVar3 + 0x130;
    }
    uVar7 = 0;
  }
  KfLowerIrql();
  return uVar7;
}
