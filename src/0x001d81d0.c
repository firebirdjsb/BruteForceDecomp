/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7AF4C1774533DF4358863DFF2EC9545D0488756AA86213502193A69A46A3CA23
 * Entry: 0x001d81d0, Ghidra index: 6421, label: FUN_001d81d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001d81d0(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_4 = param_4 + -0x44;
    param_3 = param_3 + -0x44;
    FUN_001d1e30(param_4);
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
