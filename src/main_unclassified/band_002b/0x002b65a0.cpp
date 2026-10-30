/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56854F87AF82B0B8E08A44E207A2E58F986F8AABF682B977260B6DE0EFE031B4
 * Entry: 0x002b65a0, Ghidra index: 9825, label: FUN_002b65a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
undefined4 FUN_002b65a0(float *param_1)

{
  __m128 lanes;
  __m128 squares;
  __m128 partial;
  float sum;
  float scale;
  
  /* 0x002b65af-0x002b65c9: the +0/+4/+8 lanes are squared by
   * MULPS; the two SHUFPS operations select (+4)^2 + (+8)^2,
   * then ADDSS adds (+0)^2. Lane 1 is not consumed. */
  lanes = _mm_loadh_pi(_mm_load_ss(param_1), (const __m64 *)(param_1 + 1));
  squares = _mm_mul_ps(lanes, lanes);
  partial = _mm_shuffle_ps(squares, squares, 0x80);
  partial = _mm_add_ps(partial, squares);
  partial = _mm_shuffle_ps(partial, partial, 0x03);
  sum = _mm_cvtss_f32(_mm_add_ss(partial, squares));
  /* 0x002b65cf-0x002b65de: TEST AH,5 ignores x87 C3 (equality).
   * Only strictly below returns zero; equal/unordered reach RSQRTSS. */
  if (sum < 1e-10f) {
    return 0;
  }
  /* 0x002b65f0-0x002b65fc: RSQRTSS consumes the stored low sum
   * and MOVSS stores only its low 4-byte result. */
  scale = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(sum)));
  *param_1 = scale * *param_1;
  param_1[1] = scale * param_1[1];
  param_1[2] = scale * param_1[2];
  return 1;
}
