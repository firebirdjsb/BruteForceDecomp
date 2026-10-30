/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E0B519B5379FB8F6F06966E1746E10FCA22ABBBDCC71E08D314C3E27995D571
 * Entry: 0x0009cc60, Ghidra index: 1869, label: FUN_0009cc60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00095460(int param_1,int param_2,uint param_3);
extern void FUN_00099940(void);
extern void FUN_00099990(void);
extern void FUN_00238630(void);

extern undefined4 FUN_002385a0(void);
extern void FUN_0006ec90(void);
extern undefined4 FUN_000a4a60(int param_1);
extern undefined4 FUN_000a4d00(void);
extern void FUN_0006a5f0(int param_1);
extern undefined4 FUN_000a4cb0(void);
extern undefined4 FUN_0006edd0(void);
extern void FUN_000a4d80(void);
extern undefined4 FUN_00090750(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern undefined4 FUN_00090780(undefined4 param_1);
extern void FUN_00095d40(void);
extern void FUN_000907a0(int param_1,int param_2);
extern void FUN_0009a750(void);
extern undefined4 FUN_002386d0(void);
extern void FUN_0036fb10(int *param_1);
extern void FUN_0036fe60(undefined4 param_1,int param_2);
extern void FUN_000a0c60(void);
extern void FUN_0009b390(void);
extern undefined4 FUN_000e96b0(int param_1);
extern void FUN_0009db20(void);

extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e1b8;
extern uint32_t DAT_0037e1d8;
extern uint32_t DAT_0037e238;
extern uint32_t DAT_0037e2a8;
extern uint32_t DAT_0037e308;
extern uint32_t DAT_003e2304;
extern uint32_t DAT_00416da0;
extern uint32_t DAT_004698e0;
extern uint32_t DAT_00469b00;
extern uint32_t DAT_00469b01;
extern uint32_t DAT_00469b04;
undefined4 FUN_0009cc60(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint in_stack_0000001c;
  int *in_stack_00000020;
  int in_stack_00000024;
  undefined4 uVar11;
  undefined4 local_120 [16];
  int local_e0 [28];
  float local_70 [4];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  
  local_20 = *(int *)param_2[3];
  if (local_20 == 0) {
    return 0;
  }
  local_e0[0x1b] = *(int *)(in_stack_00000024 + 0x88);
  if ((*(char *)(in_stack_00000024 + 0x84) < '\0') &&
     ((*(byte *)(in_stack_00000024 + 0x85) & 1) == 0)) {
    if (in_stack_00000020 == (int *)0x0) {
      return 1;
    }
    if (param_2[9] != 0) {
      return 1;
    }
    if (*(char *)(param_1 + 0x7c) != '\0') {
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
        pfVar4 = (float *)(in_stack_00000020 + iVar3 * 4 + 3);
        do {
          FUN_0006edd0(DAT_004698e0);
          local_60 = pfVar4[-2] * *(float *)(param_1 + 0xc);
          local_54 = 0.0;
          local_44 = 0.0;
          local_5c = pfVar4[-1] * *(float *)(param_1 + 0x10);
          local_34 = 0;
          local_58 = *pfVar4 * *(float *)(param_1 + 0x14);
          local_50 = pfVar4[2] * *(float *)(param_1 + 0xc);
          local_4c = pfVar4[3] * *(float *)(param_1 + 0x10);
          local_48 = pfVar4[4] * *(float *)(param_1 + 0x14);
          local_40 = pfVar4[6] * *(float *)(param_1 + 0xc);
          local_3c = pfVar4[7] * *(float *)(param_1 + 0x10);
          local_38 = pfVar4[8] * *(float *)(param_1 + 0x14);
          FUN_000a4d80();
          if (in_stack_0000001c < 0x514) {
            FUN_00090750(param_3,in_stack_0000001c,*(undefined4 *)(param_2[4] + 0xc));
          }
          else {
            FUN_00090780(*(undefined4 *)(param_2[4] + 0xc),0);
          }
          iVar3 = iVar3 + -3;
          pfVar4 = pfVar4 + 0xc;
        } while (0 < iVar3);
      }
    }
    goto LAB_0009d976;
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    iVar3 = *(int *)(in_stack_00000024 + 0x17c);
  }
  else if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
    iVar3 = *(int *)(in_stack_00000024 + 0x178);
  }
  else {
    iVar3 = *(int *)(in_stack_00000024 + 0x174);
  }
  if (iVar3 == 0) {
    return 0;
  }
  uVar7 = 2;
  if (DAT_00469b01 == '\0') {
    FUN_00095d40();
    local_14 = *(float *)(param_1 + 0x54);
    if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
      pfVar4 = (float *)(in_stack_00000024 + 0xdc);
    }
    else {
      pfVar4 = (float *)(in_stack_00000024 + 0xc0);
    }
    local_10 = 0;
    local_1c = *(float *)(param_1 + 0x2c) * *pfVar4 * local_14;
    local_18 = pfVar4[1] * *(float *)(param_1 + 0x30) * local_14;
    local_14 = pfVar4[2] * *(float *)(param_1 + 0x34) * local_14;
    FUN_000a4d80();
    if (param_2[9] == 0) {
      FUN_000907a0(0x10,*(undefined4 *)(in_stack_00000024 + 0x998));
    }
    else {
      uVar7 = 3;
    }
    if (DAT_00469b01 == '\0') {
      FUN_000a4a60(uVar7);
    }
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    FUN_0009a750();
    local_70[3] = *(float *)(param_1 + 0x4c) * 2.9 + 0.1;
    if (DAT_00469b00 == '\0') {
      if (DAT_00469b01 != '\0') goto LAB_0009d0d6;
    }
    else {
      FUN_002386d0();
      FUN_0036fb10(&DAT_00416da0 + DAT_00469b04 * 4);
      DAT_00469b04 = DAT_00469b04 + 1;
    }
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      pfVar4 = local_70;
      pfVar8 = (float *)&DAT_0037e1d8;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar8 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar8 = pfVar8 + 1;
      }
    }
