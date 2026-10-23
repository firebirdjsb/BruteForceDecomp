/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A898CFF6D24F0C1AE5842D200300301ACA75323D928A5593717C3E1ADDE60C11
 * Entry: 0x000233a0, Ghidra index: 222, label: FUN_000233a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000233a0(void)

{
  int in_ECX;
  uint unaff_ESI;
  
  if (((-1 < (int)unaff_ESI) && (*(int *)(in_ECX + 4) != 0)) &&
     (unaff_ESI < (uint)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x18))) {
    return 1;
  }
  return 0;
}
