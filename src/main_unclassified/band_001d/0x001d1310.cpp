/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E8B61E2E5A2F31F1B2A3C686780C7B563348D755D8A560E807172DC756AB170
 * Entry: 0x001d1310, Ghidra index: 6238, label: FUN_001d1310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d1310(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x6c) {
    FUN_001d2de0(param_1);
  }
  return;
}
