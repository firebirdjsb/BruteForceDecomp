/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F4B900391378DFAE1D32FCFD0BE1F290BF12BE6B79E765E93D88C454403408E5
 * Entry: 0x0017c240, Ghidra index: 5044, label: FUN_0017c240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0017c240(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x24;
}
