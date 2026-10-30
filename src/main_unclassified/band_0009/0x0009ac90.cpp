/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6037B60B0A91053C40D7247028B0892D8840A603BA28B145695470B8BA7291BA
 * Entry: 0x0009ac90, Ghidra index: 1857, label: FUN_0009ac90
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
extern undefined4 FUN_000a4a60(int param_1);
extern undefined4 FUN_000a4d00(void);
extern void FUN_0006ec90(void);
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
extern uint32_t DAT_0037e1b8;
extern uint32_t DAT_003e2304;
extern uint32_t DAT_004698e0;
undefined4 FUN_0009ac90(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  float *pfVar9;
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
  undefined4 local_40;
  float *local_3c;
  undefined4 local_38;
  undefined4 local_34;
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
  
  piVar8 = in_stack_00000020;
  local_8 = *(undefined4 *)param_2[3];
  if ((*(char *)(in_stack_00000024 + 0x84) < '\0') &&
     ((*(byte *)(in_stack_00000024 + 0x85) & 1) == 0)) {
    if (in_stack_00000020 != (int *)0x0) {
      FUN_002385a0();
      cVar3 = FUN_000a4a60(0);
      if ((cVar3 != '\0') && (cVar3 = FUN_000a4d00(), cVar3 != '\0')) {
        FUN_0006ec90();
        D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
        iVar6 = *piVar8;
        in_stack_00000024 = iVar6;
        FUN_0006a5f0(1);
        FUN_0006a5f0(1);
        FUN_0006a5f0(1);
        iVar4 = FUN_000a4cb0();
        D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar4 * 2]);
        if (0 < iVar6) {
          piVar8 = in_stack_00000020 + iVar6 * 4 + 3;
          do {
            FUN_0006edd0(DAT_004698e0);
            local_60[3] = 0.0;
            local_44 = 0;
            local_60[0] = (float)piVar8[2] * *(float *)(param_1 + 0x10);
            local_60[1] = (float)piVar8[3] * *(float *)(param_1 + 0x14);
            local_60[2] = (float)piVar8[4] * *(float *)(param_1 + 0x18);
            local_60[4] = (float)piVar8[6] * *(float *)(param_1 + 0x10);
            local_4c = (float)piVar8[7] * *(float *)(param_1 + 0x14);
            local_48 = (float)piVar8[8] * *(float *)(param_1 + 0x18);
            FUN_000a4d80();
            if (in_stack_0000001c < 0x514) {
              in_stack_00000020 = *(int **)(param_2[4] + 0xc);
              FUN_002386d0();
              D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,in_stack_00000020);
            }
            else {
              in_stack_00000020 = *(int **)(param_2[4] + 0xc);
              FUN_002386d0();
              D3D8LTCG__D3DDevice_RunPushBuffer_4(in_stack_00000020);
            }
            in_stack_00000024 = in_stack_00000024 + -3;
            piVar8 = piVar8 + 0xc;
          } while (0 < in_stack_00000024);
        }
      }
      FUN_00238630();
      return 1;
    }
  }
  else {
    if (*(char *)(param_1 + 0x58) == '\0') {
      iVar6 = *(int *)(in_stack_00000024 + 0x17c);
    }
    else if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
      iVar6 = *(int *)(in_stack_00000024 + 0x178);
    }
    else {
      iVar6 = *(int *)(in_stack_00000024 + 0x174);
    }
    if (iVar6 == 0) {
      return 0;
    }
    FUN_00095d40();
    FUN_000a4a60(0);
    pfVar7 = (float *)(param_1 + 0x10);
    pfVar5 = pfVar7;
    pfVar9 = local_60;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar9 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar9 = pfVar9 + 1;
    }
    local_3c = pfVar7;
    local_60[3] = *(float *)(in_stack_00000024 + 0x90);
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      pfVar5 = local_60;
      pfVar9 = (float *)&DAT_0037e1b8;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar9 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar9 = pfVar9 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
    local_40 = 0;
    in_stack_00000020 = (int *)0x0;
    FUN_000a0c60();
    FUN_0006ec90();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    puVar1 = (undefined4 *)*param_2;
    if (*(char *)(param_1 + 0x58) == '\0') {
      FUN_0003d6c0(&local_38,puVar1,puVar1 + 9);
      local_c = 0;
      local_10 = 0.0;
      local_14 = 0.0;
      FUN_0006ec90();
      /* Retail x87 FSTP m32fp [EBP+0x24] (a raw DWORD write). */
      guest_shader_float_24 = (float)(*(float *)(param_1 + 0x50) * 2.9 + 0.1);
      memcpy(&guest_stack_word_24,&guest_shader_float_24,sizeof(guest_stack_word_24));
      FUN_0009a750();
      FUN_0006ed80();
    }
    else {
      local_34 = puVar1[3];
      local_38 = *puVar1;
      local_30 = -(float)puVar1[6];
      local_28 = (float)puVar1[4];
      local_24 = -(float)puVar1[7];
      local_2c = puVar1[1];
      local_1c = puVar1[5];
      local_18 = -(float)puVar1[8];
      local_20 = (float)puVar1[2];
      local_c = 0;
      local_10 = 0.0;
      local_14 = 0.0;
      FUN_0006ec90();
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    if (local_60[3] < 1.0) {
      guest_stack_word_24 = 0x1;
      FUN_0006a610(&guest_stack_word_24);
      guest_stack_word_24 = 0x302;
      FUN_0006a610(&guest_stack_word_24);
      guest_stack_word_24 = 0x303;
      FUN_0006a610(&guest_stack_word_24);
      pfVar7 = local_3c;
    }
    cVar3 = FUN_000a4d00();
    if (cVar3 != '\0') {
      if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
        pfVar5 = (float *)(in_stack_00000024 + 0xdc);
      }
      else {
        pfVar5 = (float *)(in_stack_00000024 + 0xc0);
      }
      local_28 = *pfVar5 * *pfVar7;
      local_1c = 0;
      local_c = 0;
      local_24 = *(float *)(param_1 + 0x14) * pfVar5[1];
      local_20 = *(float *)(param_1 + 0x18) * pfVar5[2];
      local_18 = *(float *)(param_1 + 0x30) * *pfVar5 * *(float *)(param_1 + 0x54);
      local_14 = *(float *)(param_1 + 0x34) * pfVar5[1] * *(float *)(param_1 + 0x54);
      local_10 = *(float *)(param_1 + 0x38) * pfVar5[2] * *(float *)(param_1 + 0x54);
      FUN_000a4d80();
      FUN_000a4d80();
    }
    iVar6 = FUN_000a4cb0();
    D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar6 * 2]);
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
  return 1;
}
