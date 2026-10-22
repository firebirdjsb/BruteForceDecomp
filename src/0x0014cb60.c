/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16AA705255C90CC74786BD0A6BA359BCBD3A04BBDA3BF5701E2788FBF5646900
 * Entry: 0x0014cb60, Ghidra index: 4344, label: FUN_0014cb60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014cb60(int param_1)

{
  int iVar1;
  int unaff_EDI;
  
  if (param_1 == 0) {
    iVar1 = FUN_002ea01d(0xc0);
    if (iVar1 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = FUN_0014bb20();
    }
    if (*(int *)(unaff_EDI + 0x1d8) != 0) {
      FUN_0014bc10();
    }
  }
  if ((*(int *)(unaff_EDI + 0x1b4) != 0) && (*(int *)(unaff_EDI + 0x1b4) != param_1)) {
    FUN_0014c060(param_1,1);
    iVar1 = *(int *)(unaff_EDI + 0x1b4);
    if (*(int *)(iVar1 + 0xb4) == 0) {
      if (*(int *)(*(int *)(unaff_EDI + 0x1d8) + 0xbe0) != 0) {
        FUN_00149e10();
      }
      *(undefined4 *)(iVar1 + 0xb8) = 0;
      if ((*(undefined4 **)(unaff_EDI + 0x1b4) != (undefined4 *)0x0) &&
         ((**(code **)**(undefined4 **)(unaff_EDI + 0x1b4))(1), *(int *)(unaff_EDI + 0x1b4) != 0)) {
        FUN_0008f6a0(0);
      }
    }
  }
  if (*(int *)(unaff_EDI + 0x1b4) != param_1) {
    FUN_0008f6a0(param_1);
  }
  return;
}
