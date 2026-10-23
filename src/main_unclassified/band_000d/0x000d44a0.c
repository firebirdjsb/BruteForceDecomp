/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A398A8BDFF38B3C5FADE8891311644B69B43F29BFCDA3B40C48D5E14CDEC847C
 * Entry: 0x000d44a0, Ghidra index: 2650, label: FUN_000d44a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000d44a0(void)

{
  int in_EAX;
  
  if ((*(byte *)(in_EAX + 0x7d8) & 3) == 0) {
    return 0;
  }
  return 1;
}
