/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2382652B390516BB996BB81A12D1F0BCAF195D5E559D7A59ADD4AE5B0DD53096
 * Entry: 0x00233020, Ghidra index: 7778, label: FUN_00233020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00233020(float param_1,float *param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = ABS(param_1) * 0.63661975;
  uVar1 = (uint)(fVar3 + 1.0);
  uVar2 = (uint)fVar3;
  fVar4 = (fVar3 + 1.0) - (float)(int)uVar1;
  if ((uVar1 & 1) != 0) {
    fVar4 = 1.0 - fVar4;
  }
  fVar3 = fVar3 - (float)(int)uVar2;
  if ((uVar2 & 1) != 0) {
    fVar3 = 1.0 - fVar3;
  }
  fVar5 = fVar4 * fVar4;
  fVar6 = fVar3 * fVar3;
  *param_3 = (((fVar5 * -0.004681754 + 0.079692625) * fVar5 + -0.6459641) * fVar5 + 1.5707964) *
             (float)((uint)fVar4 | (uVar1 & 2) << 0x1e);
  *param_2 = (((fVar6 * -0.004681754 + 0.079692625) * fVar6 + -0.6459641) * fVar6 + 1.5707964) *
             (float)((uint)fVar3 | (uint)param_1 & 0x80000000 ^ (uVar2 & 2) << 0x1e);
  return;
}
