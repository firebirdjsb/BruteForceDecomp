/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7EEBD76FFC2D8414C930CB8CB5F16F42A9688ABD193E68ED15E678373D18B67E
 * Entry: 0x001e0aa0, Ghidra index: 6715, label: FUN_001e0aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e0aa0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    in_EAX[4] = param_1[4];
    in_EAX[5] = param_1[5];
    in_EAX[6] = param_1[6];
    in_EAX[7] = param_1[7];
    in_EAX[8] = param_1[8];
    in_EAX = in_EAX + 9;
  }
  return;
}
