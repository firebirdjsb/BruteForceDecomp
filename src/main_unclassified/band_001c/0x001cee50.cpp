/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 66DEA16E55220E38192037B4A4881AE531F45A0150359486F74A6BDA9F99CD08
 * Entry: 0x001cee50, Ghidra index: 6081, label: FUN_001cee50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cee50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    *param_1 = *in_ECX;
    param_1[1] = in_ECX[1];
    param_1[2] = in_ECX[2];
    param_1[3] = in_ECX[3];
    param_1[4] = in_ECX[4];
    param_1[5] = in_ECX[5];
    param_1[6] = in_ECX[6];
  }
  return;
}
