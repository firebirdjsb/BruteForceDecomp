/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95A7B827C47E99FC2780B180C24F761962C85EEEDA3C6D1636CB1067983B0AA8
 * Entry: 0x00125a30, Ghidra index: 3701, label: FUN_00125a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00125a30(void)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int unaff_ESI;
  
  iVar2 = *(int *)(*(int *)(unaff_ESI + 8) + 0xbe4);
  puVar3 = *(undefined4 **)(iVar2 + 0x1348);
  piVar5 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar5 = (int *)*puVar3;
  }
  piVar4 = *(int **)(iVar2 + 0x1348);
  if (piVar5 != piVar4) {
    while (iVar2 = piVar5[2], *(int *)(iVar2 + 0xe0) != unaff_ESI) {
      piVar5 = (int *)*piVar5;
      if (piVar5 == piVar4) {
        return;
      }
    }
    if (iVar2 != 0) {
      bVar1 = *(byte *)(*(int *)(iVar2 + 0xf0) + 0x94);
      if ((bVar1 & 2) != 0) {
        *(byte *)(*(int *)(iVar2 + 0xf0) + 0x94) = bVar1 | 1;
      }
    }
  }
  return;
}
