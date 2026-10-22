/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C6642E98D4FD7664B2F47410782D8AD1336DA836F34AEECD2C33466601DB2C2E
 * Entry: 0x0036d4d0, Ghidra index: 13291, label: FUN_0036d4d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b5e8;
extern uint32_t DAT_0037b640;
extern uint32_t DAT_0037bbe0;
extern uint32_t DAT_0037dd90;
extern uint32_t DAT_0037ec88;
extern uint32_t PTR_D3DDevice_SetRenderState_PSTextureModes_0037b278;
extern uint32_t PTR_LAB_003a1cd8;
extern uint32_t UNK_003a1e48;
extern char s_Unable_to_re_open_movie_cache_fi_0037b19c[];
void FUN_0036d4d0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  
  puVar3 = D3D8__D3D_g_pDevice;
  D3D8LTCG__D3DDevice_SetPixelShader_0__LTCG_eax_handle();
  uVar1 = puVar3[2];
  uVar7 = param_1[2];
  if (uVar7 != DAT_0037bbe0) {
    DAT_0037dd90 = DAT_0037dd90 | (-(uint)(uVar7 < 0x19) & 0xffffbff1) + 0x480f;
    DAT_0037bbe0 = uVar7;
  }
  piVar8 = param_1 + 4;
  uVar7 = 0;
  do {
    iVar9 = *(int *)((int)&DAT_0037b640 + uVar7);
    iVar2 = *piVar8;
    if (((0x5b < iVar9) || ((*(byte *)(D3D8__D3D_g_pDevice + 2) & 0x10) == 0)) &&
       (iVar2 != (&D3D8__D3D_g_RenderState)[iVar9])) {
      if (iVar9 < 0x5c) {
        D3D8LTCG__D3DDevice_SetRenderState_Simple();
        (&D3D8__D3D_g_RenderState)[iVar9] = iVar2;
      }
      else if (iVar9 < 0x88) {
        DAT_0037dd90 = DAT_0037dd90 | (uint)(&PTR_LAB_003a1cd8)[iVar9];
        (&D3D8__D3D_g_RenderState)[iVar9] = iVar2;
      }
      else {
        (**(code **)(iVar9 * 4 + 0x37b058))(iVar2);
      }
    }
    uVar7 = uVar7 + 8;
    piVar8 = piVar8 + 1;
  } while (uVar7 < 0xa0);
  piVar8 = param_1 + 0x18;
  uVar7 = 0;
  do {
    if (*piVar8 != (&D3D8LTCG__D3D_g_DeferredTextureState)[*(int *)((int)&DAT_0037b5e8 + uVar7)]) {
      D3D8LTCG__D3DDevice_SetTextureStageStateNotInline_0__LTCG_eax1_edx2_ecx3();
    }
    uVar7 = uVar7 + 8;
    piVar8 = piVar8 + 1;
  } while (uVar7 < 0x58);
  if ((uVar1 & 0x10) == 0) {
    if (*param_1 != 0) {
      piVar8 = param_1 + 0x23;
      iVar9 = -0x170;
      do {
        if (((*(int *)(*(int *)(*param_1 + 8) + 0x20) != 0) ||
            (*(int *)(*(int *)(*param_1 + 8) + 0x24) != 0)) ||
           ((iVar9 < -0x150 || (-0x14c < iVar9)))) {
          iVar2 = *piVar8;
          if (iVar9 < 0) {
            D3D8LTCG__D3DDevice_SetRenderState_Simple();
            *(int *)((int)&D3D8__D3DRS_FogEnable + iVar9) = iVar2;
          }
          else if (iVar9 < 0xb0) {
            DAT_0037dd90 = DAT_0037dd90 | *(uint *)(&UNK_003a1e48 + iVar9);
            *(int *)((int)&D3D8__D3DRS_FogEnable + iVar9) = iVar2;
          }
          else {
            (**(code **)(s_Unable_to_re_open_movie_cache_fi_0037b19c + iVar9 + 0x2c))(iVar2);
          }
        }
        iVar9 = iVar9 + 4;
        piVar8 = piVar8 + 1;
      } while (iVar9 < -0x8c);
      (*(code *)PTR_D3DDevice_SetRenderState_PSTextureModes_0037b278)(param_1[3]);
    }
    puVar4 = D3D8__D3D_g_pDevice;
    puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
    if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
      puVar5 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    *puVar5 = 0x41e9c;
    puVar5[1] = 0;
    uVar6 = FUN_0036ef80(puVar3 + 0x316,8);
    *puVar4 = uVar6;
  }
  puVar5 = (undefined4 *)*puVar3;
  if ((undefined4 *)puVar3[1] <= puVar5) {
    puVar5 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  uVar1 = *(uint *)(puVar3[0xdf] + 4);
  if ((uVar1 & 0x12) != 0) {
    *puVar5 = 0x81e94;
    puVar5[1] = 6;
    puVar5[2] = uVar1 & 1;
    uVar6 = puVar3[0xe1];
    puVar5[3] = 0x41ea0;
    puVar5[4] = uVar6;
    uVar6 = FUN_00370f90();
    *puVar3 = uVar6;
    return;
  }
  *puVar5 = 0x41e94;
  puVar5[1] = 4;
  uVar6 = FUN_00370f90();
  *puVar3 = uVar6;
  return;
}
