/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 410859FCCBAAC161A6E959A829835549A6EB1F327493CEB5B19D2D4AA8506C50
 * Entry: 0x001dc7b0, Ghidra index: 6554, label: FUN_001dc7b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001dc7b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    *in_EAX = *param_1;
    FUN_001d59e0();
    in_EAX = in_EAX + 5;
  }
  return in_EAX;
}
