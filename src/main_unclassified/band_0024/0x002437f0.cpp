/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B8B0F3EE8B40FEA73C4430A379D71700CADB033925875BE5A48AE8FA31F6F94
 * Entry: 0x002437f0, Ghidra index: 8055, label: FUN_002437f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002437f0(void)

{
  int iVar1;
  int *unaff_EDI;
  
  iVar1 = *unaff_EDI;
  if (iVar1 == 0) {
    *unaff_EDI = 0;
    return;
  }
  if (*(int *)(iVar1 + 4) != 0) {
    FUN_0024a7b0(*(undefined4 *)(iVar1 + 8),iVar1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(iVar1 + 4));
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar1);
}
