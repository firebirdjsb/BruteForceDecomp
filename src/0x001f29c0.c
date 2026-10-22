/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DACA90FE48123858A823FD569FB47700D7B486CB97AED61AA4CFD5A8C507FDAE
 * Entry: 0x001f29c0, Ghidra index: 7011, label: FUN_001f29c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f29c0(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = *param_1;
  if (*param_1 <= param_3) {
    fVar1 = param_3;
  }
  *param_1 = fVar1;
  fVar1 = param_1[1];
  if (param_3 <= param_1[1]) {
    fVar1 = param_3;
  }
  param_1[1] = fVar1;
  fVar1 = param_1[2];
  if (param_1[2] <= param_4) {
    fVar1 = param_4;
  }
  param_1[2] = fVar1;
  fVar1 = param_1[3];
  if (param_4 <= param_1[3]) {
    fVar1 = param_4;
  }
  param_1[3] = fVar1;
  fVar1 = 1.0;
  if (*param_1 < 0.5) {
    fVar1 = 1.2;
  }
  if (-0.5 < param_1[1]) {
    fVar1 = fVar1 + 0.2;
  }
  if (param_1[2] < 0.5) {
    fVar1 = fVar1 + 0.2;
  }
  if (-0.5 < param_1[3]) {
    fVar1 = fVar1 + 0.2;
  }
  *param_2 = fVar1 * *param_2;
  return;
}
