/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3757F1466DC203DB40039574B977BEE5A51A0A478592BAFA36538441148F23E0
 * Entry: 0x0036d870, Ghidra index: 13294, label: FUN_0036d870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bb40;
extern uint32_t DAT_0037ec88;
void FUN_0036d870(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_EAX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  float local_14;
  float local_10;
  
  puVar5 = D3D8__D3D_g_pDevice;
  fVar1 = *(float *)(in_EAX + 0x52c);
  fVar2 = *(float *)(in_EAX + 0x528);
  iVar6 = *(int *)(in_EAX + 0x15b4);
  if (*(uint *)(iVar6 + 0x10) == 0) {
    iVar7 = 1 << ((byte)(*(uint *)(iVar6 + 0xc) >> 0x14) & 0xf);
  }
  else {
    iVar7 = (*(uint *)(iVar6 + 0x10) & 0xfff) + 1;
  }
  if (*(uint *)(iVar6 + 0x10) == 0) {
    iVar6 = 1 << (*(byte *)(iVar6 + 0xf) & 0xf);
  }
  else {
    iVar6 = (*(uint *)(iVar6 + 0x10) >> 0xc & 0xfff) + 1;
  }
  local_14 = 0.0;
  local_10 = 0.0;
  if ((DAT_0037bb40 == 4) || (DAT_0037bb40 == 5)) {
    if (fVar2 == 2.0) {
      local_14 = 0.5;
    }
    if (fVar1 == 2.0) {
      local_10 = 0.5;
    }
  }
  FUN_003736b0();
  puVar4 = (undefined4 *)*puVar5;
  if ((undefined4 *)puVar5[1] <= puVar4) {
    puVar4 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar4 = 0x417fc;
  puVar4[1] = 5;
  *puVar5 = puVar4 + 2;
  puVar5[2] = puVar5[2] | 0x800;
  puVar4 = D3D8__D3D_g_pDevice;
  puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
    puVar5 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar5 = 0x818c8;
  puVar5[1] = local_14;
  puVar5[2] = local_10;
  *puVar4 = puVar5 + 3;
  puVar4 = D3D8__D3D_g_pDevice;
  puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
    puVar5 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar5 = 0x81880;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar4 = puVar5 + 3;
  puVar4 = D3D8__D3D_g_pDevice;
  puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
    puVar5 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  fVar3 = (float)iVar7;
  *puVar5 = 0x818c8;
  if (iVar7 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  puVar5[2] = local_10;
  puVar5[1] = fVar3 * fVar2 * 4.0 + local_14;
  *puVar4 = puVar5 + 3;
  puVar4 = D3D8__D3D_g_pDevice;
  puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
    puVar5 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar5 = 0x81880;
  puVar5[2] = 0;
  puVar5[1] = fVar3 * 4.0;
  *puVar4 = puVar5 + 3;
  puVar4 = D3D8__D3D_g_pDevice;
  puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
    puVar5 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  fVar2 = (float)iVar6;
  *puVar5 = 0x818c8;
  puVar5[1] = local_14;
  if (iVar6 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  puVar5[2] = fVar2 * fVar1 * 4.0 + local_10;
  *puVar4 = puVar5 + 3;
  puVar4 = D3D8__D3D_g_pDevice;
  puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
    puVar5 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  puVar5[1] = 0;
  *puVar5 = 0x81880;
  puVar5[2] = fVar2 * 4.0;
  *puVar4 = puVar5 + 3;
  D3D8LTCG__D3DDevice_End();
  return;
}
