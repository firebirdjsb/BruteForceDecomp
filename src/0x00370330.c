/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0CDCDC2B1DD35EEED531E6E5ECCAB19163D81D19E01B5F7C3B341D2EC5484EF
 * Entry: 0x00370330, Ghidra index: 13343, label: D3DDevice_SetRenderState_NormalizeNormals
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037dd90;
extern uint32_t DAT_0037dfd0;
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetRenderState_NormalizeNormals(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = D3D8__D3D_g_pDevice;
  puVar2 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar2) {
    puVar2 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar2 = 0x403a4;
  puVar2[1] = param_1;
  *puVar1 = puVar2 + 2;
  DAT_0037dd90 = DAT_0037dd90 | 0x200;
  DAT_0037dfd0 = param_1;
  return;
}
