/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E96E024D15760D832B0C4B8226D7A9AD54114711F39561C0D1A6BF2D926AC43
 * Entry: 0x002418d0, Ghidra index: 8018, label: FUN_002418d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002418d0(void)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = unaff_ESI[4];
  if (iVar1 != 0) {
    FUN_002440e0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  unaff_ESI[4] = 0;
  if (unaff_ESI[3] != 0) {
    FUN_00241710(1);
  }
  unaff_ESI[3] = 0;
  FUN_00243e40();
  FUN_00243de0();
  iVar1 = *unaff_ESI;
  if (iVar1 != 0) {
    FUN_00241810();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  *unaff_ESI = 0;
  return;
}
