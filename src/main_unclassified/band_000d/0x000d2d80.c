/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2FD835D5DDDF0A7108D13E862E5CEFD9AF013B5A452692E593BF03403C0D01FB
 * Entry: 0x000d2d80, Ghidra index: 2622, label: FUN_000d2d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d2d80(void)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *in_EDX;
  
  if (in_EAX != (undefined4 *)0x0) {
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *in_EAX = *in_EDX;
      in_EDX = in_EDX + 1;
      in_EAX = in_EAX + 1;
    }
  }
  return;
}
