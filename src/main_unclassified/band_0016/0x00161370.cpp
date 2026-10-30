/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5E218430F3A213E98721F53D44B97DB977D193E6EE6D4B52FBDCED118F0DAB4
 * Entry: 0x00161370, Ghidra index: 4604, label: FUN_00161370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00161370(void)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x1ac) {
    FUN_001604c0();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EBX + 4));
}
