/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6203F8F98B992E5CB7D7CFAFE6A98D520A153FEB30B94FDC161E960CDC4604F6
 * Entry: 0x00142a80, Ghidra index: 4129, label: FUN_00142a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00142a80(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_EDX;
  
  piVar4 = (int *)*in_EDX;
  if (*(char *)((int)piVar4 + 0x1d) != '\0') {
    *in_EDX = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x1d) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x1d);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x1d);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *in_EDX = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x1d) == '\0') {
    do {
      if (*in_EDX != *piVar4) break;
      *in_EDX = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x1d) == '\0');
    if (*(char *)((int)piVar4 + 0x1d) == '\0') {
      *in_EDX = (int)piVar4;
    }
  }
  return;
}
