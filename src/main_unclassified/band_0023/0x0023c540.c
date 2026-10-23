/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 61FEB313B31A02BBCA20D1BE16BFB9F614A8D53097CB2F68E760C2E3FA0BA3C3
 * Entry: 0x0023c540, Ghidra index: 7929, label: FUN_0023c540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023c540(void)

{
  int *piVar1;
  int *in_EAX;
  int *piVar2;
  int *unaff_EDI;
  
  if (in_EAX != unaff_EDI) {
    piVar2 = in_EAX + 3;
    do {
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar2 = 0;
      }
      piVar1 = piVar2 + 1;
      piVar2 = piVar2 + 4;
    } while (piVar1 != unaff_EDI);
  }
  return;
}
