/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 526F31C7F906D86E6D145ED2D1EC419723A776FBFF6E47ADC57A0B3A4D25BEDF
 * Entry: 0x000d1970, Ghidra index: 2604, label: FUN_000d1970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d1970(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *unaff_EDI;
  
  puVar1 = (undefined4 *)unaff_EDI[1];
  piVar2 = (int *)puVar1[0x1f];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x24))(1);
  }
  if ((*unaff_EDI != 0) && (*unaff_EDI != -1)) {
    FUN_00235b40();
    iVar3 = *unaff_EDI;
    if (iVar3 != 0) {
      FUN_00235ac0();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar3);
    }
    *unaff_EDI = -1;
  }
  unaff_EDI[1] = 0;
  *unaff_EDI = -1;
  return;
}
