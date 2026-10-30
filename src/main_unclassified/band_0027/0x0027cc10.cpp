/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 02593D2431562114F1E21003E6736F7AE9791DFD48716C806A4C5057F00FD588
 * Entry: 0x0027cc10, Ghidra index: 8993, label: FUN_0027cc10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Guest32 free-thunk symbol and single word are modeled; ABI unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_0027cc10(void)

{
  int in_EAX;
  int unaff_EBX;
  
  while( true ) {
    if (in_EAX == unaff_EBX) {
      return;
    }
    if (*(int *)(in_EAX + 4) != 0) break;
    *(undefined4 *)(in_EAX + 4) = 0;
    *(undefined4 *)(in_EAX + 8) = 0;
    *(undefined4 *)(in_EAX + 0xc) = 0;
    in_EAX = in_EAX + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(int *)(in_EAX + 4));
}
