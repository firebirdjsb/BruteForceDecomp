/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FFEF81F866F69CA1ACA3C8B3E5DCF0D7813573D26C1BC5AC4E1E2CFE5EF9F3B3
 * Entry: 0x00153e80, Ghidra index: 4429, label: FUN_00153e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00153e80(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x54;
}
