/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6396DA49A9B9EFD89F885F9A34D53F4B59EF7AB779F30436B48D8A489AAA044
 * Entry: 0x00096300, Ghidra index: 1828, label: FUN_00096300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_002385a0(void);
extern undefined4 FUN_000a4a60(int param_1);
extern undefined4 FUN_000a4d00(void);
extern void FUN_0006a5f0(int param_1);
extern void FUN_0006ec90(void);
extern undefined4 FUN_000a4cb0(void);
extern undefined4 FUN_0006edd0(void);
extern void FUN_000a4d80(void);
extern undefined4 FUN_002386d0(void);
extern void FUN_00238630(void);
extern void FUN_00095d40(void);
extern void FUN_0006ed80(void);
extern void FUN_000a0c60(void);

extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e1f8;
extern uint32_t DAT_003e2304;
extern uint32_t DAT_004698e0;
undefined4 FUN_00096300(int param_1,int *param_2,undefined4 param_3)

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
  float local_b4 [16];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  
  local_18 = *(undefined4 *)param_2[3];
  if ((*(char *)(in_stack_00000024 + 0x84) < '\0') &&
     ((*(byte *)(in_stack_00000024 + 0x85) & 1) == 0)) {
    if (in_stack_00000020 == (int *)0x0) {
      return 1;
    }
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
          local_48 = pfVar5[-2] * *(float *)(param_1 + 0xc);
          local_3c = 0.0;
          local_2c = 0.0;
          local_44 = pfVar5[-1] * *(float *)(param_1 + 0x10);
          local_1c = 0;
          local_40 = *pfVar5 * *(float *)(param_1 + 0x14);
          local_38 = pfVar5[2] * *(float *)(param_1 + 0xc);
          local_34 = pfVar5[3] * *(float *)(param_1 + 0x10);
          local_30 = pfVar5[4] * *(float *)(param_1 + 0x14);
          local_28 = pfVar5[6] * *(float *)(param_1 + 0xc);
          local_24 = pfVar5[7] * *(float *)(param_1 + 0x10);
          local_20 = pfVar5[8] * *(float *)(param_1 + 0x14);
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
    return 1;
  }
  if (*(char *)(param_1 + 0x55) == '\0') {
    iVar4 = *(int *)(in_stack_00000024 + 0x17c);
  }
  else if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
    iVar4 = *(int *)(in_stack_00000024 + 0x178);
  }
  else {
    iVar4 = *(int *)(in_stack_00000024 + 0x174);
  }
  if (iVar4 != 0) {
    FUN_00095d40();
    cVar3 = FUN_000a4a60(2);
    if (cVar3 != '\0') {
      if (*(char *)(param_1 + 0x55) == '\0') {
        FUN_0006ec90();
        fVar1 = *(float *)(param_1 + 0x4c);
        local_4c = 0;
        local_3c = 0.0;
        local_2c = 0.0;
        FUN_0006ed80();
        local_b4[3] = fVar1 * 2.9 + 0.1;
        if (((byte)DAT_0037bd48 & 0x10) == 0) {
          pfVar5 = local_b4;
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
        local_48 = *pfVar5;
        local_44 = pfVar5[3];
        local_40 = pfVar5[6];
        local_3c = pfVar5[1];
        local_38 = pfVar5[4];
        local_34 = pfVar5[7];
        local_30 = pfVar5[2];
        local_2c = pfVar5[5];
        local_28 = pfVar5[8];
        local_1c = 0;
        local_20 = 0.0;
        local_24 = 0.0;
        FUN_0006ec90();
        D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
      }
      local_60 = 0;
      local_5c = 0;
      local_64 = 0;
      FUN_000a0c60();
      local_74 = local_10;
      local_70 = local_c;
      local_6c = local_8;
      local_68 = 0;
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
      local_8 = 0;
      local_14 = *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x50) * *pfVar5;
      local_10 = pfVar5[1] * *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x50);
      local_c = pfVar5[2] * *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x50);
      FUN_000a4d80();
      FUN_000a4d80();
      iVar4 = FUN_000a4cb0();
      D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar4 * 2]);
      if (in_stack_0000001c < 0x514) {
        uVar2 = *(undefined4 *)(param_2[4] + 0xc);
        FUN_002386d0();
        D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,uVar2);
        return 1;
      }
      uVar2 = *(undefined4 *)(param_2[4] + 0xc);
      FUN_002386d0();
      D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar2);
      return 1;
    }
  }
  return 0;
}
