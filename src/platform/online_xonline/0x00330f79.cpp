/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 78FFA088B79720CFC330256E3880BE57EA0CB7B60B64EFD9FFBEF1E03F660AEF
 * Entry: 0x00330f79, Ghidra index: 12385, label: FUN_00330f79
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00330f79(void)

{
  int in_ECX;
  bool bVar1;
  
  bVar1 = false;
  if (in_ECX != 0) {
    bVar1 = *(int *)(in_ECX + 0xc4) != 0;
  }
  return bVar1;
}
