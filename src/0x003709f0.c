/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 035C4F602A7B049B15094C6E41F140E8BC30D8BD36ACCC30E5AC3483227B4B99
 * Entry: 0x003709f0, Ghidra index: 13363, label: D3DDevice_SetRenderState_FillMode
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0008038c;
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetRenderState_FillMode(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = D3D8__D3D_g_pDevice;
  puVar2 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar2) {
    puVar2 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  uVar3 = D3D8__D3DRS_BackFillMode;
  if (D3D8__D3DRS_TwoSidedLighting == 0) {
    uVar3 = param_1;
  }
  *puVar2 = &DAT_0008038c;
  puVar2[1] = param_1;
  puVar2[2] = uVar3;
  *puVar1 = puVar2 + 3;
  D3D8__D3DRS_FillMode = param_1;
  return;
}
