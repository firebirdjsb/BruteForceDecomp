/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54102EE07D216138E785A8D2A1DF34F829C11B4D9B083FA9A4CB30AB081C0696
 * Entry: 0x0036f9f0, Ghidra index: 13330, label: D3DDevice_BeginPushBuffer_0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
void D3D8LTCG__D3DDevice_BeginPushBuffer_0(void)

{
  uint *puVar1;
  uint uVar2;
  uint *unaff_EDI;
  undefined4 uVar3;
  
  puVar1 = D3D8__D3D_g_pDevice;
  CDevice_SetStateVB_8(D3D8__D3D_g_pDevice,0);
  if (D3D8__D3D_g_pDevice != (uint *)0x0) {
    uVar2 = unaff_EDI[2];
    if ((*unaff_EDI & 0x780000) == 0) {
      if (uVar2 == 0) goto LAB_0036fa27;
      uVar3 = 0x10;
    }
    else {
      uVar2 = D3D8__D3D_g_pDevice[0xb];
      uVar3 = 2;
    }
    D3D_BlockOnTime(uVar2,uVar3);
  }
LAB_0036fa27:
  puVar1[0xd4] = 0;
  puVar1[0xd3] = (uint)unaff_EDI;
  *unaff_EDI = *unaff_EDI + 0x80000;
  puVar1[0xd6] = *puVar1;
  puVar1[0xd5] = puVar1[1];
  *puVar1 = unaff_EDI[1];
  puVar1[1] = (unaff_EDI[4] - 0x204) + unaff_EDI[1];
  puVar1[2] = puVar1[2] | 4;
  return;
}
