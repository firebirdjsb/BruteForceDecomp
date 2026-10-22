/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 77F1D7D75B0F12227B431FD7EECB875B3B4A8BFE65D59AEFD5EB5725C57DFC84
 * Entry: 0x003701c0, Ghidra index: 13339, label: D3DDevice_SetRenderState_ShadowFunc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
extern uint32_t _DAT_0037e008;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void D3D8LTCG__D3DDevice_SetRenderState_ShadowFunc(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = D3D8__D3D_g_pDevice;
  puVar2 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar2) {
    puVar2 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar2 = 0x41e6c;
  puVar2[1] = param_1 + -0x200;
  *puVar1 = puVar2 + 2;
  _DAT_0037e008 = param_1;
  return;
}
