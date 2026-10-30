/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2228FDCC7F7EAD4DD2B6DB606D219026F58EA102A2F26321D6A6237BF97CAFCA
 * Entry: 0x002adc80, Ghidra index: 9700, label: FUN_002adc80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002adc80(void)

{
  int *piVar1;
  int *unaff_ESI;
  int *unaff_EDI;
  
  if (unaff_ESI != (int *)0x0) {
    piVar1 = (int *)*unaff_EDI;
    *unaff_ESI = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    unaff_ESI[1] = unaff_EDI[1];
    unaff_ESI[2] = unaff_EDI[2];
    unaff_ESI[3] = unaff_EDI[3];
  }
  return;
}
