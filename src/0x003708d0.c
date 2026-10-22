/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D3DFEFF742ECBDDEDF0362159FA726CED5E5C84ACD082324328C77FC82290365
 * Entry: 0x003708d0, Ghidra index: 13358, label: D3DDevice_SetRenderState_MultiSampleRenderTargetMode
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void D3D8LTCG__D3DDevice_SetRenderState_MultiSampleRenderTargetMode(undefined4 param_1)

{
  D3D8__D3DRS_MultiSampleRenderTargetMode = param_1;
  if (*(int *)(D3D8__D3D_g_pDevice + 0x15b4) != *(int *)(D3D8__D3D_g_pDevice + 0x15c0)) {
    D3D_CommonSetRenderTarget
              (*(int *)(D3D8__D3D_g_pDevice + 0x15b4),*(undefined4 *)(D3D8__D3D_g_pDevice + 0x15b8),
               D3D8__D3D_g_pDevice + 0xa90);
  }
  return;
}
