/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4CF6D72B1E63BEF6FDBF9950F7A38896A21C9A80C451430967747BA67A5B5C1D
 * Entry: 0x001f0050, Ghidra index: 6973, label: FUN_001f0050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_001f0050(void)

{
  int in_ECX;
  char cVar1;
  
  cVar1 = *(int *)(in_ECX + 0xac) != 9;
  if (*(int *)(in_ECX + 0xd8) != 9) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(in_ECX + 0x104) != 9) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(in_ECX + 0x130) != 9) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}
