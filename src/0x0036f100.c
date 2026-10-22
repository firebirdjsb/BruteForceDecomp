/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2235A240D09DBCDFE7FE29EE7FAE6C4F62DF172340B2E15C5A0F09AF246F4B2F
 * Entry: 0x0036f100, Ghidra index: 13321, label: D3DDevice_SelectVertexShaderDirect_0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ba24;
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SelectVertexShaderDirect_0(void)

{
  undefined4 in_EAX;
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = D3D8__D3D_g_pDevice;
  if (in_ECX != (undefined4 *)0x0) {
    puVar3 = &DAT_0037ba24;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *in_ECX;
      in_ECX = in_ECX + 1;
      puVar3 = puVar3 + 1;
    }
    D3DDevice_SelectVertexShader_0__LTCG_eax1_ebx2();
    return;
  }
  puVar1 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar1) {
    puVar1 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar1 = 0x41ea0;
  puVar1[1] = in_EAX;
  puVar3[0xe1] = in_EAX;
  *puVar3 = puVar1 + 2;
  return;
}
