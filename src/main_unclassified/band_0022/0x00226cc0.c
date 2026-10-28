/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 552308F98DDC42D71A6B93FA3896C4B348C07F3622D40449BD472EC87F52BAA8
 * Entry: 0x00226cc0, Ghidra index: 7652, label: FUN_00226cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_float_lane.h"
#include <xmmintrin.h>
/* Preserve the explicit extended intermediates and m32fp spill points.
 * The host float10 proxy does not implement original x87/MXCSR state. */
#pragma STDC FENV_ACCESS ON
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00226cc0(float param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  uint uVar4;
  float fVar5;
  bool bVar6;
  char cVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *in_ECX;
  int *piVar14;
  int *extraout_EDX;
  float fVar15;
  float fVar16;
  float original_length;
  /* S = ESP after the aligned allocation and saved registers.
   * MOVSS/MOVHPS and LEAs establish these separate 12-byte spans:
   * S+0x2c direction, S+0x38 target, S+0x48 forward, S+0x5c scaled.
   * Register-only helpers and complete guest frame binding remain ABI_UNVERIFIED. */
  float direction[3];
  float target[3];
  float forward[3];
  float scaled[3];
  float target_delta[3]; /* S+0x1c, used before the +0x40/0x1fdd0 calls. */
  float fStack_c0;
  float local_8c;
  undefined4 uStack_78;
  int iStack_60;
  int iStack_30;
  
  if ((*(byte *)(in_ECX[2] + 0xc50) & 0x10) != 0) {
    return 0;
  }
  cVar7 = FUN_00157c40(param_1);
  if (cVar7 == '\0') {
    return 0;
  }
  if ((bf_x86_word_to_f32((uint32_t)in_ECX[0x76]) < 0.0 != (bf_x86_word_to_f32((uint32_t)in_ECX[0x76]) == 0.0)) &&
     (bf_x86_word_to_f32((uint32_t)in_ECX[0x75]) < 0.0 != (bf_x86_word_to_f32((uint32_t)in_ECX[0x75]) == 0.0))) {
    return 0;
  }
  local_8c = 1.0;
  if (0 < (short)in_ECX[0x41]) {
    local_8c = 5.0;
  }
  *(byte *)(in_ECX + 0x88) = *(byte *)(in_ECX + 0x88) & 0xfe;
  if ((((0.0 < bf_x86_word_to_f32((uint32_t)in_ECX[0x8c])) &&
       (bf_x86_store_f32_word((uint32_t *)(in_ECX + 0x8c),
                             (float)((float10)bf_x86_word_to_f32((uint32_t)in_ECX[0x8c]) -
                                     (float10)param_1)),
       bf_x86_word_to_f32((uint32_t)in_ECX[0x8c]) < 0.0 != (bf_x86_word_to_f32((uint32_t)in_ECX[0x8c]) == 0.0))) &&
      (in_ECX[0x8c] = 0, (*(byte *)(in_ECX + 0x88) & 0x40) != 0)) && (in_ECX[0x81] == 0)) {
    FUN_00226b80(param_1);
  }
  if ((in_ECX[0x7b] == 0) && ((*(byte *)((int)in_ECX + 0x221) & 1) != 0)) {
    *(byte *)(in_ECX + 0x88) = *(byte *)(in_ECX + 0x88) & 0xf7;
    *(byte *)(in_ECX + 0x88) = *(byte *)(in_ECX + 0x88) & 0xbf;
  }
  if (((*(byte *)(in_ECX + 0x88) & 4) == 0) &&
     (((*(byte *)(in_ECX + 0x88) & 0x48) == 0 ||
      (bf_x86_word_to_f32((uint32_t)in_ECX[0x8c]) < 0.0 == (bf_x86_word_to_f32((uint32_t)in_ECX[0x8c]) == 0.0))))) goto LAB_00227259;
  if (((*(byte *)(in_ECX + 0x88) & 0x40) != 0) && ((in_ECX[0x7b] == 0 && (in_ECX[0x81] == 0)))) {
    FUN_00226b80(param_1);
  }
  pfVar8 = (float *)(**(code **)(*in_ECX + 0x54))();
  /* 0x226e33..0x226e89: (X*X+Y*Y)+Z*Z stays in x87 until a
   * four-byte spill, then SQRTSS stores its low word at S+0x28. */
  float10 input_x = (float10)*pfVar8;
  memcpy(&direction[2], pfVar8 + 2, sizeof(float));
  memcpy(&direction[1], pfVar8 + 1, sizeof(float));
  direction[0] = (float)input_x;
  float10 input_y = (float10)direction[1];
  float10 input_z = (float10)direction[2];
  float norm_word = (float)((input_x * input_x + input_y * input_y) + input_z * input_z);
  original_length = _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(norm_word)));
  if ((float10)0x1p-23f < (float10)original_length) {
    /* 0x226eb0..0x226ed1: RCPSS, broadcast, {X,+0,Y,Z} MULPS,
     * then exactly twelve bytes stored. The unstored lane executes too. */
    __m128 reciprocal = _mm_rcp_ss(_mm_load_ss(&original_length));
    reciprocal = _mm_shuffle_ps(reciprocal, reciprocal, 0);
    __m128 vector = _mm_load_ss(direction);
    vector = _mm_loadh_pi(vector, (const __m64 *)(direction + 1));
    vector = _mm_mul_ps(vector, reciprocal);
    _mm_store_ss(direction, vector);
    _mm_storeh_pi((__m64 *)(direction + 1), vector);
  }
  if (((*(byte *)(in_ECX + 0x88) & 0x48) != 0) &&
     (bf_x86_word_to_f32((uint32_t)in_ECX[0x8c]) < 0.0 != (bf_x86_word_to_f32((uint32_t)in_ECX[0x8c]) == 0.0))) {
    target[2] = bf_x86_word_to_f32((uint32_t)in_ECX[0x7e]);
    target[1] = bf_x86_word_to_f32((uint32_t)in_ECX[0x7d]);
    target[0] = bf_x86_word_to_f32((uint32_t)in_ECX[0x7c]);
    iVar9 = (**(code **)(*in_ECX + 0x40))();
    /* 0x226f2c..0x226f86 spills Z, Y, X, then compares the extended
     * (X*X+Z*Z)+Y*Y with one. <= and unordered take the fallback. */
    target_delta[2] = (float)((float10)target[2] - (float10)*(float *)(iVar9 + 0x2c));
    target_delta[1] = (float)((float10)target[1] - (float10)*(float *)(iVar9 + 0x28));
    target_delta[0] = (float)((float10)target[0] - (float10)*(float *)(iVar9 + 0x24));
    float10 delta_x = (float10)target_delta[0];
    float10 delta_y = (float10)target_delta[1];
    float10 delta_z = (float10)target_delta[2];
    float10 target_norm = (delta_x * delta_x + delta_z * delta_z) + delta_y * delta_y;
    if (!(target_norm > (float10)1.0f)) {
LAB_00227038:
      pfVar8 = (float *)(**(code **)(*in_ECX + 0x54))();
      /* 0x227045..0x22706e broadcasts 200, then multiplies by
       * {X,+0,Y,Z}, with the scalar broadcast as MULPS destination. */
      float scale_200 = 200.0f;
      __m128 broadcast = _mm_load_ss(&scale_200);
      broadcast = _mm_shuffle_ps(broadcast, broadcast, 0);
      __m128 input = _mm_load_ss(pfVar8);
      input = _mm_loadh_pi(input, (const __m64 *)(pfVar8 + 1));
      __m128 product = _mm_mul_ps(broadcast, input);
      _mm_store_ss(scaled, product);
      _mm_storeh_pi((__m64 *)(scaled + 1), product);
      memcpy(forward, scaled, sizeof(forward));
      iVar9 = (**(code **)(*in_ECX + 0x40))();
      target[2] = (float)((float10)forward[2] + (float10)*(float *)(iVar9 + 0x2c));
      target[1] = (float)((float10)forward[1] + (float10)*(float *)(iVar9 + 0x28));
      target[0] = (float)((float10)forward[0] + (float10)*(float *)(iVar9 + 0x24));
      FUN_00226360();
      if ((*(byte *)(in_ECX + 0x88) & 0x40) != 0) {
        in_ECX[0x74] = 0x3f000000;
      }
    }
    else {
      float target_norm_word = (float)target_norm;
      __m128 reciprocal = _mm_rsqrt_ss(_mm_load_ss(&target_norm_word));
      reciprocal = _mm_shuffle_ps(reciprocal, reciprocal, 0);
      __m128 vector = _mm_load_ss(target_delta);
      vector = _mm_loadh_pi(vector, (const __m64 *)(target_delta + 1));
      vector = _mm_mul_ps(vector, reciprocal);
      _mm_store_ss(target_delta, vector);
      _mm_storeh_pi((__m64 *)(target_delta + 1), vector);
      (**(code **)(*in_ECX + 0x40))();
      pfVar8 = (float *)FUN_0001fdd0();
      forward[2] = (float)-(float10)pfVar8[2];
      forward[1] = (float)-(float10)pfVar8[1];
      float10 negative_x = -(float10)*pfVar8;
      float10 facing_dot = ((float10)target_delta[0] * negative_x +
                            (float10)forward[2] * (float10)target_delta[2]) +
                            (float10)forward[1] * (float10)target_delta[1];
      if (facing_dot < (float10)0.5f)
      goto LAB_00227038;
    }
    if ((int *)in_ECX[0x7b] != (int *)0x0) {
      iVar10 = (**(code **)(*(int *)in_ECX[0x7b] + 0x40))();
      /* 0x22710d..0x22712f copies raw Z/Y/X DWORDs before storing X/Y/Z. */
      uint32_t follow_z = *(uint32_t *)(iVar10 + 0x2c);
      uint32_t follow_y = *(uint32_t *)(iVar10 + 0x28);
      uint32_t follow_x = *(uint32_t *)(iVar10 + 0x24);
      memcpy(in_ECX + 0x7c, &follow_x, sizeof(follow_x));
      memcpy(in_ECX + 0x7d, &follow_y, sizeof(follow_y));
      memcpy(in_ECX + 0x7e, &follow_z, sizeof(follow_z));
      target[2] = bf_x86_word_to_f32(follow_z);
      target[1] = bf_x86_word_to_f32((uint32_t)in_ECX[0x7d]);
      target[0] = bf_x86_word_to_f32((uint32_t)in_ECX[0x7c]);
      if ((*(byte *)((int)in_ECX + 0x221) & 1) != 0) {
        FUN_00226930(in_ECX,param_1,target);
      }
    }
    iVar9 = (**(code **)(*in_ECX + 0x40))();
    direction[2] = (float)((float10)target[2] - (float10)*(float *)(iVar9 + 0x2c));
    direction[1] = (float)((float10)target[1] - (float10)*(float *)(iVar9 + 0x28));
    /* 0x2271a5 stores X without popping it; its norm term stays extended. */
    float10 final_x = (float10)target[0] - (float10)*(float *)(iVar9 + 0x24);
    direction[0] = (float)final_x;
    float10 final_y = (float10)direction[1];
    float10 final_z = (float10)direction[2];
    float10 final_norm = (final_z * final_z + final_y * final_y) + final_x * final_x;
    if ((float10)0x1p-46f < final_norm) {
      float final_norm_word = (float)final_norm;
      __m128 reciprocal = _mm_rsqrt_ss(_mm_load_ss(&final_norm_word));
      reciprocal = _mm_shuffle_ps(reciprocal, reciprocal, 0);
      __m128 vector = _mm_load_ss(direction);
      vector = _mm_loadh_pi(vector, (const __m64 *)(direction + 1));
      vector = _mm_mul_ps(vector, reciprocal);
      _mm_store_ss(direction, vector);
      _mm_storeh_pi((__m64 *)(direction + 1), vector);
    }
  }
  fStack_c0 = original_length;
  if ((*(byte *)(in_ECX + 0x88) & 4) != 0) {
    fStack_c0 = bf_x86_word_to_f32((uint32_t)in_ECX[0x82]);
  }
  FUN_002266d0(in_ECX,param_1,original_length,direction,fStack_c0);
