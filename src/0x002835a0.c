/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6B43E682A2155AE9BF5661575E435FA91052D85C820CAE448D84D14ABB5255B
 * Entry: 0x002835a0, Ghidra index: 9068, label: FUN_002835a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002835a0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_EAX;
  undefined4 *puVar7;
  int in_ECX;
  int *piVar8;
  int in_EDX;
  int *piVar9;
  undefined4 *puVar10;
  
  iVar3 = *(int *)(in_EDX + 0x18);
  iVar4 = *(int *)(in_EDX + 4);
  piVar8 = (int *)(*(int *)(in_EDX + 0x10) + in_EAX * 4);
  piVar9 = (int *)(*(int *)(in_EDX + 0x24) + in_EAX * 4);
  puVar1 = (undefined4 *)(in_ECX + (in_EAX + -3 + param_2) * 0x28);
  puVar10 = (undefined4 *)(in_ECX + in_EAX * 0x28);
  if (puVar10 < puVar1) {
    puVar7 = puVar10 + 5;
    do {
      puVar2 = (undefined4 *)(iVar4 + *piVar8 * 0xc);
      uVar5 = puVar2[2];
      uVar6 = puVar2[1];
      *puVar10 = *puVar2;
      puVar7[-4] = uVar6;
      puVar7[-3] = uVar5;
      puVar2 = (undefined4 *)(iVar3 + *piVar9 * 0xc);
      uVar5 = puVar2[2];
      uVar6 = puVar2[1];
      puVar7[-2] = *puVar2;
      puVar7[-1] = uVar6;
      *puVar7 = uVar5;
      puVar2 = (undefined4 *)(iVar4 + piVar8[1] * 0xc);
      uVar5 = puVar2[2];
      uVar6 = puVar2[1];
      puVar7[5] = *puVar2;
      puVar7[6] = uVar6;
      puVar7[7] = uVar5;
      puVar2 = (undefined4 *)(iVar3 + piVar9[1] * 0xc);
      uVar5 = puVar2[2];
      uVar6 = puVar2[1];
      puVar7[8] = *puVar2;
      puVar7[9] = uVar6;
      puVar7[10] = uVar5;
      puVar2 = (undefined4 *)(iVar4 + piVar8[2] * 0xc);
      uVar5 = puVar2[2];
      uVar6 = puVar2[1];
      puVar7[0xf] = *puVar2;
      puVar7[0x10] = uVar6;
      puVar7[0x11] = uVar5;
      puVar2 = (undefined4 *)(iVar3 + piVar9[2] * 0xc);
      uVar5 = puVar2[2];
      uVar6 = puVar2[1];
      puVar7[0x12] = *puVar2;
      puVar7[0x13] = uVar6;
      puVar7[0x14] = uVar5;
      puVar2 = (undefined4 *)(iVar4 + piVar8[3] * 0xc);
      uVar5 = puVar2[2];
      uVar6 = puVar2[1];
      puVar7[0x19] = *puVar2;
      puVar7[0x1a] = uVar6;
      puVar7[0x1b] = uVar5;
      puVar2 = (undefined4 *)(iVar3 + piVar9[3] * 0xc);
      uVar5 = puVar2[2];
      uVar6 = puVar2[1];
      puVar7[0x1c] = *puVar2;
      puVar7[0x1d] = uVar6;
      puVar7[0x1e] = uVar5;
      puVar10 = puVar10 + 0x28;
      puVar7 = puVar7 + 0x28;
      piVar8 = piVar8 + 4;
      piVar9 = piVar9 + 4;
    } while (puVar10 < puVar1);
  }
  if (puVar10 < puVar1 + 0x1e) {
    puVar7 = puVar10 + 5;
    do {
      puVar2 = (undefined4 *)(iVar4 + *piVar8 * 0xc);
      uVar5 = puVar2[2];
      uVar6 = puVar2[1];
      *puVar10 = *puVar2;
      puVar7[-4] = uVar6;
      puVar7[-3] = uVar5;
      puVar2 = (undefined4 *)(iVar3 + *piVar9 * 0xc);
      uVar5 = puVar2[2];
      uVar6 = puVar2[1];
      puVar7[-2] = *puVar2;
      puVar7[-1] = uVar6;
      *puVar7 = uVar5;
      puVar10 = puVar10 + 10;
      puVar7 = puVar7 + 10;
      piVar8 = piVar8 + 1;
      piVar9 = piVar9 + 1;
    } while (puVar10 < puVar1 + 0x1e);
  }
  return;
}
