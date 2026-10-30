/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5AED71D0C938FA7A2E20105C2935A0977292A9D870A9741F0DC1D7AC9856FF0F
 * Entry: 0x001d7dd0, Ghidra index: 6411, label: FUN_001d7dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d7dd0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    in_EAX = in_EAX + 4;
  }
  return;
}
