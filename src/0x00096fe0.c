/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F09C091A86EC4FF62CB71E766473181CA8065F06BAE6CB11D4AEFC6173E62200
 * Entry: 0x00096fe0, Ghidra index: 1832, label: FUN_00096fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e1b8;
extern uint32_t DAT_0037e1d8;
extern uint32_t DAT_0037e238;
extern uint32_t DAT_003e2304;
extern uint32_t DAT_004698e0;
undefined4 FUN_00096fe0(float param_1,int *param_2,undefined4 param_3)

{
  float fVar1;
  char cVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float10 fVar10;
  float10 fVar11;
  uint in_stack_0000001c;
  int *in_stack_00000020;
  int in_stack_00000024;
  float local_c0 [27];
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40 [5];
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  iVar4 = (int)param_1;
  local_8 = 1.0;
  fVar1 = local_c;
  if (*(float *)((int)param_1 + 0x58) != 0.0) {
    pfVar3 = (float *)(**(code **)(*(int *)(*(int *)(in_stack_00000024 + 0x8c) + 0x48) + 0xc))();
    FUN_00039580();
    local_14 = pfVar3[2] - local_14;
    local_18 = pfVar3[1] - local_18;
    local_c = local_18 * local_18 +
              local_14 * local_14 + (*pfVar3 - local_1c) * (*pfVar3 - local_1c);
    fVar1 = local_14;
    if (*(float *)(param_2[0xb] + 8) * *(float *)(param_2[0xb] + 8) < local_c) {
      local_10 = SQRT(local_c);
      local_8 = local_10 - *(float *)(param_2[0xb] + 8);
      if ((*(byte *)(*(int *)(in_stack_00000024 + 0x8c) + 0x4c) & 1) == 0) {
        fVar10 = (float10)1.0;
      }
      else {
        fVar10 = (float10)FUN_0006a9f0();
        local_c = (float)fVar10;
        fVar10 = (float10)FUN_0006aa40();
        fVar10 = (float10)local_c / fVar10;
      }
      fVar10 = fVar10 * (float10)*(float *)(in_stack_00000024 + 0x994) *
               (float10)*(float *)((int)param_1 + 0x58);
      if (fVar10 <= (float10)local_8) {
        return 1;
      }
      fVar10 = (fVar10 - (float10)local_8) * (float10)0.1;
      local_8 = (float)fVar10;
      fVar1 = local_c;
      if ((fVar10 <= (float10)0.0) || (local_8 <= 1.0)) {
        if (local_8 <= 0.0) {
          local_8 = 0.0;
        }
      }
      else {
        local_8 = 1.0;
      }
    }
  }
  local_c = fVar1;
  local_10 = *(float *)param_2[3];
  if ((*(char *)(in_stack_00000024 + 0x84) < '\0') &&
     ((*(byte *)(in_stack_00000024 + 0x85) & 1) == 0)) {
    if ((param_2[9] == 0) && (in_stack_00000020 != (int *)0x0)) {
      FUN_002385a0();
      cVar2 = FUN_000a4a60(2);
      if ((cVar2 != '\0') && (cVar2 = FUN_000a4d00(), cVar2 != '\0')) {
        in_stack_00000024 = *in_stack_00000020;
        FUN_0006a5f0(1);
        FUN_0006a5f0(1);
        FUN_0006a5f0(1);
        FUN_0006ec90();
        D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
        iVar4 = FUN_000a4cb0();
        D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar4 * 2]);
        if (0 < in_stack_00000024) {
          pfVar3 = (float *)(in_stack_00000020 + in_stack_00000024 * 4 + 3);
          do {
            FUN_0006edd0(DAT_004698e0);
            local_50 = local_8 * pfVar3[-2] * *(float *)((int)param_1 + 0xc);
            local_44 = 0.0;
            local_40[3] = 0.0;
            local_24 = 0;
            local_4c = local_8 * pfVar3[-1] * *(float *)((int)param_1 + 0x10);
            local_48 = *pfVar3 * *(float *)((int)param_1 + 0x14) * local_8;
            local_40[0] = local_8 * pfVar3[2] * *(float *)((int)param_1 + 0xc);
            local_40[1] = local_8 * pfVar3[3] * *(float *)((int)param_1 + 0x10);
            local_40[2] = pfVar3[4] * *(float *)((int)param_1 + 0x14) * local_8;
            local_40[4] = local_8 * pfVar3[6] * *(float *)((int)param_1 + 0xc);
            local_2c = local_8 * pfVar3[7] * *(float *)((int)param_1 + 0x10);
            local_28 = pfVar3[8] * *(float *)((int)param_1 + 0x14) * local_8;
            FUN_000a4d80();
            if (in_stack_0000001c < 0x514) {
              uVar5 = *(undefined4 *)(param_2[4] + 0xc);
              FUN_002386d0();
              D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,uVar5);
            }
            else {
              uVar5 = *(undefined4 *)(param_2[4] + 0xc);
              FUN_002386d0();
              D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar5);
            }
            in_stack_00000024 = in_stack_00000024 + -3;
            pfVar3 = pfVar3 + 0xc;
          } while (0 < in_stack_00000024);
        }
      }
      FUN_00238630();
      return 1;
    }
    return 1;
  }
  if (*(char *)((int)param_1 + 0x55) == '\0') {
    iVar7 = *(int *)(in_stack_00000024 + 0x17c);
  }
  else if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
    iVar7 = *(int *)(in_stack_00000024 + 0x178);
  }
  else {
    iVar7 = *(int *)(in_stack_00000024 + 0x174);
  }
  if (iVar7 != 0) {
    FUN_00095d40();
    pfVar3 = (float *)(in_stack_00000024 + 0xc0);
    if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
      pfVar3 = (float *)(in_stack_00000024 + 0xdc);
    }
    cVar2 = FUN_000a4d00();
    if (cVar2 != '\0') {
      local_14 = 0.0;
      local_20 = *(float *)((int)param_1 + 0x2c) * *(float *)((int)param_1 + 0x50) * *pfVar3;
      local_1c = pfVar3[1] * *(float *)((int)param_1 + 0x30) * *(float *)((int)param_1 + 0x50);
      local_18 = pfVar3[2] * *(float *)((int)param_1 + 0x34) * *(float *)((int)param_1 + 0x50);
      FUN_000a4d80();
      FUN_000a4d80();
    }
    uVar5 = 2;
    if (param_2[9] == 0) {
      local_8 = (float)((*(char *)((int)param_1 + 0x57) != '\0') + 4);
    }
    else {
      local_8 = 5.32493e-44;
      uVar5 = 3;
    }
    if (*(char *)((int)param_1 + 0x55) != '\0') {
      local_8 = (float)((local_8 != 3.50325e-44) + 0x12);
    }
    cVar2 = FUN_000a4a60(uVar5);
    if (cVar2 != '\0') {
      if (*(char *)((int)param_1 + 0x55) == '\0') {
        FUN_0006ec90();
        local_c = *(float *)((int)param_1 + 0x4c) * 2.9 + 0.1;
        local_54 = 0;
        local_44 = 0.0;
        local_40[3] = 0.0;
        FUN_0006ed80();
        local_c0[0xb] = local_c;
        if (((byte)DAT_0037bd48 & 0x10) == 0) {
          pfVar3 = local_c0 + 8;
          pfVar9 = (float *)&DAT_0037e1d8;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *pfVar9 = *pfVar3;
            pfVar3 = pfVar3 + 1;
            pfVar9 = pfVar9 + 1;
          }
        }
        D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(0xc);
      }
      else {
        pfVar3 = (float *)*param_2;
        local_50 = *pfVar3;
        local_4c = pfVar3[3];
        local_48 = pfVar3[6];
        local_44 = pfVar3[1];
        local_40[0] = pfVar3[4];
        local_40[1] = pfVar3[7];
        local_40[2] = pfVar3[2];
        local_40[3] = pfVar3[5];
        local_40[4] = pfVar3[8];
        local_24 = 0;
        local_28 = 0.0;
        local_2c = 0.0;
        FUN_0006ec90();
        D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
      }
      puVar6 = (undefined4 *)
               (**(code **)(*(int *)(*(int *)(in_stack_00000024 + 0x8c) + 0x48) + 0xc))();
      if ((*(byte *)(*(int *)(in_stack_00000024 + 0x8c) + 0x4c) & 1) == 0) {
        param_1 = 1.0;
      }
      else {
        fVar10 = (float10)FUN_0006a9f0();
        fVar11 = (float10)FUN_0006aa40();
        param_1 = (float)((float10)(float)fVar10 / fVar11);
      }
      *(undefined4 *)(iVar4 + 0x28) = 0;
      fVar1 = *(float *)(in_stack_00000024 + 0x994) * param_1 * *(float *)(iVar4 + 0x58);
      local_14 = 0.0;
      if (10.0 < fVar1) {
        *(float *)(iVar4 + 0x28) = fVar1 * fVar1;
        local_14 = 1.0 / (fVar1 * fVar1 - (fVar1 - 10.0) * (fVar1 - 10.0));
      }
      local_20 = (float)*puVar6;
      local_1c = (float)puVar6[1];
      local_18 = (float)puVar6[2];
      D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
      if (local_8 == 5.60519e-45) {
        local_40[0] = *(float *)(iVar4 + 0xc);
        local_40[4] = *(float *)(iVar4 + 0x1c);
        local_24 = *(undefined4 *)(iVar4 + 0x28);
        local_40[1] = *(float *)(iVar4 + 0x10);
        local_40[2] = *(float *)(iVar4 + 0x14);
        local_40[3] = 0.0;
        local_2c = *(float *)(iVar4 + 0x20);
        local_28 = *(float *)(iVar4 + 0x24);
        if (((byte)DAT_0037bd48 & 0x10) == 0) {
          pfVar3 = local_40;
          pfVar9 = (float *)&DAT_0037e1b8;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pfVar9 = *pfVar3;
            pfVar3 = pfVar3 + 1;
            pfVar9 = pfVar9 + 1;
          }
        }
        D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
        D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
      }
      else {
        if (((byte)DAT_0037bd48 & 0x10) == 0) {
          puVar6 = (undefined4 *)(iVar4 + 0xc);
          puVar8 = &DAT_0037e1b8;
          for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
      }
      if (param_2[9] == 0) {
        FUN_0006ec90();
        D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
      }
      else {
        FUN_00095460(param_2[7],param_2[8],param_2[9]);
        if (in_stack_00000020 == (int *)0x0) {
          local_c0[0] = 0.0;
          local_c0[1] = 0.0;
          local_c0[2] = 0.0;
          local_c0[3] = 0.0;
          local_c0[4] = 0.0;
          local_c0[5] = 0.0;
          local_c0[6] = 0.0;
          local_c0[7] = 0.0;
          local_c0[8] = 0.0;
          local_c0[9] = 0.0;
          local_c0[10] = 0.0;
          local_c0[0xb] = 0.0;
          local_c0[0xc] = 0.0;
          local_c0[0xd] = 0.0;
          local_c0[0xe] = 0.0;
          local_c0[0xf] = 0.0;
          local_c0[0x10] = 0.0;
          local_c0[0x11] = 0.0;
          local_c0[0x12] = 0.0;
          local_c0[0x13] = 0.0;
          local_c0[0x14] = 0.0;
          local_c0[0x15] = 0.0;
          local_c0[0x16] = 0.0;
          local_c0[0x17] = 0.0;
          if (((byte)DAT_0037bd48 & 0x10) == 0) {
            pfVar3 = local_c0;
            pfVar9 = (float *)&DAT_0037e238;
            for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
              *pfVar9 = *pfVar3;
              pfVar3 = pfVar3 + 1;
              pfVar9 = pfVar9 + 1;
            }
          }
          D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(0x18);
        }
        else {
          FUN_0006edd0(DAT_004698e0);
          FUN_0006edd0(DAT_004698e0);
        }
      }
      iVar4 = FUN_000a4cb0();
      D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar4 * 2]);
      if (in_stack_0000001c < 0x514) {
        uVar5 = *(undefined4 *)(param_2[4] + 0xc);
        FUN_002386d0();
        D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,uVar5);
        return 1;
      }
      uVar5 = *(undefined4 *)(param_2[4] + 0xc);
      FUN_002386d0();
      D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar5);
      return 1;
    }
  }
  return 0;
}
