/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 691C2002D83769046DAA440F87F7A066387678B681E90D0597BF54D48D751744
 * Entry: 0x0015e4b0, Ghidra index: 4547, label: FUN_0015e4b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0015e4b0(void)

{
  int *piVar1;
  int *unaff_ESI;
  int *unaff_EDI;
  
  piVar1 = (int *)*unaff_ESI;
  if (piVar1 != unaff_EDI) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *unaff_ESI = 0;
    }
    *unaff_ESI = (int)unaff_EDI;
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 4))();
    }
  }
  return *unaff_ESI;
}
