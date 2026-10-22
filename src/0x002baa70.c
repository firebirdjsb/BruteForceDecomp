/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B1B779C5A60D478CE4AB57247D10ECA2E3D83F0AB250825408E802DA534ADE21
 * Entry: 0x002baa70, Ghidra index: 9889, label: FUN_002baa70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002baa70(int param_1,float param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar1 = param_2 * param_3[1];
  fVar2 = param_2 * param_3[2];
  fVar3 = param_2 * *param_3;
  if (0.5 <= fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) {
    fVar4 = ROUND((float10)1.4426950408889634 * -(float10)fVar3);
    fVar5 = (float10)f2xm1((float10)1.4426950408889634 * -(float10)fVar3 - fVar4);
    fVar4 = (float10)fscale((float10)1 + fVar5,fVar4);
    fVar5 = ROUND((float10)1.4426950408889634 * -(float10)fVar1);
    fVar6 = (float10)f2xm1((float10)1.4426950408889634 * -(float10)fVar1 - fVar5);
    fVar5 = (float10)fscale((float10)1 + fVar6,fVar5);
    fVar6 = ROUND((float10)1.4426950408889634 * -(float10)fVar2);
    fVar7 = (float10)f2xm1((float10)1.4426950408889634 * -(float10)fVar2 - fVar6);
    fVar6 = (float10)fscale((float10)1 + fVar7,fVar6);
  }
  else {
    fVar4 = (float10)1.0 - (float10)fVar3;
    fVar5 = (float10)1.0 - (float10)fVar1;
    fVar6 = (float10)1.0 - (float10)fVar2;
  }
  fVar7 = (float10)param_2 * (float10)param_4;
  if ((float10)0.25 <= fVar7) {
    fVar8 = ROUND((float10)1.4426950408889634 * -fVar7);
    fVar7 = (float10)f2xm1((float10)1.4426950408889634 * -fVar7 - fVar8);
    fVar7 = (float10)fscale((float10)1 + fVar7,fVar8);
  }
  else {
    fVar7 = (float10)1.0 - fVar7;
  }
  param_4 = (float)fVar7;
  *(float *)(param_1 + 0xa0) = (float)(fVar5 * (float10)*(float *)(param_1 + 0xa0));
  *(float *)(param_1 + 0x9c) = (float)(fVar4 * (float10)*(float *)(param_1 + 0x9c));
  *(float *)(param_1 + 0xa4) = (float)(fVar6 * (float10)*(float *)(param_1 + 0xa4));
  *(float *)(param_1 + 0xac) = param_4 * *(float *)(param_1 + 0xac);
  *(float *)(param_1 + 0xb0) = param_4 * *(float *)(param_1 + 0xb0);
  *(float *)(param_1 + 0xb4) = param_4 * *(float *)(param_1 + 0xb4);
  return;
}
