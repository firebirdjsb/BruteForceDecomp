/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49EDF0203C450941F6FEF14A8F10D7996674506B76FD26101CC04465A50D1278
 * Entry: 0x00174bd0, Ghidra index: 4919, label: FUN_00174bd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00174bd0(void)

{
  int in_EAX;
  
  (**(code **)(**(int **)(in_EAX + 0x74) + 0x5c))(*(int **)(in_EAX + 0x74));
  if (*(int *)(in_EAX + 0x98) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x98));
  }
  *(undefined4 *)(in_EAX + 0x98) = 0;
  *(undefined4 *)(in_EAX + 0x9c) = 0;
  *(undefined4 *)(in_EAX + 0xa0) = 0;
  *(undefined1 *)(in_EAX + 0x7c) = 0;
  FUN_00174e70();
  return;
}
