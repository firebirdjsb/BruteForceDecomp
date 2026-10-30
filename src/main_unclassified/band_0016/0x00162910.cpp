/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 596BD0B4D27DB3025236DD25CD2D783DF886317662CB33C9398518AE91A855F1
 * Entry: 0x00162910, Ghidra index: 4650, label: FUN_00162910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00162910(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x128;
}
