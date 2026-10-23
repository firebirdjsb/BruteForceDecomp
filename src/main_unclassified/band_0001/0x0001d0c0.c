/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 799425F204B00DB36DEC83019E43890E71D10113DC10721CB8A2EFE0CAA969A4
 * Entry: 0x0001d0c0, Ghidra index: 122, label: FUN_0001d0c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
#include <math.h>
/* Original x86 rsqrtss instruction, scalar lane only. x87 rounding TBD. */
void FUN_0001d0c0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *in_EAX;
  float *in_ECX;
  float fVar8;
  float fVar9;
  float fVar10;
  __m128 low_lane_rsqrt;
  float local_1c;
  
  fVar1 = in_EAX[2];
  fVar2 = in_EAX[1];
  fVar3 = *in_EAX;
  low_lane_rsqrt = _mm_rsqrt_ss(_mm_set_ss(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1));
  fVar8 = _mm_cvtss_f32(low_lane_rsqrt);
  fVar9 = fabsf(fVar8 * fVar2);
  if (fVar9 < 0.9848 == (fVar9 == 0.9848)) {
    fVar9 = 0.0;
    local_1c = 1.0;
  }
  else {
    fVar9 = 1.0;
    local_1c = 0.0;
  }
  fVar4 = -(fVar1 * fVar8);
  fVar5 = -(fVar8 * fVar2);
  fVar1 = -(fVar8 * fVar3);
  fVar3 = fVar5 * 0.0 - fVar9 * fVar1;
  fVar8 = local_1c * fVar1 - fVar4 * 0.0;
  fVar2 = fVar9 * fVar4 - local_1c * fVar5;
  low_lane_rsqrt = _mm_rsqrt_ss(_mm_set_ss(fVar2 * fVar2 + fVar8 * fVar8 + fVar3 * fVar3));
  fVar9 = _mm_cvtss_f32(low_lane_rsqrt);
  fVar2 = fVar9 * fVar2;
  fVar8 = fVar8 * fVar9;
  fVar3 = fVar3 * fVar9;
  fVar9 = fVar8 * fVar1 - fVar2 * fVar5;
  fVar6 = fVar4 * fVar2 - fVar3 * fVar1;
  fVar7 = fVar3 * fVar5 - fVar8 * fVar4;
  low_lane_rsqrt = _mm_rsqrt_ss(_mm_set_ss(fVar7 * fVar7 + fVar6 * fVar6 + fVar9 * fVar9));
  fVar10 = _mm_cvtss_f32(low_lane_rsqrt);
  *in_ECX = fVar2;
  in_ECX[3] = fVar8;
  in_ECX[6] = fVar3;
  in_ECX[2] = fVar1;
  in_ECX[1] = fVar10 * fVar7;
  in_ECX[7] = fVar9 * fVar10;
  in_ECX[4] = fVar6 * fVar10;
  in_ECX[5] = fVar5;
  in_ECX[8] = fVar4;
  return;
}
