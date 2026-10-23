/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B6902BE59F3C6F1B4D385A98045B6262A1E795746F7D90D9475F35B3B052B210
 * Entry: 0x0014cc90, Ghidra index: 4346, label: FUN_0014cc90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014cc90(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x1ac) != 0) {
    (**(code **)(**(int **)(*(int *)(unaff_EDI + 0x1d4) + 0x5a4) + 0x6c))
              (*(int *)(unaff_EDI + 0x1ac));
    if (*(undefined4 **)(unaff_EDI + 0x1ac) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(unaff_EDI + 0x1ac))(1);
    }
  }
  iVar1 = (**(code **)(**(int **)(*(int *)(unaff_EDI + 0x1d4) + 0x5a4) + 0x68))();
  *(int *)(unaff_EDI + 0x1ac) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = unaff_EDI;
    if (*(int *)(iVar1 + 0x10) != 0) {
      FUN_0008f6a0(0);
    }
    (**(code **)(**(int **)(*(int *)(unaff_EDI + 0x1d4) + 0x5a4) + 0x5c))
              (*(undefined4 *)(unaff_EDI + 0x1ac));
  }
  return;
}
