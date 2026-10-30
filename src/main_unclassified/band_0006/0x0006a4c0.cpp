/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AF1C332E75C8F6D0B5880BC45E521D28F52B27CCD57FA32C0E3111902B0211A9
 * Entry: 0x0006a4c0, Ghidra index: 1198, label: FUN_0006a4c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000e35e0(byte param_1);

void FUN_0006a4c0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x2c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x2c));
  }
  *(undefined4 *)(unaff_EDI + 0x2c) = 0;
  if (*(int *)(unaff_EDI + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x28));
  }
  *(undefined4 *)(unaff_EDI + 0x28) = 0;
  iVar2 = *(int *)(unaff_EDI + 0x1c);
  if (iVar2 != 0) {
    iVar1 = *(int *)(unaff_EDI + 0x20);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
      FUN_000e35e0(0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x1c));
  }
  *(undefined4 *)(unaff_EDI + 0x1c) = 0;
  *(undefined4 *)(unaff_EDI + 0x20) = 0;
  *(undefined4 *)(unaff_EDI + 0x24) = 0;
  if (*(int *)(unaff_EDI + 0x14) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x14));
  }
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  return;
}
