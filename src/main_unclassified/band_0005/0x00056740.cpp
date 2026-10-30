/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F0F468B9AA91F6B9067BC44E82C04E6FDF941C12DCBE6AFA5937241981C706FD
 * Entry: 0x00056740, Ghidra index: 832, label: FUN_00056740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* WARNING: Restarted to delay deadcode elimination for space: stack */

extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_0005e310(int param_1,int *param_2);

int * FUN_00056740(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  __m128 x86_rsqrt_lane;
  __m128 x86_scaled_lanes;
  float local_3c;
  int *local_34;
  float fStack_28;
  float uStack_24_lo;
  float uStack_24_hi;
  undefined1 auStack_10 [4];
  int *piStack_c;
  int *piStack_8;
  undefined4 uStack_4;
  
  piVar5 = (int *)FUN_000120f0();
  local_3c = -99.0;
  local_34 = (int *)0x0;
  if (param_3 != 0) {
    piVar5[0x94] = piVar5[0x94] | 1;
    pfVar6 = (float *)(**(code **)(*(int *)(piVar5[0x93] + 8) + 4))();
    pfVar7 = (float *)(**(code **)(*(int *)(param_3 + 8) + 4))();
    fVar3 = pfVar7[2] - pfVar6[2];
    fVar4 = pfVar7[1] - pfVar6[1];
    fStack_28 = *pfVar7 - *pfVar6;
    /* XBE 0x567B2-0x567B6 copies two original m32fp words; the
     * following MOVHPS accesses both as floats, not as an integer. */
    uStack_24_lo = fVar4;
    uStack_24_hi = fVar3;
    fVar10 = fStack_28 * fStack_28 + fVar4 * fVar4 + fVar3 * fVar3;
    if (1.4210855e-14 < fVar10) {
      /* XBE 0x567EB RSQRTSS, 0x56815 SHUFPS, 0x56819 MOVHPS,
       * 0x5681D MULPS, 0x56820 MOVSS and 0x56824 MOVHPS.
       * Only lanes 0,2,3 are stored by the original. The omitted
       * original XMM0 lane 1 / floating exception state is unresolved. */
      x86_rsqrt_lane = _mm_rsqrt_ss(_mm_set_ss(fVar10));
      x86_scaled_lanes = _mm_mul_ps(
          _mm_setr_ps(fStack_28, 0.0f, uStack_24_lo, uStack_24_hi),
          _mm_shuffle_ps(x86_rsqrt_lane,x86_rsqrt_lane,0));
      fStack_28 = _mm_cvtss_f32(x86_scaled_lanes);
      uStack_24_lo = _mm_cvtss_f32(
          _mm_shuffle_ps(x86_scaled_lanes,x86_scaled_lanes,0xaa));
      uStack_24_hi = _mm_cvtss_f32(
          _mm_shuffle_ps(x86_scaled_lanes,x86_scaled_lanes,0xff));
    }
    piStack_c = (int *)0x0;
    piStack_8 = (int *)0x0;
    uStack_4 = 0;
    FUN_0005e310(*(undefined4 *)(piVar5[0x167] + 0x28),piVar5,auStack_10);
    piVar8 = piStack_c;
    if (piStack_c != piStack_8) {
      do {
        piVar1 = (int *)*piVar8;
        if ((piVar1 != (int *)0x0) && (piVar5 != piVar1)) {
          iVar2 = piVar5[0x93];
          piVar5[0x94] = piVar5[0x94] | 1;
          iVar9 = (**(code **)(*piVar1 + 0x40))();
          pfVar6 = (float *)(**(code **)(*(int *)(iVar2 + 8) + 4))();
          fVar3 = *(float *)(iVar9 + 0x2c) - pfVar6[2];
          fVar4 = *(float *)(iVar9 + 0x28) - pfVar6[1];
          fVar10 = *(float *)(iVar9 + 0x24) - *pfVar6;
          /* XBE 0x568E4 FSTP m32fp then 0x568E8 RSQRTSS:
           * the next operations use only the low scalar float. */
          x86_rsqrt_lane = _mm_rsqrt_ss(_mm_set_ss(
              fVar10 * fVar10 + fVar4 * fVar4 + fVar3 * fVar3));
          fVar11 = _mm_cvtss_f32(x86_rsqrt_lane);
          fVar3 = fVar11 * fVar10 * fStack_28 +
                  fVar4 * fVar11 * uStack_24_lo +
                  fVar3 * fVar11 * uStack_24_hi;
          if (local_3c < fVar3) {
            local_3c = fVar3;
            local_34 = piVar1;
          }
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 != piStack_8);
    }
    if (piStack_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piStack_c);
    }
  }
  return local_34;
}
