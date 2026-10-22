/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6568D90761A6390BC0F78AB18F0D737E92EABCB03B2180F6D04D2A8AC27A3B3
 * Entry: 0x000a6230, Ghidra index: 1971, label: FUN_000a6230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e238;
extern uint32_t DAT_0037e258;
extern uint32_t DAT_0037e278;
extern uint32_t DAT_003c9da0;
extern uint32_t DAT_003e2304;
extern uint32_t DAT_0040d78c;
extern uint32_t DAT_0040d790;
extern uint32_t DAT_0040d794;
extern uint32_t DAT_0040d798;
extern uint32_t DAT_0040d79c;
extern uint32_t DAT_0040d7a0;
extern uint32_t DAT_004a5ba8;
extern uint32_t switchD_000a624d_caseD_5[];
bool FUN_000a6230(int param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined4 *puVar10;
  uint in_stack_0000001c;
  byte *in_stack_00000024;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  iVar4 = -0x7fffbffb;
  switch(*(int *)(param_1 + 0xc)) {
  case 0:
  case 4:
    if (*(int *)(param_1 + 0xc) == 4) {
      if (DAT_004a5ba8 != 0) {
        return false;
      }
      if (((*in_stack_00000024 & 1) != 0) && (DAT_0040d7a0 != 0)) {
        FUN_00039580();
        FUN_000a5220(&local_c);
        local_8 = local_10 - local_1c;
        local_c = local_c + *(float *)(*(int *)(param_2 + 0x2c) + 8);
        if (local_c * local_c <
            (local_14 - local_20) * (local_14 - local_20) +
            local_8 * local_8 + (local_18 - local_24) * (local_18 - local_24)) {
          return false;
        }
      }
      uVar5 = FUN_000a4cb0();
      FUN_000a4a60(uVar5);
      FUN_0006ec90();
      D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    }
    else {
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x44);
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x4c);
      *(float *)(param_1 + 0x14c) = *(float *)(param_2 + 0x54) + *(float *)(param_2 + 0x50);
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x50);
      D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    }
    fVar1 = *(float *)(in_stack_00000024 + 0x2c);
    *(undefined4 *)(param_1 + 0x130) = DAT_0040d79c;
    uVar5 = DAT_0040d798;
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0x140) = uVar5;
    *(float *)(param_1 + 0x124) =
         (1.0 - *(float *)(param_1 + 0x10)) * fVar1 + *(float *)(param_1 + 0x10);
    *(float *)(param_1 + 0x128) =
         (1.0 - *(float *)(param_1 + 0x14)) * fVar1 + *(float *)(param_1 + 0x14);
    *(float *)(param_1 + 300) =
         (1.0 - *(float *)(param_1 + 0x18)) * fVar1 + *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x13c) = 1.0 / *(float *)(param_1 + 0xb8);
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      pfVar7 = (float *)(param_1 + 0x124);
      pfVar9 = (float *)&DAT_0037e278;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar9 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar9 = pfVar9 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(0xc);
    iVar4 = FUN_000a4cb0();
    D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar4 * 2]);
    if ((*(int *)(param_1 + 0xc) == 4) && (0x513 < in_stack_0000001c)) {
      iVar4 = FUN_00090780(*(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc),0);
      return iVar4 != 0;
    }
    iVar4 = FUN_00090750(param_3,*(undefined4 *)(*(int *)(param_2 + 0x10) + 0x10),
                         *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc));
    return iVar4 != 0;
  case 1:
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      puVar8 = (undefined4 *)(param_1 + 0xe4);
      puVar10 = &DAT_0037e238;
      for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(0x18);
    iVar4 = FUN_000a4cb0();
    D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar4 * 2]);
    iVar4 = *(int *)(param_2 + 0x10);
    goto LAB_000a66ab;
  case 2:
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x4c);
    *(float *)(param_1 + 0x14c) = *(float *)(param_2 + 0x54) + *(float *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x50);
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0xc4);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 200);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0xcc);
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0x3f000000;
    *(undefined4 *)(param_1 + 0xec) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xf0) = 0x40000000;
    *(undefined4 *)(param_1 + 0xf8) = 0x3d800000;
    uVar2 = DAT_0040d790;
    fVar1 = *(float *)(in_stack_00000024 + 0x2c);
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x134) = DAT_0040d794;
    uVar5 = DAT_0040d78c;
    *(undefined4 *)(param_1 + 0x138) = uVar2;
    *(undefined4 *)(param_1 + 0x140) = uVar5;
    *(float *)(param_1 + 0x124) =
         (1.0 - *(float *)(param_1 + 0x10)) * fVar1 + *(float *)(param_1 + 0x10);
    *(float *)(param_1 + 0x128) =
         (1.0 - *(float *)(param_1 + 0x14)) * fVar1 + *(float *)(param_1 + 0x14);
    *(float *)(param_1 + 300) =
         (1.0 - *(float *)(param_1 + 0x18)) * fVar1 + *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x13c) = 1.0 / *(float *)(param_1 + 0xb8);
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      puVar8 = (undefined4 *)(param_1 + 0xe4);
      puVar10 = &DAT_0037e238;
      for (iVar4 = 0x1c; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(0x1c);
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    iVar4 = FUN_000a4cb0();
    D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar4 * 2]);
    iVar4 = *(int *)(param_2 + 0x10);
