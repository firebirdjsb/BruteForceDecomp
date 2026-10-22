/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C62A502E5284077FF4D8515D87DA71709248DD37A10EC741B581E218B3FF77F6
 * Entry: 0x00370260, Ghidra index: 13341, label: D3DDevice_SetRenderState_CullMode
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetRenderState_CullMode(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  puVar1 = D3D8__D3D_g_pDevice;
  puVar2 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar2) {
    puVar2 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar2 = 0x40308;
  if (param_1 == 0) {
    puVar2[1] = 0;
    *puVar1 = puVar2 + 2;
    D3D8__D3DRS_CullMode = param_1;
    return;
  }
  puVar2[1] = 1;
  bVar3 = param_1 != D3D8__D3DRS_FrontFace;
  puVar2[2] = 0x4039c;
  puVar2[3] = bVar3 + 0x404;
  *puVar1 = puVar2 + 4;
  D3D8__D3DRS_CullMode = param_1;
  return;
}
