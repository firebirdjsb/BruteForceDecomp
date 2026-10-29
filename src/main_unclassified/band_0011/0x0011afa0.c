/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 903905D04CA2B5CAF2D3FAD9B4188098462C67BF6EEC966A62DABEB5D1654056
 * Entry: 0x0011afa0, Ghidra index: 3613, label: FUN_0011afa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
#include "../../contracts/bf_0001fd40_normalize_operation.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0011afa0(int param_1,float param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float rsqrt_low;
  float length_low;
  float local_bc;
  unsigned char copied_xmm0[16];
  /* F is ESP after the 0xd0-byte allocation and three register saves.
   * These are evidenced memory spans, not a fabricated guest stack/ABI. */
  float direction_b8[3]; /* F+0x24: in-place 0x0001fd40 input/output. */
  float direction_c8[3]; /* F+0x14: selected direction words. */
  float transverse_ac[3]; /* F+0x30: three cross-product words. */
  float fStack_a0;
  float basis_9c[4]; /* F+0x40: float3, later 16-byte helper output. */
  float quaternion_8c[4]; /* F+0x50: 0x002339d0 output. */
  float quaternion_78[4]; /* F+0x64: 0x002339d0 output. */
  float fStack_68;
  float matrix_64[12]; /* F+0x78: 48-byte 0x0003d6c0 output;
                       * tail reuses the first 36 bytes as a matrix. */
  undefined1 auStack_34 [52];
  
  if (0.0 < *(float *)(param_1 + 0x40c)) {
    *(float *)(param_1 + 0x40c) = *(float *)(param_1 + 0x40c) - param_2;
    if (*(float *)(param_1 + 0x40c) < 0.0 != (*(float *)(param_1 + 0x40c) == 0.0)) {
      *(undefined4 *)(param_1 + 0x40c) = 0;
      if (*(int *)(param_1 + 0x268) != -1) {
        FUN_0023d9c0();
      }
      if (*(int *)(param_1 + 0x26c) != -1) {
        FUN_0023d9c0();
      }
    }
  }
  if (((*(int *)(param_1 + 0x270) != -1) && (*(int *)(param_1 + 0x3ac) != 0)) &&
     (*(int *)(param_1 + 0x3ac) != -1)) {
    iVar10 = *(int *)(param_1 + 0x2e8);
    cVar9 = (**(code **)(*(int *)(iVar10 + 0x144) + 0x20))();
    if (((cVar9 != '\0') && (iVar10 = *(int *)(iVar10 + 0x164), iVar10 != 0)) &&
       ((*(int *)(*(int *)(iVar10 + 0xc) + 4) == 0x14 && (iVar10 != 0)))) {
      FUN_00156290(param_2);
    }
    iVar10 = FUN_002338c0(auStack_34,*(int *)(param_1 + 0x3ac) + 0x14,param_1 + 0x3b0);
    FUN_0003d6c0(&matrix_64[0],iVar10,iVar10 + 0x24);
    FUN_0003d730(param_1 + 0x34c,&matrix_64[0]);
  }
  if (*(int *)(param_1 + 0x268) != -1) {
    if (0.2 < *(float *)(param_1 + 0x594)) {
      basis_9c[2] = *(float *)(param_1 + 0x5dc);
      basis_9c[1] = *(float *)(param_1 + 0x5d0);
      basis_9c[0] = *(float *)(param_1 + 0x5c4);
      fVar18 = basis_9c[0] * 100.0f;
      fVar16 = basis_9c[1] * 100.0f;
      fVar17 = basis_9c[2] * 100.0f;
      iVar10 = *(int *)(param_1 + 0x6c);
      fVar17 = *(float *)(iVar10 + 0x40) - fVar17;
      fVar16 = *(float *)(iVar10 + 0x3c) - fVar16;
      FUN_0011e9d0(param_1,*(float *)(iVar10 + 0x38) - fVar18,fVar16,fVar17);
    }
    if ((*(int *)(param_1 + 0x408) != 0) && (*(int *)(param_1 + 0x408) != -1)) {
      basis_9c[2] = -*(float *)(param_1 + 0x5dc);
      basis_9c[0] = -*(float *)(param_1 + 0x5c4);
      rsqrt_low = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss((float)((long double)basis_9c[0] * basis_9c[0] + (long double)basis_9c[2] * basis_9c[2]))));
      basis_9c[0] = rsqrt_low * basis_9c[0];
      basis_9c[2] = rsqrt_low * basis_9c[2];
      fVar16 = *(float *)(*(int *)(param_1 + 0x6c) + 0x34);
      fVar16 = -fVar16;
      fVar17 = -*(float *)(*(int *)(param_1 + 0x6c) + 0x1c);
      rsqrt_low = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss((float)((long double)fVar17 * fVar17 + (long double)fVar16 * fVar16))));
      fVar11 = (float10)fpatan((float10)basis_9c[0],(float10)basis_9c[2]);
      fVar11 = (float10)FUN_0001fae0((float)fVar11);
      fVar12 = (float10)fpatan((float10)(rsqrt_low * fVar17),(float10)(rsqrt_low * fVar16));
      fVar12 = (float10)FUN_0001fae0((float)fVar12);
      fVar12 = (float10)(float)fVar11 - fVar12;
      if ((float10)3.1415927 < ABS(fVar12)) {
        if ((float10)0.0 <= fVar12) {
          fVar12 = fVar12 - (float10)6.2831855;
        }
        else {
          fVar12 = fVar12 + (float10)6.2831855;
        }
      }
      if ((*(int *)(param_1 + 0x1f8) == 6) || (*(int *)(param_1 + 0x1f8) == 7)) {
        fVar16 = 0.17453292;
      }
      else {
        fVar16 = 0.61086524;
      }
      fVar17 = (float)fVar12;
      if ((float)fVar12 <= -fVar16) {
        fVar17 = -fVar16;
      }
      if (fVar16 <= fVar17) {
        fVar17 = fVar16;
      }
      iVar10 = *(int *)(*(int *)(param_1 + 0x408) + 0x10);
      if (iVar10 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(iVar10 + 100);
      }
      /* MOVUPS loads all 16 bytes before any destination store. */
      memcpy(copied_xmm0, (const void *)(uintptr_t)(uint32_t)(iVar10 + 0x14), 16);
      uVar1 = *(undefined4 *)(iVar10 + 0x34);
      uVar5 = *(undefined4 *)(iVar10 + 0x24);
      uVar6 = *(undefined4 *)(iVar10 + 0x28);
      uVar7 = *(undefined4 *)(iVar10 + 0x2c);
      uVar8 = *(undefined4 *)(iVar10 + 0x30);
      memcpy((void *)(uintptr_t)(uint32_t)(param_1 + 0x2c4), copied_xmm0, 16);
      *(undefined4 *)(param_1 + 0x2e4) = uVar1;
      *(undefined4 *)(param_1 + 0x2d4) = uVar5;
      *(undefined4 *)(param_1 + 0x2d8) = uVar6;
      *(undefined4 *)(param_1 + 0x2dc) = uVar7;
      *(undefined4 *)(param_1 + 0x2e0) = uVar8;
      FUN_00072010(param_1 + 0x2c4,-fVar17);
    }
  }
  if (*(int *)(param_1 + 0x274) != -1) {
    if (0.1 < *(float *)(param_1 + 0x598)) {
      fVar16 = *(float *)(param_1 + 0x5d0) * 100.0;
      fVar17 = *(float *)(param_1 + 0x5dc) * 100.0;
      iVar10 = *(int *)(param_1 + 0x6c);
      fVar17 = *(float *)(iVar10 + 0x40) - fVar17;
      fVar16 = *(float *)(iVar10 + 0x3c) - fVar16;
      *(float *)(param_1 + 0x674) = *(float *)(iVar10 + 0x38) - *(float *)(param_1 + 0x5c4) * 100.0;
      *(float *)(param_1 + 0x678) = fVar16;
      *(float *)(param_1 + 0x67c) = fVar17;
    }
    iVar10 = *(int *)(param_1 + 1000);
    basis_9c[2] = *(float *)(iVar10 + 0x34);
    basis_9c[1] = *(float *)(iVar10 + 0x28);
    basis_9c[0] = *(float *)(iVar10 + 0x1c);
    fVar16 = *(float *)(param_1 + 0x67c) - *(float *)(iVar10 + 0x40);
    fVar17 = *(float *)(param_1 + 0x678) - *(float *)(iVar10 + 0x3c);
    fVar2 = *(float *)(param_1 + 0x674) - *(float *)(iVar10 + 0x38);
    /* 0x0011b562..58e: x87 sum spills to F32, SQRTSS low spills to F+3c.
     * Inherited high lanes are dead; no replacement value is manufactured. */
    length_low = _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss((float)(
        ((long double)fVar16 * fVar16 + (long double)fVar2 * fVar2) +
        (long double)fVar17 * fVar17))));
    if (length_low < 2.0) {
      if (length_low < 1.0) {
        fVar16 = *(float *)(*(int *)(param_1 + 0x6c) + 0x34);
        fVar16 = -fVar16;
        direction_b8[0] = -*(float *)(*(int *)(param_1 + 0x6c) + 0x1c);
        rsqrt_low = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss((float)((long double)direction_b8[0] * direction_b8[0] + (long double)fVar16 * fVar16))));
        direction_b8[0] = (float)((long double)rsqrt_low * direction_b8[0]);
        direction_b8[1] = (float)((long double)rsqrt_low * 0.0f);
        direction_b8[2] = fVar16;
      }
      else {
        fVar3 = -*(float *)(*(int *)(param_1 + 0x6c) + 0x34);
        fVar18 = -*(float *)(*(int *)(param_1 + 0x6c) + 0x1c);
        rsqrt_low = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss((float)((long double)fVar18 * fVar18 + (long double)fVar3 * fVar3))));
        fVar19 = _mm_cvtss_f32(_mm_rcp_ss(_mm_set_ss(length_low)));
        fVar4 = length_low - 1.0;
        /* RCPSS broadcast/MULPS at 0x11b679..690, then a second
         * MULPS at 0x11b6c4: preserve the intervening F32 products. */
        direction_b8[0] = fVar2 * fVar19;
        direction_b8[1] = fVar17 * fVar19;
        direction_b8[2] = fVar16 * fVar19;
        quaternion_78[0] = direction_b8[0] * fVar4;
        quaternion_78[1] = direction_b8[1] * fVar4;
        quaternion_78[2] = direction_b8[2] * fVar4;
        fVar4 = 1.0f - fVar4;
        /* Only X/Y are multiplied by RSQRTSS before this packed scale;
         * the original Z word remains fVar3 (0x11b615, 0x11b730). */
        direction_c8[0] = (float)((long double)rsqrt_low * fVar18);
        direction_c8[1] = (float)((long double)rsqrt_low * 0.0f);
        direction_c8[2] = fVar3;
        direction_c8[0] *= fVar4;
        direction_c8[1] *= fVar4;
        direction_c8[2] *= fVar4;
        direction_b8[0] = (float)((long double)quaternion_78[0] + direction_c8[0]);
        direction_b8[1] = (float)((long double)quaternion_78[1] + direction_c8[1]);
        direction_b8[2] = (float)((long double)quaternion_78[2] + direction_c8[2]);
        /* 0x11b776/77e: EAX=F+0x24; helper writes these same 12 bytes. */
        bf_0001fd40_normalize(direction_b8);
      }
    }
    else {
      fVar18 = _mm_cvtss_f32(_mm_rcp_ss(_mm_set_ss(length_low)));
      direction_b8[0] = fVar2 * fVar18;
      direction_b8[1] = fVar17 * fVar18;
      direction_b8[2] = fVar16 * fVar18;
    }
    local_bc = basis_9c[0] * direction_b8[0] + basis_9c[1] * direction_b8[1] + basis_9c[2] * direction_b8[2];
    fVar16 = *(float *)(*(int *)(param_1 + 0x3ec) + 0x34);
    if ((0.0 <= *(float *)(*(int *)(param_1 + 0x3ec) + 0x1c) * direction_b8[0] + fVar16 * direction_b8[2])
       || ((*(byte *)(param_1 + 0x262) & 8) != 0)) {
      direction_c8[0] = direction_b8[0];
      transverse_ac[2] = direction_b8[0] * -1.0 - direction_b8[1] * 0.0;
      direction_c8[1] = direction_b8[1];
      direction_c8[2] = direction_b8[2];
      transverse_ac[1] = direction_b8[2] * 0.0 - direction_b8[0] * 0.0;
      transverse_ac[0] = direction_b8[1] * 0.0 - direction_b8[2] * -1.0;
      fVar17 = 1.0 / SQRT(transverse_ac[1] * transverse_ac[1] + transverse_ac[2] * transverse_ac[2] + transverse_ac[0] * transverse_ac[0]);
      transverse_ac[0] = transverse_ac[0] * fVar17;
      transverse_ac[1] = transverse_ac[1] * fVar17;
      transverse_ac[2] = transverse_ac[2] * fVar17;
      basis_9c[2] = direction_b8[1] * transverse_ac[0] - transverse_ac[1] * direction_b8[0];
      basis_9c[1] = transverse_ac[2] * direction_b8[0] - direction_b8[2] * transverse_ac[0];
    }
    else {
      fVar16 = *(float *)(*(int *)(param_1 + 0x6c) + 0x34);
      fVar17 = -fVar16;
      direction_c8[0] = -*(float *)(*(int *)(param_1 + 0x6c) + 0x1c);
      rsqrt_low = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss((float)((long double)fVar17 * fVar17 + (long double)direction_c8[0] * direction_c8[0]))));
      direction_c8[0] = rsqrt_low * direction_c8[0];
      fVar18 = rsqrt_low * 0.0;
      local_bc = basis_9c[0] * direction_c8[0] + basis_9c[1] * fVar18 + basis_9c[2] * fVar17;
      direction_c8[1] = fVar18;
      direction_c8[2] = fVar17;
      transverse_ac[2] = direction_c8[0] * -1.0 - fVar18 * 0.0;
      transverse_ac[1] = fVar17 * 0.0 - direction_c8[0] * 0.0;
      transverse_ac[0] = fVar18 * 0.0 - fVar17 * -1.0;
      fVar2 = 1.0 / SQRT(transverse_ac[1] * transverse_ac[1] + transverse_ac[2] * transverse_ac[2] + transverse_ac[0] * transverse_ac[0]);
      transverse_ac[0] = transverse_ac[0] * fVar2;
      transverse_ac[1] = transverse_ac[1] * fVar2;
      transverse_ac[2] = transverse_ac[2] * fVar2;
      basis_9c[2] = fVar18 * transverse_ac[0] - transverse_ac[1] * direction_c8[0];
      basis_9c[1] = transverse_ac[2] * direction_c8[0] - fVar17 * transverse_ac[0];
    }
    fStack_a0 = 1.0;
    basis_9c[0] = transverse_ac[1] * direction_c8[2] - transverse_ac[2] * direction_c8[1];
    fVar16 = ABS(*(float *)(param_1 + 0x488)) * param_2;
    if (fVar16 <= param_2 * 6.28318) {
      fVar16 = param_2 * 6.28318;
    }
    if (local_bc <= -1.0) {
      local_bc = -1.0;
    }
    fStack_68 = local_bc;
    if (1.0 <= local_bc) {
      fStack_68 = 1.0;
    }
    fVar11 = (float10)FUN_00306c80();
    if ((float10)fVar16 < fVar11) {
      fStack_a0 = (float)((float10)fVar16 / fVar11);
    }
    if (((*(byte *)(param_1 + 0x262) & 8) != 0) || (1.0 <= fStack_a0)) {
      *(float *)(param_1 + 0x37c) = basis_9c[0];
      *(float *)(param_1 + 0x388) = basis_9c[1];
      *(float *)(param_1 + 0x394) = basis_9c[2];
      *(float *)(param_1 + 0x380) = transverse_ac[0];
      *(float *)(param_1 + 0x38c) = transverse_ac[1];
      *(float *)(param_1 + 0x398) = transverse_ac[2];
      *(float *)(param_1 + 900) = direction_c8[0];
      *(float *)(param_1 + 0x390) = direction_c8[1];
      *(float *)(param_1 + 0x39c) = direction_c8[2];
    }
    else {
      matrix_64[0] = basis_9c[0];
      matrix_64[6] = basis_9c[2];
      matrix_64[1] = transverse_ac[0];
      matrix_64[3] = basis_9c[1];
      matrix_64[7] = transverse_ac[2];
      matrix_64[2] = direction_c8[0];
      matrix_64[4] = transverse_ac[1];
      matrix_64[8] = direction_c8[2];
      matrix_64[5] = direction_c8[1];
      /* ABI_UNVERIFIED: original ECX=*(self+0x3e8)+0x14, then F+0x78.
       * The existing helper drafts still omit these register inputs.
       * Their actual output spans are 16 bytes, not standalone scalars. */
      FUN_002339d0(&quaternion_8c[0]);
      FUN_002339d0(&quaternion_78[0]);
      /* Original ECX=F+0x40 output, EDX=F+0x64 input. Keep the
       * unresolved register contract explicit; do not invent a prototype. */
      FUN_0012b250(&quaternion_8c[0],fStack_a0);
      /* Original EDX=self+0x37c destination remains ABI_UNVERIFIED. */
      FUN_002333b0(&basis_9c[0]);
    }
    *(byte *)(param_1 + 0x262) = *(byte *)(param_1 + 0x262) & 0xf7;
  }
  return;
}
