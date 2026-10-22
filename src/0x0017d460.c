/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC696F0366C83E02D0BD4896B0CA37F12AF723ED8F68857719A741FE44BFD796
 * Entry: 0x0017d460, Ghidra index: 5069, label: FUN_0017d460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017d460(void)

{
  char cVar1;
  int *piVar2;
  int *in_EAX;
  
  piVar2 = (int *)*in_EAX;
  cVar1 = *(char *)((int)piVar2 + 0x81);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x81);
  }
  return;
}
