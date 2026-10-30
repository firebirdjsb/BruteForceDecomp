/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E0E604CFAFD570E5CF46E0E0E3223EF9F90F1C9FE60DBDEB08DEB81C55134133
 * Entry: 0x00039380, Ghidra index: 396, label: FUN_00039380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float * FUN_00039380(float *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_2);
  fVar2 = (float10)fsin((float10)param_2);
  *param_1 = (float)fVar1;
  param_1[1] = 0.0;
  param_1[2] = (float)fVar2;
  param_1[3] = 0.0;
  param_1[4] = 1.0;
  param_1[5] = 0.0;
  param_1[6] = -(float)fVar2;
  param_1[7] = 0.0;
  param_1[8] = (float)fVar1;
  return param_1;
}
