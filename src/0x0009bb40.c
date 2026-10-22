/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 66A0F1DCA42426EB3E1B1A3A71A1679B9CCF456DF9D877D388182BDB8CA5BB49
 * Entry: 0x0009bb40, Ghidra index: 1864, label: FUN_0009bb40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e1b8;
extern uint32_t DAT_0037e238;
extern uint32_t DAT_0037e2a8;
extern uint32_t DAT_003e2304;
extern uint32_t DAT_004698e0;
undefined4 FUN_0009bb40(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint in_stack_0000001c;
  undefined4 *in_stack_00000020;
  int in_stack_00000024;
  byte *local_d8;
  int local_d4;
  undefined4 *local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98 [28];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_d4 = *(int *)(in_stack_00000024 + 0x88);
  local_cc = **(undefined4 **)(param_2 + 0xc);
  if ((*(char *)(in_stack_00000024 + 0x84) < '\0') &&
     ((*(byte *)(in_stack_00000024 + 0x85) & 1) == 0)) {
    if (in_stack_00000020 == (undefined4 *)0x0) {
      return 1;
    }
    if (*(int *)(param_2 + 0x24) != 0) {
      return 1;
    }
    if (*(char *)(param_1 + 0xc0) != '\0') {
      return 1;
    }
    FUN_002385a0();
    FUN_0006ec90();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    cVar2 = FUN_000a4a60(0);
    if ((cVar2 != '\0') && (cVar2 = FUN_000a4d00(), cVar2 != '\0')) {
      puVar6 = (undefined4 *)*in_stack_00000020;
      local_d0 = puVar6;
      FUN_0006a5f0(1);
      FUN_0006a5f0(1);
      FUN_0006a5f0(1);
      iVar3 = FUN_000a4cb0();
      D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar3 * 2]);
      if (0 < (int)puVar6) {
        local_d8 = (byte *)(in_stack_00000020 + 1);
        pfVar4 = (float *)(in_stack_00000020 + (int)puVar6 * 4 + 3);
        do {
          FUN_0006edd0(DAT_004698e0);
          local_c8 = pfVar4[-2] * *(float *)(param_1 + 0xc);
          local_bc = 0;
          local_ac = 0;
          local_c4 = pfVar4[-1] * *(float *)(param_1 + 0x10);
          local_9c = 0;
          local_c0 = *(float *)(param_1 + 0x14) * *pfVar4;
          local_b8 = pfVar4[2] * *(float *)(param_1 + 0xc);
          local_b4 = pfVar4[3] * *(float *)(param_1 + 0x10);
          local_b0 = pfVar4[4] * *(float *)(param_1 + 0x14);
          local_a8 = pfVar4[6] * *(float *)(param_1 + 0xc);
          local_a4 = pfVar4[7] * *(float *)(param_1 + 0x10);
          local_a0 = pfVar4[8] * *(float *)(param_1 + 0x14);
          FUN_000a4d80();
          if (in_stack_0000001c < 0x514) {
            local_cc = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
            FUN_002386d0();
            D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,local_cc);
          }
          else {
            local_cc = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
            FUN_002386d0();
            D3D8LTCG__D3DDevice_RunPushBuffer_4(local_cc);
          }
          local_d0 = (undefined4 *)((int)local_d0 + -3);
          local_d8 = local_d8 + 0x30;
          pfVar4 = pfVar4 + 0xc;
        } while (0 < (int)local_d0);
      }
    }
    goto LAB_0009c493;
  }
  iVar3 = *(int *)(param_1 + 8);
  piVar1 = *(int **)(iVar3 + 0x10);
  if (piVar1 == (int *)0x0) {
    FUN_00062280();
  }
  else {
    (**(code **)(*piVar1 + 0x38))(piVar1,0);
  }
  FUN_00090800(iVar3 + 0xc,0);
  local_d8 = (byte *)0x3;
  FUN_0006a610(&local_d8);
  local_d8 = (byte *)0x3;
  FUN_0006a610(&local_d8);
  local_d8 = *(byte **)(in_stack_00000024 + 0x998);
  FUN_0006a610(&local_d8);
  local_c0 = *(float *)(*(int *)(in_stack_00000024 + 0x80) + 0xc08) * *(float *)(param_1 + 0x94);
  pfVar4 = (float *)(in_stack_00000024 + 0xc0);
  if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
    pfVar4 = (float *)(in_stack_00000024 + 0xdc);
  }
  local_bc = 0;
  local_ac = 0;
  local_b8 = (*(float *)(param_1 + 0x98) + 1.0) * 0.5;
  local_c8 = *(float *)(param_1 + 0x70) * *pfVar4 * local_c0;
  local_c4 = pfVar4[1] * *(float *)(param_1 + 0x74) * local_c0;
  local_c0 = pfVar4[2] * *(float *)(param_1 + 0x78) * local_c0;
  local_b4 = local_b8;
  local_b0 = local_b8;
  FUN_000a4d80();
  uVar5 = 0;
  if (*(int *)(param_2 + 0x24) != 0) {
    uVar5 = 4;
  }
  cVar2 = FUN_000a4a60(uVar5);
  if (cVar2 == '\0') {
    return 0;
  }
  FUN_002385a0();
  local_d0 = (undefined4 *)0x0;
  local_d8 = (byte *)0x0;
  local_98[0x19] = 0;
  local_98[0x1a] = 0;
  local_98[0x18] = 0;
  FUN_000a0c60();
  uStack_20 = local_98[0x1b];
  uStack_18 = uStack_24;
  uStack_1c = uStack_28;
  uStack_14 = 0;
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  local_d0 = (undefined4 *)(param_1 + 0x50);
  if (((byte)DAT_0037bd48 & 0x10) == 0) {
    puVar6 = local_d0;
    puVar7 = &DAT_0037e1b8;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  if (*(char *)(param_1 + 0xc0) != '\0') {
    iVar3 = *(int *)(*(int *)(*(int *)(in_stack_00000024 + 0x80) + 0xb74) + 0x5c);
    local_98[0] = *(undefined4 *)(iVar3 + 0x28);
    local_98[1] = *(undefined4 *)(iVar3 + 0x2c);
    local_98[2] = *(undefined4 *)(iVar3 + 0x30);
    local_98[3] = *(undefined4 *)(iVar3 + 0x34);
    local_98[4] = *(undefined4 *)(iVar3 + 0x38);
    local_98[5] = *(undefined4 *)(iVar3 + 0x3c);
    local_98[6] = *(undefined4 *)(iVar3 + 0x40);
    local_98[7] = *(undefined4 *)(iVar3 + 0x44);
    local_98[8] = *(undefined4 *)(iVar3 + 0x48);
    local_98[9] = *(undefined4 *)(iVar3 + 0x4c);
    local_98[10] = *(undefined4 *)(iVar3 + 0x50);
    local_98[0xb] = *(undefined4 *)(iVar3 + 0x54);
    local_98[0xc] = *(undefined4 *)(iVar3 + 0x58);
    local_98[0xd] = *(undefined4 *)(iVar3 + 0x5c);
    local_98[0xe] = *(undefined4 *)(iVar3 + 0x60);
    local_98[0xf] = *(undefined4 *)(iVar3 + 100);
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      puVar6 = (undefined4 *)(param_1 + 0xa0);
      puVar7 = &DAT_0037e2a8;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
  }
  if (*(int *)(param_2 + 0x24) == 0) {
    FUN_0006ec90();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
  }
  else {
    FUN_00095460(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),
                 *(int *)(param_2 + 0x24));
  }
  uVar5 = DAT_004698e0;
  if ((*(int *)(param_2 + 0x24) == 0) || (in_stack_00000020 == (undefined4 *)0x0)) {
    local_98[0] = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    local_98[4] = 0;
    local_98[5] = 0;
    local_98[6] = 0;
    local_98[7] = 0;
    local_98[8] = 0;
    local_98[9] = 0;
    local_98[10] = 0;
    local_98[0xb] = 0;
    local_98[0xc] = 0;
    local_98[0xd] = 0;
    local_98[0xe] = 0;
    local_98[0xf] = 0;
    local_98[0x10] = 0;
    local_98[0x11] = 0;
    local_98[0x12] = 0;
    local_98[0x13] = 0;
    local_98[0x14] = 0;
    local_98[0x15] = 0;
    local_98[0x16] = 0;
    local_98[0x17] = 0;
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      puVar6 = local_98;
      puVar7 = &DAT_0037e238;
      for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(0x18);
  }
  else {
    local_d8 = (byte *)*in_stack_00000020;
    if (2 < (int)local_d8) {
      local_d8 = (byte *)0x3;
    }
    FUN_0006edd0(DAT_004698e0);
    FUN_0006edd0(uVar5);
  }
  if ((*(float *)(param_1 + 0x5c) < 1.0) && ((*(byte *)(param_2 + 0x30) & 2) == 0)) {
    FUN_00099940();
  }
  if (*(int *)(in_stack_00000024 + 0x88) == 1) {
    local_d8 = (byte *)0x1;
    FUN_0006a610(&local_d8);
    local_d8 = (byte *)0x1000000;
    FUN_0006a610(&local_d8);
    if ((*(byte *)(param_2 + 0x30) & 2) == 0) {
      local_d8 = (byte *)0x800b;
      FUN_0006a610(&local_d8);
      local_d8 = (byte *)0x302;
      FUN_0006a610(&local_d8);
      local_d8 = (byte *)0x1;
    }
    else {
      local_d8 = (byte *)0x303;
      FUN_0006a610(&local_d8);
      local_d8 = (byte *)0x302;
    }
LAB_0009c35a:
    FUN_0006a610(&local_d8);
  }
  else if (*(int *)(in_stack_00000024 + 0x88) == 2) {
    local_d8 = (byte *)0x0;
    FUN_0006a610(&local_d8);
    local_d8 = (byte *)0x202;
    FUN_0006a610(&local_d8);
    local_d8 = XBE_FILE_HEADER_00010000.Signature + 0xfd;
    goto LAB_0009c35a;
  }
  if ((local_d4 != 1) && ((*(char *)(param_1 + 0xc2) != '\0' || (*(float *)(param_1 + 0x5c) < 1.0)))
     ) {
    local_d4 = 1;
    FUN_0006a610(&local_d4);
    local_d4 = 0x302;
    FUN_0006a610(&local_d4);
    local_d4 = 0x303;
    FUN_0006a610(&local_d4);
  }
  FUN_000a4d80();
  iVar3 = FUN_000a4cb0();
  D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar3 * 2]);
  if (in_stack_0000001c < 0x514) {
    local_d4 = *(int *)(*(int *)(param_2 + 0x10) + 0xc);
    FUN_002386d0();
    D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,local_d4);
  }
  else {
    uVar5 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
    FUN_002386d0();
    D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar5);
  }
  if ((*(float *)(param_1 + 0x5c) < 1.0) && ((*(byte *)(param_2 + 0x30) & 2) == 0)) {
    FUN_00099990();
  }
LAB_0009c493:
  FUN_00238630();
  return 1;
}
