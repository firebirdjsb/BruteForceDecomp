/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3C30E5D45B3BA170A1AB5CF2CC2468DE6811590AC894962EA0E0BC151FABF7F
 * Entry: 0x00370420, Ghidra index: 13345, label: D3DDevice_SetRenderState_StencilEnable
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetRenderState_StencilEnable(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  
  puVar1 = D3D8__D3D_g_pDevice;
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
  if ((param_1 == 0) || (puVar1[0x56e] == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  puVar2[2] = 0x4032c;
  puVar2[3] = uVar4;
  *puVar1 = puVar2 + 4;
  D3D8__D3DRS_StencilEnable = param_1;
  return;
}
