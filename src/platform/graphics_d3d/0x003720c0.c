/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1793333B649B479F84B4E87CBE31019543B4DBEE892D23869879B89D619B6BA
 * Entry: 0x003720c0, Ghidra index: 13391, label: D3D_BlockOnResource_0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
void D3D8LTCG__D3D_BlockOnResource_0(void)

{
  uint *puVar1;
  uint *in_EAX;
  
  if (D3D8__D3D_g_pDevice != 0) {
    if ((((*in_EAX & 0x70000) == 0x50000) && (puVar1 = (uint *)in_EAX[5], puVar1 != (uint *)0x0)) &&
       (((*in_EAX & 0x780000) != 0 ||
        ((in_EAX = puVar1, puVar1 != (uint *)0x0 && ((*puVar1 & 0x780000) != 0)))))) {
      D3D_BlockOnTime(*(undefined4 *)(D3D8__D3D_g_pDevice + 0x2c),2);
      return;
    }
    if (((*in_EAX & 0x780000) != 0) ||
       ((((*in_EAX & 0x70000) == 0x50000 && ((uint *)in_EAX[5] != (uint *)0x0)) &&
        ((*(uint *)in_EAX[5] & 0x780000) != 0)))) {
      D3D_BlockOnTime(*(undefined4 *)(D3D8__D3D_g_pDevice + 0x2c),2);
      return;
    }
    if (in_EAX[2] != 0) {
      D3D_BlockOnTime(in_EAX[2],0x10);
    }
  }
  return;
}
