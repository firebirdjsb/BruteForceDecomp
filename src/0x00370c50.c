/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B166EB9066C8FF377E84318040CAC7FD8E365838EB407C5B3359A60333489FB9
 * Entry: 0x00370c50, Ghidra index: 13370, label: D3DDevice_SetTextureState_BumpEnv_8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetTextureState_BumpEnv_8(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint in_EAX;
  int *piVar2;
  uint uVar3;
  
  puVar1 = D3D8__D3D_g_pDevice;
  uVar3 = in_EAX;
  if (D3D8__D3D_g_pDevice[0xdb] == 0) {
    uVar3 = in_EAX + 1;
  }
  if ((uVar3 & 3) != 0) {
    piVar2 = (int *)*D3D8__D3D_g_pDevice;
    if ((int *)D3D8__D3D_g_pDevice[1] <= piVar2) {
      piVar2 = (int *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    *piVar2 = (uVar3 * 0x10 + param_1) * 4 + 0x41ad0;
    piVar2[1] = param_2;
    *puVar1 = piVar2 + 2;
  }
  (&D3D_g_DeferredTextureState)[in_EAX * 0x20 + param_1] = param_2;
  return;
}
