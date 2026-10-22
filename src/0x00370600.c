/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1CC73261414035383C4E2020B65DD5E643922DC390434039BFC7F6B7BBB3BA77
 * Entry: 0x00370600, Ghidra index: 13349, label: D3DDevice_SetRenderState_Dxt1NoiseEnable
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b790;
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetRenderState_Dxt1NoiseEnable(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  puVar2 = D3D8__D3D_g_pDevice;
  uVar4 = 0;
  if (((&DAT_0037b790)[*(byte *)(D3D8__D3D_g_pDevice[0x56d] + 0xd)] & 0x3c) == 0x20) {
    uVar4 = param_1;
  }
  if (uVar4 != (D3D8__D3D_g_pDevice[2] & 1)) {
    puVar1 = D3D8__D3D_g_pDevice + 1;
    D3D8__D3D_g_pDevice[2] = D3D8__D3D_g_pDevice[2] ^ 1;
    puVar3 = (undefined4 *)*puVar2;
    if ((undefined4 *)*puVar1 <= puVar3) {
      puVar3 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    *puVar3 = 0x40110;
    puVar3[1] = 0;
    puVar3[2] = 0x40100;
    puVar3[3] = uVar4 << 5 | 8;
    *puVar2 = puVar3 + 4;
  }
  D3D8__D3DRS_Dxt1NoiseEnable = param_1;
  return;
}
