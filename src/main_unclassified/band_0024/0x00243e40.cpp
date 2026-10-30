/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64E811CE324F57EFB7FF68095F9E928E4976F2EEB3BF355E7AB3A6AB4727E714
 * Entry: 0x00243e40, Ghidra index: 8064, label: FUN_00243e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00243e40(void)

{
  int iVar1;
  int *unaff_EDI;
  
  iVar1 = *unaff_EDI;
  if (iVar1 == 0) {
    *unaff_EDI = 0;
    return;
  }
  FUN_00243560();
  if (0xf < *(uint *)(iVar1 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(iVar1 + 0x10));
  }
  *(undefined4 *)(iVar1 + 0x24) = 0xf;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined1 *)(iVar1 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar1);
}
