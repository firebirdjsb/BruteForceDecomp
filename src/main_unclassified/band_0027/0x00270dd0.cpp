/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C6256B14628E62147483E2E7A8718F2169479FCFDEBEA7168C8F7F3E569DD3DB
 * Entry: 0x00270dd0, Ghidra index: 8801, label: FUN_00270dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00270dd0(void)

{
  char cVar1;
  int *piVar2;
  int *in_EAX;
  
  piVar2 = (int *)*in_EAX;
  cVar1 = *(char *)((int)piVar2 + 0x2d);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x2d);
  }
  return;
}
