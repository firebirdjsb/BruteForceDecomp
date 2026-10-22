/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 354BB829F308E1F63EB1594BF05B6F556B05CDDC7FF15DA19B8EFCB1D906D107
 * Entry: 0x003707c0, Ghidra index: 13354, label: D3DDevice_SetRenderState_RopZRead
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_state_globals_x86.h"
void D3D8LTCG__D3DDevice_SetRenderState_RopZRead(undefined4 param_1)

{
  D3D8__D3DRS_RopZRead = param_1;
  D3D_CommonSetDebugRegisters();
  return;
}
