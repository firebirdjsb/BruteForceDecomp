/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 834EF936185689AA207FDC7122FE7499E204DF4234D69B337DEA7432DFDFED91
 * Entry: 0x0017d4c0, Ghidra index: 5071, label: FUN_0017d4c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017d4c0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *in_EDX;
  
  iVar2 = *in_EDX;
  if (*(char *)(iVar2 + 0x81) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x81) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x81);
      piVar4 = (int *)*piVar3;
      while (piVar5 = piVar4, cVar1 == '\0') {
        piVar4 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar4 + 0x81);
        piVar3 = piVar5;
      }
      *in_EDX = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x81);
    while ((cVar1 == '\0' && (*in_EDX == *(int *)(iVar2 + 8)))) {
      *in_EDX = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x81);
    }
    *in_EDX = iVar2;
  }
  return;
}
