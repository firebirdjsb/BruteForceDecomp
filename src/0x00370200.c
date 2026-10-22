/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BAB7F79E826F66A1BA7DC8093B0AAAC4F7B100B904063860DEC38B17F9FB3E34
 * Entry: 0x00370200, Ghidra index: 13340, label: D3DDevice_SetRenderState_FogColor
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
extern uint32_t _DAT_0037dfc0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void D3D8LTCG__D3DDevice_SetRenderState_FogColor(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = D3D8__D3D_g_pDevice;
  puVar2 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar2) {
    puVar2 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar2 = 0x402a8;
  puVar2[1] = param_1 >> 0x10 & 0xff | (param_1 & 0xff) << 0x10 | param_1 & 0xff00ff00;
  *puVar1 = puVar2 + 2;
  _DAT_0037dfc0 = param_1;
  return;
}
