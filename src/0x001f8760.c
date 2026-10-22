/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB755A74233967987D6E6F8EAF764B98D701A21C625BEA49344D21368852AD14
 * Entry: 0x001f8760, Ghidra index: 7066, label: FUN_001f8760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f8760(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_EDI + 0x20);
  if (iVar2 != 0) {
    iVar1 = *(int *)(unaff_EDI + 0x24);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
      FUN_000e35e0(0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x20));
  }
  *(undefined4 *)(unaff_EDI + 0x20) = 0;
  *(undefined4 *)(unaff_EDI + 0x24) = 0;
  *(undefined4 *)(unaff_EDI + 0x28) = 0;
  iVar2 = *(int *)(unaff_EDI + 0x10);
  if (iVar2 != 0) {
    iVar1 = *(int *)(unaff_EDI + 0x14);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
      FUN_000e35e0(0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x10));
  }
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  *(undefined4 *)(unaff_EDI + 0x18) = 0;
  return;
}
