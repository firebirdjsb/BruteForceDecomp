/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C00E9ABB0FE029EBE2704E87E0BBB30327FDDF365BA984BBD87C9F908BCB01EB
 * Entry: 0x00283b20, Ghidra index: 9070, label: FUN_00283b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00283b20(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int in_EAX;
  undefined4 *puVar9;
  int in_ECX;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  
  iVar4 = *(int *)(in_EAX + 4);
  iVar5 = *(int *)(in_EAX + 0x18);
  iVar2 = in_ECX * 4;
  iVar6 = *(int *)(in_EAX + 0x54);
  piVar10 = (int *)(*(int *)(in_EAX + 0x10) + iVar2);
  piVar11 = (int *)(*(int *)(in_EAX + 0x24) + iVar2);
  piVar12 = (int *)(*(int *)(in_EAX + 0x60) + iVar2);
  puVar1 = (undefined4 *)(param_1 + (in_ECX + -3 + (int)param_3) * 0x28);
  param_3 = (undefined4 *)(param_1 + in_ECX * 0x28);
  if (param_3 < puVar1) {
    puVar9 = param_3 + 5;
    do {
      puVar3 = (undefined4 *)(iVar4 + *piVar10 * 0xc);
      uVar7 = puVar3[2];
      uVar8 = puVar3[1];
      *param_3 = *puVar3;
      puVar9[-4] = uVar8;
      puVar9[-3] = uVar7;
      puVar3 = (undefined4 *)(iVar5 + *piVar11 * 0xc);
      uVar7 = puVar3[2];
      uVar8 = puVar3[1];
      puVar9[-2] = *puVar3;
      puVar9[-1] = uVar8;
      *puVar9 = uVar7;
      iVar2 = *piVar12;
      puVar9[1] = *(undefined4 *)(iVar6 + iVar2 * 8);
      puVar9[2] = *(undefined4 *)(iVar6 + 4 + iVar2 * 8);
      puVar3 = (undefined4 *)(iVar4 + piVar10[1] * 0xc);
      uVar7 = puVar3[2];
      uVar8 = puVar3[1];
      puVar9[5] = *puVar3;
      puVar9[6] = uVar8;
      puVar9[7] = uVar7;
      puVar3 = (undefined4 *)(iVar5 + piVar11[1] * 0xc);
      uVar7 = puVar3[2];
      uVar8 = puVar3[1];
      puVar9[8] = *puVar3;
      puVar9[9] = uVar8;
      puVar9[10] = uVar7;
      iVar2 = piVar12[1];
      puVar9[0xb] = *(undefined4 *)(iVar6 + iVar2 * 8);
      puVar9[0xc] = *(undefined4 *)(iVar6 + 4 + iVar2 * 8);
      puVar3 = (undefined4 *)(iVar4 + piVar10[2] * 0xc);
      uVar7 = puVar3[2];
      uVar8 = puVar3[1];
      puVar9[0xf] = *puVar3;
      puVar9[0x10] = uVar8;
      puVar9[0x11] = uVar7;
      puVar3 = (undefined4 *)(iVar5 + piVar11[2] * 0xc);
      uVar7 = puVar3[2];
      uVar8 = puVar3[1];
      puVar9[0x12] = *puVar3;
      puVar9[0x13] = uVar8;
      puVar9[0x14] = uVar7;
      iVar2 = piVar12[2];
      puVar9[0x15] = *(undefined4 *)(iVar6 + iVar2 * 8);
      puVar9[0x16] = *(undefined4 *)(iVar6 + 4 + iVar2 * 8);
      puVar3 = (undefined4 *)(iVar4 + piVar10[3] * 0xc);
      uVar7 = puVar3[2];
      uVar8 = puVar3[1];
      puVar9[0x19] = *puVar3;
      puVar9[0x1a] = uVar8;
      puVar9[0x1b] = uVar7;
      puVar3 = (undefined4 *)(iVar5 + piVar11[3] * 0xc);
      uVar7 = puVar3[2];
      uVar8 = puVar3[1];
      puVar9[0x1c] = *puVar3;
      puVar9[0x1d] = uVar8;
      puVar9[0x1e] = uVar7;
      iVar2 = piVar12[3];
      puVar9[0x1f] = *(undefined4 *)(iVar6 + iVar2 * 8);
      puVar9[0x20] = *(undefined4 *)(iVar6 + 4 + iVar2 * 8);
      param_3 = param_3 + 0x28;
      puVar9 = puVar9 + 0x28;
      piVar10 = piVar10 + 4;
      piVar11 = piVar11 + 4;
      piVar12 = piVar12 + 4;
    } while (param_3 < puVar1);
  }
  if (param_3 < puVar1 + 0x1e) {
    puVar9 = param_3 + 5;
    do {
      puVar3 = (undefined4 *)(iVar4 + *piVar10 * 0xc);
      uVar7 = puVar3[2];
      uVar8 = puVar3[1];
      *param_3 = *puVar3;
      puVar9[-4] = uVar8;
      puVar9[-3] = uVar7;
      puVar3 = (undefined4 *)(iVar5 + *piVar11 * 0xc);
      uVar7 = puVar3[2];
      uVar8 = puVar3[1];
      puVar9[-2] = *puVar3;
      puVar9[-1] = uVar8;
      *puVar9 = uVar7;
      iVar2 = *piVar12;
      puVar9[1] = *(undefined4 *)(iVar6 + iVar2 * 8);
      puVar9[2] = *(undefined4 *)(iVar6 + 4 + iVar2 * 8);
      param_3 = param_3 + 10;
      puVar9 = puVar9 + 10;
      piVar10 = piVar10 + 1;
      piVar11 = piVar11 + 1;
      piVar12 = piVar12 + 1;
    } while (param_3 < puVar1 + 0x1e);
  }
  return;
}
