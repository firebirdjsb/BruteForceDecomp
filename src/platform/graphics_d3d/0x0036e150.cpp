/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC0BC452F9FC535E1B4115C937D1B2FD58667E89A9573E794EA17525F9BDCC5B
 * Entry: 0x0036e150, Ghidra index: 13303, label: D3DDevice_GetBackBuffer2_0__LTCG_eax1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
uint * D3D8LTCG__D3DDevice_GetBackBuffer2_0__LTCG_eax1(void)

{
  int in_EAX;
  uint uVar1;
  uint *extraout_ECX;
  uint *puVar2;
  
  if (in_EAX == -1) {
    uVar1 = 1;
  }
  else {
    uVar1 = -(uint)(in_EAX != 0) & 2;
  }
  puVar2 = *(uint **)(D3D8__D3D_g_pDevice + 0x15c0 + uVar1 * 4);
  if ((((*puVar2 & 0xffff) == 0) && ((*puVar2 & 0x70000) == 0x50000)) && (puVar2[5] != 0)) {
    D3DResource_AddRef(puVar2[5]);
    puVar2 = extraout_ECX;
  }
  *puVar2 = *puVar2 + 1;
  return puVar2;
}
