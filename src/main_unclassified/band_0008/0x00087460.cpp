/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E47B5A83FDD91ECB0EF27F52C5209FAAF031D36704A0A308306F33BF2C26EF1
 * Entry: 0x00087460, Ghidra index: 1614, label: FUN_00087460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original guest32 heap-free dispatch at 0x002EA018; direct caller
 * stack/register preservation and guest-memory ABI unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_00087460(void)

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
    in_EAX = in_EAX + 0x1c;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
}
