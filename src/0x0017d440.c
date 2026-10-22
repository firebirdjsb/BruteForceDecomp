/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CAFEDCCBA9607CD7A71FCD111B4964CCA62F325004C709047828EEB49E5308C9
 * Entry: 0x0017d440, Ghidra index: 5068, label: FUN_0017d440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017d440(void)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  
  iVar2 = *(int *)(in_EAX + 8);
  cVar1 = *(char *)(iVar2 + 0x81);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x81);
  }
  return;
}
