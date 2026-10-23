/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AC2606DF02A591B938184DDA9F3AE35C6C1EEEB159FA14825DDB2587D4F42213
 * Entry: 0x001d8f30, Ghidra index: 6450, label: FUN_001d8f30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001d8f30(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x70;
    param_4 = param_4 + -0x70;
    FUN_001d2cf0();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
