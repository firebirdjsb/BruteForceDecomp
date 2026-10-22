/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B74829163BB8072825950BBA920003DAE2B2FBB3AEF96D8536F59A9A6E494770
 * Entry: 0x001d8fe0, Ghidra index: 6452, label: FUN_001d8fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001d8fe0(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x24;
    param_4 = param_4 + -0x24;
    FUN_001d2d60(param_4);
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
