/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7708C7F7626566EEA82979345B09123EAC3037F52132D17CED41A9744C51AA3B
 * Entry: 0x001a69b0, Ghidra index: 5370, label: FUN_001a69b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001a69b0(void)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  
  if (unaff_EBX == 0) {
    return;
  }
  iVar2 = *(int *)(unaff_EBX + 4);
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EBX + 4) = 0;
    *(undefined4 *)(unaff_EBX + 8) = 0;
    *(undefined4 *)(unaff_EBX + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  iVar1 = *(int *)(unaff_EBX + 8);
  for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
    FUN_000e35e0(0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EBX + 4));
}
