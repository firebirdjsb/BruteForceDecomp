/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A02D5BFAA1F8339B6D5303D39C14CE2776EA13D720B5AB1E75E05BC1F323FA80
 * Entry: 0x001ebb80, Ghidra index: 6894, label: FUN_001ebb80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001ebb80(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x2c))(in_ECX + 0x18);
  (**(code **)(*param_1 + 0x24))(in_ECX + 0x1c);
  return param_1[3];
}
