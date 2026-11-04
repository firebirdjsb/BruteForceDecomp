/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 399181193B00748A81CF3B2A07C2253C180749900A501CD654EA22D9BE719E9C
 * Entry: 0x00370970, Ghidra index: 13361, label: D3DDevice_SetRenderState_SampleAlpha
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox x86 guest ABI_UNVERIFIED. */
extern void FUN_003711f0(void);
#include "bf_xbox_d3d_state_globals_x86.h"
void D3D8LTCG__D3DDevice_SetRenderState_SampleAlpha(undefined4 param_1)

{
  D3D8__D3DRS_SampleAlpha = param_1;
  FUN_003711f0();
  return;
}
