/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A158AB8BAEAE0C76832BF083F550B79E29FF902E9429FBD043C32DF2B54AFBAD
 * Entry: 0x0012baf0, Ghidra index: 3793, label: FUN_0012baf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>

/* The original scalar/x87-derived draft expressions are retained as evidence;
 * host float precision and ABI are unverified. Only invalid Ghidra SIMD member
 * accesses are represented with explicit SSE intrinsics and observed lane order. */
void FUN_0012baf0(int param_1,float param_2,undefined4 param_3,float *param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  __m128 auVar7;
  float lane2;
  float lane3;
  float reciprocal;
  float root;

  param_2 = -param_2;
  fVar1 = *(float *)(param_1 + 0x44c) * 0.0 +
          *(float *)(param_1 + 0x454) * 0.0 + param_2 * *(float *)(param_1 + 0x450);
  /* MOVSS [eax], then MOVHPS [eax+4]: [axis0, 0, axis1, axis2]. */
  auVar7 = _mm_set_ps(*(float *)(param_1 + 0x454),
                      *(float *)(param_1 + 0x450), 0.0f,
                      *(float *)(param_1 + 0x44c));
  auVar7 = _mm_mul_ps(auVar7, _mm_set1_ps(fVar1));
  fVar1 = -_mm_cvtss_f32(auVar7);
  lane2 = _mm_cvtss_f32(_mm_shuffle_ps(auVar7, auVar7, _MM_SHUFFLE(2,2,2,2)));
  lane3 = _mm_cvtss_f32(_mm_shuffle_ps(auVar7, auVar7, _MM_SHUFFLE(3,3,3,3)));
  fVar2 = param_2 - lane2;
  fVar3 = 0.0 - lane3;
  fVar4 = param_2 * param_2 + 0.0;
  fVar5 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  if ((1.4210855e-14 < fVar4) && (1.4210855e-14 < fVar5)) {
    root = _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(fVar4)));
    reciprocal = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(fVar5)));
    fVar4 = reciprocal * root;
    *param_4 = fVar1 * fVar4;
    param_4[1] = fVar2 * fVar4;
    param_4[2] = fVar3 * fVar4;
    return;
  }
  param_4[2] = 0.0;
  param_4[1] = 0.0;
  *param_4 = 0.0;
  return;
}
