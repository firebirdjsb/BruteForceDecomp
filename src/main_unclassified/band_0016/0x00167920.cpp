/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DED11BB77A7B2E146C06F9FD4AF730C7C3EA3F2B5D34C0BD43BE0204B454D82C
 * Entry: 0x00167920, Ghidra index: 4731, label: FUN_00167920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00167920(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *in_EDX;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar5 = 1;
  fVar1 = *param_1 * *in_EDX + param_1[1] * in_EDX[1] + param_1[2] * in_EDX[2];
  if (3 < param_2 + -1) {
    iVar6 = 4;
    pfVar3 = param_1 + 7;
    do {
      fVar2 = pfVar3[-2] * in_EDX[2] + pfVar3[-4] * *in_EDX + pfVar3[-3] * in_EDX[1];
      if (fVar1 < fVar2) {
        iVar4 = iVar5;
        fVar1 = fVar2;
      }
      fVar2 = *pfVar3 * in_EDX[1] + pfVar3[1] * in_EDX[2] + pfVar3[-1] * *in_EDX;
      if (fVar1 < fVar2) {
        iVar4 = iVar6 + -2;
        fVar1 = fVar2;
      }
      fVar2 = pfVar3[2] * *in_EDX + pfVar3[4] * in_EDX[2] + pfVar3[3] * in_EDX[1];
      if (fVar1 < fVar2) {
        iVar4 = iVar6 + -1;
        fVar1 = fVar2;
      }
      fVar2 = pfVar3[5] * *in_EDX + pfVar3[7] * in_EDX[2] + pfVar3[6] * in_EDX[1];
      if (fVar1 < fVar2) {
        iVar4 = iVar6;
        fVar1 = fVar2;
      }
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 4;
      pfVar3 = pfVar3 + 0xc;
    } while (iVar6 < param_2);
  }
  if (iVar5 < param_2) {
    pfVar3 = param_1 + iVar5 * 3 + 1;
    do {
      fVar2 = in_EDX[1] * *pfVar3 + pfVar3[1] * in_EDX[2] + pfVar3[-1] * *in_EDX;
      if (fVar1 < fVar2) {
        iVar4 = iVar5;
        fVar1 = fVar2;
      }
      iVar5 = iVar5 + 1;
      pfVar3 = pfVar3 + 3;
    } while (iVar5 < param_2);
  }
  param_1 = param_1 + iVar4 * 3;
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  return;
}
