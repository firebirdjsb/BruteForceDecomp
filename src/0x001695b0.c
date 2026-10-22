/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B2DA6C701E3F4DA58CFC7FFC5D9CA7E5EDAB01E029648A371E137BE85D24CB0
 * Entry: 0x001695b0, Ghidra index: 4750, label: FUN_001695b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_001695b0(void)

{
  int *piVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int in_ECX;
  bool bVar5;
  
  piVar1 = *(int **)(in_EAX + 4);
  bVar5 = true;
  iVar3 = *(int *)(in_ECX + 4);
  if ((*(uint *)(piVar1[3] + 0xa8) >> 0xb & 1) == 0) {
    if ((*(byte *)(iVar3 + 0x7d8) & 3) != 0) {
      iVar3 = (**(code **)(*piVar1 + 0x13c))();
      return iVar3 == 0;
    }
    iVar4 = (**(code **)(*piVar1 + 0x13c))();
    if ((((iVar4 == 0) || (*(int *)(piVar1[3] + 4) == 0x18)) &&
        ((*(byte *)((int)piVar1 + 0x26) & 0x20) != 0)) &&
       (((*(byte *)(iVar3 + 0x70) & 1) == 0 && (iVar3 != piVar1[0xf])))) {
      iVar4 = piVar1[0x1b];
      cVar2 = FUN_00039360();
      if (cVar2 != '\0') {
        if (*(int *)(iVar4 + 0x10) != 0) {
          iVar4 = *(int *)(iVar4 + 8);
        }
        iVar3 = *(int *)(iVar3 + 0x6c);
        if (*(int *)(iVar3 + 0x10) != 0) {
          iVar3 = *(int *)(iVar3 + 8);
        }
        bVar5 = iVar4 != iVar3;
      }
      return bVar5;
    }
  }
  return false;
}
