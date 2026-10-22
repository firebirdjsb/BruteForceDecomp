/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FB37FFC1E06F452E2078CD0FAFF8D2311A1B497FF5217BAF6D02C19B0CD7E67B
 * Entry: 0x0001c550, Ghidra index: 110, label: FUN_0001c550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001c550(void)

{
  char cVar1;
  int *piVar2;
  int *in_EAX;
  
  piVar2 = (int *)*in_EAX;
  cVar1 = *(char *)((int)piVar2 + 0xa9);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xa9);
  }
  return;
}
