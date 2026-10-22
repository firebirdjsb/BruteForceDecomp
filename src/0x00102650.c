/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0C6C831004E73E732AAD14EA5172717079D41521F3128917135C0974B99B7F7
 * Entry: 0x00102650, Ghidra index: 3273, label: FUN_00102650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00102650(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 100) != 0) {
    FUN_000762d0(in_EAX + 0x60);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 100));
  }
  *(undefined4 *)(in_EAX + 100) = 0;
  *(undefined4 *)(in_EAX + 0x68) = 0;
  *(undefined4 *)(in_EAX + 0x6c) = 0;
  return 1;
}
