/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 601DF151802ADBC0189E901976670BB9D19B0350F230B095CDE550437E1258E2
 * Entry: 0x001810f0, Ghidra index: 5143, label: FUN_001810f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001810f0(void)

{
  char cVar1;
  int *piVar2;
  int *in_EAX;
  
  piVar2 = (int *)*in_EAX;
  cVar1 = *(char *)((int)piVar2 + 0x41);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x41);
  }
  return;
}
