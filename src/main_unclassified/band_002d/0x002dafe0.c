/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 027E13A362F46864C57B9E3E6FFBA26A714CFA348EBCAF59B2F7D1AEE9FBB0E0
 * Entry: 0x002dafe0, Ghidra index: 10276, label: FUN_002dafe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dafe0(float param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int in_ECX;
  
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x3c)) {
    do {
      pfVar2 = (float *)(*(int *)(in_ECX + 0x24) + iVar3 * 4);
      *pfVar2 = param_1 * *(float *)(*(int *)(in_ECX + 0x28) + iVar3 * 4) + *pfVar2;
      iVar1 = iVar3 * 4;
      pfVar2 = (float *)(*(int *)(in_ECX + 0x1c) + iVar3 * 4);
      iVar3 = iVar3 + 1;
      *pfVar2 = param_1 * *(float *)(*(int *)(in_ECX + 0x20) + iVar1) + *pfVar2;
    } while (iVar3 < *(int *)(in_ECX + 0x3c));
  }
  iVar3 = *(int *)(in_ECX + 0x44);
  if (iVar3 < *(int *)(in_ECX + 0x4c)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x34) + iVar3 * 4);
      if (*(float *)(*(int *)(in_ECX + 0x24) + iVar1 * 4) < 0.0) {
        *(undefined4 *)(*(int *)(in_ECX + 0x24) + iVar1 * 4) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x4c));
  }
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x44)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x34) + iVar3 * 4);
      if (*(float *)(*(int *)(in_ECX + 0x1c) + iVar1 * 4) < 0.0) {
        *(undefined4 *)(*(int *)(in_ECX + 0x1c) + iVar1 * 4) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x44));
  }
  return;
}
