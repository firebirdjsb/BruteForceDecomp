/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90523CF5B85232FCEA0D9EAB0A8333F3AE3F84B635960EB4BE531EC38143A094
 * Entry: 0x00249130, Ghidra index: 8153, label: FUN_00249130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00249130(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *in_ECX;
    param_1[1] = in_ECX[1];
    param_1[2] = in_ECX[2];
    param_1[3] = in_ECX[3];
  }
  return;
}
