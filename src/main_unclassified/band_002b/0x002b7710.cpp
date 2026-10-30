/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 967C5AD4E25B997349731E729025CD96D03EC4A9159FCD684EBF029CBA71DD77
 * Entry: 0x002b7710, Ghidra index: 9850, label: FUN_002b7710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002b7710(undefined4 param_1,undefined4 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_EAX;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *unaff_EBX;
  undefined4 *puVar7;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_140 [10];
  undefined4 local_118;
  undefined4 local_104;
  undefined1 local_100 [12];
  undefined4 local_f4 [9];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [12];
  undefined4 local_b4 [9];
  undefined1 local_90 [12];
  undefined4 local_84;
  undefined1 local_80 [12];
  undefined4 local_74 [12];
  undefined4 local_44;
  undefined1 local_40 [12];
  undefined4 local_34 [12];
  undefined4 local_4;
  
  puVar4 = local_140 + 3;
  iVar6 = 3;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_104 = 0;
  if (in_EAX == 0) {
    puVar4 = local_140;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_140[0] = 0x3f800000;
    local_140[5] = 0x3f800000;
    local_118 = 0x3f800000;
  }
  else {
    iVar6 = FUN_001509d0();
    puVar4 = (undefined4 *)(iVar6 + 0x10);
    puVar7 = local_140;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  puVar4 = local_f4;
  iVar6 = 3;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_c4 = 0;
  FUN_002b4100();
  local_cc = param_2[1];
  local_d0 = *param_2;
  local_c8 = param_2[2];
  puVar4 = local_74;
  iVar6 = 3;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_44 = 0;
  FUN_002b6340(local_140,local_100,local_80);
  puVar4 = local_b4;
  iVar6 = 3;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = unaff_EBX[5];
  iVar5 = unaff_EBX[0x24];
  local_84 = 0;
  uVar2 = *(undefined4 *)(iVar6 + 0x108);
  uVar3 = *(undefined4 *)(iVar6 + 0x10c);
  uStack_14c = *(undefined4 *)(iVar6 + 0x10c);
  local_150 = uVar2;
  FUN_002b4370(&local_150,iVar5 + 0xdc,iVar5 + 0xec,
               (float)(((float10)*(double *)(iVar6 + 0x108) - (float10)*(double *)(iVar5 + 0x70)) *
                      (float10)*(float *)(iVar5 + 0x78)));
  FUN_002b4100();
  FUN_002b2b10(unaff_EBX[0x24],local_90,uVar2,uVar3);
  puVar4 = local_34;
  iVar6 = 3;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_4 = 0;
  FUN_002b6400(local_80,local_c0,local_40);
  (**(code **)(*unaff_EBX + 8))(local_40);
  fVar1 = (float)unaff_EBX[0x16];
  unaff_EBX[0x12] = 0;
  unaff_EBX[0x13] = 0;
  unaff_EBX[0x16] = (int)(fVar1 + 0.01);
  unaff_EBX[0x14] = (int)(fVar1 + 0.01);
  if (unaff_EBX[0xf] != 0) {
    *(undefined4 *)(unaff_EBX[0xf] + 0x68) = 0;
    unaff_EBX[0xf] = 0;
  }
  FUN_002b3280();
  FUN_002b3220(unaff_EBX);
  FUN_002b7490();
  FUN_002b7440(unaff_EBX + 0x10);
  return 1;
}