LAB_0009d184:
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(0xc);
  }
  else {
    pfVar4 = (float *)*param_2;
    local_60 = *pfVar4;
    local_5c = pfVar4[3];
    local_58 = pfVar4[6];
    local_54 = pfVar4[1];
    local_50 = pfVar4[4];
    local_4c = pfVar4[7];
    local_48 = pfVar4[2];
    local_44 = pfVar4[5];
    local_40 = pfVar4[8];
    local_34 = 0;
    local_38 = 0.0;
    local_3c = 0.0;
    FUN_0006ec90();
    if (DAT_00469b00 != '\0') {
      FUN_002386d0();
      FUN_0036fb10(&DAT_00416da0 + DAT_00469b04 * 4);
      DAT_00469b04 = DAT_00469b04 + 1;
LAB_0009d09e:
      if (((byte)DAT_0037bd48 & 0x10) == 0) {
        puVar6 = local_120;
        puVar9 = &DAT_0037e1d8;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar9 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      goto LAB_0009d184;
    }
    if (DAT_00469b01 == '\0') goto LAB_0009d09e;
LAB_0009d0d6:
    iVar3 = DAT_00469b04;
    FUN_0036fe60(0xffffffba,3);
    DAT_00469b04 = iVar3 + 1;
  }
  local_c = 0;
  local_8 = 0.0;
  local_e0[0x1a] = 0;
  local_e0[0x19] = 0;
  local_e0[0x18] = 0;
  FUN_000a0c60();
  iVar3 = DAT_00469b04;
  local_18 = local_28;
  local_1c = local_2c;
  local_8 = *(float *)(param_1 + 0x18);
  local_14 = local_24;
  local_10 = 0;
  if (DAT_00469b00 == '\0') {
    if (DAT_00469b01 == '\0') {
      local_c = *(undefined4 *)(param_1 + 0x18);
      local_8 = *(float *)(in_stack_00000024 + 0x90) * *(float *)(param_1 + 0x18);
      *(float *)(param_1 + 0x18) = local_8;
      D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
      if (((byte)DAT_0037bd48 & 0x10) == 0) {
        puVar6 = (undefined4 *)(param_1 + 0xc);
        puVar9 = &DAT_0037e1b8;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar9 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
      D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
      *(undefined4 *)(param_1 + 0x18) = local_c;
    }
    else {
      FUN_0036fe60(0xffffffbf,1);
      DAT_00469b04 = iVar3 + 1;
    }
  }
  else {
    FUN_002386d0();
    FUN_0036fb10(&DAT_00416da0 + DAT_00469b04 * 4);
    DAT_00469b04 = DAT_00469b04 + 1;
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      puVar6 = (undefined4 *)(param_1 + 0xc);
      puVar9 = &DAT_0037e1b8;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  }
  if ((*(char *)(param_1 + 0x58) == '\0') && (*(char *)(param_1 + 0x7c) != '\0')) {
    FUN_0009b390();
    if (*(char *)(param_1 + 0x7d) != '\0') {
      piVar5 = (int *)FUN_000e96b0(*(undefined4 *)(in_stack_00000024 + 0x80));
      local_2c = (float)piVar5[0x27];
      local_30 = piVar5[0x26];
      local_24 = 0.0;
      local_28 = 1.0 / *(float *)(piVar5[3] + 0x74);
      D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
      (**(code **)(*piVar5 + 0x40))();
      FUN_0009db20();
      FUN_0006ec90();
      if (((byte)DAT_0037bd48 & 0x10) == 0) {
        puVar6 = local_120;
        puVar9 = &DAT_0037e308;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar9 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      puVar6 = (undefined4 *)(param_1 + 0x5c);
      puVar9 = &DAT_0037e2a8;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
  }
  if (param_2[9] == 0) {
    FUN_0006ec90();
    iVar3 = DAT_00469b04;
    if (DAT_00469b00 == '\0') {
      if (DAT_00469b01 != '\0') {
        FUN_0036fe60(0xffffffb4,4);
        DAT_00469b04 = iVar3 + 1;
        goto LAB_0009d488;
      }
    }
    else {
      FUN_002386d0();
      FUN_0036fb10(&DAT_00416da0 + DAT_00469b04 * 4);
      DAT_00469b04 = DAT_00469b04 + 1;
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
  }
  else {
    FUN_00095460(param_2[7],param_2[8],param_2[9]);
  }
LAB_0009d488:
  iVar3 = DAT_00469b04;
  if (param_2[9] == 0) {
LAB_0009d559:
    if (DAT_00469b01 != '\0') {
      return 1;
    }
  }
  else if (in_stack_00000020 == (int *)0x0) {
    if (DAT_00469b01 != '\0') {
      return 1;
    }
    local_e0[0] = 0;
    local_e0[1] = 0;
    local_e0[2] = 0;
    local_e0[3] = 0;
    local_e0[4] = 0;
    local_e0[5] = 0;
    local_e0[6] = 0;
    local_e0[7] = 0;
    local_e0[8] = 0;
    local_e0[9] = 0;
    local_e0[10] = 0;
    local_e0[0xb] = 0;
    local_e0[0xc] = 0;
    local_e0[0xd] = 0;
    local_e0[0xe] = 0;
    local_e0[0xf] = 0;
    local_e0[0x10] = 0;
    local_e0[0x11] = 0;
    local_e0[0x12] = 0;
    local_e0[0x13] = 0;
    local_e0[0x14] = 0;
    local_e0[0x15] = 0;
    local_e0[0x16] = 0;
    local_e0[0x17] = 0;
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      piVar5 = local_e0;
      piVar10 = &DAT_0037e238;
      for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar10 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar10 = piVar10 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(0x18);
  }
  else {
    iVar2 = *in_stack_00000020;
    if (2 < iVar2) {
      iVar2 = 3;
    }
    if (DAT_00469b00 == '\0') {
      if (DAT_00469b01 != '\0') {
        FUN_0036fe60(0xffffffc0,iVar2);
        DAT_00469b04 = iVar3 + 1;
        goto LAB_0009d674;
      }
      FUN_0006edd0(DAT_004698e0);
    }
    else {
      FUN_002386d0();
      FUN_0036fb10(&DAT_00416da0 + DAT_00469b04 * 4);
      DAT_00469b04 = DAT_00469b04 + 1;
      FUN_0006edd0(DAT_004698e0);
      if (DAT_00469b00 != '\0') {
        FUN_002386d0();
        FUN_0036fb10(&DAT_00416da0 + DAT_00469b04 * 4);
        DAT_00469b04 = DAT_00469b04 + 1;
        FUN_0006edd0(DAT_004698e0);
        goto LAB_0009d559;
      }
LAB_0009d674:
      iVar3 = DAT_00469b04;
      if (DAT_00469b01 != '\0') {
        FUN_0036fe60(0xffffffc3,iVar2);
        DAT_00469b04 = iVar3 + 1;
        goto LAB_0009d559;
      }
    }
    FUN_0006edd0(DAT_004698e0);
  }
  FUN_002385a0();
  uVar7 = *(undefined4 *)(param_1 + 0x18);
  *(float *)(param_1 + 0x18) = local_8;
  FUN_000a4d80();
  if ((local_8 < 1.0) && ((*(byte *)(param_2 + 0xc) & 2) == 0)) {
    FUN_00099940();
  }
  if (*(int *)(in_stack_00000024 + 0x88) == 1) {
    FUN_0006a5f0(1);
    FUN_0006a5f0(0x1000000);
    if ((*(byte *)(param_2 + 0xc) & 2) == 0) {
      FUN_0006a5f0(0x800b);
      FUN_0006a5f0(0x302);
      uVar11 = 1;
    }
    else {
      FUN_0006a5f0(0x303);
      uVar11 = 0x302;
    }
LAB_0009d891:
    FUN_0006a5f0(uVar11);
  }
  else if (*(int *)(in_stack_00000024 + 0x88) == 2) {
    FUN_0006a5f0(0);
    FUN_0006a5f0(0x202);
    uVar11 = 0x10101;
    goto LAB_0009d891;
  }
  if ((local_e0[0x1b] != 1) && (local_8 < 1.0)) {
    FUN_0006a5f0(1);
    FUN_0006a5f0(0x302);
    FUN_0006a5f0(0x303);
  }
  iVar3 = FUN_000a4cb0();
  D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar3 * 2]);
  if (in_stack_0000001c < 0x514) {
    FUN_00090750(param_3,in_stack_0000001c,*(undefined4 *)(param_2[4] + 0xc));
  }
  else {
    FUN_00090780(*(undefined4 *)(param_2[4] + 0xc),0);
  }
  if ((local_8 < 1.0) && ((*(byte *)(param_2 + 0xc) & 2) == 0)) {
    FUN_00099990();
  }
  *(undefined4 *)(param_1 + 0x18) = uVar7;
LAB_0009d976:
  FUN_00238630();
  return 1;
}
