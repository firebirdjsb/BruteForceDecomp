/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE0C43856F9B13F85ACFDB6DE870B11DF48E033AA2F301AD3F489BE05065CCF4
 * Entry: 0x00160320, Ghidra index: 4589, label: FUN_00160320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00160320(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x338) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x338));
  }
  *(undefined4 *)(unaff_EDI + 0x338) = 0;
  *(undefined4 *)(unaff_EDI + 0x33c) = 0;
  *(undefined4 *)(unaff_EDI + 0x340) = 0;
  if (*(int *)(unaff_EDI + 0x324) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x324));
  }
  *(undefined4 *)(unaff_EDI + 0x324) = 0;
  *(undefined4 *)(unaff_EDI + 0x328) = 0;
  *(undefined4 *)(unaff_EDI + 0x32c) = 0;
  if (*(int *)(unaff_EDI + 0x2fc) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x2fc));
  }
  *(undefined4 *)(unaff_EDI + 0x2fc) = 0;
  *(undefined4 *)(unaff_EDI + 0x300) = 0;
  *(undefined4 *)(unaff_EDI + 0x304) = 0;
  if (*(int *)(unaff_EDI + 0x2e8) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x2e8));
  }
  *(undefined4 *)(unaff_EDI + 0x2e8) = 0;
  *(undefined4 *)(unaff_EDI + 0x2ec) = 0;
  *(undefined4 *)(unaff_EDI + 0x2f0) = 0;
  if (*(int *)(unaff_EDI + 0x2c8) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x2c8));
  }
  *(undefined4 *)(unaff_EDI + 0x2c8) = 0;
  *(undefined4 *)(unaff_EDI + 0x2cc) = 0;
  *(undefined4 *)(unaff_EDI + 0x2d0) = 0;
  if (*(int *)(unaff_EDI + 0x2b0) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x2b0));
  }
  *(undefined4 *)(unaff_EDI + 0x2b0) = 0;
  *(undefined4 *)(unaff_EDI + 0x2b4) = 0;
  *(undefined4 *)(unaff_EDI + 0x2b8) = 0;
  if (*(int *)(unaff_EDI + 0x2a0) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x2a0));
  }
  *(undefined4 *)(unaff_EDI + 0x2a0) = 0;
  *(undefined4 *)(unaff_EDI + 0x2a4) = 0;
  *(undefined4 *)(unaff_EDI + 0x2a8) = 0;
  iVar2 = *(int *)(unaff_EDI + 0x23c);
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EDI + 0x23c) = 0;
    *(undefined4 *)(unaff_EDI + 0x240) = 0;
    *(undefined4 *)(unaff_EDI + 0x244) = 0;
    iVar2 = *(int *)(unaff_EDI + 0x22c);
    if (iVar2 == 0) {
      *(undefined4 *)(unaff_EDI + 0x22c) = 0;
      *(undefined4 *)(unaff_EDI + 0x230) = 0;
      *(undefined4 *)(unaff_EDI + 0x234) = 0;
      FUN_001602c0();
      return;
    }
    iVar1 = *(int *)(unaff_EDI + 0x230);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
      FUN_000e35e0(0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x22c));
  }
  iVar1 = *(int *)(unaff_EDI + 0x240);
  for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
    FUN_000e35e0(0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x23c));
}
