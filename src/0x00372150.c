/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B4AB1E312DC830C4DD366F11C02BC18B23237B8F22E50D3D0C30BB683AB8ED4
 * Entry: 0x00372150, Ghidra index: 13392, label: FUN_00372150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00372150(void)

{
  uint *in_ECX;
  
  if (D3D8__D3D_g_pDevice != 0) {
    if ((*in_ECX & 0x780000) != 0) {
      D3D8LTCG__D3D_BlockOnTime(*(undefined4 *)(D3D8__D3D_g_pDevice + 0x2c),2);
      return;
    }
    if (in_ECX[2] != 0) {
      D3D8LTCG__D3D_BlockOnTime(in_ECX[2],0x10);
    }
  }
  return;
}
