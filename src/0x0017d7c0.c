/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6844F90AF67C56A0AB39FD3A1FCDC8153606C62E739DCAC5C7060714CC2FA05
 * Entry: 0x0017d7c0, Ghidra index: 5080, label: FUN_0017d7c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0017d7c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    *in_EAX = *param_1;
    FUN_0017c270();
    in_EAX[5] = param_1[5];
    in_EAX = in_EAX + 6;
  }
  return in_EAX;
}
