/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3695877214E5AF5F4801EECF950401457214C0C88F30E84B588758DD4669A4B1
 * Entry: 0x00370a40, Ghidra index: 13364, label: D3DDevice_SetRenderState_BackFillMode
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_state_globals_x86.h"
void D3D8LTCG__D3DDevice_SetRenderState_BackFillMode(undefined4 param_1)

{
  D3D8__D3DRS_BackFillMode = param_1;
  D3DDevice_SetRenderState_FillMode();
  return;
}
