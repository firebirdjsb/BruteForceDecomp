/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68CBE263227919DE03CAC12D03F674A88B800BFAEBE5B4E88C55A7AB6ED1EADA
 * Entry: 0x002a1a50, Ghidra index: 9516, label: FUN_002a1a50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_float_lane.h"
#include "bf_x86_word_lanes.h"
#include "bf_xbox_d3d_device_x86.h"
#include <xmmintrin.h>
/* Ghidra SSE scalar low lane only; no verified ABI or Xbox runtime equivalence.
 * High-lane vector contents remain unmodeled. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00101a10;
extern uint32_t DAT_00101a20;
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e928;
extern uint32_t DAT_0037ec88;
extern uint32_t DAT_003b8bf8;
extern uint32_t DAT_00403890;
extern uint32_t DAT_00403894;
extern uint32_t DAT_00443658;
extern uint32_t *DAT_00469870;
extern uint32_t DAT_00469aeb;
extern uint32_t _DAT_00403898;
extern uint32_t _DAT_0040389c;
extern uint32_t _DAT_004038a0;
extern uint32_t _DAT_004038a4;
extern uint32_t _DAT_004038b0;
extern uint32_t _DAT_004038b4;
extern uint32_t _DAT_004038b8;
extern uint32_t _DAT_004038c0;
extern uint32_t _DAT_004038c4;
extern uint32_t _DAT_004038c8;
/* XBE 0x002A1D31/0x002A1D40/0x002A1D46 copies three
 * DWORDs into adjacent guest XYZ float words (0x004038D0..D8).
 * Source RSQRTSS (0x002A1B84) and F32 arithmetic feed these words.
 * Pointer types and numeric float->uint casts were decompiler errors.
 * Guest32 storage aliasing and native ABI remain ABI_UNVERIFIED. */
extern float _DAT_004038d0;
extern float _DAT_004038d4;
extern float _DAT_004038d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002a1a50(int param_1)

