/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92CC841FD78DC239539A459FAA671D634581626DBE7EF9DCB51F3293CBC82ADB
 * Entry: 0x00238160, Ghidra index: 7866, label: FUN_00238160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00238160(void)

{
  int iVar1;
  int *piVar2;
  int *unaff_ESI;
  
  iVar1 = unaff_ESI[6];
  while (iVar1 != 0) {
    piVar2 = (int *)unaff_ESI[6];
    unaff_ESI[6] = *piVar2;
    *piVar2 = 0;
    piVar2[1] = 0;
    iVar1 = unaff_ESI[6];
  }
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  iVar1 = unaff_ESI[8];
  while (iVar1 != 0) {
    piVar2 = (int *)unaff_ESI[8];
    unaff_ESI[8] = *piVar2;
    *piVar2 = 0;
    piVar2[1] = 0;
    iVar1 = unaff_ESI[8];
  }
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0;
  if (*unaff_ESI != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*unaff_ESI);
  }
  *unaff_ESI = 0;
  if (unaff_ESI[1] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[1]);
  }
  unaff_ESI[1] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[4] = 0;
  return;
}
