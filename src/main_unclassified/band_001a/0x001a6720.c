/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AFDBEBF6C4E54F8D1B5FD0DB919EEA72BD9000C2C5A052485494F1B5C5A2C25D
 * Entry: 0x001a6720, Ghidra index: 5361, label: FUN_001a6720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a6720(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x134;
}
