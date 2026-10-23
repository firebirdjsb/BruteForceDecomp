/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54DE6D90DE5605AD022CA32933A4DDA70B4FEF18555E9C28B72A20A61DBF62C7
 * Entry: 0x001aa5c0, Ghidra index: 5492, label: FUN_001aa5c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001aa5c0(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_ESI;
  
  if (in_EAX != 0) {
    if (*unaff_ESI == 0) {
      iVar1 = FUN_002ea01d(0x28,0);
      if (iVar1 != 0) {
        iVar1 = FUN_001b5c60();
        *unaff_ESI = iVar1;
        return;
      }
      *unaff_ESI = 0;
    }
    return;
  }
  if (*unaff_ESI != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*unaff_ESI);
  }
  *unaff_ESI = 0;
  return;
}
