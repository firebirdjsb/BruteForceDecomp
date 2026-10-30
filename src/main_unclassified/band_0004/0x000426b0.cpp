/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD2A1F62F03CBA3DE9236AB1D3DE8C4626B9F7411C0DD8476596A9723B30BF1D
 * Entry: 0x000426b0, Ghidra index: 508, label: FUN_000426b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000426b0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int in_EAX;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  
  piVar5 = (int *)FUN_000120f0();
  if (((*(int *)(in_EAX + 0x934) == 0) ||
      ((*(int *)(in_EAX + 0x938) - *(int *)(in_EAX + 0x934)) / 0x18 == 0)) ||
     (**(int **)(in_EAX + 0x1a8) < 2)) {
    *(undefined4 *)(in_EAX + 0x94c) = 0;
    return;
  }
  iVar6 = (**(code **)(*piVar5 + 0x40))();
  pfVar7 = (float *)FUN_000233d0();
  fVar1 = pfVar7[2] - *(float *)(iVar6 + 0x2c);
  fVar2 = pfVar7[1] - *(float *)(iVar6 + 0x28);
  fVar3 = *pfVar7 - *(float *)(iVar6 + 0x24);
  fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (fVar1 < *(float *)(in_EAX + 0x948) == (fVar1 == *(float *)(in_EAX + 0x948))) {
    *(float *)(in_EAX + 0x94c) = *(float *)(in_EAX + 0x440) + *(float *)(in_EAX + 0x94c);
  }
  else {
    *(float *)(in_EAX + 0x948) = fVar1;
    *(undefined4 *)(in_EAX + 0x94c) = 0;
  }
  if (*(float *)(in_EAX + 0x94c) <= 2.0) {
    return;
  }
  *(undefined4 *)(in_EAX + 0x94c) = 0;
  if ((float)piVar5[0x1c8] < 0.01 != ((float)piVar5[0x1c8] == 0.01)) {
    *(undefined4 *)(in_EAX + 0x8a0) = 0x3f800000;
    *(undefined1 *)(in_EAX + 0x89d) = 0;
    return;
  }
  piVar5[0x94] = piVar5[0x94] | 1;
  iVar6 = piVar5[0x93];
  if (*(int *)(in_EAX + 0x9c0) == iVar6) {
    *(int *)(in_EAX + 0x9c4) = *(int *)(in_EAX + 0x9c4) + 1;
  }
  else {
    *(undefined4 *)(in_EAX + 0x9c4) = 0;
  }
  *(int *)(in_EAX + 0x9c0) = iVar6;
  if (1 < *(int *)(in_EAX + 0x9c4)) {
    FUN_000120f0();
    FUN_000425b0();
    return;
  }
  cVar4 = FUN_00042280(in_EAX);
  if (cVar4 != '\0') {
    return;
  }
  cVar4 = FUN_00042620(0x3f800000,0x40c00000);
  if (cVar4 != '\0') {
    return;
  }
  FUN_00042490();
  return;
}
