/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 051EDCCF20689B10BFBE9A53757609D30AC448E54098D7F81AFAAEAF2235CFFB
 * Entry: 0x002d5d00, Ghidra index: 10231, label: FUN_002d5d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d5d00(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *unaff_ESI;
  
  iVar1 = *unaff_ESI;
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    piVar2 = (int *)*unaff_ESI;
    if (piVar2 != (int *)0x0) break;
    iVar1 = *unaff_ESI;
  }
  piVar3 = (int *)piVar2[1];
  iVar1 = *piVar2;
  if (piVar3 == (int *)0x0) {
    *unaff_ESI = iVar1;
    if (iVar1 == 0) {
      unaff_ESI[1] = 0x501502f9;
    }
    else {
      *(undefined4 *)(iVar1 + 4) = 0;
      unaff_ESI[1] = *(int *)(iVar1 + 8);
    }
  }
  else {
    *piVar3 = iVar1;
    if (iVar1 != 0) {
      *(int **)(iVar1 + 4) = piVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar2);
}
