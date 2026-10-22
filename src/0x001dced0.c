/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3528C7CE62478E6592786C6C46489892F055FDA0DBEE043B00335FA79FCD489E
 * Entry: 0x001dced0, Ghidra index: 6602, label: FUN_001dced0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dced0(void)

{
  int *piVar1;
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *unaff_EDI;
    piVar1 = (int *)unaff_EDI[1];
    in_EAX[1] = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    FUN_001cb7b0(in_EAX + 2);
  }
  return;
}
