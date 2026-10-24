/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D18A552122C8F7858E73681BB8E52B4FBA5560E0E02ABF045B20E8CED4A8C676
 * Entry: 0x000410a0, Ghidra index: 493, label: FUN_000410a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Packed storage and endpoint arrays below follow original offsets. C float
 * arithmetic still does not establish the original extended x87 intermediates,
 * FCOM-before-FSTP boundary, exception state, or implicit helper ABI. */

undefined4 FUN_000410a0(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float *in_ECX;
  float *in_EDX;
  float10 fVar5;
  float input_lanes[3];
  float scaled_lanes[3];
  float neg_x;
  float neg_y;
  float neg_z;
  float edx_plus[3];
  float edx_minus[3];
  float ecx_plus[3];
  float ecx_minus[3];
  __m128 xmm0;
  __m128 xmm1;
  
  fVar1 = in_ECX[2] - in_EDX[2];
  fVar2 = in_ECX[1] - in_EDX[1];
  fVar3 = *in_ECX - *in_EDX;
  /* 0x410f3 SQRTSS writes only lane 0. The upper input XMM0 lanes are
   * unknown and are discarded by SHUFPS 0x00 at 0x4113e. */
  xmm0 = _mm_sqrt_ss(_mm_move_ss(
      _mm_undefined_ps(),
      _mm_set_ss((fVar1 * fVar1 + fVar2 * fVar2) + fVar3 * fVar3)));
  /* XBE dword 0x003a5150 = 0x28800000 (binary32). */
  if (0x1p-46f < _mm_cvtss_f32(xmm0)) {
    xmm0 = _mm_rsqrt_ss(xmm0);
    input_lanes[0] = fVar3;
    input_lanes[1] = fVar2;
    input_lanes[2] = fVar1;
    /* 0x41138-41159: MOVSS/SHUFPS broadcasts the reciprocal root;
     * MOVSS/MOVHPS read lanes 0, 2, 3 from the three stack floats;
     * MULPS scales all four lanes, then those three are stored. Memory-source
     * MOVSS clears XMM1 lane 1 before MOVHPS supplies its upper two lanes. */
    xmm0 = _mm_shuffle_ps(xmm0, xmm0, 0);
    xmm1 = _mm_load_ss(input_lanes);
    xmm1 = _mm_loadh_pi(xmm1, (const __m64 *)(input_lanes + 1));
    xmm0 = _mm_mul_ps(xmm0, xmm1);
    _mm_store_ss(scaled_lanes, xmm0);
    _mm_storeh_pi((__m64 *)(scaled_lanes + 1), xmm0);
    fVar1 = -scaled_lanes[0];
    /* 0x4115d-411a1 creates [scaled z, positive zero,
     * negative scaled x], then accumulates negative-x squared,
     * zero squared, scaled-z squared.
     * FCOM tests the x87 extended result before FSTP rounds it;
     * this C condition is still precision-unverified. */
    fVar2 = (fVar1 * fVar1 + 0.0f * 0.0f) +
            scaled_lanes[2] * scaled_lanes[2];
    /* XBE dword 0x003a4ffc = 0x34000000 (binary32). */
    if (0x1p-23f < fVar2) {
      xmm0 = _mm_rsqrt_ss(_mm_move_ss(_mm_undefined_ps(), _mm_set_ss(fVar2)));
      param_1 = _mm_cvtss_f32(xmm0) * param_1;
      fVar2 = scaled_lanes[2] * param_1;
      fVar3 = 0.0f * param_1;
      fVar1 = fVar1 * param_1;
      /* FCHS at 0x411e0/411e8/411f4 stores the negative components
       * as binary32 before the later FLD/FADD endpoint calculations. */
      neg_z = -fVar1;
      neg_y = -fVar3;
      neg_x = -fVar2;
      /* Stack triples at ESP+38, +44, +2c, +20 respectively.
       * Within each triple offsets +0, +4, +8 are x, y, z.
       * The original x87 stack holds the scaled offsets in x, y, z
       * order after 0x411dc. Store z, y, then x as at 0x41206-412ae. */
      edx_plus[2] = fVar1 + in_EDX[2];
      edx_plus[1] = fVar3 + in_EDX[1];
      edx_plus[0] = fVar2 + in_EDX[0];
      edx_minus[2] = neg_z + in_EDX[2];
      edx_minus[1] = neg_y + in_EDX[1];
      edx_minus[0] = neg_x + in_EDX[0];
      ecx_plus[2] = fVar1 + in_ECX[2];
      ecx_plus[1] = fVar3 + in_ECX[1];
      ecx_plus[0] = fVar2 + in_ECX[0];
      ecx_minus[2] = neg_z + in_ECX[2];
      ecx_minus[1] = neg_y + in_ECX[1];
      ecx_minus[0] = neg_x + in_ECX[0];
      /* 0x412b2-412be puts &ecx_plus in EAX and &edx_plus in ECX
       * for FUN_000394b0; that implicit register ABI is unverified here. */
      fVar5 = (float10)FUN_000394b0();
      cVar4 = FUN_0004ce30(edx_plus,ecx_plus,(float)(fVar5 + (float10)0.1));
      if ((cVar4 == '\0') ||
         (cVar4 = FUN_0004ce30(edx_minus,ecx_minus,(float)(fVar5 + (float10)0.1)), cVar4 == '\0')) {
        return 1;
      }
    }
  }
  return 0;
}
