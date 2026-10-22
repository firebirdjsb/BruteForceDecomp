/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ABDBF029C1E3AA67B5823F93A1E706ADFBCD3A6590AA733DF1D9B84C7608C3D6
 * Entry: 0x00345477, Ghidra index: 12806, label: FUN_00345477
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00345477(uint param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2 & 0xffff;
  if (uVar1 != 0) {
    param_2 = param_2 + uVar1 + 1;
    do {
      param_2 = param_2 + -1;
      uVar1 = uVar1 - 1;
      if (*param_2 == param_1) {
        return 1;
      }
    } while (uVar1 != 0);
  }
  return 0;
}
