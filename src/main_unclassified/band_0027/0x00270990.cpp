/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8BD7D2DEF7E13D2F611B5A3F9463F1C1615514AA1489EC8476C9B93469FFE2D7
 * Entry: 0x00270990, Ghidra index: 8791, label: FUN_00270990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00270990(int param_1,undefined4 *param_2)

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
  cVar1 = *(char *)((int)puVar5 + 0x2d);
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
    cVar1 = *(char *)((int)puVar6 + 0x2d);
  }
  param_2 = puVar3;
  if (bVar7) {
    if (puVar3 == (undefined4 *)**(int **)(param_1 + 4)) {
      puVar5 = (undefined4 *)FUN_001f2270(&param_1,1,unaff_EDI);
      *puVar2 = *puVar5;
      *(undefined1 *)(puVar2 + 1) = 1;
      return puVar2;
    }
    FUN_00270d00();
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
    puVar5 = (undefined4 *)FUN_001f2270(&param_1,bVar7,unaff_EDI);
    *puVar2 = *puVar5;
    *(undefined1 *)(puVar2 + 1) = 1;
    return puVar2;
  }
  *puVar2 = puVar5;
  *(undefined1 *)(puVar2 + 1) = 0;
  return puVar2;
}
