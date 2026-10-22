/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3846D38582933DFEB70649E6EEDC020D853798754F2F647FC6AEB65DA3FE75DC
 * Entry: 0x002be350, Ghidra index: 9971, label: FUN_002be350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002be350(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  char *unaff_ESI;
  int iVar6;
  uint uVar7;
  int *piVar8;
  
  uVar1 = *(undefined4 *)(param_1 + 0x108);
  uVar2 = *(undefined4 *)(param_1 + 0x10c);
  iVar6 = *(ushort *)(unaff_ESI + 0xe) - 1;
  bVar5 = 3;
  if (-1 < iVar6) {
    do {
      iVar3 = *(int *)(*(int *)(unaff_ESI + 0x10) + iVar6 * 4);
      bVar4 = FUN_002bb980(uVar1,uVar2);
      *(byte *)(iVar3 + 100) = bVar4;
      bVar5 = bVar5 & bVar4;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    if (bVar5 != 3) {
      return 0;
    }
  }
  uVar7 = (uint)*(ushort *)(unaff_ESI + 0xe);
  while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
    FUN_002bb0e0(*(undefined4 *)(*(int *)(unaff_ESI + 0x10) + uVar7 * 4));
    FUN_002bd080();
  }
  piVar8 = (int *)(*(int *)(param_1 + 8) + 0x18);
  if ('\a' < *unaff_ESI) {
    piVar8 = (int *)(*(int *)(param_1 + 8) + 0x1a8);
  }
  iVar6 = *(int *)(unaff_ESI + 4);
  iVar3 = *(int *)(unaff_ESI + 8);
  if (iVar6 == 0) {
    *piVar8 = iVar3;
  }
  else {
    *(int *)(iVar6 + 8) = iVar3;
  }
  if (iVar3 != 0) {
    *(int *)(iVar3 + 4) = iVar6;
  }
  *unaff_ESI = '\b';
  iVar6 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(iVar6 + 0x1a8);
  *(int *)(unaff_ESI + 8) = iVar3;
  if (iVar3 != 0) {
    *(char **)(iVar3 + 4) = unaff_ESI;
  }
  unaff_ESI[4] = '\0';
  unaff_ESI[5] = '\0';
  unaff_ESI[6] = '\0';
  unaff_ESI[7] = '\0';
  *(char **)(iVar6 + 0x1a8) = unaff_ESI;
  return 1;
}
