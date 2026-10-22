/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 096505F0A63E4F7306E6AB277D7077C8B7C21895BDDAA44880740BD40E77819E
 * Entry: 0x002b39a0, Ghidra index: 9768, label: FUN_002b39a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b39a0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x18);
  if (iVar1 != 0) {
    FUN_002b5a30();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  iVar1 = FUN_002ea01d(0x48);
  if (iVar1 != 0) {
    uVar2 = FUN_002b5d30(iVar1,unaff_ESI,param_1);
    *(undefined4 *)(unaff_ESI + 0x18) = uVar2;
    return;
  }
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  return;
}
