/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E380B5AB4AEB209C60509FD7713BDDADD476558C426DC84589E888B801F8D52
 * Entry: 0x0006a050, Ghidra index: 1181, label: FUN_0006a050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006a050(void)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  
  iVar2 = *(int *)(unaff_EBX + 4);
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EBX + 4) = 0;
    *(undefined4 *)(unaff_EBX + 8) = 0;
    *(undefined4 *)(unaff_EBX + 0xc) = 0;
    return;
  }
  iVar1 = *(int *)(unaff_EBX + 8);
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x38) {
    FUN_0006a540();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EBX + 4));
}
