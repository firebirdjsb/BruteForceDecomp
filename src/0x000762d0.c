/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F476A3E63374FAE8406A6992588B75E21191B97CFBC7E271054E8D79A51A5981
 * Entry: 0x000762d0, Ghidra index: 1368, label: FUN_000762d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000762d0(void)

{
  int in_EAX;
  int unaff_EDI;
  
  while( true ) {
    if (in_EAX == unaff_EDI) {
      return;
    }
    if (0xf < *(uint *)(in_EAX + 0x18)) break;
    *(undefined4 *)(in_EAX + 0x18) = 0xf;
    *(undefined4 *)(in_EAX + 0x14) = 0;
    *(undefined1 *)(in_EAX + 4) = 0;
    in_EAX = in_EAX + 0x1c;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
}
