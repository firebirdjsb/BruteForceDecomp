/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8589B6726F12FFCC30E24BF9B703AD5B36F5FE958FB44B398BF3D87B915ACF02
 * Entry: 0x0025dde0, Ghidra index: 8581, label: FUN_0025dde0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025dde0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *in_EDX;
  
  iVar2 = *in_EDX;
  if (*(char *)(iVar2 + 0x25) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x25) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x25);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x25);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *in_EDX = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x25);
    while ((cVar1 == '\0' && (*in_EDX == *(int *)(iVar2 + 8)))) {
      *in_EDX = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x25);
    }
    *in_EDX = iVar2;
  }
  return;
}
