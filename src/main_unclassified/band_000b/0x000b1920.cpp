/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7688201F3F03C59234CA0100E6E9DB7EF3F5830EB790E47F61D0E153F2B5DB5F
 * Entry: 0x000b1920, Ghidra index: 2124, label: FUN_000b1920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b1920(void)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *in_EDX;
  
  if (in_EAX != (undefined4 *)0x0) {
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *in_EAX = *in_EDX;
      in_EDX = in_EDX + 1;
      in_EAX = in_EAX + 1;
    }
  }
  return;
}
