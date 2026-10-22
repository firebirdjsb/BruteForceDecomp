/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 29E8975BF9FABE2877B08065E39A376B45580A2F48CB1F92F4C901A086E35898
 * Entry: 0x0023cb10, Ghidra index: 7940, label: FUN_0023cb10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0023cb10(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x38;
    param_4 = param_4 + -0x38;
    FUN_0023c960();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
