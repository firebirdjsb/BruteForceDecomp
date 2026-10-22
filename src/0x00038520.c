/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B60F4C77A223EAFE3780033430A7E4415DD08226ED8F4BB35239F830AF414CB3
 * Entry: 0x00038520, Ghidra index: 374, label: FUN_00038520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00038520(void)

{
  int *in_EAX;
  int *in_ECX;
  
  if ((in_ECX[1] == in_EAX[1]) && (*in_ECX == *in_EAX)) {
    return 0;
  }
  return 1;
}
