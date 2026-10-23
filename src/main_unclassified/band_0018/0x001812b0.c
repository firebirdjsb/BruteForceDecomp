/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9D60EC65022DFB24F7DCC43145FA61C55DDA25C21EBA6D98EBFC2C27DFAD8F1
 * Entry: 0x001812b0, Ghidra index: 5147, label: FUN_001812b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001812b0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_EDX;
  
  piVar4 = (int *)*in_EDX;
  if (*(char *)((int)piVar4 + 0x41) != '\0') {
    *in_EDX = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x41) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x41);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x41);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *in_EDX = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x41) == '\0') {
    do {
      if (*in_EDX != *piVar4) break;
      *in_EDX = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x41) == '\0');
    if (*(char *)((int)piVar4 + 0x41) == '\0') {
      *in_EDX = (int)piVar4;
    }
  }
  return;
}
