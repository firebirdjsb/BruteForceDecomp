/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2ECE38390B4AFB0D95C315D4AAD02887C0511FED5E37CFF2203E76C2DF98F423
 * Entry: 0x001d8580, Ghidra index: 6427, label: FUN_001d8580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001d8580(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x3d4;
    param_4 = param_4 + -0x3d4;
    FUN_001d1fb0(param_3);
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
