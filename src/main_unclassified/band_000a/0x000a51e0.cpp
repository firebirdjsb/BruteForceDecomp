/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B23E9291A3ABFA1DA4EAB58F5C369C81DFD25C8A39279A041EDF64348021F360
 * Entry: 0x000a51e0, Ghidra index: 1965, label: FUN_000a51e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
undefined4 FUN_000a51e0(void)

{
  int iVar1;
  int in_EDX;
  
  iVar1 = D3D8__D3D_g_pDevice;
  if (in_EDX != 0) {
    *(undefined4 *)(D3D8__D3D_g_pDevice + 0x4e8) = 1;
    *(undefined4 *)(iVar1 + 0x4ec) = 0;
    *(int *)(iVar1 + 0x4f0) = in_EDX;
    D3D8LTCG__D3DDevice_SetPixelShader_0__LTCG_eax_handle();
    return 0;
  }
  D3D8LTCG__D3DDevice_SetPixelShader_0__LTCG_eax_handle();
  return 0;
}
