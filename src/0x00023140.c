/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 752206875CE006CFFCA6FA3175367CEA09CF54344C7B883A85BAC0989B19AD4C
 * Entry: 0x00023140, Ghidra index: 219, label: FUN_00023140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Original SSE RSQRTSS, consumed scalar lane. */
float10 FUN_00023140(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float fVar5;
  __m128 approximate_reciprocal_sqrt;
  
  fVar1 = param_2[2] - *(float *)(param_1 + 0x1c);
  fVar2 = param_2[1] - *(float *)(param_1 + 0x18);
  fVar3 = *param_2 - *(float *)(param_1 + 0x14);
  fVar4 = (float10)1.0;
  fVar5 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (1.4210855e-14 < fVar5) {
    approximate_reciprocal_sqrt = _mm_rsqrt_ss(_mm_set_ss(fVar5));
    fVar5 = _mm_cvtss_f32(approximate_reciprocal_sqrt);
    fVar1 = -*(float *)(param_1 + 0x40) * fVar5 * fVar3 +
            -*(float *)(param_1 + 0x4c) * fVar2 * fVar5 +
            -*(float *)(param_1 + 0x58) * fVar1 * fVar5;
    if (fVar1 <= -1.0) {
      fVar1 = -1.0;
    }
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    fVar4 = (float10)fVar1;
  }
  return fVar4;
}
