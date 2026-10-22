/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24D63D89430D7C5506C145A6E401F626D88FB692E44C8D63B50216087AB0DD83
 * Entry: 0x0004b760, Ghidra index: 615, label: FUN_0004b760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0004b760(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x10;
    param_4 = param_4 + -0x10;
    FUN_0010bc40();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
