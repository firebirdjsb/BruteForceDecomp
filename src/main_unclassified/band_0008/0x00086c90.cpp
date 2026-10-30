/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E80D47B3AFE5167EFBE6E065539F8C59202AECDA09D907F086D9A7930CAD2951
 * Entry: 0x00086c90, Ghidra index: 1597, label: FUN_00086c90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00086c90(void)

{
  int in_EAX;
  int unaff_EDI;
  
  while( true ) {
    if (in_EAX == unaff_EDI) {
      return;
    }
    if (7 < *(uint *)(in_EAX + 0x18)) break;
    *(undefined4 *)(in_EAX + 0x18) = 7;
    *(undefined4 *)(in_EAX + 0x14) = 0;
    *(undefined2 *)(in_EAX + 4) = 0;
    in_EAX = in_EAX + 0x24;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
}
