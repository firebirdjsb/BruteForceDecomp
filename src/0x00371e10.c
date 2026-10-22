/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3349300F8D40720450E627988C1F02AB351F26407D6AF5E599B7C3C594A366E0
 * Entry: 0x00371e10, Ghidra index: 13387, label: D3D_MakeRequestedSpace_8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec8c;
uint D3D8LTCG__D3D_MakeRequestedSpace_8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint local_8;
  
  puVar4 = D3D8__D3D_g_pDevice;
  uVar6 = *D3D8__D3D_g_pDevice;
  if ((D3D8__D3D_g_pDevice[2] & 4) != 0) {
    puVar7 = D3D8__D3D_g_pDevice + 0xd3;
    D3D8__D3D_g_pDevice[0xd4] = D3D8__D3D_g_pDevice[0xd4] + (uVar6 - *(int *)(*puVar7 + 4));
    uVar6 = *(uint *)(*puVar7 + 4);
    *puVar4 = uVar6;
    return uVar6;
  }
  uVar1 = *(uint *)D3D8__D3D_g_pDevice[0xc];
  uVar2 = D3D8__D3D_g_pDevice[9];
  uVar5 = *(uint *)(D3D8__D3D_g_pDevice[0x5f0] + 0x44) | 0x80000000;
  if ((uVar5 < uVar2) || (D3D8__D3D_g_pDevice[10] <= uVar5)) {
    uVar5 = *(uint *)(D3D8__D3D_g_pDevice[0x13e] + 0x324c) & 0xfffffffe | 0x80000000;
  }
  uVar3 = D3D8__D3D_g_pDevice[10];
  local_8 = uVar6 + param_2;
  if ((uVar3 <= uVar6 + param_2 + 0x4000) && (local_8 = uVar3, uVar3 < param_1 + uVar6)) {
    D3D8__D3D_g_pDevice[0x10] = uVar6 - uVar2;
    *(uint *)*puVar4 = (uVar2 & 0xfffffff) + 1;
    if (*puVar4 < uVar5) {
      uVar5 = puVar4[9] + 4;
    }
    uVar6 = puVar4[9];
    if (uVar5 == uVar6) {
      uVar5 = uVar6 + 4;
    }
    *puVar4 = uVar6;
    local_8 = param_2 + uVar6;
  }
  if ((uVar6 < uVar5) && (uVar5 <= local_8)) {
    uVar5 = puVar4[0xd];
    uVar2 = puVar4[0x12];
    puVar7 = (uint *)(uVar2 + uVar5 * 0xc);
    do {
      uVar3 = *puVar7;
      uVar5 = uVar5 - 1 & puVar4[0xe];
      uVar8 = *(uint *)(uVar2 + 4 + uVar5 * 0xc);
      puVar7 = (uint *)(uVar2 + uVar5 * 0xc);
      if (uVar8 < uVar6) {
        uVar8 = uVar8 + puVar4[0x10];
      }
    } while ((((DAT_0037ec8c >> 1) + uVar6 < uVar8) && (uVar5 != puVar4[0xd])) && (uVar1 < *puVar7))
    ;
    D3D_BlockOnTime(uVar3,8);
  }
  puVar4[1] = local_8 - 0x204;
  if ((puVar4[2] & 0x800) == 0) {
    D3D_SetFence(1);
    CDevice_KickOff_0__LTCG_edx1();
    return *puVar4;
  }
  puVar4[2] = puVar4[2] | 0x1000;
  CDevice_KickOff_0__LTCG_edx1();
  return *puVar4;
}
