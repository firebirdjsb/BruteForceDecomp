/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E21B837B4B21017C33698359DB4A6696C17A982E86BB30B6475389AB5E027E29
 * Entry: 0x002c11b0, Ghidra index: 10025, label: FUN_002c11b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_002c11b0(int param_1)

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
  uint uVar10;
  int *unaff_EBX;
  int *piVar11;
  int *unaff_ESI;
  int local_8;
  int iStack_4;
  
  uVar9 = *(int *)(param_1 + 0xc) * 0x4b ^ *(uint *)(param_1 + 8);
  uVar9 = ((int)uVar9 >> 8) * 0x3ff + uVar9 & unaff_ESI[1];
  sVar1 = *(short *)(*unaff_ESI + uVar9 * 2);
  while( true ) {
    iVar8 = (int)sVar1;
    if (iVar8 == -1) {
      return (int *)0x0;
    }
    piVar11 = *(int **)(*(int *)(unaff_ESI[3] + 4) + iVar8 * 4);
    (**(code **)(*piVar11 + 8))(&local_8);
    if ((local_8 == *(int *)(param_1 + 8)) && (iStack_4 == *(int *)(param_1 + 0xc))) break;
    uVar9 = uVar9 + 1 & unaff_ESI[1];
    sVar1 = *(short *)(*unaff_ESI + uVar9 * 2);
  }
  if (unaff_ESI[4] < iVar8) {
    (**(code **)(**(int **)(*(int *)(unaff_ESI[3] + 4) + unaff_ESI[4] * 4) + 8))(&local_8);
    uVar10 = local_8 * 0x4b ^ (uint)piVar11;
    uVar10 = ((int)uVar10 >> 8) * 0x3ff + uVar10 & unaff_ESI[1];
    sVar2 = *(short *)(*unaff_ESI + uVar10 * 2);
    while ((int)sVar2 != unaff_ESI[4]) {
      uVar10 = uVar10 + 1 & unaff_ESI[1];
      sVar2 = *(short *)(*unaff_ESI + uVar10 * 2);
    }
    *(short *)(*unaff_ESI + uVar10 * 2) = sVar1;
    *(short *)(*unaff_ESI + uVar9 * 2) = (short)unaff_ESI[4];
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
    piVar11 = unaff_EBX;
    if (*(int *)(iVar6 + 0xc) == iVar8) {
      *(int *)(iVar6 + 0xc) = iVar5;
    }
    else {
      *(int *)(iVar6 + 0x10) = iVar5;
    }
  }
  unaff_ESI[4] = unaff_ESI[4] + 1;
  return piVar11;
}
