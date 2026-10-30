/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7016E00C4E198173D11C4C91B58EFA1753B0E24A56226F189240ABF1F8D7C087
 * Entry: 0x000dc510, Ghidra index: 2703, label: FUN_000dc510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
/* XBE 0x000DC5DA/0x000DC5E7/0x000DC5F3: fcomp/fld/fmul m32fp. */
extern float DAT_0040d5c4;
bool FUN_000dc510(int param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 undefined4 param_6,char param_7)

{
  int *piVar2;
  int *piVar3;
  float fVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  __m128 auVar10;
  __m128 factor;
  float norm_squared;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  /* 0xdc63f passes original ESP+0x50 as a real 16-byte output.
   * Callee 0x9e9c0 stores +0/+4/+8/+0xc (last = 0x3f800000).
   * The array is deliberately uninitialized before that actual call. */
  float call_output[4];
  
  iVar8 = 0;
  piVar6 = (int *)0x0;
  if (*(undefined4 **)(param_1 + 0x22c) != (undefined4 *)0x0) {
    piVar6 = (int *)**(undefined4 **)(param_1 + 0x22c);
  }
  piVar2 = *(int **)(param_1 + 0x22c);
  if (piVar6 != piVar2) {
    do {
      piVar3 = (int *)piVar6[2];
      if ((*(byte *)(piVar3[3] + 0x50) & 0x10) != 0) {
        if (param_7 == '\0') {
          bVar5 = *(byte *)(piVar3 + 0x25) >> 2;
        }
        else {
          bVar5 = *(byte *)(piVar3 + 0x25) >> 1;
        }
        if ((bVar5 & 1) != 0) {
          iVar7 = (**(code **)(*piVar3 + 0x40))();
          fStack_2c = *(float *)(iVar7 + 0x20);
          fStack_30 = *(float *)(iVar7 + 0x14);
          fStack_34 = *(float *)(iVar7 + 8);
          if (fStack_30 < 0.0) {
            fStack_2c = -fStack_2c;
            fStack_30 = -fStack_30;
            fStack_34 = -fStack_34;
          }
          if (fStack_30 < DAT_0040d5c4) {
            fStack_30 = DAT_0040d5c4;
            /* FSTP m32fp at 0xdc613 supplies SQRTSS at 0xdc619.
             * Only its low result is stored; inherited upper lanes are
             * dead before the later memory MOVSS overwrites XMM0. */
            fVar9 = (1.0 - DAT_0040d5c4 * DAT_0040d5c4) /
                    (fStack_34 * fStack_34 + fStack_2c * fStack_2c);
            _mm_store_ss(&fVar9,_mm_sqrt_ss(_mm_load_ss(&fVar9)));
            fStack_34 = fVar9 * fStack_34;
            fStack_2c = fVar9 * fStack_2c;
          }
          *param_3 = fStack_34 + *param_3;
          iVar8 = iVar8 + 1;
          param_3[1] = fStack_30 + param_3[1];
          param_3[2] = fStack_2c + param_3[2];
          FUN_0009e9c0(piVar3,call_output);
          *param_2 = call_output[0] + *param_2;
          param_2[1] = call_output[1] + param_2[1];
          param_2[2] = call_output[2] + param_2[2];
          *param_5 = *(float *)(piVar3[3] + 100) + *param_5;
          iVar7 = piVar3[3];
          fVar9 = *(float *)(iVar7 + 0x5c);
          fVar4 = *(float *)(iVar7 + 0x58);
          *param_4 = *(float *)(iVar7 + 0x54) + *param_4;
          param_4[1] = fVar4 + param_4[1];
          param_4[2] = fVar9 + param_4[2];
        }
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != piVar2);
    if (iVar8 != 0) {
      fVar9 = 1.0 / (float)iVar8;
      /* 0xdc729..746: broadcast the stored binary32 factor and scale
       * lanes 0/2/3 from MOVSS/MOVHPS. Lane 1 is cleared by memory
       * MOVSS, then participates in MULPS; it is not stored. */
      factor = _mm_load_ss(&fVar9);
      auVar10 = _mm_load_ss(param_2);
      factor = _mm_shuffle_ps(factor,factor,0);
      auVar10 = _mm_loadh_pi(auVar10,(const __m64 *)(param_2 + 1));
      auVar10 = _mm_mul_ps(auVar10,factor);
      _mm_store_ss(param_2,auVar10);
      _mm_storeh_pi((__m64 *)(param_2 + 1),auVar10);
      *param_5 = fVar9 * *param_5;
      /* 0xdc75e..77b repeats that block for param_4, with the same
       * scalar factor. MOVHPS stores exactly its two high float lanes. */
      factor = _mm_load_ss(&fVar9);
      auVar10 = _mm_load_ss(param_4);
      factor = _mm_shuffle_ps(factor,factor,0);
      auVar10 = _mm_loadh_pi(auVar10,(const __m64 *)(param_4 + 1));
      auVar10 = _mm_mul_ps(auVar10,factor);
      _mm_store_ss(param_4,auVar10);
      _mm_storeh_pi((__m64 *)(param_4 + 1),auVar10);
      fVar9 = param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3;
      if (fVar9 < 0.010000001) {
        param_3[1] = (1.0 - fVar9 * 10.0) + param_3[1];
      }
      if (1 < iVar8) {
        /* 0xdc7cd..7e5 computes (x*x+y*y)+z*z through x87 and
         * rounds it to m32fp. Extended intermediates remain unverified. */
        norm_squared = (*param_3 * *param_3 + param_3[1] * param_3[1]) +
                       param_3[2] * param_3[2];
        /* 0xdc7ef preserves XMM0 high lanes from param_4's product;
         * 0xdc7f5 stores only the approximate reciprocal-square-root. */
        auVar10 = _mm_rsqrt_ss(_mm_move_ss(auVar10,_mm_load_ss(&norm_squared)));
        _mm_store_ss(&fVar9,auVar10);
        *param_3 = fVar9 * *param_3;
        param_3[1] = fVar9 * param_3[1];
        param_3[2] = fVar9 * param_3[2];
      }
    }
  }
  return 0 < iVar8;
}
