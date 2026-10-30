/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4A2B8F31D09DBBE087422CFF5ABD19CD24070E9EA111BAF1EF1FD3E9586AE1B
 * Entry: 0x00052660, Ghidra index: 754, label: FUN_00052660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00052660(float *param_1,float *param_2)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  float *unaff_ESI;
  
  fVar3 = in_EAX[2];
  fVar4 = in_ECX[2];
  fVar5 = in_EAX[1];
  fVar6 = in_ECX[1];
  fVar7 = *in_EAX;
  fVar8 = *in_ECX;
  fVar9 = (fVar7 - fVar8) * *param_1 + (fVar5 - fVar6) * param_1[1] + (fVar3 - fVar4) * param_1[2];
  *param_2 = fVar9;
  fVar1 = *param_1;
  uVar2 = *(undefined8 *)(param_1 + 1);
  in_EDX[1] = (fVar5 - fVar6) - fVar9 * (float)uVar2;
  fVar5 = (fVar7 - fVar8) - fVar9 * fVar1;
  in_EDX[2] = (fVar3 - fVar4) - fVar9 * (float)((ulonglong)uVar2 >> 0x20);
  *in_EDX = fVar5;
  fVar1 = in_ECX[2];
  fVar3 = in_EDX[2];
  fVar4 = *in_ECX;
  unaff_ESI[1] = in_ECX[1] + in_EDX[1];
  unaff_ESI[2] = fVar1 + fVar3;
  *unaff_ESI = fVar5 + fVar4;
  return;
}
