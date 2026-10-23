/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1FF09EB33A1C9689C6BA681244C3DE321B87CE419E1350BC6AEFE109FAE3B55F
 * Entry: 0x00370a60, Ghidra index: 13365, label: D3DDevice_SetRenderState_TwoSidedLighting
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_state_globals_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037dd90;
void D3D8LTCG__D3DDevice_SetRenderState_TwoSidedLighting(undefined4 param_1)

{
  DAT_0037dd90 = DAT_0037dd90 | 0x1000;
  D3D8__D3DRS_TwoSidedLighting = param_1;
  D3DDevice_SetRenderState_FillMode();
  return;
}
