/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 103D3D3EEFA7BDFB6391D6672D7B8C559CBA91B74AB2770C7ECAF1EBD663D02F
 * Entry: 0x003706c0, Ghidra index: 13351, label: D3DDevice_SetRenderState_OcclusionCullEnable
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetRenderState_OcclusionCullEnable(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar1 = D3D8__D3D_g_pDevice;
  D3D8__D3DRS_OcclusionCullEnable = param_1;
  puVar2 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar2) {
    puVar2 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  uVar3 = 0;
  if (D3D8__D3DRS_StencilCullEnable != 0) {
    uVar3 = 2;
  }
  if ((D3D8__D3DRS_OcclusionCullEnable != 0) &&
     ((D3D8__D3DRS_StencilEnable == 0 || (D3D8__D3DRS_StencilFail == 0x1e00)))) {
    uVar3 = uVar3 | 1;
  }
  *puVar2 = 0x41d84;
  puVar2[1] = uVar3;
  *puVar1 = puVar2 + 2;
  return;
}
