/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 74CCA7B94C7F03D1046331CA0F5E69BBCD134F8A2C573C001765045B8BFC1B2C
 * Entry: 0x002e56e0, Ghidra index: 10475, label: FUN_002e56e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e56e0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x2c) = param_1;
  *(undefined4 *)(in_ECX + 0x30) = param_2;
  return 0;
}
