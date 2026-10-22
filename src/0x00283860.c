/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8873177147F4044547C37B62731D4955B4131AFAD38C1047F58E4D619BFB740D
 * Entry: 0x00283860, Ghidra index: 9069, label: FUN_00283860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00283860(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_EAX;
  undefined4 *puVar6;
  int in_ECX;
  int *piVar7;
  int in_EDX;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  iVar2 = *(int *)(in_EDX + 0x18);
  iVar3 = *(int *)(in_EDX + 4);
  piVar7 = (int *)(*(int *)(in_EDX + 0x10) + in_ECX * 4);
  piVar8 = (int *)(*(int *)(in_EDX + 0x24) + in_ECX * 4);
  puVar9 = (undefined4 *)((in_ECX + -3 + param_2) * 0x20 + in_EAX);
  puVar10 = (undefined4 *)(in_ECX * 0x20 + in_EAX);
  if (puVar10 < puVar9) {
    puVar6 = puVar10 + 5;
    do {
      puVar1 = (undefined4 *)(iVar3 + *piVar7 * 0xc);
      uVar4 = puVar1[2];
      uVar5 = puVar1[1];
      *puVar10 = *puVar1;
      puVar6[-4] = uVar5;
      puVar6[-3] = uVar4;
      puVar1 = (undefined4 *)(iVar2 + *piVar8 * 0xc);
      uVar4 = puVar1[2];
      uVar5 = puVar1[1];
      puVar6[-2] = *puVar1;
      puVar6[-1] = uVar5;
      *puVar6 = uVar4;
      puVar1 = (undefined4 *)(iVar3 + piVar7[1] * 0xc);
      uVar4 = puVar1[2];
      uVar5 = puVar1[1];
      puVar6[3] = *puVar1;
      puVar6[4] = uVar5;
      puVar6[5] = uVar4;
      puVar1 = (undefined4 *)(iVar2 + piVar8[1] * 0xc);
      uVar4 = puVar1[2];
      uVar5 = puVar1[1];
      puVar6[6] = *puVar1;
      puVar6[7] = uVar5;
      puVar6[8] = uVar4;
      puVar1 = (undefined4 *)(iVar3 + piVar7[2] * 0xc);
      uVar4 = puVar1[2];
      uVar5 = puVar1[1];
      puVar6[0xb] = *puVar1;
      puVar6[0xc] = uVar5;
      puVar6[0xd] = uVar4;
      puVar1 = (undefined4 *)(iVar2 + piVar8[2] * 0xc);
      uVar4 = puVar1[2];
      uVar5 = puVar1[1];
      puVar6[0xe] = *puVar1;
      puVar6[0xf] = uVar5;
      puVar6[0x10] = uVar4;
      puVar1 = (undefined4 *)(iVar3 + piVar7[3] * 0xc);
      uVar4 = puVar1[2];
      uVar5 = puVar1[1];
      puVar6[0x13] = *puVar1;
      puVar6[0x14] = uVar5;
      puVar6[0x15] = uVar4;
      puVar1 = (undefined4 *)(iVar2 + piVar8[3] * 0xc);
      uVar4 = puVar1[2];
      uVar5 = puVar1[1];
      puVar6[0x16] = *puVar1;
      puVar6[0x17] = uVar5;
      puVar6[0x18] = uVar4;
      puVar10 = puVar10 + 0x20;
      puVar6 = puVar6 + 0x20;
      piVar7 = piVar7 + 4;
      piVar8 = piVar8 + 4;
    } while (puVar10 < puVar9);
  }
  if (puVar10 < puVar9 + 0x18) {
    puVar6 = puVar10 + 5;
    do {
      puVar1 = (undefined4 *)(iVar3 + *piVar7 * 0xc);
      uVar4 = puVar1[2];
      uVar5 = puVar1[1];
      *puVar10 = *puVar1;
      puVar6[-4] = uVar5;
      puVar6[-3] = uVar4;
      puVar1 = (undefined4 *)(iVar2 + *piVar8 * 0xc);
      uVar4 = puVar1[2];
      uVar5 = puVar1[1];
      puVar6[-2] = *puVar1;
      puVar6[-1] = uVar5;
      *puVar6 = uVar4;
      puVar10 = puVar10 + 8;
      puVar6 = puVar6 + 8;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    } while (puVar10 < puVar9 + 0x18);
  }
  return;
}
