/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 30532709CC61DA6945260AAA77CCEAC4C4B01ACA97DBD39A5361F42D6057C875
 * Entry: 0x00314a1f, Ghidra index: 12078, label: FUN_00314a1f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00314a1f(uint param_1)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 4) = *(uint *)(in_ECX + 4) | param_1;
  return;
}
