/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0C0917D7CB5236B5C73BC9D22C732D89E441F7FFBB73B2C99D656FCF86EA370
 * Entry: 0x00335879, Ghidra index: 12435, label: FUN_00335879
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00335879(int param_1)

{
  int in_ECX;
  
  return *(int *)(param_1 * 0xb8 + 0x1318 + in_ECX) != 0;
}
