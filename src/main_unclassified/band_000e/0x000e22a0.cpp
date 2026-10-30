/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C81B86E9364CF22A600DE73DF0A410D0532230BAB4F7A287FF07CC8AF7FFFCF0
 * Entry: 0x000e22a0, Ghidra index: 2789, label: FUN_000e22a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e22a0(void)

{
  int in_EAX;
  int unaff_EBX;
  
  for (; in_EAX != unaff_EBX; in_EAX = in_EAX + 0x44) {
    FUN_00068c90();
  }
  return;
}
