/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 585130DE1D72AA4A5FD80BA9CE46EF0721056799924093FA5A29168500D9FCA1
 * Entry: 0x001d9620, Ghidra index: 6469, label: FUN_001d9620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d9620(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    *in_EAX = *param_1;
    FUN_00087940(in_EAX + 1,0,0xffffffff);
    in_EAX = in_EAX + 8;
  }
  return in_EAX;
}
