/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E066B3521A7780C7625C6C7E31D6A75C8773B8FC5E995090AA3FA021DA081283
 * Entry: 0x00146d50, Ghidra index: 4232, label: FUN_00146d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00146d50(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  iVar1 = *(int *)(param_1 + 8);
  puVar2 = *(undefined4 **)(iVar1 + 0x74);
  puVar7 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)*puVar2;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x68);
  puVar9 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar9 = (undefined4 *)*puVar3;
  }
  puVar4 = *(undefined4 **)(iVar1 + 0x74);
  puVar5 = *(undefined4 **)(iVar1 + 0x68);
  while ((((puVar9 != puVar5 || (puVar3 != puVar5)) || (puVar7 != puVar4)) || (puVar2 != puVar4))) {
    if (puVar9 == puVar3) {
      piVar8 = (int *)puVar7[3];
    }
    else {
      piVar8 = (int *)puVar9[3];
    }
    if (((piVar8 != (int *)0x0) && ((*(byte *)(piVar8 + 0x1c) & 1) == 0)) &&
       ((param_2 == 0 || (piVar8[0x167] != param_2)))) {
      (**(code **)(*piVar8 + 0x40))();
      cVar6 = FUN_00146cb0();
      if (cVar6 != '\0') {
        return 1;
      }
    }
    if (puVar9 == puVar3) {
      puVar7 = (undefined4 *)*puVar7;
    }
    else {
      puVar9 = (undefined4 *)*puVar9;
    }
  }
  return 0;
}
