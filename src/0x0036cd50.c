/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68DE5467DED1F2F418560A00DBE332AFDA31A3F6BBA2FDD2E277F323ABCCB59A
 * Entry: 0x0036cd50, Ghidra index: 13286, label: D3DDevice_SetVertexDataColor
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetVertexDataColor(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = D3D8__D3D_g_pDevice;
  piVar2 = (int *)*D3D8__D3D_g_pDevice;
  if ((int *)D3D8__D3D_g_pDevice[1] <= piVar2) {
    piVar2 = (int *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *piVar2 = param_1 * 4 + 0x41940;
  piVar2[1] = param_2 >> 0x10 & 0xff | (param_2 & 0xff) << 0x10 | param_2 & 0xff00ff00;
  *puVar1 = piVar2 + 2;
  return;
}
