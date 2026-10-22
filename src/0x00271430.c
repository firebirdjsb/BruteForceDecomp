/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F2435504E205BB5949CBCA079A2FC3A37F9E00880EEB9CAC049AD107E0042FFC
 * Entry: 0x00271430, Ghidra index: 8812, label: FUN_00271430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00271430(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar1 = param_3[8];
  uVar5 = param_3[4];
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  uVar8 = param_3[7];
  *(undefined4 *)(param_2 + 0x14) = *param_3;
  *(undefined4 *)(param_2 + 0x18) = uVar2;
  *(undefined4 *)(param_2 + 0x1c) = uVar3;
  *(undefined4 *)(param_2 + 0x20) = uVar4;
  *(undefined4 *)(param_2 + 0x34) = uVar1;
  *(undefined4 *)(param_2 + 0x24) = uVar5;
  *(undefined4 *)(param_2 + 0x28) = uVar6;
  *(undefined4 *)(param_2 + 0x2c) = uVar7;
  *(undefined4 *)(param_2 + 0x30) = uVar8;
  if (*(int *)(param_1 + 8) != 0) {
    local_6c = *param_3;
    uStack_68 = param_3[1];
    uStack_64 = param_3[2];
    uStack_60 = param_3[3];
    local_4c = param_3[8];
    local_5c = param_3[4];
    uStack_58 = param_3[5];
    uStack_54 = param_3[6];
    uStack_50 = param_3[7];
    if (*(int *)(param_1 + 4) != 0) {
      puVar9 = (undefined4 *)FUN_002334b0();
      local_6c = *puVar9;
      uStack_68 = puVar9[1];
      uStack_64 = puVar9[2];
      uStack_60 = puVar9[3];
      local_4c = puVar9[8];
      local_5c = puVar9[4];
      uStack_58 = puVar9[5];
      uStack_54 = puVar9[6];
      uStack_50 = puVar9[7];
      local_48 = local_6c;
      uStack_44 = uStack_68;
      uStack_40 = uStack_64;
      uStack_3c = uStack_60;
      local_38 = local_5c;
      uStack_34 = uStack_58;
      uStack_30 = uStack_54;
      uStack_2c = uStack_50;
      local_28 = local_4c;
    }
    (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),&local_6c);
  }
  return;
}
