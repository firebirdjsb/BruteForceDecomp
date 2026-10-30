/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1DB54EC32D0D96B37857824C93286B31011E7C00A6DFDEC4D2B1E1FD50A90A7
 * Entry: 0x001e0820, Ghidra index: 6711, label: FUN_001e0820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001e0820(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    *in_EAX = *param_1;
    FUN_001d4290(param_1 + 1);
    in_EAX = in_EAX + 5;
  }
  return in_EAX;
}
