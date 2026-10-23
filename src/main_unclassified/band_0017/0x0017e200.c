/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92C5AB285F50B66C21555D08077352005BA0B81C14E19357D1E4A6FECA2A6BFF
 * Entry: 0x0017e200, Ghidra index: 5101, label: FUN_0017e200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017e200(float param_1,float *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *in_EDX;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  fVar1 = 1e+09;
  uVar5 = (uint)*(byte *)((int)param_1 + 4);
  iVar4 = 0;
  iVar6 = 0;
  if (3 < uVar5) {
    iVar7 = 3;
    pfVar3 = (float *)((int)param_1 + 0x30);
    do {
      fVar2 = (pfVar3[-1] - *in_EDX) * (pfVar3[-1] - *in_EDX) +
              (*pfVar3 - in_EDX[1]) * (*pfVar3 - in_EDX[1]) +
              (pfVar3[1] - in_EDX[2]) * (pfVar3[1] - in_EDX[2]);
      if (fVar2 < fVar1) {
        iVar4 = iVar6;
        fVar1 = fVar2;
      }
      fVar2 = (pfVar3[0xb] - *in_EDX) * (pfVar3[0xb] - *in_EDX) +
              (pfVar3[0xc] - in_EDX[1]) * (pfVar3[0xc] - in_EDX[1]) +
              (pfVar3[0xd] - in_EDX[2]) * (pfVar3[0xd] - in_EDX[2]);
      if (fVar2 < fVar1) {
        iVar4 = iVar7 + -2;
        fVar1 = fVar2;
      }
      fVar2 = (pfVar3[0x17] - *in_EDX) * (pfVar3[0x17] - *in_EDX) +
              (pfVar3[0x18] - in_EDX[1]) * (pfVar3[0x18] - in_EDX[1]) +
              (pfVar3[0x19] - in_EDX[2]) * (pfVar3[0x19] - in_EDX[2]);
      if (fVar2 < fVar1) {
        iVar4 = iVar7 + -1;
        fVar1 = fVar2;
      }
      fVar2 = (pfVar3[0x23] - *in_EDX) * (pfVar3[0x23] - *in_EDX) +
              (pfVar3[0x24] - in_EDX[1]) * (pfVar3[0x24] - in_EDX[1]) +
              (pfVar3[0x25] - in_EDX[2]) * (pfVar3[0x25] - in_EDX[2]);
      if (fVar2 < fVar1) {
        iVar4 = iVar7;
        fVar1 = fVar2;
      }
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 4;
      pfVar3 = pfVar3 + 0x30;
    } while (iVar7 < (int)uVar5);
  }
  if (iVar6 < (int)uVar5) {
    pfVar3 = (float *)((iVar6 * 3 + 3) * 0x10 + (int)param_1);
    do {
      fVar2 = (pfVar3[-1] - *in_EDX) * (pfVar3[-1] - *in_EDX) +
              (*pfVar3 - in_EDX[1]) * (*pfVar3 - in_EDX[1]) +
              (pfVar3[1] - in_EDX[2]) * (pfVar3[1] - in_EDX[2]);
      if (fVar2 < fVar1) {
        iVar4 = iVar6;
        fVar1 = fVar2;
      }
      iVar6 = iVar6 + 1;
      pfVar3 = pfVar3 + 0xc;
    } while (iVar6 < (int)uVar5);
  }
  if (param_3 == '\0') {
    pfVar3 = (float *)(iVar4 * 0x30 + 8 + (int)param_1);
    fVar1 = *pfVar3 * *in_EDX +
            pfVar3[3] * in_EDX[1] + *(float *)(iVar4 * 0x30 + 0x20 + (int)param_1) * in_EDX[2];
    _param_3 = pfVar3[4] * in_EDX[1] + pfVar3[7] * in_EDX[2] + pfVar3[1] * *in_EDX;
    param_1 = pfVar3[5] * in_EDX[1] + pfVar3[8] * in_EDX[2] + pfVar3[2] * *in_EDX;
  }
  else {
    pfVar3 = (float *)FUN_000a0c60();
    fVar1 = *pfVar3;
    param_1 = pfVar3[2];
    _param_3 = pfVar3[1];
  }
  *param_2 = fVar1;
  param_2[1] = _param_3;
  param_2[2] = -param_1;
  return;
}
