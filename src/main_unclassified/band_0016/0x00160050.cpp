/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B06E3B0C368F7755EE8C50E1EE92B4523CDFFA1728D0303C1D2D4BA0CB381550
 * Entry: 0x00160050, Ghidra index: 4585, label: FUN_00160050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00160050(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x3a0) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x3a0));
  }
  *(undefined4 *)(unaff_EDI + 0x3a0) = 0;
  *(undefined4 *)(unaff_EDI + 0x3a4) = 0;
  *(undefined4 *)(unaff_EDI + 0x3a8) = 0;
  if (0xf < *(uint *)(unaff_EDI + 0x390)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x37c));
  }
  *(undefined4 *)(unaff_EDI + 0x390) = 0xf;
  *(undefined4 *)(unaff_EDI + 0x38c) = 0;
  *(undefined1 *)(unaff_EDI + 0x37c) = 0;
  if (*(int *)(unaff_EDI + 800) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 800));
  }
  *(undefined4 *)(unaff_EDI + 800) = 0;
  *(undefined4 *)(unaff_EDI + 0x324) = 0;
  *(undefined4 *)(unaff_EDI + 0x328) = 0;
  iVar2 = *(int *)(unaff_EDI + 0x19c);
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EDI + 0x19c) = 0;
    *(undefined4 *)(unaff_EDI + 0x1a0) = 0;
    *(undefined4 *)(unaff_EDI + 0x1a4) = 0;
    if (0xf < *(uint *)(unaff_EDI + 0x15c)) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x148));
    }
    *(undefined4 *)(unaff_EDI + 0x15c) = 0xf;
    *(undefined4 *)(unaff_EDI + 0x158) = 0;
    *(undefined1 *)(unaff_EDI + 0x148) = 0;
    if (*(uint *)(unaff_EDI + 0x140) < 0x10) {
      *(undefined4 *)(unaff_EDI + 0x140) = 0xf;
      *(undefined4 *)(unaff_EDI + 0x13c) = 0;
      *(undefined1 *)(unaff_EDI + 300) = 0;
      FUN_00160220();
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 300));
  }
  iVar1 = *(int *)(unaff_EDI + 0x1a0);
  for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
    FUN_000e35e0(0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x19c));
}
