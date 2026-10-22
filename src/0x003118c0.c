/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90DBA64871E25A845AE25349F2CCDD4DC596472F64E8758A2C9E6FAFE315F379
 * Entry: 0x003118c0, Ghidra index: 11896, label: FUN_003118c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003118c0(int *param_1)

{
  if ((int *)*param_1 != param_1) {
    ((int *)*param_1)[1] = param_1[1];
    *(int *)param_1[1] = *param_1;
    param_1[1] = (int)param_1;
    *param_1 = (int)param_1;
  }
  return;
}
