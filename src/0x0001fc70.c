/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E6025AACF00495BB6609F771A3831233D1B48E19EDCB42CB224B95792C2F2C9
 * Entry: 0x0001fc70, Ghidra index: 158, label: FUN_0001fc70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float * FUN_0001fc70(float *param_1,float *param_2,float param_3)

{
  float10 fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar1 = (float10)fcos((float10)(param_3 * 0.008726646));
  fVar3 = (float10)fsin((float10)(param_3 * 0.008726646));
  fVar2 = (float)fVar3 /
          SQRT(param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2);
  *param_1 = (float)fVar1;
  param_1[1] = fVar2 * *param_2;
  param_1[2] = fVar2 * param_2[1];
  param_1[3] = fVar2 * param_2[2];
  return param_1;
}
