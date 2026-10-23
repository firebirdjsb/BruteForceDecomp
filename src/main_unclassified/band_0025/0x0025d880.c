/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E15B4AF8376AD8D6BD10BBE873C59BA03249057D053F61A63FE8168CB3A1D219
 * Entry: 0x0025d880, Ghidra index: 8573, label: FUN_0025d880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025d880(void)

{
  char cVar1;
  int *piVar2;
  int *in_EAX;
  
  piVar2 = (int *)*in_EAX;
  cVar1 = *(char *)((int)piVar2 + 0x25);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x25);
  }
  return;
}
