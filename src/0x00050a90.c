/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 809B9BA99362FDAC21B97D0048ECB83EF8015FFA95ACF44B1523E6AE8CBB5FFC
 * Entry: 0x00050a90, Ghidra index: 718, label: FUN_00050a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00050a90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    in_EAX = in_EAX + 3;
  }
  return;
}
