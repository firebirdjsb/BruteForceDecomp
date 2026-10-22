/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99023EEC90E3CDF197B87993A255DB7E70CD8F9CBD8873AF798CCCB06D5C25F2
 * Entry: 0x002c13c0, Ghidra index: 10027, label: FUN_002c13c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_002c13c0(uint param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *unaff_EBX;
  int *piVar10;
  int *unaff_ESI;
  uint uVar11;
  uint local_8;
  uint uStack_4;
  
  uVar11 = ((int)param_1 >> 8) * 0x3ff + param_1 & unaff_ESI[1];
  sVar1 = *(short *)(*unaff_ESI + uVar11 * 2);
  while( true ) {
    iVar8 = (int)sVar1;
    if (iVar8 == -1) {
      return (int *)0x0;
    }
    piVar10 = *(int **)(*(int *)(unaff_ESI[3] + 4) + iVar8 * 4);
    (**(code **)(*piVar10 + 4))(&local_8);
    if ((local_8 == param_1) || (uStack_4 == param_1)) break;
    uVar11 = uVar11 + 1 & unaff_ESI[1];
    sVar1 = *(short *)(*unaff_ESI + uVar11 * 2);
  }
  if (unaff_ESI[4] < iVar8) {
    (**(code **)(**(int **)(*(int *)(unaff_ESI[3] + 4) + unaff_ESI[4] * 4) + 4))(&local_8);
    param_1 = local_8 ^ (uint)piVar10 ^ param_1;
    uVar9 = ((int)param_1 >> 8) * 0x3ff + param_1 & unaff_ESI[1];
    sVar2 = *(short *)(*unaff_ESI + uVar9 * 2);
    while ((int)sVar2 != unaff_ESI[4]) {
      uVar9 = uVar9 + 1 & unaff_ESI[1];
      sVar2 = *(short *)(*unaff_ESI + uVar9 * 2);
    }
    *(short *)(*unaff_ESI + uVar9 * 2) = sVar1;
    *(short *)(*unaff_ESI + uVar11 * 2) = (short)unaff_ESI[4];
    iVar3 = unaff_ESI[3];
    iVar4 = *(int *)(iVar3 + 4);
    iVar5 = unaff_ESI[4];
    iVar6 = *(int *)(iVar4 + iVar8 * 4);
    iVar7 = *(int *)(iVar4 + iVar5 * 4);
    *(int *)(iVar4 + iVar5 * 4) = iVar6;
    *(int *)(*(int *)(iVar3 + 4) + iVar8 * 4) = iVar7;
    if (*(int *)(iVar7 + 0xc) == iVar5) {
      *(int *)(iVar7 + 0xc) = iVar8;
    }
    else {
      *(int *)(iVar7 + 0x10) = iVar8;
    }
    piVar10 = unaff_EBX;
    if (*(int *)(iVar6 + 0xc) == iVar8) {
      *(int *)(iVar6 + 0xc) = iVar5;
    }
    else {
      *(int *)(iVar6 + 0x10) = iVar5;
    }
  }
  unaff_ESI[4] = unaff_ESI[4] + 1;
  return piVar10;
}
