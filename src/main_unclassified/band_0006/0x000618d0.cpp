/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BAA5DACA98E69D531ECCDB4CA4C7DDCB5C15A3BC92E78CE82276BC361C398B79
 * Entry: 0x000618d0, Ghidra index: 1028, label: FUN_000618d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000618d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_EAX;
  
  if (param_1 == param_2) {
    *in_EAX = param_3;
    return;
  }
  do {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_1 = param_1 + 2;
    param_3 = param_3 + 2;
  } while (param_1 != param_2);
  *in_EAX = param_3;
  return;
}