LAB_00227259:
  if ((bf_x86_word_to_f32((uint32_t)in_ECX[0x76]) < 0.0 == (bf_x86_word_to_f32((uint32_t)in_ECX[0x76]) == 0.0)) ||
     ((*(byte *)((int)in_ECX + 0x221) & 4) != 0)) {
    bf_x86_store_f32_word((uint32_t *)(in_ECX + 0x76),
        (float)((float10)bf_x86_word_to_f32((uint32_t)in_ECX[0x76]) -
                (float10)local_8c * (float10)param_1));
  }
  else if (0.0 < bf_x86_word_to_f32((uint32_t)in_ECX[0x75])) {
    bf_x86_store_f32_word((uint32_t *)(in_ECX + 0x75),
        (float)((float10)bf_x86_word_to_f32((uint32_t)in_ECX[0x75]) -
                (float10)local_8c * (float10)param_1));
  }
  if (((in_ECX[0x81] == 1) && (iVar9 = (**(code **)(*in_ECX + 0x54))(), *(float *)(iVar9 + 4) < 0.5)
      ) && (bf_x86_word_to_f32((uint32_t)in_ECX[0x8c]) == 0.0)) {
    FUN_00227f80(in_ECX);
  }
  bVar6 = false;
  if (((((0.0 < bf_x86_word_to_f32((uint32_t)in_ECX[0x85])) && ((*(byte *)(in_ECX + 0x88) & 0x20) != 0)) &&
       ((in_ECX[0x7b] != 0 || (in_ECX[0x87] != 2)))) &&
      ((in_ECX[0x6d] != 0 && (*(int *)(*(int *)(in_ECX[0x6d] + 0xc) + 4) == 3)))) &&
     (cVar7 = FUN_00112800(), cVar7 != '\0')) {
    if (bf_x86_word_to_f32((uint32_t)in_ECX[0x86]) < 0.25) {
      bf_x86_store_f32_word((uint32_t *)(in_ECX + 0x86),
          (float)((float10)param_1 + (float10)bf_x86_word_to_f32((uint32_t)in_ECX[0x86])));
    }
    else {
      in_ECX[0x86] = 0;
      iVar9 = *(int *)(in_ECX[2] + 0x204);
      iVar10 = *(int *)(iVar9 + 0x3c);
      *(int *)(iVar9 + 0x3c) = iVar10 + 1;
      (**(code **)(*in_ECX + 0x40))();
      FUN_000d4240(in_ECX[0x85]);
      FUN_000d1420(uStack_78);
      FUN_000d4270(forward);
      if (iStack_60 != iStack_30) {
        do {
          if (bVar6) goto LAB_002276a3;
          for (puVar3 = *(undefined4 **)(iStack_60 + 0x1c); puVar3 != (undefined4 *)0x0;
              puVar3 = (undefined4 *)*puVar3) {
            uVar4 = *(uint *)((uint)*(ushort *)(puVar3 + 2) * 0x10 + 0xc + *(int *)(iVar9 + 0x14));
            if (((uVar4 != 0) &&
                (iVar11 = *(int *)(uVar4 + 0x18), *(int *)(uVar4 + 0x18) = iVar10, iVar11 != iVar10)
                ) && (piVar14 = (int *)(-(uint)((*(byte *)(uVar4 + 0x26) & 0x40) != 0) & uVar4),
                     piVar14 != (int *)0x0)) {
              if ((int *)in_ECX[0x7b] == (int *)0x0) {
                iVar11 = (**(code **)(*piVar14 + 0xec))();
                if (iVar11 != 0) {
                  piVar13 = (int *)(**(code **)(*piVar14 + 0xec))();
                  (**(code **)(*piVar13 + 0x9c))();
                  cVar7 = FUN_0004b940();
                  if (cVar7 != '\0') {
                    iVar11 = (**(code **)(*extraout_EDX + 0x40))();
                    iVar12 = (**(code **)(*piVar14 + 0x40))();
                    fVar1 = *(float *)(iVar12 + 0x2c) - *(float *)(iVar11 + 0x2c);
                    local_8c = *(float *)(iVar12 + 0x28) - *(float *)(iVar11 + 0x28);
                    direction[0] = *(float *)(iVar12 + 0x24) - *(float *)(iVar11 + 0x24);
                    direction[1] = local_8c;
                    direction[2] = fVar1;
                    fVar1 = direction[0] * direction[0] + local_8c * local_8c + fVar1 * fVar1;
                    fVar2 = bf_x86_word_to_f32((uint32_t)in_ECX[0x85]) * bf_x86_word_to_f32((uint32_t)in_ECX[0x85]);
                    if (fVar1 < fVar2 != (fVar1 == fVar2)) {
                      if (fVar1 < 0.0 != (fVar1 == 0.0)) goto LAB_0022767c;
                      pfVar8 = (float *)(**(code **)(*in_ECX + 0x54))();
                      if (1.1920929e-07 <
                          pfVar8[2] * pfVar8[2] + pfVar8[1] * pfVar8[1] + *pfVar8 * *pfVar8) {
                        fVar2 = direction[1] * pfVar8[1] + direction[2] * pfVar8[2];
                        fVar1 = direction[0];
                        goto LAB_00227667;
                      }
                    }
                  }
                }
              }
              else if (piVar14 == (int *)in_ECX[0x7b]) {
                iVar11 = (**(code **)(*in_ECX + 0x40))();
                iVar12 = (**(code **)(*piVar14 + 0x40))();
                fVar2 = *(float *)(iVar12 + 0x2c) - *(float *)(iVar11 + 0x2c);
                fVar16 = *(float *)(iVar12 + 0x28) - *(float *)(iVar11 + 0x28);
                fVar1 = *(float *)(iVar12 + 0x24) - *(float *)(iVar11 + 0x24);
                fVar15 = fVar1 * fVar1 + fVar16 * fVar16 + fVar2 * fVar2;
                fVar5 = bf_x86_word_to_f32((uint32_t)in_ECX[0x85]) * bf_x86_word_to_f32((uint32_t)in_ECX[0x85]);
                local_8c = fVar16;
                if (fVar15 < fVar5 != (fVar15 == fVar5)) {
                  if (fVar15 < 0.0 != (fVar15 == 0.0)) {
LAB_0022767c:
                    bVar6 = true;
                    break;
                  }
                  pfVar8 = (float *)(**(code **)(*in_ECX + 0x54))();
                  if (1.1920929e-07 <
                      pfVar8[2] * pfVar8[2] + pfVar8[1] * pfVar8[1] + *pfVar8 * *pfVar8) {
                    fVar2 = fVar16 * pfVar8[1] + fVar2 * pfVar8[2];
LAB_00227667:
                    fVar2 = fVar1 * *pfVar8 + fVar2;
                    if (fVar2 < 0.0 != (fVar2 == 0.0)) goto LAB_0022767c;
                  }
                }
              }
            }
          }
          FUN_000d4210();
        } while (iStack_60 != iStack_30);
        if (bVar6) {
LAB_002276a3:
          in_ECX[0x76] = 0;
          in_ECX[0x75] = 0;
        }
      }
    }
  }
  if (bf_x86_word_to_f32((uint32_t)in_ECX[0x76]) < 0.0 != (bf_x86_word_to_f32((uint32_t)in_ECX[0x76]) == 0.0)) {
    if ((in_ECX[0x81] == 2) || (in_ECX[0x81] == 1)) {
      FUN_00227f80(in_ECX);
    }
    else if (bf_x86_word_to_f32((uint32_t)in_ECX[0x75]) < 0.0 != (bf_x86_word_to_f32((uint32_t)in_ECX[0x75]) == 0.0)) {
      if ((((*(byte *)(in_ECX + 0x88) & 0x10) != 0) || (bVar6)) &&
         ((*(byte *)(in_ECX + 0x88) & 2) == 0)) {
        FUN_00227760();
      }
      return 0;
    }
  }
  FUN_00228c10();
  return 1;
}
