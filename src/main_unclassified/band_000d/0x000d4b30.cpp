/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6624392322C6CEEC5AB16402CA699555B1A33D67CA7AED5E6A18623EAF4D59C
 * Entry: 0x000d4b30, Ghidra index: 2657, label: FUN_000d4b30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000e35e0(byte param_1);
extern void FUN_000e12a0(void);
extern void FUN_000e1350(void);

void FUN_000d4b30(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0xe4) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0xe4));
  }
  *(undefined4 *)(unaff_EDI + 0xe4) = 0;
  *(undefined4 *)(unaff_EDI + 0xe8) = 0;
  *(undefined4 *)(unaff_EDI + 0xec) = 0;
  if (*(int *)(unaff_EDI + 0xdc) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0xdc));
  }
  *(undefined4 *)(unaff_EDI + 0xdc) = 0;
  iVar2 = *(int *)(unaff_EDI + 0xd0);
  if (iVar2 != 0) {
    iVar1 = *(int *)(unaff_EDI + 0xd4);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
      FUN_000e35e0(0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0xd0));
  }
  *(undefined4 *)(unaff_EDI + 0xd0) = 0;
  *(undefined4 *)(unaff_EDI + 0xd4) = 0;
  *(undefined4 *)(unaff_EDI + 0xd8) = 0;
  iVar2 = *(int *)(unaff_EDI + 0xc);
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EDI + 0xc) = 0;
    iVar2 = *(int *)(unaff_EDI + 8);
    if (iVar2 == 0) {
      *(undefined4 *)(unaff_EDI + 8) = 0;
      return;
    }
    FUN_000e12a0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2);
  }
  FUN_000e1350();
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar2);
}
