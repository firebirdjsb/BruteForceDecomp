/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34DA05D2FB4B863A75DF09EB303EFC52C662BD79B418F7995330AE8CA402E19C
 * Entry: 0x00370cc0, Ghidra index: 13371, label: D3DDevice_SetTextureState_BorderColor_0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bba4;
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetTextureState_BorderColor_0(void)

{
  uint *puVar1;
  int in_EAX;
  int *piVar2;
  int unaff_EBX;
  
  puVar1 = D3D8__D3D_g_pDevice;
  piVar2 = (int *)*D3D8__D3D_g_pDevice;
  if ((int *)D3D8__D3D_g_pDevice[1] <= piVar2) {
    piVar2 = (int *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *piVar2 = in_EAX * 0x40 + 0x41b24;
  piVar2[1] = unaff_EBX;
  *puVar1 = (uint)(piVar2 + 2);
  *(int *)(&DAT_0037bba4 + in_EAX * 0x80) = unaff_EBX;
  return;
}
