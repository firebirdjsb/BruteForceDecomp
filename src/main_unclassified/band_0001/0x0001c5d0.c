/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EDBDBD5B077DD1C16FEC4DB2454BE20E29274339119EA7C391DAB7DBC9420966
 * Entry: 0x0001c5d0, Ghidra index: 112, label: FUN_0001c5d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001c5d0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *in_EDX;
  
  iVar2 = *in_EDX;
  if (*(char *)(iVar2 + 0xa9) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0xa9) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0xa9);
      piVar4 = (int *)*piVar3;
      while (piVar5 = piVar4, cVar1 == '\0') {
        piVar4 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar4 + 0xa9);
        piVar3 = piVar5;
      }
      *in_EDX = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0xa9);
    while ((cVar1 == '\0' && (*in_EDX == *(int *)(iVar2 + 8)))) {
      *in_EDX = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0xa9);
    }
    *in_EDX = iVar2;
  }
  return;
}
