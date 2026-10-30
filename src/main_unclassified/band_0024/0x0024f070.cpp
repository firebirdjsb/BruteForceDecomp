/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0BD514871C332E8FB30E95891A36978A0081F8B66F506CD3D1F9CF869F4827BC
 * Entry: 0x0024f070, Ghidra index: 8311, label: FUN_0024f070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0024f070(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int unaff_EDI;
  bool bVar7;
  
  puVar2 = param_2;
  puVar5 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  bVar7 = true;
  cVar1 = *(char *)((int)puVar5 + 0x45);
  puVar3 = *(undefined4 **)(param_1 + 4);
  while (cVar1 == '\0') {
    if ((uint)puVar5[9] < 0x10) {
      puVar3 = puVar5 + 4;
    }
    else {
      puVar3 = (undefined4 *)puVar5[4];
    }
    iVar4 = FUN_000e0b20(0,puVar3,puVar5[8]);
    bVar7 = iVar4 < 0;
    if (bVar7) {
      puVar6 = (undefined4 *)*puVar5;
    }
    else {
      puVar6 = (undefined4 *)puVar5[2];
    }
    puVar3 = puVar5;
    puVar5 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0x45);
  }
  param_2 = puVar3;
  if (bVar7) {
    if (puVar3 == (undefined4 *)**(int **)(param_1 + 4)) {
      puVar5 = (undefined4 *)FUN_0024f600(&param_1,1,unaff_EDI);
      *puVar2 = *puVar5;
      *(undefined1 *)(puVar2 + 1) = 1;
      return puVar2;
    }
    FUN_0024fe80();
  }
  puVar5 = param_2;
  if (*(uint *)(unaff_EDI + 0x18) < 0x10) {
    iVar4 = unaff_EDI + 4;
  }
  else {
    iVar4 = *(int *)(unaff_EDI + 4);
  }
  iVar4 = FUN_000e0b20(0,iVar4,*(undefined4 *)(unaff_EDI + 0x14));
  if (iVar4 < 0) {
    puVar5 = (undefined4 *)FUN_0024f600(&param_1,bVar7,unaff_EDI);
    *puVar2 = *puVar5;
    *(undefined1 *)(puVar2 + 1) = 1;
    return puVar2;
  }
  *puVar2 = puVar5;
  *(undefined1 *)(puVar2 + 1) = 0;
  return puVar2;
}
