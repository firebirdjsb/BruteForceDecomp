/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9C5341E0EF310BBE9A46786FBD51E13EB18D1F8C596F5DE84BABBCB4EA974515
 * Entry: 0x000b1940, Ghidra index: 2125, label: FUN_000b1940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b1940(void)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *in_EDX;
  
  if (in_EAX != (undefined4 *)0x0) {
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *in_EAX = *in_EDX;
      in_EDX = in_EDX + 1;
      in_EAX = in_EAX + 1;
    }
  }
  return;
}
