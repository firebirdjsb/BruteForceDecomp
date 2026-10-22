/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F8439DE13AEC578CFB318ACD8FE282755EAC266C107669EE85BCF6A95231E0CF
 * Entry: 0x003702e0, Ghidra index: 13342, label: D3DDevice_SetRenderState_FrontFace
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetRenderState_FrontFace(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = D3D8__D3D_g_pDevice;
  puVar2 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar2) {
    puVar2 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar2 = 0x403a0;
  puVar2[1] = param_1;
  *puVar1 = puVar2 + 2;
  D3D8__D3DRS_FrontFace = param_1;
  D3DDevice_SetRenderState_CullMode();
  return;
}
