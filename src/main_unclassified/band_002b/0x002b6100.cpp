/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 87E2EFFB6DF1992C6D974F857D6C231010E5D8E40026E0CD3E11F32B516627F6
 * Entry: 0x002b6100, Ghidra index: 9818, label: FUN_002b6100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 * SIMD lane construction/order follows the observed MOVSS/MOVHPS/MULPS/ADDPS stream.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>

static __m128 bf_002b6100_load_ss_hps(const float *address)
{
  __m128 value = _mm_load_ss(address);
  return _mm_loadh_pi(value, (const __m64 *)(address + 1));
}

void FUN_002b6100(float *param_1,float *param_2,float *param_3)
{
  float rows[3][4] = {
    { param_1[0], param_1[4], param_1[8], 0.0f },
    { param_1[1], param_1[5], param_1[9], 0.0f },
    { param_1[2], param_1[6], param_1[10], 0.0f }
  };
  unsigned int row;
  unsigned int lane;

  for (row = 0; row < 3; ++row) {
    __m128 source = bf_002b6100_load_ss_hps(rows[row]);
    __m128 x = _mm_shuffle_ps(source, source, _MM_SHUFFLE(0,0,0,0));
    __m128 y = _mm_shuffle_ps(source, source, _MM_SHUFFLE(2,2,2,2));
    __m128 z = _mm_shuffle_ps(source, source, _MM_SHUFFLE(3,3,3,3));
    __m128 result = _mm_mul_ps(bf_002b6100_load_ss_hps(param_2), x);
    result = _mm_add_ps(result,
        _mm_mul_ps(bf_002b6100_load_ss_hps(param_2 + 4), y));
    result = _mm_add_ps(result,
        _mm_mul_ps(bf_002b6100_load_ss_hps(param_2 + 8), z));
    _mm_store_ss(rows[row], result);
    _mm_storeh_pi((__m64 *)(rows[row] + 1), result);
  }

  for (row = 0; row < 3; ++row)
    for (lane = 0; lane < 3; ++lane)
      param_3[row * 4 + lane] = rows[row][lane];
}
