/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C6F422C24BFC68B8247120949C4B8EB2A499D179EB2F27968A11BE626416343D
 * Entry: 0x000a7d20, Ghidra index: 1998, label: FUN_000a7d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a7d20(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_EDX;
  
  piVar4 = (int *)*in_EDX;
  if (*(char *)((int)piVar4 + 0x19) != '\0') {
    *in_EDX = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x19) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x19);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x19);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *in_EDX = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x19) == '\0') {
    do {
      if (*in_EDX != *piVar4) break;
      *in_EDX = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x19) == '\0');
    if (*(char *)((int)piVar4 + 0x19) == '\0') {
      *in_EDX = (int)piVar4;
    }
  }
  return;
}
