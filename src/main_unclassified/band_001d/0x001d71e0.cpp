/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19C44EABE8555C6DC227833F955274F07D99CE11F6F2F693CFCED44C8BD4F2C8
 * Entry: 0x001d71e0, Ghidra index: 6392, label: FUN_001d71e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001d71e0(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x10;
    param_4 = param_4 + -0x10;
    FUN_001d1d40(param_4);
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
