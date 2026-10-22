/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 723B012E6F127378C9D8AB2EC462C347F0A6025CB1E12AF0388CC929CF1D3DCA
 * Entry: 0x000720d0, Ghidra index: 1274, label: FUN_000720d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float * FUN_000720d0(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)fcos((float10)param_2);
  fVar5 = (float10)fsin((float10)param_2);
  fVar1 = (float)fVar4;
  fVar2 = (float)fVar5;
  fVar3 = *param_1;
  *param_1 = fVar1 * fVar3 - fVar2 * param_1[2];
  param_1[2] = fVar3 * fVar2 + fVar1 * param_1[2];
  fVar3 = param_1[3];
  param_1[3] = fVar1 * fVar3 - fVar2 * param_1[5];
  param_1[5] = fVar1 * param_1[5] + fVar3 * fVar2;
  fVar3 = param_1[6];
  param_1[6] = fVar1 * fVar3 - fVar2 * param_1[8];
  param_1[8] = fVar3 * fVar2 + fVar1 * param_1[8];
  return param_1;
}
