/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37AE16E855F134EC14C951B47AC72F120ABA45714BDD1A19FCA63132FE083892
 * Entry: 0x001f48f0, Ghidra index: 7037, label: FUN_001f48f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f48f0(float param_1)

{
  int iVar1;
  int iVar2;
  int in_EDX;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (*(int **)(in_EDX + 0x20))[1] * **(int **)(in_EDX + 0x20);
  iVar3 = 0;
  if (3 < iVar2) {
    iVar5 = 3;
    iVar1 = 0;
    do {
      iVar4 = *(int *)(in_EDX + 0x18) + iVar1;
      if (*(int *)(*(int *)(in_EDX + 0x18) + 8 + iVar1) != 0) {
        *(float *)(iVar4 + 0x14) = param_1 + *(float *)(iVar4 + 0x14);
      }
      iVar4 = *(int *)(in_EDX + 0x18) + iVar1;
      if (*(int *)(*(int *)(in_EDX + 0x18) + 0x48 + iVar1) != 0) {
        *(float *)(iVar4 + 0x54) = param_1 + *(float *)(iVar4 + 0x54);
      }
      iVar4 = *(int *)(in_EDX + 0x18) + iVar1;
      if (*(int *)(*(int *)(in_EDX + 0x18) + 0x88 + iVar1) != 0) {
        *(float *)(iVar4 + 0x94) = param_1 + *(float *)(iVar4 + 0x94);
      }
      iVar4 = *(int *)(in_EDX + 0x18) + iVar1;
      if (*(int *)(*(int *)(in_EDX + 0x18) + 200 + iVar1) != 0) {
        *(float *)(iVar4 + 0xd4) = param_1 + *(float *)(iVar4 + 0xd4);
      }
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 4;
      iVar1 = iVar1 + 0x100;
    } while (iVar5 < iVar2);
  }
  if (iVar3 < iVar2) {
    iVar1 = iVar3 << 6;
    iVar2 = iVar2 - iVar3;
    do {
      iVar3 = *(int *)(in_EDX + 0x18) + iVar1;
      if (*(int *)(*(int *)(in_EDX + 0x18) + 8 + iVar1) != 0) {
        *(float *)(iVar3 + 0x14) = param_1 + *(float *)(iVar3 + 0x14);
      }
      iVar1 = iVar1 + 0x40;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
