/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 759B50444EB4277700398DB5C7C6A7F73BA3F63F3A79F718525CCBE0ACC49270
 * Entry: 0x001d8920, Ghidra index: 6435, label: FUN_001d8920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001d8920(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_4 = param_4 + -0x1a8;
    param_3 = param_3 + -0x1a8;
    FUN_001d26f0();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
