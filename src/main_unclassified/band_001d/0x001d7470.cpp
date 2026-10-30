/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7FB8F6DC8C7BE9A7066F675117C32E755A8A36B6028649583CCA2DE883AE53F0
 * Entry: 0x001d7470, Ghidra index: 6395, label: FUN_001d7470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d7470(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xf) {
    *in_EAX = *param_1;
    FUN_0001f4f0(param_1 + 1,0,0xffffffff);
    in_EAX[8] = param_1[8];
    in_EAX[9] = param_1[9];
    in_EAX[10] = param_1[10];
    FUN_0010bc40();
    in_EAX = in_EAX + 0xf;
  }
  return in_EAX;
}
