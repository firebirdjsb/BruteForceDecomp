/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D9650E91A1DEED74220BFEE4B2A32485F40E88CBB22715AB532A74171139F99
 * Entry: 0x0033f199, Ghidra index: 12639, label: FUN_0033f199
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0033f199(int param_1,undefined4 *param_2)

{
  for (; (param_2 != (undefined4 *)0x0 && (param_2[1] != param_1)); param_2 = (undefined4 *)*param_2
      ) {
  }
  return -(uint)(param_2 != (undefined4 *)0x0) & (uint)(param_2 + 1);
}
