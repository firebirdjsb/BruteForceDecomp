/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D0A539216C5E7B106239F0DB5A16C1580D1B43F0B7FC579F6BBC0AEA9C89C3B
 * Entry: 0x00097ef0, Ghidra index: 1836, label: FUN_00097ef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e1f8;
extern uint32_t DAT_003e2304;
extern uint32_t DAT_004698e0;
undefined4 FUN_00097ef0(int param_1,int *param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  uint in_stack_0000001c;
  int *in_stack_00000020;
  int in_stack_00000024;
  float local_b8 [16];
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((*(char *)(param_1 + 0x54) == '\0') && (*(int *)(in_stack_00000024 + 0x17c) == 0)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x54) != '\0') {
    if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
      iVar4 = *(int *)(in_stack_00000024 + 0x178);
    }
    else {
      iVar4 = *(int *)(in_stack_00000024 + 0x174);
    }
    if (iVar4 == 0) {
      return 1;
    }
  }
  local_8 = *(undefined4 *)param_2[3];
  if ((*(char *)(in_stack_00000024 + 0x84) < '\0') &&
     ((*(byte *)(in_stack_00000024 + 0x85) & 1) == 0)) {
    if (in_stack_00000020 != (int *)0x0) {
      FUN_002385a0();
      cVar3 = FUN_000a4a60(2);
      if ((cVar3 != '\0') && (cVar3 = FUN_000a4d00(), cVar3 != '\0')) {
        in_stack_00000024 = *in_stack_00000020;
        FUN_0006a5f0(1);
        FUN_0006a5f0(1);
        FUN_0006a5f0(1);
        FUN_0006ec90();
        D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
        iVar4 = FUN_000a4cb0();
        D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar4 * 2]);
        if (0 < in_stack_00000024) {
          pfVar5 = (float *)(in_stack_00000020 + in_stack_00000024 * 4 + 3);
          do {
            FUN_0006edd0(DAT_004698e0);
            local_58 = pfVar5[-2] * *(float *)(param_1 + 0xc);
            local_4c = 0.0;
            local_3c = 0.0;
            local_54 = pfVar5[-1] * *(float *)(param_1 + 0x10);
            local_2c = 0;
            local_50 = *pfVar5 * *(float *)(param_1 + 0x14);
            local_48 = pfVar5[2] * *(float *)(param_1 + 0xc);
            local_44 = pfVar5[3] * *(float *)(param_1 + 0x10);
            local_40 = pfVar5[4] * *(float *)(param_1 + 0x14);
            local_38 = pfVar5[6] * *(float *)(param_1 + 0xc);
            local_34 = pfVar5[7] * *(float *)(param_1 + 0x10);
            local_30 = pfVar5[8] * *(float *)(param_1 + 0x14);
            FUN_000a4d80();
            if (in_stack_0000001c < 0x514) {
              uVar2 = *(undefined4 *)(param_2[4] + 0xc);
              FUN_002386d0();
              D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,uVar2);
            }
            else {
              uVar2 = *(undefined4 *)(param_2[4] + 0xc);
              FUN_002386d0();
              D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar2);
            }
            in_stack_00000024 = in_stack_00000024 + -3;
            pfVar5 = pfVar5 + 0xc;
          } while (0 < in_stack_00000024);
        }
      }
      FUN_00238630();
      return 0;
    }
  }
  else {
    FUN_00095d40();
    cVar3 = FUN_000a4a60(2);
    if (cVar3 == '\0') {
      return 1;
    }
    if (*(char *)(param_1 + 0x54) == '\0') {
      FUN_0006ec90();
      fVar1 = *(float *)(param_1 + 0x4c);
      local_5c = 0;
      local_4c = 0.0;
      local_3c = 0.0;
      FUN_0006ed80();
      local_b8[3] = fVar1 * 2.9 + 0.1;
      if (((byte)DAT_0037bd48 & 0x10) == 0) {
        pfVar5 = local_b8;
        pfVar6 = (float *)&DAT_0037e1f8;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar6 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          pfVar6 = pfVar6 + 1;
        }
      }
      D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(0xc);
    }
    else {
      pfVar5 = (float *)*param_2;
      local_58 = *pfVar5;
      local_54 = pfVar5[3];
      local_50 = pfVar5[6];
      local_4c = pfVar5[1];
      local_48 = pfVar5[4];
      local_44 = pfVar5[7];
      local_40 = pfVar5[2];
      local_3c = pfVar5[5];
      local_38 = pfVar5[8];
      local_2c = 0;
      local_30 = 0.0;
      local_34 = 0.0;
      FUN_0006ec90();
      D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    }
    local_10 = 0.0;
    local_c = 0;
    local_14 = 0.0;
    FUN_000a0c60();
    local_74 = local_20;
    local_70 = local_1c;
    local_78 = local_24;
    local_6c = 0;
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    FUN_0006ec90();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
      pfVar5 = (float *)(in_stack_00000024 + 0xdc);
    }
    else {
      pfVar5 = (float *)(in_stack_00000024 + 0xc0);
    }
    cVar3 = FUN_000a4d00();
    if (cVar3 != '\0') {
      local_1c = 0;
      local_28 = *(float *)(param_1 + 0x2c) * *pfVar5 * *(float *)(param_1 + 0x50);
      local_24 = *(float *)(param_1 + 0x30) * pfVar5[1] * *(float *)(param_1 + 0x50);
      local_20 = *(float *)(param_1 + 0x34) * pfVar5[2] * *(float *)(param_1 + 0x50);
      FUN_000a4d80();
      local_18 = *pfVar5 * *(float *)(param_1 + 0xc);
      local_c = 0;
      local_14 = *(float *)(param_1 + 0x10) * pfVar5[1];
      local_10 = *(float *)(param_1 + 0x14) * pfVar5[2];
      FUN_000a4d80();
      FUN_000a4d80();
    }
    iVar4 = FUN_000a4cb0();
    D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar4 * 2]);
    if (0x513 < in_stack_0000001c) {
      uVar2 = *(undefined4 *)(param_2[4] + 0xc);
      FUN_002386d0();
      D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar2);
      return 0;
    }
    uVar2 = *(undefined4 *)(param_2[4] + 0xc);
    FUN_002386d0();
    D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,uVar2);
  }
  return 0;
}
