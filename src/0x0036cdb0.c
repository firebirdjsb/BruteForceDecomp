/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D1688E09B2AD8B78DAFBA301A0E1E5F1195C2D5C21070A9B5F046D1F18D1C3E
 * Entry: 0x0036cdb0, Ghidra index: 13287, label: D3DDevice_End
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_End(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = D3D8__D3D_g_pDevice;
  puVar2 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar2) {
    puVar2 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar2 = 0x417fc;
  puVar2[1] = 0;
  *puVar1 = puVar2 + 2;
  if ((puVar1[2] & 0x1000) != 0) {
    D3D_SetFence(1);
  }
  puVar1[2] = puVar1[2] & 0xffffe7ff;
  return;
}
