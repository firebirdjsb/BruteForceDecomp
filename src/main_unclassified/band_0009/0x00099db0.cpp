/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2416D79545B432B388198F27D4DEE1B60F948C1C979257A61B16693EF31570D7
 * Entry: 0x00099db0, Ghidra index: 1852, label: FUN_00099db0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e1f8;
extern uint32_t DAT_0037e2c8;
extern uint32_t DAT_003e2304;
extern uint32_t DAT_004698e0;
undefined4 FUN_00099db0(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float *pfVar8;
  uint in_stack_0000001c;
  int *in_stack_00000020;
  int in_stack_00000024;
  undefined4 uVar9;
  float local_124 [19];
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  float local_a4 [25];
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  float local_8;
  
  local_24 = *(int *)(in_stack_00000024 + 0x88);
  if (*(int *)(in_stack_00000024 + 0x17c) == 0) {
    return 0;
  }
  local_20 = **(int **)(param_2 + 0xc);
  if (local_20 == 0) {
    return 0;
  }
  if ((*(char *)(in_stack_00000024 + 0x84) < '\0') &&
     ((*(byte *)(in_stack_00000024 + 0x85) & 1) == 0)) {
    if (in_stack_00000020 == (int *)0x0) {
      return 1;
    }
    if (*(int *)(param_2 + 0x24) != 0) {
      return 1;
    }
    FUN_002385a0();
    FUN_0006ec90();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    cVar1 = FUN_000a4a60(2);
    if ((cVar1 != '\0') && (cVar1 = FUN_000a4d00(), cVar1 != '\0')) {
      iVar3 = *in_stack_00000020;
      FUN_0006a5f0(1);
      FUN_0006a5f0(1);
      FUN_0006a5f0(1);
      iVar2 = FUN_000a4cb0();
      D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar2 * 2]);
      if (0 < iVar3) {
        pfVar5 = (float *)(in_stack_00000020 + iVar3 * 4 + 3);
        do {
          FUN_0006edd0(DAT_004698e0);
          local_d4 = pfVar5[-2] * *(float *)(param_1 + 0xc);
          local_c8 = 0;
          local_b8 = 0;
          local_d0 = pfVar5[-1] * *(float *)(param_1 + 0x10);
          local_a8 = 0;
          local_cc = *pfVar5 * *(float *)(param_1 + 0x14);
          local_c4 = pfVar5[2] * *(float *)(param_1 + 0xc);
          local_c0 = pfVar5[3] * *(float *)(param_1 + 0x10);
          local_bc = pfVar5[4] * *(float *)(param_1 + 0x14);
          local_b4 = pfVar5[6] * *(float *)(param_1 + 0xc);
          local_b0 = pfVar5[7] * *(float *)(param_1 + 0x10);
          local_ac = pfVar5[8] * *(float *)(param_1 + 0x14);
          FUN_000a4d80();
          if (in_stack_0000001c < 0x514) {
            FUN_00090750(param_3,in_stack_0000001c,*(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc));
          }
          else {
            FUN_00090780(*(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc),0);
          }
          iVar3 = iVar3 + -3;
          pfVar5 = pfVar5 + 0xc;
        } while (0 < iVar3);
      }
    }
    goto LAB_0009a573;
  }
  local_8 = 2.8026e-45;
  FUN_00095d40();
  pfVar5 = (float *)(in_stack_00000024 + 0xc0);
  if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
    pfVar5 = (float *)(in_stack_00000024 + 0xdc);
  }
  local_1c = (undefined4 *)(param_1 + 0x50);
  puVar6 = (undefined4 *)(param_1 + 0xc);
  puVar7 = local_1c;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(in_stack_00000024 + 0x90);
  cVar1 = FUN_000a4d00();
  if (cVar1 != '\0') {
    local_c = 0;
    local_18 = *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x94) * *pfVar5;
    local_14 = pfVar5[1] * *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x94);
    local_10 = pfVar5[2] * *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x94);
    FUN_000a4d80();
    FUN_000a4d80();
  }
  fVar4 = local_8;
  if (*(int *)(param_2 + 0x24) != 0) {
    fVar4 = (float)3;
  }
  cVar1 = FUN_000a4a60(fVar4);
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_002385a0();
  FUN_0006ec90();
  local_8 = *(float *)(param_1 + 0x90) * 2.9 + 0.1;
  local_d8 = 0;
  local_c8 = 0;
  local_b8 = 0;
  FUN_0009a750();
  FUN_0006ed80();
  local_124[3] = local_8;
  if (((byte)DAT_0037bd48 & 0x10) == 0) {
    pfVar5 = local_124;
    pfVar8 = (float *)&DAT_0037e1f8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar8 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar8 = pfVar8 + 1;
    }
  }
  D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(0xc);
  local_28 = 0;
  local_8 = 0.0;
  local_30 = 0;
  local_2c = 0;
  local_34 = 0;
  FUN_000a0c60();
  local_a4[0x18] = local_14;
  local_3c = local_c;
  local_40 = local_10;
  local_38 = 0;
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  if (*(int *)(param_2 + 0x24) == 0) {
    FUN_0006ec90();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
  }
  else {
    FUN_00095460(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),
                 *(int *)(param_2 + 0x24));
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    if (in_stack_00000020 == (int *)0x0) {
      local_a4[0] = 0.0;
      local_a4[1] = 0.0;
      local_a4[2] = 0.0;
      local_a4[3] = 0.0;
      local_a4[4] = 0.0;
      local_a4[5] = 0.0;
      local_a4[6] = 0.0;
      local_a4[7] = 0.0;
      local_a4[8] = 0.0;
      local_a4[9] = 0.0;
      local_a4[10] = 0.0;
      local_a4[0xb] = 0.0;
      local_a4[0xc] = 0.0;
      local_a4[0xd] = 0.0;
      local_a4[0xe] = 0.0;
      local_a4[0xf] = 0.0;
      local_a4[0x10] = 0.0;
      local_a4[0x11] = 0.0;
      local_a4[0x12] = 0.0;
      local_a4[0x13] = 0.0;
      local_a4[0x14] = 0.0;
      local_a4[0x15] = 0.0;
      local_a4[0x16] = 0.0;
      local_a4[0x17] = 0.0;
      if (((byte)DAT_0037bd48 & 0x10) == 0) {
        pfVar5 = local_a4;
        pfVar8 = (float *)&DAT_0037e2c8;
        for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar8 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          pfVar8 = pfVar8 + 1;
        }
      }
      D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(0x18);
    }
    else {
      FUN_0006edd0(DAT_004698e0);
      FUN_0006edd0(DAT_004698e0);
    }
  }
  if ((*(float *)(param_1 + 0x8c) < 1.0) && ((*(byte *)(param_2 + 0x30) & 2) == 0)) {
    FUN_00099940();
  }
  if (*(int *)(in_stack_00000024 + 0x88) == 1) {
    FUN_0006a5f0(1);
    FUN_0006a5f0(0x1000000);
    if ((*(byte *)(param_2 + 0x30) & 2) == 0) {
      FUN_0006a5f0(0x800b);
      FUN_0006a5f0(0x302);
      uVar9 = 1;
    }
    else {
      FUN_0006a5f0(0x303);
      uVar9 = 0x302;
    }
LAB_0009a488:
    FUN_0006a5f0(uVar9);
  }
  else if (*(int *)(in_stack_00000024 + 0x88) == 2) {
    FUN_0006a5f0(0);
    FUN_0006a5f0(0x202);
    uVar9 = 0x10101;
    goto LAB_0009a488;
  }
  if ((local_24 != 1) && (*(float *)(param_1 + 0x8c) < 1.0)) {
    FUN_0006a5f0(1);
    FUN_0006a5f0(0x302);
    FUN_0006a5f0(0x303);
  }
  iVar3 = FUN_000a4cb0();
  D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar3 * 2]);
  if (in_stack_0000001c < 0x514) {
    FUN_00090750(param_3,in_stack_0000001c,*(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc));
  }
  else {
    FUN_00090780(*(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc),0);
  }
  if ((*(float *)(param_1 + 0x8c) < 1.0) && ((*(byte *)(param_2 + 0x30) & 2) == 0)) {
    FUN_00099990();
  }
LAB_0009a573:
  FUN_00238630();
  return 1;
}
