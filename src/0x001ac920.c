/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B570638627E12E2F82DFFF3D2759D78D7834FC4A59B39DAE4018248C63E7D6D
 * Entry: 0x001ac920, Ghidra index: 5528, label: FUN_001ac920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ac920(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_EDI;
  
  if (in_EAX != 0) {
    if (*unaff_EDI == 0) {
      FUN_001b1630();
      iVar1 = FUN_002ea01d(0x164);
      if (iVar1 != 0) {
        iVar1 = FUN_001b5d60();
        *unaff_EDI = iVar1;
        FUN_000e1350();
        return;
      }
      *unaff_EDI = 0;
      FUN_000e1350();
    }
    return;
  }
  iVar1 = *unaff_EDI;
  if (iVar1 != 0) {
    FUN_000e1350();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  *unaff_EDI = 0;
  return;
}
