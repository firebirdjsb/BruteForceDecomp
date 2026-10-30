/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C6483BFB2611FFE8280AD5BF67007746CAE47880BF357E4A94DAFD8F052C4C35
 * Entry: 0x002e5920, Ghidra index: 10480, label: FUN_002e5920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e5920(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x34) == '\0') {
    return 0;
  }
  return in_ECX + 0x38;
}
