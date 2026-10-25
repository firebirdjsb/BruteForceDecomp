/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39F0C92758428773FFFF08C68CC155970CA8835341130B20756393ED56F1ACE7
 * Entry: 0x002b6240, Ghidra index: 9819, label: FUN_002b6240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 * SIMD lane construction/order follows the observed MOVSS/MOVHPS/MULPS/ADDPS stream.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>

static __m128 bf_002b6240_load_ss_hps(const float *address)
{
  __m128 value = _mm_load_ss(address);
  return _mm_loadh_pi(value, (const __m64 *)(address + 1));
}

void FUN_002b6240(int param_1,float *param_2,float *param_3)
{
  const float *source = (const float *)(uintptr_t)(uint32_t)param_1;
  float rows[3][4];
  unsigned int row;
  unsigned int lane;

  /* Original writes only each scratch row fourth DWORD before transformation. */
  for (row = 0; row < 3; ++row) rows[row][3] = 0.0f;

  for (row = 0; row < 3; ++row) {
    __m128 input = bf_002b6240_load_ss_hps(source + row * 4);
    __m128 x = _mm_shuffle_ps(input, input, _MM_SHUFFLE(0,0,0,0));
    __m128 y = _mm_shuffle_ps(input, input, _MM_SHUFFLE(2,2,2,2));
    __m128 z = _mm_shuffle_ps(input, input, _MM_SHUFFLE(3,3,3,3));
    __m128 result = _mm_mul_ps(bf_002b6240_load_ss_hps(param_2), x);
    result = _mm_add_ps(result,
        _mm_mul_ps(bf_002b6240_load_ss_hps(param_2 + 4), y));
    result = _mm_add_ps(result,
        _mm_mul_ps(bf_002b6240_load_ss_hps(param_2 + 8), z));
    _mm_store_ss(rows[row], result);
    _mm_storeh_pi((__m64 *)(rows[row] + 1), result);
  }

  for (row = 0; row < 3; ++row)
    for (lane = 0; lane < 3; ++lane)
      param_3[row * 4 + lane] = rows[row][lane];
}
