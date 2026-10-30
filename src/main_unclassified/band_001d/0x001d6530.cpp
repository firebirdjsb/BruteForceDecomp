/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14723EB8853FEF174204D0AAE0D69B1A84FC2AA7655013C030DD046A057F29D1
 * Entry: 0x001d6530, Ghidra index: 6356, label: FUN_001d6530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d6530(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    FUN_0010bc40();
    in_EAX = in_EAX + 8;
  }
  return in_EAX;
}
