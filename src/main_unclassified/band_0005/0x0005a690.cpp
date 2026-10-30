/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8CC9D17E4BAFDD59A500BFB0AB7AEF03BD704E13169149333A921386C804C1A2
 * Entry: 0x0005a690, Ghidra index: 904, label: FUN_0005a690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6e0(std::uint32_t guest_edx);

void FUN_0005a690(void)

{
  int *piVar1;
  int *piVar2;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_EDI + 4);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*piVar1;
  }
  if (piVar2 != piVar1) {
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    if (piVar2[3] != 0) {
      FUN_0008f6e0();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piVar2);
  }
  return;
}
