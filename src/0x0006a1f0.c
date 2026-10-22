/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2BA8F539D91C84E76676244001B33E3400B47E1563A4CE5DCA9CC584C21C8D5B
 * Entry: 0x0006a1f0, Ghidra index: 1187, label: FUN_0006a1f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006a1f0(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 8) != 0) {
    FUN_000762d0(in_EAX + 4);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 8));
  }
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  return;
}
