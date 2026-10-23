/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35981A247C2F2CF6930E962C13EAE80BAEA1C659F4F83E07809479BA6FA87D71
 * Entry: 0x001d8710, Ghidra index: 6430, label: FUN_001d8710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001d8710(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x124;
    param_4 = param_4 + -0x124;
    FUN_001d23b0();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
