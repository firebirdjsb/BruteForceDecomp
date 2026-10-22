/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CBF2D32DDBF0476BD34DBF7F8C6F543F8A61C101E2E4124664255A735CB1780E
 * Entry: 0x002847e0, Ghidra index: 9071, label: FUN_002847e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002847e0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_EAX;
  undefined4 *puVar8;
  int in_ECX;
  int in_EDX;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *local_44;
  
  iVar3 = *(int *)(in_EDX + 4);
  iVar4 = *(int *)(in_EDX + 0x18);
  iVar1 = in_ECX * 4;
  piVar9 = (int *)(*(int *)(in_EDX + 0x10) + iVar1);
  piVar11 = (int *)(*(int *)(in_EDX + 0x24) + iVar1);
  iVar5 = *(int *)(in_EDX + 0x54);
  piVar12 = (int *)(*(int *)(in_EDX + 0x60) + iVar1);
  puVar10 = (undefined4 *)((in_ECX + -3 + (int)param_2) * 0x30 + in_EAX);
  param_2 = (undefined4 *)(in_ECX * 0x30 + in_EAX);
  if (param_2 < puVar10) {
    puVar8 = param_2 + 5;
    do {
      puVar2 = (undefined4 *)(iVar3 + *piVar9 * 0xc);
      uVar6 = puVar2[2];
      uVar7 = puVar2[1];
      *param_2 = *puVar2;
      puVar8[-4] = uVar7;
      puVar8[-3] = uVar6;
      puVar2 = (undefined4 *)(iVar4 + *piVar11 * 0xc);
      uVar6 = puVar2[2];
      uVar7 = puVar2[1];
      puVar8[-2] = *puVar2;
      puVar8[-1] = uVar7;
      *puVar8 = uVar6;
      iVar1 = *piVar12;
      puVar8[3] = *(undefined4 *)(iVar5 + iVar1 * 8);
      puVar8[4] = *(undefined4 *)(iVar5 + 4 + iVar1 * 8);
      puVar2 = (undefined4 *)(iVar3 + piVar9[1] * 0xc);
      uVar6 = puVar2[2];
      uVar7 = puVar2[1];
      puVar8[7] = *puVar2;
      puVar8[8] = uVar7;
      puVar8[9] = uVar6;
      puVar2 = (undefined4 *)(iVar4 + piVar11[1] * 0xc);
      uVar6 = puVar2[2];
      uVar7 = puVar2[1];
      puVar8[10] = *puVar2;
      puVar8[0xb] = uVar7;
      puVar8[0xc] = uVar6;
      iVar1 = piVar12[1];
      puVar8[0xf] = *(undefined4 *)(iVar5 + iVar1 * 8);
      puVar8[0x10] = *(undefined4 *)(iVar5 + 4 + iVar1 * 8);
      puVar2 = (undefined4 *)(iVar3 + piVar9[2] * 0xc);
      uVar6 = puVar2[2];
      uVar7 = puVar2[1];
      puVar8[0x13] = *puVar2;
      puVar8[0x14] = uVar7;
      puVar8[0x15] = uVar6;
      puVar2 = (undefined4 *)(iVar4 + piVar11[2] * 0xc);
      uVar6 = puVar2[2];
      uVar7 = puVar2[1];
      puVar8[0x16] = *puVar2;
      puVar8[0x17] = uVar7;
      puVar8[0x18] = uVar6;
      iVar1 = piVar12[2];
      puVar8[0x1b] = *(undefined4 *)(iVar5 + iVar1 * 8);
      puVar8[0x1c] = *(undefined4 *)(iVar5 + 4 + iVar1 * 8);
      puVar2 = (undefined4 *)(iVar3 + piVar9[3] * 0xc);
      uVar6 = puVar2[2];
      uVar7 = puVar2[1];
      puVar8[0x1f] = *puVar2;
      puVar8[0x20] = uVar7;
      puVar8[0x21] = uVar6;
      puVar2 = (undefined4 *)(iVar4 + piVar11[3] * 0xc);
      uVar6 = puVar2[2];
      uVar7 = puVar2[1];
      puVar8[0x22] = *puVar2;
      puVar8[0x23] = uVar7;
      puVar8[0x24] = uVar6;
      iVar1 = piVar12[3];
      puVar8[0x27] = *(undefined4 *)(iVar5 + iVar1 * 8);
      puVar8[0x28] = *(undefined4 *)(iVar5 + 4 + iVar1 * 8);
      param_2 = param_2 + 0x30;
      puVar8 = puVar8 + 0x30;
      piVar9 = piVar9 + 4;
      piVar11 = piVar11 + 4;
      piVar12 = piVar12 + 4;
    } while (param_2 < puVar10);
  }
  if (param_2 < puVar10 + 0x24) {
    local_44 = param_2 + 5;
    do {
      puVar8 = (undefined4 *)(iVar3 + *piVar9 * 0xc);
      uVar6 = puVar8[2];
      uVar7 = puVar8[1];
      *param_2 = *puVar8;
      local_44[-4] = uVar7;
      local_44[-3] = uVar6;
      puVar8 = (undefined4 *)(iVar4 + *piVar11 * 0xc);
      uVar6 = puVar8[2];
      uVar7 = puVar8[1];
      local_44[-2] = *puVar8;
      local_44[-1] = uVar7;
      *local_44 = uVar6;
      iVar1 = *piVar12;
      local_44[3] = *(undefined4 *)(iVar5 + iVar1 * 8);
      local_44[4] = *(undefined4 *)(iVar5 + 4 + iVar1 * 8);
      local_44 = local_44 + 0xc;
      param_2 = param_2 + 0xc;
      piVar9 = piVar9 + 1;
      piVar11 = piVar11 + 1;
      piVar12 = piVar12 + 1;
    } while (param_2 < puVar10 + 0x24);
  }
  return;
}
