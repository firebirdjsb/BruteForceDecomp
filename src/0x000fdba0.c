/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4A9B8FAD052113FCA9378886E50F87088BB0993C487B722502F92F32AE44F17
 * Entry: 0x000fdba0, Ghidra index: 3175, label: FUN_000fdba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000fdba0(void)

{
  undefined4 *puVar1;
  int *unaff_ESI;
  int *unaff_EDI;
  
  if (*unaff_EDI == 0) {
    if (*unaff_ESI != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*unaff_ESI);
    }
    *unaff_ESI = 0;
  }
  else if (*unaff_ESI == 0) {
    puVar1 = (undefined4 *)FUN_002ea01d(4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
    }
    *unaff_ESI = (int)puVar1;
  }
  if ((undefined4 *)*unaff_EDI != (undefined4 *)0x0) {
    *(undefined4 *)*unaff_ESI = *(undefined4 *)*unaff_EDI;
  }
  return;
}
