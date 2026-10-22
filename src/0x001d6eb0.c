/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A05811369E1FC93D6F0C438E7E7A431A3825560A4EFA8C55582E13CF86329EA8
 * Entry: 0x001d6eb0, Ghidra index: 6383, label: FUN_001d6eb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d6eb0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

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
    FUN_001d4120();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
