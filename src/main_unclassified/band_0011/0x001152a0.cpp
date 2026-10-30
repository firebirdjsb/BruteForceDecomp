/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25A3A32C8A16865021B3880A996E08E66BDB28A56551BA305CCAF30202B12009
 * Entry: 0x001152a0, Ghidra index: 3578, label: FUN_001152a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001152a0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  undefined4 *puVar6;
  undefined1 auStack_18 [20];
  
  puVar6 = *(undefined4 **)(unaff_ESI + 0x4d8);
  if (puVar6 != *(undefined4 **)(unaff_ESI + 0x4dc)) {
    do {
      piVar3 = (int *)*puVar6;
      puVar6 = puVar6 + 1;
      (**(code **)(*piVar3 + 8))();
    } while (puVar6 != *(undefined4 **)(unaff_ESI + 0x4dc));
  }
  piVar3 = *(int **)(unaff_ESI + 0x50c);
  if (piVar3 != *(int **)(unaff_ESI + 0x510)) {
    do {
      iVar5 = *piVar3;
      piVar1 = *(int **)(iVar5 + 0x10);
      piVar3 = piVar3 + 1;
      if (piVar1 != (int *)0x0) {
        piVar2 = *(int **)(*(int *)(iVar5 + 8) + 0x9c);
        if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
          (**(code **)(*piVar1 + 0x40))();
          FUN_002339d0(auStack_18);
          FUN_002b39f0(0);
        }
        else {
          FUN_00159660();
        }
      }
    } while (piVar3 != *(int **)(unaff_ESI + 0x510));
  }
  puVar6 = *(undefined4 **)(unaff_ESI + 0x4e8);
  if (puVar6 != *(undefined4 **)(unaff_ESI + 0x4ec)) {
    do {
      piVar3 = (int *)*puVar6;
      puVar6 = puVar6 + 1;
      (**(code **)(*piVar3 + 8))();
    } while (puVar6 != *(undefined4 **)(unaff_ESI + 0x4ec));
  }
  iVar5 = *(int *)(unaff_ESI + 0x524);
  if (*(int *)(unaff_ESI + 0x524) != *(int *)(unaff_ESI + 0x528)) {
    do {
      iVar4 = iVar5 + 8;
      FUN_002339d0(auStack_18);
      if (*(int *)(iVar5 + 4) != 0) {
        FUN_002b39f0(0);
      }
      iVar5 = iVar4;
    } while (iVar4 != *(int *)(unaff_ESI + 0x528));
  }
  iVar5 = *(int *)(unaff_ESI + 0x534);
  if (iVar5 != *(int *)(unaff_ESI + 0x538)) {
    do {
      iVar5 = iVar5 + 8;
      FUN_002339d0(auStack_18);
      FUN_002b39f0(0);
    } while (iVar5 != *(int *)(unaff_ESI + 0x538));
  }
  return;
}
