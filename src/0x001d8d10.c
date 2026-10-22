/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34516605ED271CDEA11952FAEE67CAC9462A0605005D9506CA6B597A83295DEA
 * Entry: 0x001d8d10, Ghidra index: 6445, label: FUN_001d8d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001d8d10(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x344;
    param_4 = param_4 + -0x344;
    FUN_001d2af0(param_3);
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
