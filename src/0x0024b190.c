/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA08B93DE4AAB91BD6B095EAFC28DD13F578C6EA46B3B497DF27C056D14E47C4
 * Entry: 0x0024b190, Ghidra index: 8245, label: FUN_0024b190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0024b190(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x2c;
    param_4 = param_4 + -0x2c;
    FUN_00249a90(param_4,param_3);
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
