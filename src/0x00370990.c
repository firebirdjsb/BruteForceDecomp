/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C414576EE62DEF21FC8AE5EFF82912E4AADBEC79F03F69E8FEACE1E167BDFC7D
 * Entry: 0x00370990, Ghidra index: 13362, label: D3DDevice_SetRenderState_LogicOp
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetRenderState_LogicOp(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = D3D8__D3D_g_pDevice;
  puVar2 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar2) {
    puVar2 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  if (param_1 == 0) {
    *puVar2 = 0x417bc;
    puVar2[1] = 0;
    *puVar1 = puVar2 + 2;
    D3D8__D3DRS_LogicOp = param_1;
    return;
  }
  *puVar2 = 0x817bc;
  puVar2[1] = 1;
  puVar2[2] = param_1;
  *puVar1 = puVar2 + 3;
  D3D8__D3DRS_LogicOp = param_1;
  return;
}
