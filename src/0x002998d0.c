/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A42D3648C31994AC0898539C0528AF82C88D1642C061D71095B90A002D646D1E
 * Entry: 0x002998d0, Ghidra index: 9384, label: FUN_002998d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002998d0(void)

{
  int *piVar1;
  int in_EAX;
  int in_ECX;
  
  piVar1 = *(int **)(in_EAX + 8);
  if (piVar1[7] != -1) {
    for (; in_ECX != 0; in_ECX = in_ECX + -1) {
      *(int *)(*(int *)(*piVar1 + 0x1c) + 4 + (piVar1[7] - in_ECX) * 8) = piVar1[8];
    }
  }
  return;
}
