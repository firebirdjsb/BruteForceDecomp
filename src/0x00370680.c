/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FEBB01B929F5EF645654E7C2B55C19EAC704C001EB6C3FADA99A22DC08243942
 * Entry: 0x00370680, Ghidra index: 13350, label: D3DDevice_SetRenderState_YuvEnable
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetRenderState_YuvEnable(undefined4 param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = D3D8__D3D_g_pDevice;
  D3D8__D3DRS_YuvEnable = param_1;
  if (D3D8__D3D_g_pDevice[1] <= *D3D8__D3D_g_pDevice) {
    D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  uVar2 = FUN_00371190(puVar1);
  *puVar1 = uVar2;
  return;
}
