/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1CE4FFB5B1D8CD03C033FAF10C46F55353582341A9FB61869A33B4D05AE616C5
 * Entry: 0x00139ba0, Ghidra index: 3963, label: FUN_00139ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00139ba0(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    piVar1 = (int *)(param_4 + -0x2c);
    param_4 = param_4 + -0x2c;
    param_3 = param_3 + -0x2c;
    (**(code **)(*piVar1 + 4))(param_3);
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
