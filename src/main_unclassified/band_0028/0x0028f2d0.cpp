/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4917DB3EC169F5E8D9E36459FE6B8FB084D7F6ED6CEDFE684688CFF5E99EC02F
 * Entry: 0x0028f2d0, Ghidra index: 9216, label: FUN_0028f2d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

float * FUN_0028f2d0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  
  fVar3 = *(float *)(param_1 + 0xc);
  fVar4 = *(float *)(param_1 + 8);
  fVar5 = *(float *)(param_1 + 4);
  fVar6 = SQRT((float10)fVar5 * (float10)fVar5 +
               (float10)fVar4 * (float10)fVar4 + (float10)fVar3 * (float10)fVar3);
  fVar1 = (float)fVar6;
  fVar6 = (float10)fsin(fVar6);
  if ((float10)1e-05 <= fVar6) {
    fVar2 = (float)(fVar6 / (float10)fVar1);
    fVar6 = (float10)fcos((float10)fVar1);
    *param_2 = (float)fVar6;
    param_2[1] = fVar2 * fVar5;
    param_2[2] = fVar2 * fVar4;
    param_2[3] = fVar2 * fVar3;
    return param_2;
  }
  fVar3 = *(float *)(param_1 + 0xc);
  fVar4 = *(float *)(param_1 + 8);
  fVar6 = (float10)fcos((float10)fVar1);
  fVar1 = *(float *)(param_1 + 4);
  *param_2 = (float)fVar6;
  param_2[1] = fVar1;
  param_2[2] = fVar4;
  param_2[3] = fVar3;
  return param_2;
}
