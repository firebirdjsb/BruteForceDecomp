/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2863D1AEB6FB177C111264A789647624F683105427EA53FF9DFB9476B67C72C5
 * Entry: 0x002db300, Ghidra index: 10279, label: FUN_002db300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002db300(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EDX;
  int iVar4;
  int iVar5;
  
  iVar4 = 1;
  iVar3 = 0;
  if (1 < *(int *)(in_EDX + 0x44)) {
    do {
      iVar5 = *(int *)(in_EDX + 0x34);
      iVar1 = *(int *)(iVar5 + iVar3 * 4);
      iVar2 = *(int *)(iVar5 + iVar4 * 4);
      if (*(float *)(*(int *)(in_EDX + 0x1c) + iVar1 * 4) <
          *(float *)(*(int *)(in_EDX + 0x1c) + iVar2 * 4)) {
        *(int *)(iVar5 + iVar3 * 4) = iVar2;
        *(int *)(*(int *)(in_EDX + 0x34) + iVar4 * 4) = iVar1;
        *(int *)(*(int *)(in_EDX + 0x38) + iVar2 * 4) = iVar3;
        *(int *)(*(int *)(in_EDX + 0x38) + iVar1 * 4) = iVar4;
        while (0 < iVar3) {
          iVar5 = *(int *)(in_EDX + 0x34);
          iVar1 = *(int *)(iVar5 + -4 + iVar3 * 4);
          iVar2 = *(int *)(iVar5 + iVar3 * 4);
          if (*(float *)(*(int *)(in_EDX + 0x1c) + iVar2 * 4) <=
              *(float *)(*(int *)(in_EDX + 0x1c) + iVar1 * 4)) break;
          *(int *)(iVar5 + iVar3 * 4) = iVar1;
          *(int *)(*(int *)(in_EDX + 0x34) + -4 + iVar3 * 4) = iVar2;
          *(int *)(*(int *)(in_EDX + 0x38) + iVar1 * 4) = iVar3;
          iVar3 = iVar3 + -1;
          *(int *)(*(int *)(in_EDX + 0x38) + iVar2 * 4) = iVar3;
        }
      }
      iVar5 = iVar4 + 1;
      iVar3 = iVar4;
      iVar4 = iVar5;
    } while (iVar5 < *(int *)(in_EDX + 0x44));
  }
  return;
}
