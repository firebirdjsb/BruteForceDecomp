/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45CD1F6B008AE51D58F77FACC075B0E7FCB35F76F722EDC43BAF4A407EE23D90
 * Entry: 0x00073d80, Ghidra index: 1311, label: FUN_00073d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float * FUN_00073d80(float *param_1,float param_2)

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
  *param_1 = fVar3 * fVar1 + fVar2 * param_1[1];
  param_1[1] = fVar1 * param_1[1] - fVar3 * fVar2;
  fVar3 = param_1[3];
  param_1[3] = fVar3 * fVar1 + fVar2 * param_1[4];
  param_1[4] = fVar1 * param_1[4] - fVar3 * fVar2;
  fVar3 = param_1[6];
  param_1[6] = fVar3 * fVar1 + fVar2 * param_1[7];
  param_1[7] = fVar1 * param_1[7] - fVar3 * fVar2;
  return param_1;
}
