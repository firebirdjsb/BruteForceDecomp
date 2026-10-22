/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CB892618A1E3B9B1518DC645D1B75A1D5BFB5B9BA59963DDA75296B571065E91
 * Entry: 0x001d8c90, Ghidra index: 6443, label: FUN_001d8c90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001d8c90(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_4 = param_4 + -0x1ac;
    param_3 = param_3 + -0x1ac;
    FUN_001d29d0();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