LAB_000a66ab:
    iVar4 = FUN_00090750(param_3,*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0xc));
    return iVar4 != 0;
  case 3:
    iVar4 = 2;
    bVar6 = 2;
    if (*(int *)(param_2 + 0x24) != 0) {
      iVar4 = 3;
      bVar6 = 3;
    }
    if (*(int *)(*(int *)(param_2 + 0xc) + 4) == -0x18026bd6) {
      bVar6 = (iVar4 != 3) - 1U & 4;
    }
    cVar3 = FUN_000a4a60(bVar6);
    if (cVar3 != '\0') {
      D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
      D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
      if (*(int *)(param_2 + 0x24) == 0) {
        FUN_0006ec90();
        D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
      }
      else {
        FUN_00095460(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),
                     *(int *)(param_2 + 0x24));
      }
      FUN_000a4d00();
      FUN_000a4d80();
      iVar4 = FUN_000a4cb0();
      D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar4 * 2]);
      uVar5 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
      if (0x513 < in_stack_0000001c) {
        iVar4 = FUN_00090780(uVar5,0);
        return iVar4 != 0;
      }
      iVar4 = FUN_00090750(param_3,in_stack_0000001c,uVar5);
      return iVar4 != 0;
    }
    break;
  case 5:
    goto switchD_000a624d_caseD_5;
  case 6:
    iVar4 = 2;
    bVar6 = 2;
    if (*(int *)(param_2 + 0x24) != 0) {
      iVar4 = 3;
      bVar6 = 3;
    }
    if (*(int *)(*(int *)(param_2 + 0xc) + 4) == -0x18026bd6) {
      bVar6 = (iVar4 != 3) - 1U & 4;
    }
    cVar3 = FUN_000a4a60(bVar6);
    if (cVar3 != '\0') {
      if (((byte)DAT_0037bd48 & 0x10) == 0) {
        puVar8 = &DAT_003c9da0;
        puVar10 = &DAT_0037e258;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(0xc);
      D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
      if (*(int *)(param_2 + 0x24) == 0) {
        FUN_0006ec90();
        D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
      }
      else {
        FUN_00095460(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),
                     *(int *)(param_2 + 0x24));
      }
      FUN_000a4d00();
      iVar4 = FUN_000a4cb0();
      D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar4 * 2]);
      if (0x513 < in_stack_0000001c) {
        iVar4 = FUN_00090780(*(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc),0);
        return iVar4 != 0;
      }
      iVar4 = FUN_00090750(param_3,in_stack_0000001c,*(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc)
                          );
      return -1 < iVar4;
    }
  }
  iVar4 = 0;
switchD_000a624d_caseD_5:
  return iVar4 != 0;
}