{
  undefined2 uVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  float *pfVar9;
  uint *puVar10;
  float *pfVar11;
  float10 fVar12;
  float10 fVar13;
  float10 dot_at_m88;
  undefined1 in_XMM0 [16];
  __m128 auVar14;
  undefined1 local_1b4 [112];
  undefined1 local_144 [48];
  uint32_t output_at_m110[12];
  float local_fc;
  float local_f8;
  float local_f4;
  float local_e8;
  float local_e0;
  float local_dc;
  uint32_t output_at_md4[12];
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined4 local_b0;
  float local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  float local_8c;
  float local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float local_64 [5];
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  char local_21;
  uint *local_20;
  char local_19;
  float local_18;
  uint *local_14;
  int local_10;
  float local_c;
  uint32_t slot_m4;
  uint32_t scalar_at_m1c;
  float reciprocal_at_m10;
  float reciprocal_first_at_m10;
  float norm_squared;
  float alpha_255;
  uint32_t norm_input_bits;
  uint32_t halfword_pair;
  uint16_t index_hi, index_lo;
  int index_count;
  const unsigned char *index_cursor;
  
  local_20 = *(uint **)(param_1 + 0xe8);
  if (local_20 != (uint *)0x0) {
    piVar3 = *(int **)(*(int *)(param_1 + 0xf4) + 0x3c);
    /* 2a1a74..2a1a88: guest byte stride is 9*8=0x48, not
     * 0x48 C DWORD elements. Guest mapping remains unverified. */
    local_50 = (undefined4 *)(uintptr_t)(UINT32_C(0x00443658) +
        (uint32_t)*(int *)(*(int *)(param_1 + 0xf4) + 0x48) * UINT32_C(0x48));
    fVar12 = (float10)(**(code **)(*piVar3 + 0x1c))
                                (piVar3,*(undefined4 *)(param_1 + 0x88),
                                 *(undefined4 *)(param_1 + 0x8c));
    local_88 = (float)fVar12;
    FUN_00061eb0();
    piVar3 = (int *)(**(code **)(*DAT_00469870 + 0x40))(DAT_00469870);
    uVar4 = (**(code **)(*piVar3 + 0x14))();
    iVar5 = FUN_002338c0(local_1b4,uVar4,param_1 + 0x48);
    /* 2a1ad9/2a1ae0: original output is EBP-0x110, 48 bytes.
     * The previous 24-byte array omitted the later float consumers. */
    FUN_0003d6c0(output_at_m110,iVar5,iVar5 + 0x24);
    piVar3 = (int *)(**(code **)(*DAT_00469870 + 0x40))(DAT_00469870);
    uVar4 = (**(code **)(*piVar3 + 0x10))();
    iVar5 = FUN_002338c0(local_1b4,local_144,uVar4);
    /* 2a1b13/2a1b1a: same typed three-stack-word producer writes
     * EBP-0xd4..-0xa5. These scalars read actual produced DWORD lanes. */
    FUN_0003d6c0(output_at_md4,iVar5,iVar5 + 0x24);
    local_d4 = bf_x86_word_to_f32(output_at_md4[1]);
    local_d0 = bf_x86_word_to_f32(output_at_md4[2]);
    local_c8 = bf_x86_word_to_f32(output_at_md4[4]);
    local_c4 = bf_x86_word_to_f32(output_at_md4[5]);
    local_bc = bf_x86_word_to_f32(output_at_md4[7]);
    local_b8 = bf_x86_word_to_f32(output_at_md4[8]);
    local_b4 = bf_x86_word_to_f32(output_at_md4[9]);
    local_b0 = output_at_md4[10];
    local_ac = bf_x86_word_to_f32(output_at_md4[11]);
    local_70 = local_b4;
    local_6c = local_b0;
    local_34 = local_bc;
    local_68 = local_ac;
    local_38 = local_c8;
    /* 2a1b5c..2a1b89 / 2a1bcc..2a1bf9: x87 sums Z^2,
     * Y^2, X^2 and spills m32fp before low-lane RSQRTSS. Unknown
     * inherited XMM high lanes have no local read; exit ABI is unverified. */
    norm_squared = (float)(((float10)local_bc * (float10)local_bc +
                           (float10)local_c8 * (float10)local_c8) +
                          (float10)local_d4 * (float10)local_d4);
    auVar14 = _mm_rsqrt_ss(_mm_set_ss(norm_squared));
    reciprocal_first_at_m10 = _mm_cvtss_f32(auVar14);
    local_3c = (float)((float10)reciprocal_first_at_m10 * (float10)local_d4);
    local_e0 = (float)((float10)local_c8 * (float10)reciprocal_first_at_m10);
    local_dc = (float)((float10)local_bc * (float10)reciprocal_first_at_m10);
    local_30 = local_d0;
    norm_squared = (float)(((float10)local_b8 * (float10)local_b8 +
                           (float10)local_c4 * (float10)local_c4) +
                          (float10)local_d0 * (float10)local_d0);
    auVar14 = _mm_rsqrt_ss(_mm_set_ss(norm_squared));
    reciprocal_at_m10 = _mm_cvtss_f32(auVar14);
    local_d0 = reciprocal_at_m10 * local_d0;
    local_21 = *(int *)(param_1 + 0xdc) != 0;
    local_c4 = local_c4 * reciprocal_at_m10;
    local_b8 = local_b8 * reciprocal_at_m10;
    pfVar9 = (float *)(param_1 + 200);
    pfVar11 = local_64;
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar11 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar11 = pfVar11 + 1;
    }
    bf_x86_store_f32_word(&_DAT_004038c8, -local_b8);
    bf_x86_store_f32_word(&_DAT_004038c4, -local_c4);
    bf_x86_store_f32_word(&_DAT_004038c0, -local_d0);
    local_10 = -1;
    local_18 = local_64[2] - local_64[0];
    local_c = local_64[3] - local_64[1];
    if ((*(byte *)(param_1 + 0xf8) & 1) == 0) {
      DAT_00403894 = 0xc61c4000;
      _DAT_0040389c = 0x38d1b1b9;
    }
    else {
      DAT_00403894 = 0x3e99999a;
      _DAT_0040389c = 0x3fb6db6e;
    }
    if ((*(byte *)(*(int *)(param_1 + 0xf4) + 0x40) & 2) == 0) {
      DAT_00403890 = 0xbf800000;
      _DAT_00403898 = 0x3f800000;
    }
    else {
      DAT_00403890 = 0x3db27eb6;
      _DAT_00403898 = 0x407b1d2a;
    }
    _DAT_004038a0 = 0x3f800000;
    if ((*(byte *)(*(int *)(param_1 + 0xf4) + 0x40) & 1) == 0) {
      _DAT_004038a0 = 0;
    }
    _DAT_004038a4 = *(undefined4 *)(param_1 + 0xe4);
    _DAT_004038b8 = bf_x86_f32_word(local_ac);
    _DAT_004038b0 = bf_x86_f32_word(local_b4);
    _DAT_004038b4 = local_b0;
    _DAT_004038d0 = local_3c;
    /* 2a1d40/2a1d46: original global stores occur here, after the
     * local normalized-vector lifetimes, not at reciprocal production. */
    _DAT_004038d4 = local_e0;
    _DAT_004038d8 = local_dc;
    local_2c = bf_x86_word_to_f32(_DAT_004038c4);
    local_28 = bf_x86_word_to_f32(_DAT_004038c8);
    slot_m4 = _DAT_004038c8;
    FUN_002385a0();
    if (*(code **)(param_1 + 0x94) == (code *)0x0) {
      if (DAT_00469aeb == '\0') {
        D3D8LTCG__D3DDevice_LoadVertexShaderProgram(&DAT_003b8bf8,0);
        D3D8LTCG__D3DDevice_SelectVertexShaderDirect_0();
        DAT_00469aeb = '\x01';
      }
      FUN_0029f5d0();
    }
    else {
      (**(code **)(param_1 + 0x94))(param_1,*(undefined4 *)(param_1 + 0x98));
    }
    FUN_00062280();
    FUN_0006ec90();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      puVar6 = &DAT_00403890;
      puVar7 = &DAT_0037e928;
      for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(0x14);
    local_4c = 0x3f800000;
    local_48 = 0x3f800000;
    local_44 = 0x3f800000;
    local_40 = 0x3f800000;
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    FUN_00062230(*local_50);
    puVar10 = D3D8__D3D_g_pDevice;
    puVar6 = (undefined4 *)*D3D8__D3D_g_pDevice;
    if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar6) {
      puVar6 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    puVar6[1] = bf_x86_f32_word(local_18);
    puVar6[2] = bf_x86_f32_word(local_c);
    *puVar6 = UINT32_C(0x00101a20);
    puVar6[3] = bf_x86_f32_word(local_64[0]);
    puVar6[4] = bf_x86_f32_word(local_64[1]);
    *puVar10 = (uint)(puVar6 + 5);
    iVar5 = *(int *)(param_1 + 0xf4);
    local_19 = '\0';
    if (*(int *)(iVar5 + 0x44) == 0) {
      if ((*(byte *)(iVar5 + 0x40) & 8) == 0) {
        FUN_002a2820();
      }
      else {
        (**(code **)(**(int **)(iVar5 + 0x50) + 0x1c))(*(int **)(iVar5 + 0x50),&slot_m4);
        if (((uint)slot_m4 & 0x1ff000) == 0x1ff000) {
          piVar3 = *(int **)(*(int *)(param_1 + 0xf4) + 0x50);
          (**(code **)(*piVar3 + 0x2c))(piVar3,0,0,local_1b4);
          FUN_002a2850();
        }
        else {
          local_19 = '\x01';
        }
      }
    }
    /* 2a1f18..2a1f47: load first producer's lanes at their original
     * later lifetime. Register-only 0x6ec90 consumption remains unbound. */
    local_fc = bf_x86_word_to_f32(output_at_m110[6]);
    local_f8 = bf_x86_word_to_f32(output_at_m110[7]);
    local_f4 = bf_x86_word_to_f32(output_at_m110[8]);
    local_e8 = bf_x86_word_to_f32(output_at_m110[11]);
    local_c = local_f4;
    slot_m4 = bf_x86_f32_word(local_f8);
    local_30 = local_fc;
    local_2c = local_f8;
    local_28 = local_f4;
    local_8c = local_e8;
    do {
      puVar10 = local_20;
      local_14 = (uint *)*local_20;
      /* 2a1f68..2a1f8f: x87 retains ((Y*y + Z*z) + X*x) + bias
       * without m32fp spills. TEST AH,0x41; JE skips ordered greater
       * only: less/equal/unordered continue. The flag-clear path does not
       * read these dot operands. Host extended precision remains a proxy. */
      if (((*(byte *)(param_1 + 0xf8) & 1) == 0) ||
          (dot_at_m88 =
              (((float10)local_2c * (float10)bf_x86_word_to_f32(local_20[3]) +
                (float10)local_28 * (float10)bf_x86_word_to_f32(local_20[4])) +
               (float10)local_30 * (float10)bf_x86_word_to_f32(local_20[2])) +
              (float10)local_8c,
           !(dot_at_m88 > (float10)bf_x86_word_to_f32(UINT32_C(0xbe99999a))))) {
        /* 2a1f95..2a1fb5: F32 product bits are passed through EDI,
         * not converted numerically to a pointer-valued float. */
        puVar6 = (undefined4 *)(uintptr_t)bf_x86_f32_word(
            bf_x86_word_to_f32(local_20[0x10]) * bf_x86_word_to_f32(local_20[8]));
        piVar3 = *(int **)(*(int *)(param_1 + 0xf4) + 0x9c);
        slot_m4 = (uint32_t)(uintptr_t)puVar6;
        fVar12 = (float10)(**(code **)(*piVar3 + 0x1c))
                                    (piVar3,*(undefined4 *)(param_1 + 0x88),puVar6);
        slot_m4 = bf_x86_f32_word((float)fVar12);
        if (((*(byte *)(param_1 + 0xf8) & 1) == 0) &&
           (local_18 = (local_70 - bf_x86_word_to_f32(puVar10[2])) * (local_70 - bf_x86_word_to_f32(puVar10[2])) +
                       (local_68 - bf_x86_word_to_f32(puVar10[4])) * (local_68 - bf_x86_word_to_f32(puVar10[4])),
           local_18 < 2500.0)) {
          if (local_18 <= 900.0) goto LAB_002a252c;
          slot_m4 = bf_x86_f32_word((local_18 - 900.0f) * bf_x86_word_to_f32(slot_m4) * 0.000625f);
        }
        if (local_19 != '\0') {
          piVar3 = *(int **)(*(int *)(param_1 + 0xf4) + 0x50);
          (**(code **)(*piVar3 + 0x2c))(piVar3,*(undefined4 *)(param_1 + 0x88),puVar6,local_1b4);
          FUN_002a2850();
          puVar10 = local_20;
        }
        if (local_21 != '\0') {
          piVar3 = *(int **)(*(int *)(param_1 + 0xf4) + 0x88);
          fVar12 = (float10)(**(code **)(*piVar3 + 0x1c))
                                      (piVar3,*(undefined4 *)(param_1 + 0x88),puVar6);
          iVar5 = *(int *)(param_1 + 0xdc) + -1;
          fVar13 = (float10)iVar5;
          if (iVar5 < 0) {
            fVar13 = fVar13 + (float10)4.2949673e+09;
          }
          local_c = (float)(fVar13 * fVar12);
          iVar5 = (int)(fVar13 * fVar12);
          if (iVar5 != local_10) {
            local_10 = iVar5;
            FUN_0029f3f0();
            local_18 = local_64[2] - local_64[0];
            puVar7 = (undefined4 *)*D3D8__D3D_g_pDevice;
            local_20 = D3D8__D3D_g_pDevice;
            local_c = local_64[3] - local_64[1];
            if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar7) {
              puVar7 = (undefined4 *)
                       D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
            }
            puVar7[1] = bf_x86_f32_word(local_18);
            puVar7[2] = bf_x86_f32_word(local_c);
            puVar7[3] = bf_x86_f32_word(local_64[0]);
            *puVar7 = UINT32_C(0x00101a20);
            puVar7[4] = bf_x86_f32_word(local_64[1]);
            *local_20 = (uint)(puVar7 + 5);
          }
        }
        piVar3 = *(int **)(*(int *)(param_1 + 0xf4) + 0x58);
        fVar12 = (float10)(**(code **)(*piVar3 + 0x1c))
                                    (piVar3,*(undefined4 *)(param_1 + 0x88),puVar6);
        piVar3 = *(int **)(*(int *)(param_1 + 0xf4) + 0x5c);
        local_c = (float)(fVar12 * (float10)local_88);
        fVar12 = (float10)(**(code **)(*piVar3 + 0x1c))
                                    (piVar3,*(undefined4 *)(param_1 + 0x88),puVar6);
        piVar3 = *(int **)(*(int *)(param_1 + 0xf4) + 0x60);
        local_18 = (float)(fVar12 * (float10)local_c);
        fVar12 = (float10)(**(code **)(*piVar3 + 0x1c))
                                    (piVar3,*(undefined4 *)(param_1 + 0x88),puVar6);
        piVar3 = *(int **)(*(int *)(param_1 + 0xf4) + 0x54);
        local_c = (float)(fVar12 * (float10)local_c);
        fVar12 = (float10)(**(code **)(*piVar3 + 0x1c))
                                    (piVar3,*(undefined4 *)(param_1 + 0x88),puVar6);
        scalar_at_m1c = bf_x86_f32_word((float)fVar12);
        piVar3 = *(int **)(*(int *)(param_1 + 0xf4) + 0x98);
        /* 2a2196..2a21b5: spill m32fp before CVTTSS2SI. */
        alpha_255 = (float)((float10)bf_x86_word_to_f32(slot_m4) * (float10)255.0f);
        slot_m4 = (uint32_t)_mm_cvttss_si32(_mm_set_ss(alpha_255));
        uVar8 = (**(code **)(*piVar3 + 0x20))(piVar3,*(undefined4 *)(param_1 + 0x88),puVar6);
        puVar2 = D3D8__D3D_g_pDevice;
        local_80 = puVar10[3];
        slot_m4 = uVar8 | (slot_m4 << 24);
        local_78 = puVar10[2];
        local_a4 = puVar10[4];
        puVar6 = (undefined4 *)*D3D8__D3D_g_pDevice;
        if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar6) {
          puVar6 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
        }
        puVar6[1] = local_78;
        *puVar6 = UINT32_C(0x00101a10);
        puVar6[2] = local_80;
        puVar6[3] = local_a4;
        puVar6[4] = 0x3f800000;
        *puVar2 = (uint)(puVar6 + 5);
        puVar2 = D3D8__D3D_g_pDevice;
        local_7c = puVar10[6];
        local_a8 = puVar10[5];
        local_74 = puVar10[7];
        puVar6 = (undefined4 *)*D3D8__D3D_g_pDevice;
        if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar6) {
          puVar6 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
        }
        puVar6[1] = local_a8;
        *puVar6 = 0x101a60;
        puVar6[2] = local_7c;
        puVar6[3] = local_74;
        puVar6[4] = 0;
        *puVar2 = (uint)(puVar6 + 5);
        puVar2 = D3D8__D3D_g_pDevice;
        local_9c = puVar10[0xc];
        local_94 = puVar10[0xb];
        local_84 = puVar10[10];
        puVar6 = (undefined4 *)*D3D8__D3D_g_pDevice;
        if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar6) {
          puVar6 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
        }
        puVar6[1] = local_84;
        *puVar6 = 0x101a50;
        puVar6[2] = local_94;
        puVar6[3] = local_9c;
        puVar6[4] = 0;
        *puVar2 = (uint)(puVar6 + 5);
        puVar2 = D3D8__D3D_g_pDevice;
        local_a0 = puVar10[0xe];
        local_90 = puVar10[0xd];
        local_98 = puVar10[0xf];
        puVar6 = (undefined4 *)*D3D8__D3D_g_pDevice;
        if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar6) {
          puVar6 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
        }
        puVar6[1] = local_90;
        *puVar6 = 0x101a70;
        puVar6[2] = local_a0;
        puVar6[3] = local_98;
        puVar6[4] = 0;
        *puVar2 = (uint)(puVar6 + 5);
        D3D8LTCG__D3DDevice_SetVertexDataColor(4,slot_m4);
        puVar10 = D3D8__D3D_g_pDevice;
        puVar6 = (undefined4 *)*D3D8__D3D_g_pDevice;
        if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar6) {
          puVar6 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
        }
        puVar7 = local_50;
        puVar6[1] = bf_x86_f32_word(local_18);
        *puVar6 = UINT32_C(0x00101a30); /* 2a2373 literal packet word */
        puVar6[2] = bf_x86_f32_word(local_c);
        puVar6[3] = 0x3f800000;
        puVar6[4] = scalar_at_m1c;
        *puVar10 = (uint)(puVar6 + 5);
        puVar10 = D3D8__D3D_g_pDevice;
        if (local_50[1] == 4) {
          puVar6 = (undefined4 *)*D3D8__D3D_g_pDevice;
          slot_m4 = bf_x86_word_replace_lo16(slot_m4, *(undefined2 *)(local_50 + 10));
          bf_x86_store_f32_word(&norm_input_bits, local_c);
          norm_input_bits = bf_x86_word_replace_lo16(norm_input_bits, *(undefined2 *)(local_50 + 2));
          local_c = bf_x86_word_to_f32(norm_input_bits);
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar6) {
            puVar6 = (undefined4 *)
                     D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          *puVar6 = 0x41900;
          puVar6[1] = ((slot_m4 & 0xffffU) << 16) | (bf_x86_f32_word(local_c) & 0xffffU);
          *puVar10 = (uint)(puVar6 + 2);
          puVar10 = D3D8__D3D_g_pDevice;
          slot_m4 = bf_x86_word_replace_lo16(slot_m4, *(undefined2 *)((int)puVar7 + 0x2a));
          bf_x86_store_f32_word(&norm_input_bits, local_c);
          norm_input_bits = bf_x86_word_replace_lo16(norm_input_bits, *(undefined2 *)((int)puVar7 + 10));
          local_c = bf_x86_word_to_f32(norm_input_bits);
          puVar6 = (undefined4 *)*D3D8__D3D_g_pDevice;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar6) {
            puVar6 = (undefined4 *)
                     D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          *puVar6 = 0x41900;
          puVar6[1] = ((slot_m4 & 0xffffU) << 16) | (bf_x86_f32_word(local_c) & 0xffffU);
          *puVar10 = (uint)(puVar6 + 2);
          puVar10 = D3D8__D3D_g_pDevice;
          slot_m4 = bf_x86_word_replace_lo16(slot_m4, *(undefined2 *)(puVar7 + 0xb));
          local_c = bf_x86_word_to_f32(bf_x86_word_replace_lo16(bf_x86_f32_word(local_c), *(undefined2 *)(puVar7 + 3)));
          puVar6 = (undefined4 *)*D3D8__D3D_g_pDevice;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar6) {
            puVar6 = (undefined4 *)
                     D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          *puVar6 = 0x41900;
          puVar6[1] = ((slot_m4 & 0xffffU) << 16) | (bf_x86_f32_word(local_c) & 0xffffU);
          *puVar10 = (uint)(puVar6 + 2);
          puVar10 = D3D8__D3D_g_pDevice;
          uVar1 = *(undefined2 *)((int)puVar7 + 0x2e);
          slot_m4 = bf_x86_word_replace_lo16(slot_m4, *(undefined2 *)((int)puVar7 + 0xe));
          puVar6 = (undefined4 *)*D3D8__D3D_g_pDevice;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar6) {
            puVar6 = (undefined4 *)
                     D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          *puVar6 = 0x41900;
          puVar6[1] = ((uint32_t)uVar1 << 16) | (slot_m4 & 0xffffU);
          *puVar10 = (uint)(puVar6 + 2);
        }
        else {
          /* 2a24b5..2a252a: integer counter and two-byte cursor;
           * MOV word writes followed only by low-half extension/packing. */
          index_count = 0;
          if (0 < (int)local_50[1]) {
            index_cursor = (const unsigned char *)(local_50 + 2);
            do {
              puVar10 = D3D8__D3D_g_pDevice;
              puVar6 = (undefined4 *)*D3D8__D3D_g_pDevice;
              memcpy(&index_hi, index_cursor + 0x20, 2);
              memcpy(&index_lo, index_cursor, 2);
              if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar6) {
                puVar6 = (undefined4 *)
                         D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
              }
              halfword_pair = ((uint32_t)index_hi << 16) | (uint32_t)index_lo;
              *puVar6 = 0x41900;
              puVar6[1] = halfword_pair;
              *puVar10 = (uint)(puVar6 + 2);
              ++index_count;
              index_cursor += 2;
            } while (index_count < (int)puVar7[1]);
          }
        }
      }
LAB_002a252c:
      puVar10 = D3D8__D3D_g_pDevice;
      local_20 = local_14;
    } while (local_14 != (uint *)0x0);
    puVar6 = (undefined4 *)*D3D8__D3D_g_pDevice;
    if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar6) {
      puVar6 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    *puVar6 = 0x417fc;
    puVar6[1] = 0;
    *puVar10 = (uint)(puVar6 + 2);
    if ((puVar10[2] & 0x1000) != 0) {
      D3D8LTCG__D3D_SetFence(1);
    }
    puVar10[2] = puVar10[2] & 0xffffe7ff;
    FUN_00238630();
  }
  return 0;
}
