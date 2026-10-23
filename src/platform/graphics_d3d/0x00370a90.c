/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A42821254B1DC069AED610F1B837B90CF1E9FE7C4E228DE6876C57DF4EEB5E2
 * Entry: 0x00370a90, Ghidra index: 13366, label: D3DDevice_SetRenderState_VertexBlend
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037dd90;
extern uint32_t DAT_0037dfbc;
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetRenderState_VertexBlend(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = D3D8__D3D_g_pDevice;
  puVar2 = (undefined4 *)*D3D8__D3D_g_pDevice;
  DAT_0037dd90 = DAT_0037dd90 | 0x200;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar2) {
    puVar2 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar2 = 0x40328;
  puVar2[1] = param_1;
  *puVar1 = puVar2 + 2;
  DAT_0037dfbc = param_1;
  return;
}
