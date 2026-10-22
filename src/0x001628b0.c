/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C037EB38E311FE39920D8565EEFC50E9CD4A45F52BE74B1B6C4EB4EE434386CF
 * Entry: 0x001628b0, Ghidra index: 4648, label: FUN_001628b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001628b0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x1ac;
}
