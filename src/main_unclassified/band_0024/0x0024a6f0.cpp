/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0732FE1357EE8F54FC6E5BC198BA50FF8351F987823FAC6B93CA334D078E8825
 * Entry: 0x0024a6f0, Ghidra index: 8214, label: FUN_0024a6f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Free-thunk single guest DWORD is known; full original call ABI is not. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_0024a6f0(void)

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
    in_EAX = in_EAX + 0x14;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(int *)(in_EAX + 4));
}
