/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99D4E9BE3ED65DEEDA172C73579AAA45775FE331FDE022649216B3894665B962
 * Entry: 0x001d7060, Ghidra index: 6388, label: FUN_001d7060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001d7060(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x10;
    param_4 = param_4 + -0x10;
    FUN_001d4590();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
