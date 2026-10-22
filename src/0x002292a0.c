/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4202438F5B165108FABCE36F963A5082923443F743AA173E33547165CB56D8F5
 * Entry: 0x002292a0, Ghidra index: 7666, label: FUN_002292a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002292a0(float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *unaff_EDI;
  
  iVar7 = unaff_EDI[6];
  iVar1 = unaff_EDI[9];
  iVar2 = unaff_EDI[2];
  if (1.0 <= *(float *)(*unaff_EDI + 0xc58)) {
    param_1 = 1000.0;
  }
  else {
    param_1 = *(float *)(*unaff_EDI + 0xc5c) * param_1;
  }
  iVar6 = iVar1 + unaff_EDI[5] * 0xc;
  while (iVar6 != iVar1 + iVar7 * 0xc) {
    fVar4 = *(float *)(iVar6 + 8) - param_1;
    *(float *)(iVar6 + 8) = fVar4;
    if (fVar4 < 0.0 != (fVar4 == 0.0)) {
      iVar5 = 0;
      *(undefined4 *)(iVar6 + 8) = 0;
      unaff_EDI[5] = unaff_EDI[5] + 1;
      unaff_EDI[4] = unaff_EDI[4] + -1;
      if (*(int *)(iVar6 + 4) == 0) {
        iVar3 = *unaff_EDI;
        if (((int *)unaff_EDI[0xc] != (int *)0x0) &&
           (iVar5 = (**(code **)(*(int *)unaff_EDI[0xc] + 8))(iVar3), iVar5 != 0)) {
          FUN_000da880(iVar3,iVar5,1);
          FUN_000da8f0(iVar3);
        }
        if (*(int *)(iVar6 + 4) != iVar5) {
          FUN_0008f6a0(iVar5);
        }
        iVar5 = *(int *)(iVar6 + 4);
        *(undefined4 *)(iVar5 + 0x118) = 0;
        *(int *)(iVar5 + 0x11c) = iVar5;
      }
      (**(code **)(**(int **)(iVar6 + 4) + 0xa0))();
    }
    if (iVar6 == iVar1 + -0xc + iVar2 * 0xc) {
      iVar6 = unaff_EDI[9];
    }
    else {
      iVar6 = iVar6 + 0xc;
    }
  }
  if (unaff_EDI[2] <= unaff_EDI[5]) {
    unaff_EDI[5] = unaff_EDI[5] - unaff_EDI[2];
  }
  iVar1 = unaff_EDI[10];
  iVar2 = unaff_EDI[8];
  iVar6 = unaff_EDI[1];
  iVar7 = iVar1 + unaff_EDI[7] * 0xc;
  while (iVar7 != iVar1 + iVar2 * 0xc) {
    fVar4 = *(float *)(iVar7 + 8) - param_1;
    *(float *)(iVar7 + 8) = fVar4;
    if (fVar4 < 0.0 != (fVar4 == 0.0)) {
      iVar5 = 0;
      *(undefined4 *)(iVar7 + 8) = 0;
      unaff_EDI[7] = unaff_EDI[7] + 1;
      unaff_EDI[3] = unaff_EDI[3] + -1;
      if (*(int *)(iVar7 + 4) == 0) {
        iVar3 = *unaff_EDI;
        if (((int *)unaff_EDI[0xc] != (int *)0x0) &&
           (iVar5 = (**(code **)(*(int *)unaff_EDI[0xc] + 8))(iVar3), iVar5 != 0)) {
          FUN_000da880(iVar3,iVar5,1);
          FUN_000da8f0(iVar3);
        }
        if (*(int *)(iVar7 + 4) != iVar5) {
          FUN_0008f6a0(iVar5);
        }
        iVar5 = *(int *)(iVar7 + 4);
        *(undefined4 *)(iVar5 + 0x118) = 0;
        *(int *)(iVar5 + 0x11c) = iVar5;
      }
      (**(code **)(**(int **)(iVar7 + 4) + 0xa0))();
    }
    if (iVar7 == iVar1 + -0xc + iVar6 * 0xc) {
      iVar7 = unaff_EDI[10];
    }
    else {
      iVar7 = iVar7 + 0xc;
    }
  }
  if (unaff_EDI[1] <= unaff_EDI[7]) {
    unaff_EDI[7] = unaff_EDI[7] - unaff_EDI[1];
  }
  return;
}
