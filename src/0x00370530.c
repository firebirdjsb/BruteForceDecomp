/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C2A1AAF687BE48CB8A6DF0F45B5D8BF413E96B8D68092C35864DA718073D3C4
 * Entry: 0x00370530, Ghidra index: 13347, label: D3DDevice_SetRenderState_TextureFactor
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037dfe8;
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetRenderState_TextureFactor(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = D3D8__D3D_g_pDevice;
  if (D3D8__D3D_g_pDevice[0xdb] == 0) {
    puVar2 = (undefined4 *)*D3D8__D3D_g_pDevice;
    if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar2) {
      puVar2 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    *puVar2 = &LAB_00400a60;
    puVar2 = puVar2 + 1;
    iVar3 = 0x10;
    do {
      *puVar2 = param_1;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *puVar1 = puVar2;
    DAT_0037dfe8 = param_1;
    return;
  }
  DAT_0037dfe8 = param_1;
  return;
}
