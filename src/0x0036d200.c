/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD85C509BA8EAFCB4DA75B1A7C25A9255038EB07E0763BD47078F6AFB0DFC0B8
 * Entry: 0x0036d200, Ghidra index: 13289, label: FUN_0036d200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00080394;
extern uint32_t DAT_0037b5e8;
extern uint32_t DAT_0037b5ec;
extern uint32_t DAT_0037b640;
extern uint32_t DAT_0037b644;
extern uint32_t DAT_0037b6e0;
extern uint32_t DAT_0037bb3c;
extern uint32_t DAT_0037bb40;
extern uint32_t DAT_0037bbe0;
extern uint32_t DAT_0037dd90;
extern uint32_t DAT_0037df90;
extern uint32_t DAT_0037ec88;
extern uint32_t PTR_LAB_003a1cd8;
void FUN_0036d200(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  
  puVar3 = D3D8__D3D_g_pDevice;
  uVar7 = 0;
  do {
    iVar1 = *(int *)((int)&DAT_0037b640 + uVar7);
    iVar2 = *(int *)((int)&DAT_0037b644 + uVar7);
    if (((iVar1 < 0x5c) && ((*(byte *)(D3D8__D3D_g_pDevice + 2) & 0x10) != 0)) ||
       (iVar2 != (&D3D8__D3D_g_RenderState)[iVar1])) {
      if (iVar1 < 0x5c) {
        D3D8LTCG__D3DDevice_SetRenderState_Simple();
        (&D3D8__D3D_g_RenderState)[iVar1] = iVar2;
      }
      else if (iVar1 < 0x88) {
        DAT_0037dd90 = DAT_0037dd90 | (uint)(&PTR_LAB_003a1cd8)[iVar1];
        (&D3D8__D3D_g_RenderState)[iVar1] = iVar2;
      }
      else {
        (**(code **)(iVar1 * 4 + 0x37b058))(iVar2);
      }
    }
    uVar7 = uVar7 + 8;
  } while (uVar7 < 0xa0);
  uVar7 = 0;
  do {
    if (*(int *)((int)&DAT_0037b5ec + uVar7) !=
        (&D3D8LTCG__D3D_g_DeferredTextureState)[*(int *)((int)&DAT_0037b5e8 + uVar7)]) {
      D3D8LTCG__D3DDevice_SetTextureStageStateNotInline_0__LTCG_eax1_edx2_ecx3();
    }
    uVar7 = uVar7 + 8;
  } while (uVar7 < 0x58);
  D3D8LTCG__D3DDevice_SetPixelShader_0__LTCG_eax_handle();
  if (DAT_0037df90 != DAT_0037bb40) {
    DAT_0037dd90 = DAT_0037dd90 | 1;
    DAT_0037bb40 = DAT_0037df90;
  }
  if (DAT_0037df90 != DAT_0037bb3c) {
    DAT_0037dd90 = DAT_0037dd90 | 1;
    DAT_0037bb3c = DAT_0037df90;
  }
  if (DAT_0037bbe0 != 1) {
    DAT_0037dd90 = DAT_0037dd90 | 0x800;
    DAT_0037bbe0 = 1;
  }
  FUN_003736b0();
  puVar4 = D3D8__D3D_g_pDevice;
  puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
    puVar5 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar5 = 0x41e9c;
  puVar5[1] = 0;
  uVar6 = FUN_0036ef80(&DAT_0037b6e0,8);
  *puVar4 = uVar6;
  puVar5 = (undefined4 *)*puVar3;
  if ((undefined4 *)puVar3[1] <= puVar5) {
    puVar5 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar5 = 0x81e94;
  puVar5[1] = 6;
  puVar5[2] = 0;
  puVar5[3] = 0x41ea0;
  puVar5[4] = 0;
  puVar5[6] = 0;
  puVar5[5] = &DAT_00080394;
  puVar5[7] = 0x4b7fffff;
  *puVar3 = puVar5 + 8;
  return;
}
