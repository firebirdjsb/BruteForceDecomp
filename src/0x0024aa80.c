/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 22226E145ECFB9E73B27816194EF0D4BADE2BB6D6BFA3BF16AC8AD9EEE4C0103
 * Entry: 0x0024aa80, Ghidra index: 8225, label: FUN_0024aa80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0024aa80(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    puVar1 = (undefined4 *)(param_3 + -0x14);
    param_3 = param_3 + -0x14;
    param_4 = param_4 + -5;
    *param_4 = *puVar1;
    FUN_0010bc40();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
