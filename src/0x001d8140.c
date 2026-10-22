/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A258F026A20E50272CDCB1FAD6FEF50B5A7A278F7E7CEEC1571649651BAE3458
 * Entry: 0x001d8140, Ghidra index: 6419, label: FUN_001d8140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d8140(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    in_EAX[4] = param_1[4];
    in_EAX = in_EAX + 5;
  }
  return;
}
