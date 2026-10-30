/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E9ECC467C8D8883CD1434C7B81176036F8E8E2B22E85E1C79B34AF1F462B1099
 * Entry: 0x0036f160, Ghidra index: 13322, label: D3DDevice_SelectVertexShader_0__LTCG_eax1_ebx2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037dd90;
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SelectVertexShader_0__LTCG_eax1_ebx2(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_EAX;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 unaff_EBX;
  
  puVar2 = D3D8__D3D_g_pDevice;
  if (in_EAX != 0) {
    puVar5 = (undefined4 *)D3D8__D3D_g_pDevice[1];
    D3D8__D3D_g_pDevice[0xe0] = in_EAX;
    puVar3 = (undefined4 *)*puVar2;
    DAT_0037dd90 = DAT_0037dd90 | 0x1070;
    puVar2[0xdf] = in_EAX + -1;
    if (puVar5 <= puVar3) {
      puVar3 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    uVar1 = *(uint *)(in_EAX + 3);
    *puVar3 = 0x81e94;
    puVar3[1] = 6;
    puVar3[2] = uVar1 & 1;
    uVar4 = FUN_00370f90();
    *puVar2 = uVar4;
  }
  puVar5 = (undefined4 *)*puVar2;
  if ((undefined4 *)puVar2[1] <= puVar5) {
    puVar5 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar5 = 0x41ea0;
  puVar5[1] = unaff_EBX;
  *puVar2 = puVar5 + 2;
  puVar2[0xe1] = unaff_EBX;
  return;
}
