/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D0EC741B918427AB07B894D0503E70C2D8E307F46AE8344FCD0CE4536FA2DCC
 * Entry: 0x001d92a0, Ghidra index: 6459, label: FUN_001d92a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001d92a0(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_4 = param_4 + -0x6c;
    param_3 = param_3 + -0x6c;
    FUN_001d2de0(param_4);
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
