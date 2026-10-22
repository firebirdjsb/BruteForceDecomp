/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 52BCBE7245003AED35B118A1585C7F170D4D40240C2518264BA6DA84C826B634
 * Entry: 0x0036c740, Ghidra index: 13280, label: D3DResource_Release
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint D3D8LTCG__D3DResource_Release(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 0xffff) == 1) {
    if (((uVar1 & 0x70000) == 0x50000) && (param_1[5] != 0)) {
      D3DResource_Release(param_1[5]);
    }
    uVar1 = *param_1;
    if ((uVar1 & 0x780000) == 0) {
      D3D_DestroyResource__LTCG();
      return 0;
    }
  }
  *param_1 = uVar1 - 1;
  return uVar1 - 1 & 0xffff;
}
