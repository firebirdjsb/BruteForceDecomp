/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6870B81248E479E1198DF6E6BB917A4090BB35A371635441273DCDE75C1727E
 * Entry: 0x000e0af0, Ghidra index: 2754, label: FUN_000e0af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000e0af0(void)

{
  int iVar1;
  int *in_ECX;
  int in_EDX;
  
  iVar1 = *in_ECX;
  while( true ) {
    if (iVar1 < 0) {
      return 0;
    }
    iVar1 = *in_ECX;
    *in_ECX = iVar1 + -1;
    iVar1 = *(int *)(*(int *)(in_EDX + 0xc) + 4 + iVar1 * 8);
    if (iVar1 != 0) break;
    iVar1 = *in_ECX;
  }
  return iVar1;
}
