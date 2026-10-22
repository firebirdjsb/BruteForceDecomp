/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 244243E1AEAA915EB31B0EF3B8294E5A7FBA63F873D58856A57F22C3FD8AAC25
 * Entry: 0x000e6c70, Ghidra index: 2863, label: FUN_000e6c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
uint FUN_000e6c70(undefined4 param_1,undefined4 *param_2)

{
  uint *extraout_ECX;
  uint *puVar1;
  
  puVar1 = *(uint **)(D3D8__D3D_g_pDevice + 0x15b8);
  if (puVar1 != (uint *)0x0) {
    if ((((*puVar1 & 0xffff) == 0) && ((*puVar1 & 0x70000) == 0x50000)) && (puVar1[5] != 0)) {
      D3D8LTCG__D3DResource_AddRef(puVar1[5]);
      puVar1 = extraout_ECX;
    }
    *puVar1 = *puVar1 + 1;
  }
  *param_2 = puVar1;
  return (puVar1 != (uint *)0x0) - 1 & 0x88760866;
}
