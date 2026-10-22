/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CF30C4734AF150DA4F8180B89B549288145C339A466BCCDCD1490CA91C31F2A
 * Entry: 0x000e5f60, Ghidra index: 2860, label: FUN_000e5f60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037af64;
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e1b8;
extern uint32_t DAT_004698ea;
extern uint32_t DAT_004a5b88;
/* WARNING: Removing unreachable block (ram,0x000e65f6) */
/* WARNING: Removing unreachable block (ram,0x000e660e) */

void FUN_000e5f60(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *extraout_ECX;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  float *pfVar6;
  float *pfVar7;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  float local_90 [4];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70 [5];
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  int local_34;
  uint *local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  uint local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  int local_8;
  
  FUN_002385a0();
  local_8 = 0x1010101;
  FUN_0006a610(&local_8);
  local_8 = 0;
  FUN_0006a610(&local_8);
  local_8 = 0;
  FUN_0006a610(&local_8);
  local_8 = 3;
  FUN_0006a610(&local_8);
  local_8 = 3;
  FUN_0006a610(&local_8);
  local_8 = 3;
  FUN_0006a610(&local_8);
  local_8 = 3;
  FUN_0006a610(&local_8);
  piVar1 = (int *)(**(code **)(*(int *)(param_2 + 0x48) + 0x18))();
  iVar4 = *piVar1;
  local_34 = piVar1[2];
  local_2c = piVar1[1];
  local_28 = piVar1[3];
  local_14 = (float)(local_28 - local_2c);
  local_1c = (float)(local_34 - iVar4);
  local_50 = iVar4;
  local_18 = (float)(**(code **)(**(int **)(param_1 + 0xe4) + 0x18))(*(int **)(param_1 + 0xe4));
  local_8 = (**(code **)(**(int **)(param_1 + 0xe4) + 0x14))(*(int **)(param_1 + 0xe4));
  iVar2 = D3D8__D3D_g_pDevice;
  puVar3 = *(uint **)(D3D8__D3D_g_pDevice + 0x15b4);
  local_4c = (float)local_8 * 0.0015625;
  local_18 = (float)(int)local_18 * 0.0020833334;
  local_30 = puVar3;
  if (puVar3 != (uint *)0x0) {
    if ((((*puVar3 & 0xffff) == 0) && ((*puVar3 & 0x70000) == 0x50000)) && (puVar3[5] != 0)) {
      D3D8LTCG__D3DResource_AddRef(puVar3[5]);
      puVar3 = extraout_ECX;
    }
    *puVar3 = *puVar3 + 1;
  }
  puVar3 = *(uint **)(iVar2 + 0x15b8);
  if (puVar3 != (uint *)0x0) {
    if ((((*puVar3 & 0xffff) == 0) && ((*puVar3 & 0x70000) == 0x50000)) && (puVar3[5] != 0)) {
      D3D8LTCG__D3DResource_AddRef(puVar3[5]);
    }
    *puVar3 = *puVar3 + 1;
  }
  local_24 = puVar3;
  FUN_00373f00(*(undefined4 *)(param_1 + 0xf0),0,0,&local_c,&local_38,&local_10,&local_20,&local_8);
  iVar2 = FUN_0036ebf0(local_20,local_8);
  local_8 = iVar2;
  FUN_002386d0();
  D3D8LTCG__D3D_CommonSetRenderTarget(iVar2,0,&DAT_0037af64);
  iVar2 = local_2c;
  if (iVar4 == 0) {
    if (local_2c == 0) {
      if ((local_34 == 0x280) && (local_28 == 0x1e0)) goto LAB_000e621e;
      FUN_002386d0();
      D3D8LTCG__D3DDevice_Clear(0,0,0xf0,0,0x3f800000,0);
    }
    if (((local_34 == 0x280) && (iVar2 == 0)) && (local_28 == 0x1e0)) goto LAB_000e621e;
  }
  local_a0 = (int)((float)local_50 * local_4c);
  local_9c = (int)((float)local_2c * local_18);
  local_98 = (int)((float)local_34 * local_4c);
  local_c = (float)local_28 * local_18;
  local_94 = (int)local_c;
  D3D8LTCG__D3DDevice_SetScissors(1,0,&local_a0);
LAB_000e621e:
  FUN_000a4a60(5);
  FUN_000a4d00();
  local_c = 1.4013e-45;
  FUN_0006a610(&local_c);
  local_c = 1.4013e-45;
  FUN_0006a610(&local_c);
  local_c = 0.0;
  FUN_0006a610(&local_c);
  puVar5 = local_24;
  puVar3 = local_30;
  local_c = (float)local_30[3];
  local_20 = local_24[3];
  *local_30 = *local_30 & 0xfffcffff | 0x40000;
  *(undefined1 *)((int)local_30 + 0xd) = 0x12;
  *local_24 = *local_24 & 0xfffcffff | 0x40000;
  *(undefined1 *)((int)local_24 + 0xd) = 0x41;
  FUN_00062280();
  FUN_00062280();
  local_38 = (float)(int)local_1c;
  local_90[0] = (float)(int)local_1c;
  local_10 = (float)(int)local_14;
  local_90[1] = (float)(int)local_14;
  local_90[2] = (float)local_50;
  local_90[3] = (float)local_2c;
  local_80 = (float)*(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) < 0) {
    local_80 = local_80 + 4.2949673e+09;
  }
  local_7c = (float)*(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < 0) {
    local_7c = local_7c + 4.2949673e+09;
  }
  local_78 = (float)local_50 * local_4c;
  local_74 = (float)local_2c * local_18;
  if (((byte)DAT_0037bd48 & 0x10) == 0) {
    pfVar6 = local_90;
    pfVar7 = (float *)&DAT_0037e1b8;
    for (iVar4 = 8; puVar3 = local_30, iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar7 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar7 = pfVar7 + 1;
    }
  }
  D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
  local_48 = 0x3e991687;
  local_44 = 0x3f1645a2;
  local_40 = 0x3de978d5;
  local_3c = 0;
  FUN_000a4d80();
  if (DAT_004698ea == '\0') {
    FUN_002386d0();
    D3D8LTCG__D3DDevice_DrawIndexedVerticesUP(5,6,param_1 + 0xd4,param_1 + 0x14,0x18);
    puVar5 = local_24;
    puVar3 = local_30;
  }
  *puVar3 = *puVar3 & 0xfffdffff | 0x50000;
  puVar3[3] = (uint)local_c;
  *puVar5 = *puVar5 & 0xfffdffff | 0x50000;
  puVar5[3] = local_20;
  if (local_8 != 0) {
    D3D8LTCG__D3DResource_Release(local_8);
  }
  FUN_00373f00(*(undefined4 *)(param_1 + 0xf4),0,0,&local_c,&local_8,&local_20,&local_1c,&local_14);
  iVar4 = FUN_0036ebf0(local_1c,local_14);
  local_8 = iVar4;
  FUN_002386d0();
  D3D8LTCG__D3D_CommonSetRenderTarget(iVar4,0,&DAT_0037af64);
  FUN_002386d0();
  D3D8LTCG__D3DDevice_Clear(0,0,0xf0,0,0x3f800000,0);
  local_14 = (float)(**(code **)(**(int **)(param_1 + 0xe8) + 0x14))(*(int **)(param_1 + 0xe8));
  local_1c = (float)(int)local_14 * 0.0015625;
  iVar4 = (**(code **)(**(int **)(param_1 + 0xe8) + 0x18))(*(int **)(param_1 + 0xe8));
  local_14 = (float)iVar4 * 0.0020833334;
  if (((local_50 != 0) || (local_34 != 0x280)) || ((local_2c != 0 || (local_28 != 0x1e0)))) {
    local_a0 = 0;
    local_38 = local_38 * local_1c;
    local_9c = 0;
    local_98 = (int)local_38;
    local_10 = local_10 * local_14;
    local_94 = (int)local_10;
    D3D8LTCG__D3DDevice_SetScissors(1,0,&local_a0);
  }
  local_10 = 1.4013e-45;
  FUN_0006a610(&local_10);
  local_10 = 1.4013e-45;
  FUN_0006a610(&local_10);
  local_10 = 1.4013e-45;
  FUN_0006a610(&local_10);
  local_10 = 5.60519e-45;
  FUN_0006a610(&local_10);
  FUN_000a4a60(5);
  FUN_000a4d00();
  FUN_00062280();
  local_70[0] = (float)*(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) < 0) {
    local_70[0] = local_70[0] + 4.2949673e+09;
  }
  local_70[1] = (float)*(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < 0) {
    local_70[1] = local_70[1] + 4.2949673e+09;
  }
  local_70[2] = 0.0;
  local_70[3] = 0.0;
  local_70[4] = (float)(*(uint *)(param_1 + 0xc) >> 1);
  local_10 = (float)(*(uint *)(param_1 + 0x10) >> 1);
  local_5c = (float)(int)local_10;
  local_58 = DAT_004a5b88;
  local_54 = DAT_004a5b88;
  if (((byte)DAT_0037bd48 & 0x10) == 0) {
    pfVar6 = local_70;
    pfVar7 = (float *)&DAT_0037e1b8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar7 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar7 = pfVar7 + 1;
    }
  }
  D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
  if (DAT_004698ea == '\0') {
    FUN_002386d0();
    D3D8LTCG__D3DDevice_DrawIndexedVerticesUP(5,0x90,param_1 + 0xa24,param_1 + 0x124,0x18);
  }
  FUN_002386d0();
  puVar5 = local_24;
  puVar3 = local_30;
  D3D8LTCG__D3D_CommonSetRenderTarget(local_30,local_24,&DAT_0037af64);
  FUN_0006be20();
  if (local_8 != 0) {
    D3D8LTCG__D3DResource_Release(local_8);
  }
  D3D8LTCG__D3DResource_Release(puVar5);
  D3D8LTCG__D3DResource_Release(puVar3);
  FUN_00238630();
  return;
}
