/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E945A86206E9B4901F3631DED512414FF06A5B87AAA2E84BFB3AF558E749BB89
 * Entry: 0x00371bc0, Ghidra index: 13385, label: FUN_00371bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint * FUN_00371bc0(void)

{
  uint *puVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_8;
  uint local_4;
  
  uVar3 = D3D8__D3D_g_pDevice[0xb];
  uVar2 = uVar3 - in_EAX;
  if (0x80 < uVar2) {
    local_4 = D3D8__D3D_g_pDevice[0xd];
    in_EAX = uVar3;
    if (uVar3 - *(int *)(D3D8__D3D_g_pDevice[0x12] + local_4 * 0xc) <= uVar2) {
      do {
        local_4 = local_4 + 1 & D3D8__D3D_g_pDevice[0xe];
      } while (uVar2 < uVar3 - *(int *)(D3D8__D3D_g_pDevice[0x12] + local_4 * 0xc));
      goto LAB_00371c65;
    }
  }
  uVar2 = in_EAX >> 1 & 0x3f;
  if (uVar2 != 0xffffffff) {
    uVar4 = D3D8__D3D_g_pDevice[uVar2 * 3 + 0x14];
    if (uVar4 <= *D3D8__D3D_g_pDevice) {
      uVar4 = uVar4 + D3D8__D3D_g_pDevice[0x10];
    }
    uVar5 = uVar3 >> 1 & 0x3f;
    uVar3 = uVar2 + 1 & 0x3f;
    if (uVar3 != uVar5) {
      while( true ) {
        uVar6 = D3D8__D3D_g_pDevice[uVar3 * 3 + 0x14];
        if (uVar6 <= *D3D8__D3D_g_pDevice) {
          uVar6 = uVar6 + D3D8__D3D_g_pDevice[0x10];
        }
        if (uVar6 < uVar4) break;
        uVar3 = uVar3 + 1 & 0x3f;
        if (uVar3 == uVar5) {
          return D3D8__D3D_g_pDevice + uVar2 * 3 + 0x13;
        }
      }
      return (uint *)0x0;
    }
    return D3D8__D3D_g_pDevice + uVar2 * 3 + 0x13;
  }
LAB_00371c65:
  uVar3 = D3D8__D3D_g_pDevice[0x12];
  local_8 = *(uint *)(uVar3 + 4 + local_4 * 0xc);
  puVar1 = (uint *)(uVar3 + local_4 * 0xc);
  if (local_8 <= *D3D8__D3D_g_pDevice) {
    local_8 = local_8 + D3D8__D3D_g_pDevice[0x10];
  }
  uVar2 = D3D8__D3D_g_pDevice[0xe];
  uVar5 = D3D8__D3D_g_pDevice[0xd] + 1 & uVar2;
  uVar4 = local_4 + 1 & uVar2;
  if (uVar4 != uVar5) {
    while( true ) {
      uVar6 = *(uint *)(uVar3 + 4 + uVar4 * 0xc);
      if (uVar6 <= *D3D8__D3D_g_pDevice) {
        uVar6 = uVar6 + D3D8__D3D_g_pDevice[0x10];
      }
      if (uVar6 < local_8) break;
      uVar4 = uVar4 + 1 & uVar2;
      if (uVar4 == uVar5) {
        return puVar1;
      }
    }
    return (uint *)0x0;
  }
  return puVar1;
}
