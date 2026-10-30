/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6FBEC35E770D84B856A1EE1271F7669F5E648D9500460D94073F599EAF0CEBE9
 * Entry: 0x00180d60, Ghidra index: 5140, label: FUN_00180d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00180d60(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *in_EDX;
  
  iVar2 = *in_EDX;
  if (*(char *)(iVar2 + 0x41) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x41) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x41);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x41);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *in_EDX = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x41);
    while ((cVar1 == '\0' && (*in_EDX == *(int *)(iVar2 + 8)))) {
      *in_EDX = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x41);
    }
    *in_EDX = iVar2;
  }
  return;
}
