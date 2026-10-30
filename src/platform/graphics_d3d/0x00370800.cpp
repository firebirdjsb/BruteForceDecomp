/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 69346FA9E49223415EC60E5267E1E4131D0E248FEF0FCC61BA540D276ED27EA2
 * Entry: 0x00370800, Ghidra index: 13356, label: D3DDevice_SetRenderState_ZBias
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_state_globals_x86.h"
void D3D8LTCG__D3DDevice_SetRenderState_ZBias(undefined4 param_1)

{
  D3DDevice_SetRenderState_Simple();
  D3DDevice_SetRenderState_Simple();
  D3DDevice_SetRenderState_Simple();
  D3DDevice_SetRenderState_Simple();
  D3DDevice_SetRenderState_Simple();
  D3D8__D3DRS_ZBias = param_1;
  return;
}
