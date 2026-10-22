/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 31639887543F486E758B942119BCBFA8B7FADE85B815D28B517295A09A3FED81
 * Entry: 0x001b4ff0, Ghidra index: 5665, label: FUN_001b4ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001b4ff0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4)) / 0x70;
}
