/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A85FDA3FAE61406EEA338E4F87E8B157B9BC51603C87D29D6C4F59B0D6F24040
 * Entry: 0x00242fd0, Ghidra index: 8044, label: FUN_00242fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00242fd0(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x18) != 0) {
    FUN_0024a730(*(int *)(in_EAX + 0x18),*(undefined4 *)(in_EAX + 0x1c),in_EAX + 0x14);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 0x18));
  }
  *(undefined4 *)(in_EAX + 0x18) = 0;
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  *(undefined4 *)(in_EAX + 0x20) = 0;
  if (*(int *)(in_EAX + 8) != 0) {
    FUN_0024a6f0(in_EAX + 4);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 8));
  }
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  return;
}
