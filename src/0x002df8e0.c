/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 11BE035164E1A0483EABB686179DC99BA21E189D831636C4EEE2FD06958856F2
 * Entry: 0x002df8e0, Ghidra index: 10340, label: FUN_002df8e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002df8e0(float param_1)

{
  float fVar1;
  int in_EAX;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined4 local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(in_ECX + 8) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 4;
  }
  iVar3 = 0;
  if (3 < iVar5) {
    iVar4 = 3;
    pfVar6 = (float *)(*(int *)(in_ECX + 8) + 0x14);
    do {
      if ((pfVar6[-4] <= param_1) && (iVar3 != in_EAX)) goto LAB_002df992;
      if ((*pfVar6 <= param_1) && (iVar4 + -2 != in_EAX)) {
        iVar3 = iVar3 + 1;
        goto LAB_002df992;
      }
      if ((pfVar6[4] <= param_1) && (iVar4 + -1 != in_EAX)) {
        iVar3 = iVar3 + 2;
        goto LAB_002df992;
      }
      if ((pfVar6[8] <= param_1) && (iVar4 != in_EAX)) {
        iVar3 = iVar3 + 3;
        goto LAB_002df992;
      }
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 4;
      pfVar6 = pfVar6 + 0x10;
    } while (iVar4 < iVar5);
  }
  if (iVar3 < iVar5) {
    pfVar6 = (float *)(iVar3 * 0x10 + 4 + *(int *)(in_ECX + 8));
    do {
      if ((*pfVar6 <= param_1) && (iVar3 != in_EAX)) break;
      iVar3 = iVar3 + 1;
      pfVar6 = pfVar6 + 4;
    } while (iVar3 < iVar5);
  }
LAB_002df992:
  iVar5 = in_EAX * 0x10;
  if (iVar3 == in_EAX + 1) {
    *(float *)(iVar5 + 4 + *(int *)(in_ECX + 8)) = param_1;
  }
  else {
    local_c = param_1;
    local_8 = *(undefined4 *)(iVar5 + 8 + *(int *)(in_ECX + 8));
    puVar2 = (undefined4 *)(iVar5 + *(int *)(in_ECX + 8));
    local_10 = *puVar2;
    local_4 = puVar2[3];
    FUN_002dfb30();
    FUN_002dfa10(&local_10);
  }
  *(undefined4 *)(in_ECX + 0x54) = 0;
  if (1 < *(int *)(in_ECX + 0x58)) {
    fVar1 = *(float *)(*(int *)(in_ECX + 0xc) + -0xc) - *(float *)(*(int *)(in_ECX + 8) + 4);
    *(float *)(in_ECX + 0x5c) = fVar1;
    *(float *)(in_ECX + 0x60) = 1.0 / fVar1;
  }
  return;
}
