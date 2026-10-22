/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4DF823DD5B6D5A03ACB5BFD8089EA1A0344E889AF8D5C92DB3AC1CA098050ECC
 * Entry: 0x001dcc20, Ghidra index: 6585, label: FUN_001dcc20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dcc20(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *in_EDX;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *in_EDX;
  }
  return;
}
