/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE99DF174B543881F2ADFC7F7FF08C4CC55E86789573A463D66B91CE020C7076
 * Entry: 0x0024cc90, Ghidra index: 8297, label: FUN_0024cc90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0024cc90(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_1[7] != 0) {
    FUN_0024cb80();
  }
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
  return uVar1;
}
