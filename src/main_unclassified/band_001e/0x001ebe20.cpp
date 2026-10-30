/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34118FA8C5CADF2A593743F82266E1843521B3694031CB2D46301525F6F3EEB5
 * Entry: 0x001ebe20, Ghidra index: 6900, label: FUN_001ebe20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ebe20(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x24))(in_ECX + 0x2c);
  FUN_002e7630(param_1);
  return;
}
