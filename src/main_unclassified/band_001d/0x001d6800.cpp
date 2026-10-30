/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41D0E733FCE9D887EB4726C79EBB7EC94A0B8D2FE0978057C364985550F34C76
 * Entry: 0x001d6800, Ghidra index: 6365, label: FUN_001d6800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d6800(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    in_EAX = in_EAX + 3;
  }
  return;
}
