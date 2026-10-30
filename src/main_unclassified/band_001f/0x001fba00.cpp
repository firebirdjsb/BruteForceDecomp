/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6089F54A7406F36AEC07C11C36DD096E43EBEB2D932044FA6964895702066FA7
 * Entry: 0x001fba00, Ghidra index: 7122, label: FUN_001fba00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001fba00(void)

{
  int in_EAX;
  
  if (*(int **)(in_EAX + 0x24) == (int *)0x0) {
    return 8;
  }
  return **(int **)(in_EAX + 0x24) + 8;
}
