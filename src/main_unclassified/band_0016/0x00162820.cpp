/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7933F0B1CB1AF17376AC045EE5F9DCA25B0E16B30274B5EBBD5682DB5633FE69
 * Entry: 0x00162820, Ghidra index: 4645, label: FUN_00162820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00162820(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x88;
}
