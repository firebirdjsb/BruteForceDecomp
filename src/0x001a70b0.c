/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BE4D7508D7450372ADE4B0429E2ACC29EFAB17A0E545982FC23A037129CD144B
 * Entry: 0x001a70b0, Ghidra index: 5388, label: FUN_001a70b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001a70b0(void)

{
  int in_EAX;
  
  if (in_EAX == 0) {
    return;
  }
  if (0xf < *(uint *)(in_EAX + 0x140)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 300));
  }
  *(undefined4 *)(in_EAX + 0x140) = 0xf;
  *(undefined4 *)(in_EAX + 0x13c) = 0;
  *(undefined1 *)(in_EAX + 300) = 0;
  FUN_00160220();
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
