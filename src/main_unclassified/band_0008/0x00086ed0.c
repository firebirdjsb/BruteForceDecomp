/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E7FD443C5A25467390ADACB99677E4379D43DA1B16B5451A91D90B4E54EC92FF
 * Entry: 0x00086ed0, Ghidra index: 1602, label: FUN_00086ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00086ed0(void)

{
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 100) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 100));
  }
  *(undefined4 *)(unaff_EDI + 100) = 0;
  if (*(int *)(unaff_EDI + 0x58) != 0) {
    FUN_000870c0(*(int *)(unaff_EDI + 0x58),*(undefined4 *)(unaff_EDI + 0x5c),unaff_EDI + 0x54);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x58));
  }
  *(undefined4 *)(unaff_EDI + 0x58) = 0;
  *(undefined4 *)(unaff_EDI + 0x5c) = 0;
  *(undefined4 *)(unaff_EDI + 0x60) = 0;
  if (*(int *)(unaff_EDI + 0x48) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x48));
  }
  *(undefined4 *)(unaff_EDI + 0x48) = 0;
  if (*(int *)(unaff_EDI + 0x3c) != 0) {
    FUN_00087190(*(undefined4 *)(unaff_EDI + 0x40),unaff_EDI + 0x38);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x3c));
  }
  *(undefined4 *)(unaff_EDI + 0x3c) = 0;
  *(undefined4 *)(unaff_EDI + 0x40) = 0;
  *(undefined4 *)(unaff_EDI + 0x44) = 0;
  if (*(int *)(unaff_EDI + 0x2c) != 0) {
    FUN_00087190(*(undefined4 *)(unaff_EDI + 0x30),unaff_EDI + 0x28);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x2c));
  }
  *(undefined4 *)(unaff_EDI + 0x2c) = 0;
  *(undefined4 *)(unaff_EDI + 0x30) = 0;
  *(undefined4 *)(unaff_EDI + 0x34) = 0;
  FUN_00086fe0();
  return;
}
