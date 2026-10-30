/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C70EF9EDFD700843D167F748B4801CEACE047E2527D4AC2041924A9A77FB37B0
 * Entry: 0x0006a3d0, Ghidra index: 1196, label: FUN_0006a3d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000e35e0(byte param_1);

void FUN_0006a3d0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x44) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x44));
  }
  *(undefined4 *)(unaff_EDI + 0x44) = 0;
  *(undefined4 *)(unaff_EDI + 0x48) = 0;
  *(undefined4 *)(unaff_EDI + 0x4c) = 0;
  if (*(int *)(unaff_EDI + 0x34) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x34));
  }
  *(undefined4 *)(unaff_EDI + 0x34) = 0;
  *(undefined4 *)(unaff_EDI + 0x38) = 0;
  *(undefined4 *)(unaff_EDI + 0x3c) = 0;
  if (*(int *)(unaff_EDI + 0x2c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x2c));
  }
  *(undefined4 *)(unaff_EDI + 0x2c) = 0;
  iVar2 = *(int *)(unaff_EDI + 0x1c);
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EDI + 0x1c) = 0;
    *(undefined4 *)(unaff_EDI + 0x20) = 0;
    *(undefined4 *)(unaff_EDI + 0x24) = 0;
    if (*(int *)(unaff_EDI + 0x14) == 0) {
      *(undefined4 *)(unaff_EDI + 0x14) = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x14));
  }
  iVar1 = *(int *)(unaff_EDI + 0x20);
  for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
    FUN_000e35e0(0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x1c));
}
