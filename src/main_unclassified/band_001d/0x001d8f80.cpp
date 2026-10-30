/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 982DDBE8BC0F24817711265595D8D40723FED1C51723BD470B4EF4FEA5C2A05D
 * Entry: 0x001d8f80, Ghidra index: 6451, label: FUN_001d8f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d8f80(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  
  if (param_2 == param_3) {
    *param_1 = *param_4;
    return param_1;
  }
  do {
    puVar1 = (undefined4 *)(param_3 + -0x14);
    param_3 = param_3 + -0x14;
    param_4 = param_4 + -5;
    *param_4 = *puVar1;
    FUN_001d59e0();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
