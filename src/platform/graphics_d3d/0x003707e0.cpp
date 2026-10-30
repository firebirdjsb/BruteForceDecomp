/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E965166B55CFC7FF512C2073671D2F5DE91637DAC0EB82ABA01CE10AB6F8A05
 * Entry: 0x003707e0, Ghidra index: 13355, label: D3DDevice_SetRenderState_DoNotCullUncompressed
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_state_globals_x86.h"
void D3D8LTCG__D3DDevice_SetRenderState_DoNotCullUncompressed(undefined4 param_1)

{
  D3D8__D3DRS_DoNotCullUncompressed = param_1;
  D3D_CommonSetDebugRegisters();
  return;
}
