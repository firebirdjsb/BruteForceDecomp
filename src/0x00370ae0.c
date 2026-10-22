/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9BCC12999A010B8F17A04B10AAB7498D42CA2686DD4E3807D31A1D86C47960D6
 * Entry: 0x00370ae0, Ghidra index: 13367, label: D3DDevice_SetRenderState_PSTextureModes
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037dd90;
void D3D8LTCG__D3DDevice_SetRenderState_PSTextureModes(undefined4 param_1)

{
  *(undefined4 *)(D3D8__D3D_g_pDevice + 0x378) = param_1;
  DAT_0037dd90 = DAT_0037dd90 | 0x4000;
  D3D8__D3DRS_PSTextureModes = param_1;
  return;
}
