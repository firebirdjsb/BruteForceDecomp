/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E5EEA54F70B549E8BCC48C7BFC63D1D060BEAE5B1C5EE861C660383AAC41840D
 * Entry: 0x002da9c0, Ghidra index: 10272, label: FUN_002da9c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002da9c0(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(in_EAX + 0x44);
  if (1 < iVar1) {
    iVar3 = *(int *)(in_EAX + 0x58) + 1;
    iVar5 = *(int *)(in_EAX + 0x5c) + 2;
    *(int *)(in_EAX + 0x58) = iVar3;
    *(int *)(in_EAX + 0x5c) = iVar5;
    if (iVar1 <= iVar3) {
      do {
        iVar3 = *(int *)(in_EAX + 0x58) - iVar1;
        *(int *)(in_EAX + 0x58) = iVar3;
      } while (*(int *)(in_EAX + 0x44) <= iVar3);
    }
    if (iVar1 <= iVar5) {
      do {
        iVar3 = *(int *)(in_EAX + 0x5c) - iVar1;
        *(int *)(in_EAX + 0x5c) = iVar3;
      } while (*(int *)(in_EAX + 0x44) <= iVar3);
    }
    iVar1 = *(int *)(in_EAX + 0x34);
    iVar3 = *(int *)(in_EAX + 0x5c);
    iVar5 = *(int *)(iVar1 + iVar3 * 4);
    iVar4 = *(int *)(in_EAX + 0x58);
    iVar2 = *(int *)(iVar1 + iVar4 * 4);
    *(int *)(iVar1 + iVar4 * 4) = iVar5;
    *(int *)(*(int *)(in_EAX + 0x34) + iVar3 * 4) = iVar2;
    *(int *)(*(int *)(in_EAX + 0x38) + iVar5 * 4) = iVar4;
    *(int *)(*(int *)(in_EAX + 0x38) + iVar2 * 4) = iVar3;
    iVar3 = *(int *)(in_EAX + 100) + 2;
    iVar4 = *(int *)(in_EAX + 0x60) + 1;
    *(int *)(in_EAX + 100) = iVar3;
    *(int *)(in_EAX + 0x60) = iVar4;
    iVar1 = *(int *)(in_EAX + 0x4c);
    iVar5 = (*(int *)(in_EAX + 0x3c) - iVar1) + -1;
    if (1 < iVar5) {
      if (iVar5 <= iVar4) {
        do {
          iVar4 = iVar4 - iVar5;
        } while (iVar5 <= iVar4);
        *(int *)(in_EAX + 0x60) = iVar4;
      }
      if (iVar5 <= iVar3) {
        iVar3 = *(int *)(in_EAX + 100);
        do {
          iVar3 = iVar3 - iVar5;
        } while (iVar5 <= iVar3);
        *(int *)(in_EAX + 100) = iVar3;
      }
      iVar3 = iVar1 + 1 + *(int *)(in_EAX + 100);
      iVar1 = iVar1 + 1 + *(int *)(in_EAX + 0x60);
      iVar5 = *(int *)(in_EAX + 0x34);
      iVar4 = *(int *)(iVar5 + iVar3 * 4);
      iVar2 = *(int *)(iVar5 + iVar1 * 4);
      *(int *)(iVar5 + iVar1 * 4) = iVar4;
      *(int *)(*(int *)(in_EAX + 0x34) + iVar3 * 4) = iVar2;
      *(int *)(*(int *)(in_EAX + 0x38) + iVar4 * 4) = iVar1;
      *(int *)(*(int *)(in_EAX + 0x38) + iVar2 * 4) = iVar3;
    }
  }
  return;
}
