/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3FDCFB235212833A7683A4EDA1D1C0D4D02E3196D56461D03819DCC60B9D24C4
 * Entry: 0x000e4da0, Ghidra index: 2854, label: FUN_000e4da0
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
extern uint32_t DAT_004a5b90;
void FUN_000e4da0(int param_1,int param_2,char param_3)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint *extraout_ECX;
  uint *puVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float local_70 [4];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  float local_30;
  int local_2c;
  undefined4 local_28;
  uint *local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint *local_14;
  float local_10;
  float local_c;
  int local_8;
  
  piVar2 = (int *)(**(code **)(*(int *)(*(int *)(param_2 + 0x8c) + 0x48) + 0x18))();
  iVar5 = *piVar2;
  local_18 = piVar2[2];
  local_8 = piVar2[1];
  local_1c = piVar2[3];
  local_38 = local_1c - local_8;
  local_34 = local_18 - iVar5;
  local_20 = iVar5;
  local_14 = (uint *)(**(code **)(**(int **)(param_1 + 0xe4) + 0x18))(*(int **)(param_1 + 0xe4));
  local_24 = (uint *)(**(code **)(**(int **)(param_1 + 0xe4) + 0x14))(*(int **)(param_1 + 0xe4));
  local_c = (float)(int)local_24 * 0.0015625;
  local_10 = (float)(int)local_14 * 0.0020833334;
  if ((((param_3 == '\0') || (*(char *)(param_1 + 0x110) != '\0')) ||
      (iVar3 = *(int *)(*(int *)(param_2 + 0x8c) + 0xd8), iVar3 == 2)) || (iVar3 == 1)) {
    FUN_002385a0();
    local_24 = (uint *)0x1010101;
    FUN_0006a610(&local_24);
    local_24 = (uint *)D3D8LTCG__D3DDevice_GetBackBuffer2_0__LTCG_eax1();
    puVar4 = *(uint **)(D3D8__D3D_g_pDevice + 0x15b8);
    if (puVar4 != (uint *)0x0) {
      if ((((*puVar4 & 0xffff) == 0) && ((*puVar4 & 0x70000) == 0x50000)) && (puVar4[5] != 0)) {
        D3D8LTCG__D3DResource_AddRef(puVar4[5]);
        puVar4 = extraout_ECX;
      }
      *puVar4 = *puVar4 + 1;
    }
    local_14 = puVar4;
    FUN_00373f00(*(undefined4 *)(param_1 + 0xf0),0,0,&local_30,local_40,local_3c,&local_2c,&local_28
                );
    iVar3 = FUN_0036ebf0(local_2c,local_28);
    local_2c = iVar3;
    FUN_002386d0();
    D3D8LTCG__D3D_CommonSetRenderTarget(iVar3,local_14,&DAT_0037af64);
    if (((iVar5 != 0) || (local_18 != 0x280)) || ((local_8 != 0 || (local_1c != 0x1e0)))) {
      local_50 = (int)((float)local_20 * local_c) + DAT_004a5b90;
      local_4c = (int)((float)local_8 * local_10) + DAT_004a5b90;
      local_48 = (int)((float)local_18 * local_c) - DAT_004a5b90;
      local_30 = (float)local_1c * local_10;
      local_44 = (int)local_30 - DAT_004a5b90;
      D3D8LTCG__D3DDevice_SetScissors(1,0,&local_50);
    }
    *local_24 = *local_24 & 0xfffcffff | 0x40000;
    local_30 = 0.0;
    FUN_0006a610(&local_30);
    local_30 = 0.0;
    FUN_0006a610(&local_30);
    local_30 = 0.0;
    FUN_0006a610(&local_30);
    FUN_000a4a60(5);
    local_70[0] = (float)local_34;
    local_70[1] = (float)local_38;
    local_70[2] = (float)local_20;
    local_70[3] = (float)local_8;
    local_60 = (float)*(int *)(param_1 + 0xc);
    if (*(int *)(param_1 + 0xc) < 0) {
      local_60 = local_60 + 4.2949673e+09;
    }
    local_5c = (float)*(int *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x10) < 0) {
      local_5c = local_5c + 4.2949673e+09;
    }
    local_58 = (float)local_20 * local_c + 0.53125;
    local_54 = (float)local_8 * local_10 + 0.53125;
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      pfVar6 = local_70;
      pfVar7 = (float *)&DAT_0037e1b8;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar7 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar7 = pfVar7 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
    FUN_000a4d00();
    puVar4 = local_24;
    FUN_00062280();
    local_38 = 3;
    FUN_0006a610(&local_38);
    local_38 = 3;
    FUN_0006a610(&local_38);
    local_38 = 2;
    FUN_0006a610(&local_38);
    local_38 = 2;
    FUN_0006a610(&local_38);
    local_38 = *(int *)(param_2 + 0x998);
    FUN_0006a610(&local_38);
    if (DAT_004698ea == '\0') {
      FUN_002386d0();
      D3D8LTCG__D3DDevice_DrawIndexedVerticesUP(5,6,param_1 + 0xd4,param_1 + 0x14,0x18);
    }
    *puVar4 = *puVar4 & 0xfffdffff | 0x50000;
    FUN_002386d0();
    puVar1 = local_14;
    D3D8LTCG__D3D_CommonSetRenderTarget(puVar4,local_14,&DAT_0037af64);
    FUN_0006be20();
    if (puVar1 != (uint *)0x0) {
      D3D8LTCG__D3DResource_Release(puVar1);
    }
    D3D8LTCG__D3DResource_Release(puVar4);
    if (local_2c != 0) {
      D3D8LTCG__D3DResource_Release(local_2c);
    }
    FUN_00238630();
  }
  return;
}
