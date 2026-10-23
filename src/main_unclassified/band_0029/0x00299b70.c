/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D1D668ABCEBACF97D4FF745211D799BE85D6F74A12D8A810609AE6920450881
 * Entry: 0x00299b70, Ghidra index: 9390, label: FUN_00299b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00299b70(void)

{
  undefined1 in_AL;
  int in_EDX;
  int unaff_ESI;
  
  if (0 < in_EDX) {
    *(undefined1 *)(*(int *)(**(int **)(unaff_ESI + 8) + 0x10) + -1 + in_EDX) = in_AL;
    FUN_00299360();
  }
  return;
}
