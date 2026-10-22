/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C821CC407EBC7BF7375C2CB2BBF74802C31F16B11DA438BA664044A6051B771F
 * Entry: 0x00371320, Ghidra index: 13380, label: D3D_CommonSetRenderTarget
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b25c;
extern uint32_t DAT_0037b790;
extern uint32_t DAT_0037dd90;
extern uint32_t DAT_0037dfd4;
extern uint32_t DAT_0037e00c;
extern uint32_t DAT_0037ec88;
extern uint32_t PTR_D3DDevice_SetRenderState_LineWidth_0037b2cc;
void D3D8LTCG__D3D_CommonSetRenderTarget(uint *param_1,uint *param_2,undefined4 param_3)

{
  int *piVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  float local_1c;
  float local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar3 = D3D8__D3D_g_pDevice;
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)D3D8__D3D_g_pDevice[0x56d];
  }
  if (param_1 == (uint *)D3D8__D3D_g_pDevice[0x570]) {
    local_18 = (float)D3D8__D3D_g_pDevice[0x14b];
    local_1c = (float)D3D8__D3D_g_pDevice[0x14a];
    local_8 = D3D8__D3DRS_MultiSampleMode;
    uVar8 = *(uint *)(D3D8__D3D_g_pDevice[0x571] + 0x10);
    if (uVar8 == 0) {
      iVar4 = 1 << ((byte)(*(uint *)(D3D8__D3D_g_pDevice[0x571] + 0xc) >> 0x14) & 0xf);
    }
    else {
      iVar4 = (uVar8 & 0xfff) + 1;
    }
    fVar2 = (float)iVar4;
    if (iVar4 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    local_14 = FUN_00373a30(fVar2 * local_1c + 0.5);
    uVar8 = *(uint *)(puVar3[0x571] + 0x10);
    if (uVar8 == 0) {
      iVar4 = 1 << (*(byte *)(puVar3[0x571] + 0xf) & 0xf);
    }
    else {
      iVar4 = (uVar8 >> 0xc & 0xfff) + 1;
    }
    fVar2 = (float)iVar4;
    if (iVar4 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    local_10 = FUN_00373a30(fVar2 * local_18 + 0.5);
    iVar4 = puVar3[0x570];
    if (*(uint *)(iVar4 + 0x10) == 0) {
      uVar8 = 1 << ((byte)(*(uint *)(iVar4 + 0xc) >> 0x14) & 0xf);
    }
    else {
      uVar8 = (*(uint *)(iVar4 + 0x10) & 0xfff) + 1;
    }
    if (uVar8 <= local_14) {
      if (*(uint *)(iVar4 + 0x10) == 0) {
        local_14 = 1 << ((byte)(*(uint *)(iVar4 + 0xc) >> 0x14) & 0xf);
      }
      else {
        local_14 = (*(uint *)(iVar4 + 0x10) & 0xfff) + 1;
      }
    }
    if (*(uint *)(iVar4 + 0x10) == 0) {
      uVar8 = 1 << (*(byte *)(iVar4 + 0xf) & 0xf);
    }
    else {
      uVar8 = (*(uint *)(iVar4 + 0x10) >> 0xc & 0xfff) + 1;
    }
    if (local_10 < uVar8) goto LAB_00371505;
    uVar8 = *(uint *)(iVar4 + 0x10);
    if (uVar8 == 0) {
      local_10 = 1 << (*(byte *)(iVar4 + 0xf) & 0xf);
      goto LAB_00371505;
    }
  }
  else {
    local_8 = D3D8__D3DRS_MultiSampleRenderTargetMode;
    uVar8 = param_1[4];
    local_1c = 1.0;
    local_18 = 1.0;
    if (uVar8 == 0) {
      local_14 = 1 << ((byte)(param_1[3] >> 0x14) & 0xf);
      local_10 = 1 << (*(byte *)((int)param_1 + 0xf) & 0xf);
      goto LAB_00371505;
    }
    local_14 = (uVar8 & 0xfff) + 1;
  }
  local_10 = (uVar8 >> 0xc & 0xfff) + 1;
LAB_00371505:
  local_c = FUN_00373ba0();
  uVar8 = puVar3[2];
  puVar3[2] = uVar8 & 0xffff7fff;
  if ((local_8 != 0) && ((local_c & 0x200) == 0)) {
    local_1c = local_1c * 0.5;
    puVar3[2] = uVar8 & 0xffff7fff | 0x8000;
    local_14 = local_14 + 1 >> 1;
    if (local_8 == 2) {
      local_18 = local_18 * 0.5;
      local_10 = local_10 + 1 >> 1;
      local_c = local_c | 0x2000;
    }
    else {
      local_c = local_c | 0x1000;
    }
  }
  if ((((*param_1 & 0x780000) == 0) && ((*param_1 & 0x70000) == 0x50000)) &&
     (piVar1 = (int *)param_1[5], piVar1 != (int *)0x0)) {
    *piVar1 = *piVar1 + 0x80000;
  }
  *param_1 = *param_1 + 0x80000;
  iVar4 = puVar3[0x56d];
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 0x14) != 0) {
      iVar4 = *(int *)(iVar4 + 0x14);
    }
    *(undefined4 *)(iVar4 + 8) = puVar3[0xb];
    FUN_0036c6a0();
  }
  iVar4 = puVar3[0x56e];
  puVar3[0x56d] = param_1;
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 0x14) != 0) {
      iVar4 = *(int *)(iVar4 + 0x14);
    }
    *(undefined4 *)(iVar4 + 8) = puVar3[0xb];
    FUN_0036c6a0();
  }
  puVar3[0x56e] = param_2;
  if (param_2 != (uint *)0x0) {
    if ((((*param_2 & 0x780000) == 0) && ((*param_2 & 0x70000) == 0x50000)) &&
       (piVar1 = (int *)param_2[5], piVar1 != (int *)0x0)) {
      *piVar1 = *piVar1 + 0x80000;
    }
    *param_2 = *param_2 + 0x80000;
    FUN_00373cb0();
    uVar5 = FUN_0036e100();
    puVar3[0x144] = uVar5;
  }
  puVar6 = (undefined4 *)*puVar3;
  if ((undefined4 *)puVar3[1] <= puVar6) {
    puVar6 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  uVar8 = param_1[1];
  if (param_2 == (uint *)0x0) {
    param_2 = (uint *)0x0;
  }
  else {
    param_2 = (uint *)param_2[1];
  }
  local_8 = 2;
  do {
    puVar7 = puVar6;
    *puVar7 = 0x40100;
    puVar7[1] = 0;
    if (param_1[4] == 0) {
      uVar9 = (uint)*(byte *)((int)param_1 + 0xd);
      iVar4 = 1 << ((byte)(param_1[3] >> 0x14) & 0xf);
      if (uVar9 == 0xc) {
        uVar9 = iVar4 * 2;
      }
      else if ((uVar9 < 0xe) || (0xf < uVar9)) {
        uVar9 = ((byte)(&DAT_0037b790)[uVar9] & 0x3c) * iVar4 >> 3;
      }
      else {
        uVar9 = iVar4 << 2;
      }
    }
    else {
      uVar9 = (*(byte *)((int)param_1 + 0x13) + 1) * 0x40;
    }
    iVar4 = puVar3[0x144];
    puVar7[2] = 0x4020c;
    puVar7[3] = iVar4 << 0x10 | uVar9 & 0xffff;
    puVar7[4] = 0x40100;
    puVar7[5] = 0;
    puVar7[6] = 0x40110;
    puVar7[7] = 0;
    puVar7[8] = 0x40100;
    puVar7[9] = 0;
    puVar7[10] = 0x40210;
    puVar7[0xb] = uVar8;
    puVar7[0xc] = 0x40100;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0x40110;
    puVar7[0xf] = 0;
    puVar7[0x10] = 0x40100;
    puVar7[0x11] = 0;
    puVar7[0x12] = 0x40214;
    puVar7[0x13] = param_2;
    puVar7[0x14] = 0x40100;
    puVar7[0x15] = 0;
    puVar7[0x16] = 0x40110;
    puVar7[0x17] = 0;
    local_8 = local_8 + -1;
    puVar6 = puVar7 + 0x18;
  } while (local_8 != 0);
  puVar7[0x18] = &LAB_00080200;
  puVar7[0x19] = local_14 << 0x10;
  puVar7[0x1a] = local_10 << 0x10;
  puVar6 = (undefined4 *)FUN_00371190(puVar3);
  if ((DAT_0037dfd4 == 0) || (puVar3[0x56e] == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *puVar6 = 0x4030c;
  puVar6[1] = uVar5;
  if ((D3D8__D3DRS_StencilEnable == 0) || (puVar3[0x56e] == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  puVar6[2] = 0x4032c;
  puVar6[3] = uVar5;
  puVar7 = puVar6 + 4;
  if (((puVar3[2] & 0x100) != 0) && (param_1 == (uint *)puVar3[0x570])) {
    puVar3[2] = puVar3[2] & 0xfffffeff;
    *puVar7 = 0x40130;
    puVar6[5] = 0;
    puVar7 = puVar6 + 6;
  }
  *puVar7 = 0x40208;
  puVar7[1] = local_c;
  *puVar3 = puVar7 + 2;
  puVar3[0x147] = local_18;
  puVar3[0x146] = local_1c;
  if (local_1c < local_18) {
    local_18 = local_1c;
  }
  if (local_18 != (float)puVar3[0x148]) {
    puVar3[0x148] = local_18;
    iVar4 = FUN_00373a30(local_18 + local_18 + 0.5);
    puVar3[0x149] = *(undefined4 *)(&DAT_0037b25c + iVar4 * 4);
    DAT_0037dd90 = DAT_0037dd90 | 0x100;
    (*(code *)PTR_D3DDevice_SetRenderState_LineWidth_0037b2cc)(DAT_0037e00c);
  }
  FUN_0036f320();
  D3DDevice_SetViewport(param_3);
  D3DDevice_SetRenderState_Dxt1NoiseEnable(D3D8__D3DRS_Dxt1NoiseEnable);
  return;
}
