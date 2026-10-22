/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4230FFB862AD4A1970C971D601BC52A10009B036D98E3480882BB3CC5E45799F
 * Entry: 0x000cc640, Ghidra index: 2526, label: FUN_000cc640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000cc640(int param_1,float param_2)

{
  float10 fVar1;
  float fVar2;
  
  if (*(int **)(param_1 + 0x6c) == (int *)0x0) {
    return;
  }
  fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x6c) + 0x3c))();
  if (*(float *)(param_1 + 0x70) == 0.0) {
    *(float *)(param_1 + 0x94) = (float)fVar1;
  }
  if (fVar1 <= (float10)*(float *)(param_1 + 0x94)) {
    if ((float10)*(float *)(param_1 + 0x94) <= fVar1) goto LAB_000cc6bd;
    fVar2 = *(float *)(param_1 + 0x94) - param_2 * 3.0;
  }
  else {
    fVar2 = param_2 * 3.0 + *(float *)(param_1 + 0x94);
  }
  *(float *)(param_1 + 0x94) = fVar2;
LAB_000cc6bd:
  fVar2 = *(float *)(param_1 + 0x94);
  if (*(float *)(param_1 + 0x94) <= 0.0) {
    fVar2 = 0.0;
  }
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  *(float *)(param_1 + 0x94) = fVar2;
  return;
}
