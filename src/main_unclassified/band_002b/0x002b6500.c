/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4DA4F3748F3EC3DA37B178462B78C7CA09ED2C655319DD40D6A81BB9122592F0
 * Entry: 0x002b6500, Ghidra index: 9824, label: FUN_002b6500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
float10 FUN_002b6500(float *param_1)

{
  __m128 lanes;
  __m128 squares;
  __m128 partial;
  float sum;
  float scale;
  
  /* 0x002b650f-0x002b6529: MOVSS reads +0, MOVHPS reads the two
   * 4-byte lanes at +4/+8, and MULPS squares lanes 0/2/3. SHUFPS,
   * ADDPS, SHUFPS and ADDSS form (+4)^2 + (+8)^2, then add (+0)^2.
   * Lane 1 is not consumed. MOVSS stores the rounded low sum. */
  lanes = _mm_loadh_pi(_mm_load_ss(param_1), (const __m64 *)(param_1 + 1));
  squares = _mm_mul_ps(lanes, lanes);
  partial = _mm_shuffle_ps(squares, squares, 0x80);
  partial = _mm_add_ps(partial, squares);
  partial = _mm_shuffle_ps(partial, partial, 0x03);
  sum = _mm_cvtss_f32(_mm_add_ss(partial, squares));
  /* 0x002b652f-0x002b653e: TEST AH,5 ignores x87 C3 (equality).
   * Only strictly below takes the zero branch; equal/unordered reach RSQRTSS. */
  if (sum < 1e-10f) {
    return (float10)0.0;
  }
  /* 0x002b6554-0x002b6560: RSQRTSS reads the stored 4-byte sum;
   * MOVSS stores only its low 4-byte result. */
  scale = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(sum)));
  *param_1 = scale * *param_1;
  param_1[1] = scale * param_1[1];
  param_1[2] = scale * param_1[2];
  return (float10)scale * (float10)sum;
}
