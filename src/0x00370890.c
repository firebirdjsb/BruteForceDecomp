/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0EED07713708E81DFD947910365C326E51C9766720A4485A59427A365C2973C
 * Entry: 0x00370890, Ghidra index: 13357, label: D3DDevice_SetRenderState_MultiSampleMode
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void D3D8LTCG__D3DDevice_SetRenderState_MultiSampleMode(undefined4 param_1)

{
  D3D8__D3DRS_MultiSampleMode = param_1;
  if (*(int *)(D3D8__D3D_g_pDevice + 0x15b4) == *(int *)(D3D8__D3D_g_pDevice + 0x15c0)) {
    D3D_CommonSetRenderTarget
              (*(int *)(D3D8__D3D_g_pDevice + 0x15b4),*(undefined4 *)(D3D8__D3D_g_pDevice + 0x15b8),
               D3D8__D3D_g_pDevice + 0xa90);
  }
  return;
}
