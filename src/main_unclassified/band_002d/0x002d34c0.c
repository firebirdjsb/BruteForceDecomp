/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E5D6A30084232261E1BDFD24D27010D4DECF7B60F7E3B5E36D5E7D1374CE2FD
 * Entry: 0x002d34c0, Ghidra index: 10199, label: FUN_002d34c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>

void FUN_002d34c0(int param_1)
{
  /* FUN_002ba160 writes exactly three floats. The original stack setup
   * initializes only each fourth word; the helper supplies the first three. */
  float local_20[4];
  float local_10[4];
  __m128 difference;

  local_20[3] = 0.0f;
  local_10[3] = 0.0f;

  FUN_002ba160(*(undefined4 *)(param_1 + 0xec),
               *(undefined4 *)(param_1 + 0xf4),
               param_1 + 0x44, param_1 + 0x24, local_20);
  FUN_002ba160(*(undefined4 *)(param_1 + 0xf0),
               *(undefined4 *)(param_1 + 0xf8),
               param_1 + 0x54, param_1 + 0x34, local_10);

  /* MOVSS clears lanes 1-3, then MOVHPS loads lanes 2-3 from bytes +4..+11.
   * SUBPS computes the second helper result minus the first; MOVSS/MOVHPS
   * store exactly 12 output bytes, preserving the adjacent word at +0xb0. */
  difference = _mm_sub_ps(
      _mm_loadh_pi(_mm_load_ss(local_10), (const __m64 *)(local_10 + 1)),
      _mm_loadh_pi(_mm_load_ss(local_20), (const __m64 *)(local_20 + 1)));
  _mm_store_ss((float *)(param_1 + 0xa4), difference);
  _mm_storeh_pi((__m64 *)(param_1 + 0xa8), difference);
  return;
}
