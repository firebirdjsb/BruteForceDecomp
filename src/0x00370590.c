/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A987343BFB928BD0E4B7A0D1A60C616300581FA2CB1FC57B6348AC3EFE5EE63
 * Entry: 0x00370590, Ghidra index: 13348, label: D3DDevice_SetRenderState_LineWidth
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037e00c;
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetRenderState_LineWidth(float param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar1 = D3D8__D3D_g_pDevice;
  uVar2 = FUN_00373a30(param_1 * (float)D3D8__D3D_g_pDevice[0x148] * 8.0 + 0.5);
  if (0x1ff < uVar2) {
    uVar2 = 0x1ff;
  }
  puVar3 = (undefined4 *)*puVar1;
  if ((undefined4 *)puVar1[1] <= puVar3) {
    puVar3 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar3 = 0x40380;
  puVar3[1] = uVar2;
  *puVar1 = puVar3 + 2;
  DAT_0037e00c = param_1;
  return;
}
