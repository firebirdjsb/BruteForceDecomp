/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D357A130C47E6D980E9AE1EDCD4393ADBB8AE2142620D52F9220AE7E49E8A23D
 * Entry: 0x003762e0, Ghidra index: 13451, label: FUN_003762e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ad98;
extern uint32_t DAT_0037b070;
extern uint32_t DAT_0037bb60;
extern uint32_t DAT_0037dd90;
extern uint32_t DAT_0037de7c;
extern uint32_t DAT_0037ec88;
extern uint32_t PTR_D3DDevice_SetRenderState_ZEnable_0037b294;
extern uint32_t PTR_FUN_003a1dbc;
extern uint32_t _DAT_0037bb70;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003762e0(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  puVar2 = D3D8__D3D_g_pDevice;
  uVar7 = 0;
  do {
    D3D8LTCG__D3DDevice_SetTransform_0__LTCG_eax1_edx2();
    uVar7 = uVar7 + 1;
  } while (uVar7 < 10);
  uVar7 = 0;
  do {
    if (((uVar7 != 0x184) && (uVar7 != 0x114)) && (uVar7 != 0x118)) {
      uVar1 = *(undefined4 *)((int)&DAT_0037ad98 + uVar7);
      if ((int)uVar7 < 0x8c) {
        D3D8LTCG__D3DDevice_SetRenderState_Simple();
        *(undefined4 *)((int)&DAT_0037de7c + uVar7) = uVar1;
      }
      else if ((int)uVar7 < 0x13c) {
        DAT_0037dd90 = DAT_0037dd90 | *(uint *)((int)&PTR_FUN_003a1dbc + uVar7);
        *(undefined4 *)((int)&DAT_0037de7c + uVar7) = uVar1;
      }
      else {
        (**(code **)(uVar7 + 0x37b13c))(uVar1);
      }
    }
    uVar7 = uVar7 + 4;
  } while (uVar7 < 0x1b4);
  (*(code *)PTR_D3DDevice_SetRenderState_ZEnable_0037b294)(puVar2[0x573] != 0);
  iVar8 = 0;
  iVar9 = 0x41b0c;
  uVar6 = 0xb38;
  uVar7 = DAT_0037dd90;
  do {
    DAT_0037dd90 = uVar7;
    uVar7 = 0;
    do {
      D3D8LTCG__D3DDevice_SetTextureStageStateNotInline_0__LTCG_eax1_edx2_ecx3();
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0x20);
    D3D8LTCG__D3DDevice_SetTextureState_TexCoordIndex_4(iVar8);
    puVar4 = D3D8__D3D_g_pDevice;
    puVar2 = *(uint **)((int)D3D8__D3D_g_pDevice + uVar6);
    if (puVar2 != (uint *)0x0) {
      uVar7 = *puVar2;
      puVar2[2] = D3D8__D3D_g_pDevice[0xb];
      *puVar2 = uVar7 - 0x80000;
      if ((uVar7 - 0x80000 & 0x78ffff) == 0) {
        D3D8LTCG__D3D_DestroyResource__LTCG();
      }
    }
    *(undefined4 *)((int)puVar4 + uVar6) = 0;
    piVar5 = (int *)*puVar4;
    if ((int *)puVar4[1] <= piVar5) {
      piVar5 = (int *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    *piVar5 = iVar9;
    piVar5[1] = 0;
    *puVar4 = (uint)(piVar5 + 2);
    *(undefined4 *)((int)puVar4 + (uVar6 - 0xb2c)) = 0x80000000;
    puVar2 = D3D8__D3D_g_pDevice;
    uVar3 = DAT_0037b070;
    uVar6 = uVar6 + 4;
    iVar9 = iVar9 + 0x40;
    iVar8 = iVar8 + 1;
    uVar7 = DAT_0037dd90 | 0x4800;
  } while (uVar6 < 0xb48);
  DAT_0037bb60 = 4;
  DAT_0037dd90 = DAT_0037dd90 | 0x4800;
  _DAT_0037bb70 = 2;
  D3D8__D3D_g_pDevice[0x2aa] = DAT_0037b070;
  puVar2[0x2ab] = uVar3;
  FUN_0036f320();
  if (puVar2[1] <= *puVar2) {
    D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  uVar7 = FUN_00370f90();
  *puVar2 = uVar7;
  return;
}
