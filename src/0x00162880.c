/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F64CC2CFFD10E9DE1AC237D3FA2E9A392D3F32B0ECC640FE48517242D6111BDE
 * Entry: 0x00162880, Ghidra index: 4647, label: FUN_00162880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00162880(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x368;
}
