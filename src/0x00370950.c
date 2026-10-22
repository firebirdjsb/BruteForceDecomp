/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B530E895659F99E5D0A10384922CF97192B88B4566265F8BD5DC77EC24ABC25
 * Entry: 0x00370950, Ghidra index: 13360, label: D3DDevice_SetRenderState_MultiSampleMask
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_state_globals_x86.h"
void D3D8LTCG__D3DDevice_SetRenderState_MultiSampleMask(undefined4 param_1)

{
  D3D8__D3DRS_MultiSampleMask = param_1;
  FUN_003711f0();
  return;
}
