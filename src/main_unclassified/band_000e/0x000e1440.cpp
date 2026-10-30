/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFAA354C19DA693504CE00A3A0AB9B7CDBF4B8069A5E0219A4F4D37DC6B82CC2
 * Entry: 0x000e1440, Ghidra index: 2770, label: FUN_000e1440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e1440(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x7c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x7c));
  }
  *(undefined4 *)(in_EAX + 0x7c) = 0;
  *(undefined4 *)(in_EAX + 0x80) = 0;
  *(undefined4 *)(in_EAX + 0x84) = 0;
  if (*(int *)(in_EAX + 0x6c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x6c));
  }
  *(undefined4 *)(in_EAX + 0x6c) = 0;
  *(undefined4 *)(in_EAX + 0x70) = 0;
  *(undefined4 *)(in_EAX + 0x74) = 0;
  if (*(int *)(in_EAX + 0x5c) != 0) {
    FUN_0027cc10(in_EAX + 0x58);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 0x5c));
  }
  *(undefined4 *)(in_EAX + 0x5c) = 0;
  *(undefined4 *)(in_EAX + 0x60) = 0;
  *(undefined4 *)(in_EAX + 100) = 0;
  if (*(int *)(in_EAX + 0x4c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x4c));
  }
  *(undefined4 *)(in_EAX + 0x4c) = 0;
  *(undefined4 *)(in_EAX + 0x50) = 0;
  *(undefined4 *)(in_EAX + 0x54) = 0;
  if (*(int *)(in_EAX + 0x3c) != 0) {
    FUN_000e2d20(*(int *)(in_EAX + 0x3c),*(undefined4 *)(in_EAX + 0x40),in_EAX + 0x38);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 0x3c));
  }
  *(undefined4 *)(in_EAX + 0x3c) = 0;
  *(undefined4 *)(in_EAX + 0x40) = 0;
  *(undefined4 *)(in_EAX + 0x44) = 0;
  return;
}
