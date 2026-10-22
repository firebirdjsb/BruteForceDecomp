/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 812C7F60AEA28347A2328A095BC7E27AAE3D40508BA01906092695C3363C1381
 * Entry: 0x002850d0, Ghidra index: 9073, label: FUN_002850d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002850d0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_EAX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  int in_EDX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *local_48;
  undefined4 *local_44;
  
  local_44 = (undefined4 *)(*(int *)(in_ECX + 0x18) + in_EAX * 0xc);
  puVar7 = (undefined4 *)(*(int *)(in_ECX + 4) + in_EAX * 0xc);
  local_48 = (undefined4 *)(*(int *)(in_ECX + 0x54) + in_EAX * 8);
  puVar1 = (undefined4 *)(in_EDX + (in_EAX + -3 + param_2) * 0x28);
  puVar9 = (undefined4 *)(in_EDX + in_EAX * 0x28);
  if (puVar9 < puVar1) {
    puVar8 = local_48 + 4;
    puVar6 = local_44 + 4;
    puVar5 = puVar7 + 4;
    puVar4 = puVar9 + 5;
    do {
      uVar2 = puVar5[-2];
      uVar3 = puVar5[-3];
      *puVar9 = *puVar7;
      puVar4[-4] = uVar3;
      puVar4[-3] = uVar2;
      uVar2 = puVar6[-2];
      uVar3 = puVar6[-3];
      puVar4[-2] = *local_44;
      puVar4[-1] = uVar3;
      *puVar4 = uVar2;
      puVar4[1] = *local_48;
      puVar4[2] = local_48[1];
      uVar2 = puVar5[1];
      uVar3 = *puVar5;
      puVar4[5] = puVar5[-1];
      puVar4[6] = uVar3;
      puVar4[7] = uVar2;
      uVar2 = puVar6[1];
      uVar3 = *puVar6;
      puVar4[8] = puVar6[-1];
      puVar4[9] = uVar3;
      puVar4[10] = uVar2;
      puVar4[0xb] = puVar8[-2];
      puVar4[0xc] = puVar8[-1];
      uVar2 = puVar5[4];
      uVar3 = puVar5[3];
      puVar4[0xf] = puVar5[2];
      puVar4[0x10] = uVar3;
      puVar4[0x11] = uVar2;
      uVar2 = puVar6[4];
      uVar3 = puVar6[3];
      puVar4[0x12] = puVar6[2];
      puVar4[0x13] = uVar3;
      puVar4[0x14] = uVar2;
      puVar4[0x15] = *puVar8;
      puVar4[0x16] = puVar8[1];
      uVar2 = puVar5[7];
      uVar3 = puVar5[6];
      puVar4[0x19] = puVar5[5];
      puVar4[0x1a] = uVar3;
      puVar4[0x1b] = uVar2;
      uVar2 = puVar6[7];
      uVar3 = puVar6[6];
      puVar4[0x1c] = puVar6[5];
      puVar4[0x1d] = uVar3;
      puVar4[0x1e] = uVar2;
      puVar4[0x1f] = puVar8[2];
      puVar4[0x20] = puVar8[3];
      local_44 = local_44 + 0xc;
      local_48 = local_48 + 8;
      puVar9 = puVar9 + 0x28;
      puVar4 = puVar4 + 0x28;
      puVar7 = puVar7 + 0xc;
      puVar5 = puVar5 + 0xc;
      puVar6 = puVar6 + 0xc;
      puVar8 = puVar8 + 8;
    } while (puVar9 < puVar1);
  }
  if (puVar9 < puVar1 + 0x1e) {
    puVar5 = puVar9 + 5;
    do {
      uVar2 = puVar7[2];
      uVar3 = puVar7[1];
      *puVar9 = *puVar7;
      puVar5[-4] = uVar3;
      puVar5[-3] = uVar2;
      uVar2 = local_44[2];
      uVar3 = local_44[1];
      puVar5[-2] = *local_44;
      puVar5[-1] = uVar3;
      *puVar5 = uVar2;
      puVar5[1] = *local_48;
      puVar5[2] = local_48[1];
      puVar9 = puVar9 + 10;
      puVar5 = puVar5 + 10;
      puVar7 = puVar7 + 3;
      local_44 = local_44 + 3;
      local_48 = local_48 + 2;
    } while (puVar9 < puVar1 + 0x1e);
  }
  return;
}
