/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0B7A3D5ED2978541A701834E48681F95297565CAEEE199F99F32AB15A09308B
 * Entry: 0x000627f0, Ghidra index: 1062, label: FUN_000627f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000627f0(void)

{
  int *piVar1;
  int *in_EAX;
  int *piVar2;
  int *unaff_EDI;
  
  if (in_EAX != unaff_EDI) {
    piVar2 = in_EAX + 1;
    do {
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar2 = 0;
      }
      piVar1 = piVar2 + 1;
      piVar2 = piVar2 + 2;
    } while (piVar1 != unaff_EDI);
  }
  return;
}
