/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 560BD2F6E074C49F385DB62AD6F38FE3D69DC4251A74F01B88C578C1EA3FFA2B
 * Entry: 0x0009e040, Ghidra index: 1874, label: FUN_0009e040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <stdint.h>
#include <string.h>
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_002385a0(void);
extern void FUN_0006ec90(void);
extern undefined4 FUN_000a4a60(int param_1);
extern undefined4 FUN_000a4d00(void);
extern void FUN_0006a5f0(int param_1);
extern undefined4 FUN_000a4cb0(void);
extern undefined4 FUN_0006edd0(void);
extern void FUN_000a4d80(void);
extern undefined4 FUN_002386d0(void);
extern void FUN_00238630(void);
extern void FUN_00095d40(void);
extern void FUN_000a0c60(void);
extern void FUN_0009a750(void);
extern void FUN_0006ed80(void);
extern undefined4 FUN_0006a610(int *param_1);

extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e1f8;
extern uint32_t DAT_003e2304;
extern uint32_t DAT_004698e0;
extern uint32_t DAT_00469968;
undefined4 FUN_0009e040(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  int iVar7;
  float *pfVar8;
  uint in_stack_0000001c;
  int *in_stack_00000020;
  /* Original [EBP+0x24] is one guest DWORD, overwritten first by
   * FSTP m32fp and later by three MOV imm32 writes before PUSH &slot.
   * Keep it as 4-byte raw guest storage; do not cast F32 to a pointer.
   * TODO/ABI_UNVERIFIED: guest stack address and callee register contracts. */
  uint32_t guest_stack_word_24;
  float guest_shader_float_24;
  int in_stack_00000024;
  float local_60 [5];
  float local_4c;
  float local_48;
  undefined4 local_44;
  float *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  piVar6 = in_stack_00000020;
  local_8 = *(undefined4 *)param_2[3];
  if ((*(char *)(in_stack_00000024 + 0x84) < '\0') &&
     ((*(byte *)(in_stack_00000024 + 0x85) & 1) == 0)) {
    if (in_stack_00000020 != (int *)0x0) {
      FUN_002385a0();
      FUN_0006ec90();
      D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
      cVar3 = FUN_000a4a60(0);
      if ((cVar3 != '\0') && (cVar3 = FUN_000a4d00(), cVar3 != '\0')) {
        iVar7 = *piVar6;
        local_c = iVar7;
        FUN_0006a5f0(1);
        FUN_0006a5f0(1);
        FUN_0006a5f0(1);
        iVar4 = FUN_000a4cb0();
        D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar4 * 2]);
        in_stack_00000024 = 0;
        if (0 < iVar7) {
          piVar6 = in_stack_00000020 + iVar7 * 4 + 3;
          in_stack_00000020 = in_stack_00000020 + 1;
          do {
            FUN_0006edd0(DAT_004698e0);
            local_60[3] = 0.0;
            local_44 = 0;
            local_60[0] = (float)piVar6[2] * *(float *)(param_1 + 0x10);
            local_60[1] = (float)piVar6[3] * *(float *)(param_1 + 0x14);
            local_60[2] = (float)piVar6[4] * *(float *)(param_1 + 0x18);
            local_60[4] = (float)piVar6[6] * *(float *)(param_1 + 0x10);
            local_4c = (float)piVar6[7] * *(float *)(param_1 + 0x14);
            local_48 = (float)piVar6[8] * *(float *)(param_1 + 0x18);
            FUN_000a4d80();
            if (in_stack_00000024 == 1) {
              D3D8LTCG__D3DDevice_BeginPushBuffer_0();
              iVar7 = local_c;
LAB_0009e1ff:
              if (in_stack_0000001c < 0x514) {
                local_8 = *(undefined4 *)(param_2[4] + 0xc);
                FUN_002386d0();
                D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,local_8);
              }
              else {
                local_8 = *(undefined4 *)(param_2[4] + 0xc);
                FUN_002386d0();
                D3D8LTCG__D3DDevice_RunPushBuffer_4(local_8);
              }
              if (in_stack_00000024 == 1) {
                D3D8LTCG__D3DDevice_EndPushBuffer();
                in_stack_00000024 = 2;
              }
            }
            else {
              if (in_stack_00000024 != 2) goto LAB_0009e1ff;
              local_8 = DAT_00469968;
              FUN_002386d0();
              D3D8LTCG__D3DDevice_RunPushBuffer_4(local_8);
            }
            iVar7 = iVar7 + -3;
            in_stack_00000020 = in_stack_00000020 + 0xc;
            piVar6 = piVar6 + 0xc;
            local_c = iVar7;
          } while (0 < iVar7);
        }
      }
      FUN_00238630();
      return 1;
    }
  }
  else {
    FUN_00095d40();
    FUN_000a4a60(0);
    iVar7 = in_stack_00000024;
    local_40 = (float *)(param_1 + 0x10);
    pfVar5 = (float *)(param_1 + 0x10);
    pfVar8 = local_60;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar8 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar8 = pfVar8 + 1;
    }
    local_60[3] = *(float *)(in_stack_00000024 + 0x90);
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      pfVar5 = local_60;
      pfVar8 = (float *)&DAT_0037e1f8;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar8 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar8 = pfVar8 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
    if (*(int *)(iVar7 + 0x17c) == 0) {
      if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
        iVar4 = *(int *)(iVar7 + 0x178);
      }
      else {
        iVar4 = *(int *)(iVar7 + 0x174);
      }
      if (iVar4 == 0) {
        return 1;
      }
    }
    local_c = 0;
    in_stack_00000020 = (int *)0x0;
    FUN_000a0c60();
    FUN_0006ec90();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    puVar1 = (undefined4 *)*param_2;
    if (*(char *)(param_1 + 0x59) == '\0') {
      FUN_0003d6c0(&local_3c,puVar1,puVar1 + 9);
      local_10 = 0;
      local_14 = 0.0;
      local_18 = 0.0;
      FUN_0006ec90();
      /* Retail x87 FSTP m32fp [EBP+0x24] (a raw DWORD write). */
      guest_shader_float_24 = (float)(*(float *)(param_1 + 0x50) * 2.9 + 0.1);
      memcpy(&guest_stack_word_24,&guest_shader_float_24,sizeof(guest_stack_word_24));
      FUN_0009a750();
      FUN_0006ed80();
      D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    }
    else {
      local_3c = *puVar1;
      local_38 = puVar1[3];
      local_34 = -(float)puVar1[6];
      local_30 = puVar1[1];
      local_28 = -(float)puVar1[7];
      local_2c = (float)puVar1[4];
      local_24 = (float)puVar1[2];
      local_1c = -(float)puVar1[8];
      local_20 = puVar1[5];
      local_10 = 0;
      local_14 = 0.0;
      local_18 = 0.0;
      FUN_0006ec90();
      D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    }
    if (local_60[3] < 1.0) {
      guest_stack_word_24 = 0x1;
      FUN_0006a610(&guest_stack_word_24);
      guest_stack_word_24 = 0x302;
      FUN_0006a610(&guest_stack_word_24);
      guest_stack_word_24 = 0x303;
      FUN_0006a610(&guest_stack_word_24);
      iVar7 = in_stack_00000024;
    }
    cVar3 = FUN_000a4d00();
    if (cVar3 != '\0') {
      pfVar5 = (float *)(iVar7 + 0xc0);
      if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
        pfVar5 = (float *)(iVar7 + 0xdc);
      }
      local_2c = *local_40 * *pfVar5;
      local_20 = 0;
      local_10 = 0;
      local_28 = *(float *)(param_1 + 0x14) * pfVar5[1];
      local_24 = *(float *)(param_1 + 0x18) * pfVar5[2];
      local_1c = *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x54) * *pfVar5;
      local_18 = *(float *)(param_1 + 0x34) * pfVar5[1] * *(float *)(param_1 + 0x54);
      local_14 = *(float *)(param_1 + 0x38) * pfVar5[2] * *(float *)(param_1 + 0x54);
      FUN_000a4d80();
    }
    if (*(int *)(param_2[3] + 4) == -0x16f9b857) {
      iVar7 = FUN_000a4cb0();
      D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar7 * 2]);
      if (0x513 < in_stack_0000001c) {
        uVar2 = *(undefined4 *)(param_2[4] + 0xc);
        FUN_002386d0();
        D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar2);
        return 1;
      }
      uVar2 = *(undefined4 *)(param_2[4] + 0xc);
      FUN_002386d0();
      D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,uVar2);
    }
  }
  return 1;
}
