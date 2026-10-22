/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 806DF090883B2536F96E973DA8AAEAB81E49DFD2FA51A4B0887DD35DC8247AA5
 * Entry: 0x001d9560, Ghidra index: 6467, label: FUN_001d9560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d9560(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    FUN_001b0100();
    if (param_1[2] != 0) {
      FUN_001cd7d0(param_1[2]);
    }
    in_EAX = in_EAX + 3;
  }
  return in_EAX;
}
