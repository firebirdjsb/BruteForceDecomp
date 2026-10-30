/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D7DA382700655F4D8B2DCDD3735803D7C991CA59B0CAE99455F7882A35765C1
 * Entry: 0x000907d0, Ghidra index: 1773, label: FUN_000907d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000907d0(void)

{
  int *piVar1;
  undefined4 unaff_ESI;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_EDI + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x38))(piVar1);
    FUN_00090800(unaff_EDI,unaff_ESI);
    return;
  }
  FUN_00062280();
  FUN_00090800(unaff_EDI,unaff_ESI);
  return;
}
