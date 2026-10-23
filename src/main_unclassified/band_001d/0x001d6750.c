/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8337BA3D9F46A8E277452266F4793F4AA4ABFB7DB91BA61D72490F220DB2EEA7
 * Entry: 0x001d6750, Ghidra index: 6363, label: FUN_001d6750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d6750(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    in_EAX[4] = param_1[4];
    in_EAX[5] = param_1[5];
    in_EAX[6] = param_1[6];
    in_EAX = in_EAX + 7;
  }
  return;
}
