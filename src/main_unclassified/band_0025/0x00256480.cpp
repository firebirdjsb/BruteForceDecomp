/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C10AC8D3825DEE733180D1CDD05C946DFD4FF6F3ADDB7AF5D42212B36586388
 * Entry: 0x00256480, Ghidra index: 8440, label: FUN_00256480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00256480(void)

{
  int *piVar1;
  int *in_EAX;
  int *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 1) {
    piVar1 = (int *)*in_EAX;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *in_EAX = 0;
    }
  }
  return;
}
