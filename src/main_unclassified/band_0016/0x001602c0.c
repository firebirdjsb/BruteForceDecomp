/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 85B1ABD69522A152AA35B8608C7899A0938AB578116CE098D709E4F67E4E7F17
 * Entry: 0x001602c0, Ghidra index: 4588, label: FUN_001602c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001602c0(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x184) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x184));
  }
  *(undefined4 *)(in_EAX + 0x184) = 0;
  *(undefined4 *)(in_EAX + 0x188) = 0;
  *(undefined4 *)(in_EAX + 0x18c) = 0;
  if (*(int *)(in_EAX + 0x170) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x170));
  }
  *(undefined4 *)(in_EAX + 0x170) = 0;
  *(undefined4 *)(in_EAX + 0x174) = 0;
  *(undefined4 *)(in_EAX + 0x178) = 0;
  FUN_00160220();
  return;
}
