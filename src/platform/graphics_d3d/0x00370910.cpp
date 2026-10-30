/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8FFAFB7699C7BDF1DDC150C5E769846889DCAA2BAF94931CAEB974ECDCECE02F
 * Entry: 0x00370910, Ghidra index: 13359, label: D3DDevice_SetRenderState_MultiSampleAntiAlias
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_state_globals_x86.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetRenderState_MultiSampleAntiAlias(undefined4 param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = D3D8__D3D_g_pDevice;
  D3D8__D3DRS_MultiSampleAntiAlias = param_1;
  FUN_0036f320();
  FUN_003711f0();
  if (puVar1[1] <= *puVar1) {
    D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  uVar2 = FUN_00370f90();
  *puVar1 = uVar2;
  return;
}
