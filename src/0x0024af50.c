/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D1E32FB3A3C9C75A5758D8E2BD8093695C216A4849A35C4FE97F5FED0AB8FCEA
 * Entry: 0x0024af50, Ghidra index: 8239, label: FUN_0024af50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0024af50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    *in_EAX = *param_1;
    FUN_0001f4f0(param_1 + 1,0,0xffffffff);
    *(undefined1 *)(in_EAX + 8) = *(undefined1 *)(param_1 + 8);
    in_EAX = in_EAX + 9;
  }
  return in_EAX;
}
