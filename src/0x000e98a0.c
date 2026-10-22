/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AECE023E3AC79BAE3A66F26D62D91821775B604FF7946DBC020EF1C0847D275E
 * Entry: 0x000e98a0, Ghidra index: 2888, label: FUN_000e98a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra scalar SSE low-lane opcode model; unknown high lanes not represented.
 * No assembly/ABI or behavior equivalence has been established. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d034;
undefined4
FUN_000e98a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,float *param_4,
            float *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,float *param_10,undefined4 param_11,float *param_12,float param_13,
            int *param_14,undefined4 param_15,int param_16)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  undefined1 in_XMM0 [16];
  __m128 auVar7;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float local_25c;
  float local_258;
  float local_254;
  float fStack_250;
  undefined4 uStack_24c;
  float fStack_248;
  undefined4 uStack_244;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  float fStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float fStack_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float fStack_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_80 [124];
  
  local_254 = param_12[2];
  local_25c = *param_12;
  local_258 = param_12[1] - param_13;
  if ((*(byte *)(param_14[3] + 0xc) & 2) == 0) {
    uVar4 = *(undefined4 *)(param_16 + 0x80);
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_16 + 0x80);
    uVar2 = (**(code **)(*param_14 + 0x110))(param_15,param_16);
    uVar3 = (**(code **)(*param_14 + 0x114))(uVar2);
  }
  cVar1 = FUN_000dc840(uVar4,param_6,param_4,param_5,param_7,param_8,param_9,param_10,param_11,
                       &local_25c,uVar3,uVar2,param_15,param_16);
  if (cVar1 != '\0') {
    if (*param_4 * 0.0 + param_4[2] * 0.0 + param_4[1] * 1.0 <= 0.9) {
      fStack_270 = param_4[1] * 0.0 - *param_4 * 1.0;
      fStack_22c = *param_4 * 0.0 - param_4[2] * 0.0;
      fStack_238 = param_4[2] * 1.0 - param_4[1] * 0.0;
      auVar7 = _mm_rsqrt_ss(_mm_set_ss(fStack_22c * fStack_22c +
                               fStack_270 * fStack_270 + fStack_238 * fStack_238));
      fVar6 = _mm_cvtss_f32(auVar7);
      fStack_238 = fVar6 * fStack_238;
      fStack_22c = fStack_22c * fVar6;
      fStack_270 = fStack_270 * fVar6;
      fStack_264 = fStack_22c * *param_4 - fStack_238 * param_4[1];
      fStack_268 = fStack_238 * param_4[2] - fStack_270 * *param_4;
      fStack_250 = fStack_270 * param_4[1] - fStack_22c * param_4[2];
      auVar7 = _mm_rsqrt_ss(_mm_set_ss(fStack_268 * fStack_268 +
                              fStack_264 * fStack_264 + fStack_250 * fStack_250));
      fVar6 = _mm_cvtss_f32(auVar7);
      fStack_26c = fVar6 * fStack_250;
      fStack_268 = fStack_268 * fVar6;
      fStack_264 = fStack_264 * fVar6;
    }
    else {
      fStack_264 = *param_4 * 0.0 - param_4[1];
      fStack_268 = param_4[2] - *param_4 * 0.0;
      fStack_26c = param_4[1] * 0.0 - param_4[2] * 0.0;
      auVar7 = _mm_rsqrt_ss(_mm_set_ss(fStack_268 * fStack_268 +
                               fStack_264 * fStack_264 + fStack_26c * fStack_26c));
      fVar6 = _mm_cvtss_f32(auVar7);
      fStack_26c = fVar6 * fStack_26c;
      fStack_268 = fStack_268 * fVar6;
      fStack_264 = fStack_264 * fVar6;
      fStack_270 = fStack_26c * param_4[1] - fStack_268 * *param_4;
      fStack_22c = fStack_264 * *param_4 - fStack_26c * param_4[2];
      fStack_250 = fStack_268 * param_4[2] - fStack_264 * param_4[1];
      auVar7 = _mm_rsqrt_ss(_mm_set_ss(fStack_22c * fStack_22c +
                              fStack_270 * fStack_270 + fStack_250 * fStack_250));
      fVar6 = _mm_cvtss_f32(auVar7);
      fStack_238 = fVar6 * fStack_250;
      fStack_22c = fStack_22c * fVar6;
      fStack_270 = fStack_270 * fVar6;
    }
    fStack_220 = fStack_270;
    fStack_228 = fStack_268;
    fStack_234 = fStack_26c;
    fStack_21c = fStack_264;
    fStack_230 = *param_4;
    fStack_224 = param_4[1];
    fStack_218 = param_4[2];
    fVar6 = param_13;
    if (param_13 <= *param_5) {
      fVar6 = *param_5;
    }
    fStack_248 = fVar6 * (float)((ulonglong)*(undefined8 *)(param_4 + 1) >> 0x20);
    fStack_20c = fStack_248 + param_12[2];
    fStack_210 = fVar6 * (float)*(undefined8 *)(param_4 + 1) + param_12[1];
    fStack_214 = fVar6 * *param_4 + *param_12;
    uVar4 = FUN_00061eb0();
    iVar5 = FUN_002338c0(&uStack_140,&DAT_0046d034,uVar4);
    FUN_0003d6c0(auStack_80,iVar5,iVar5 + 0x24);
    FUN_0003d730(&fStack_238,auStack_80);
    fStack_200 = 1.0 / param_13;
    uStack_1fc = 0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0x3f800000;
    uStack_17c = 0;
    uStack_178 = 0;
    uStack_174 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_164 = 0;
    uStack_160 = 0;
    uStack_15c = 0;
    fStack_158 = 1.0 / ((fVar6 + param_13) - (fVar6 - param_13));
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_1d4 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    uStack_1c8 = 0;
    uStack_1c4 = 0x3f800000;
    fStack_250 = 0.0;
    uStack_24c = 0;
    fStack_248 = 0.0;
    uStack_244 = 0;
    uStack_144 = 0x3f800000;
    uStack_16c = 0x3f800000;
    uStack_180 = 0x3f800000;
    fStack_154 = -(fStack_158 * (fVar6 - param_13));
    fStack_1ec = fStack_200;
    FUN_0006ec90();
    FUN_0006ed80();
    FUN_0006ed80();
    *param_2 = uStack_140;
    param_2[1] = uStack_13c;
    param_2[2] = uStack_138;
    param_2[3] = uStack_134;
    param_2[4] = uStack_130;
    param_2[5] = uStack_12c;
    param_2[6] = uStack_128;
    param_2[7] = uStack_124;
    param_2[8] = uStack_120;
    param_2[9] = uStack_11c;
    param_2[10] = uStack_118;
    param_2[0xb] = uStack_114;
    param_2[0xc] = uStack_110;
    param_2[0xd] = uStack_10c;
    param_2[0xe] = uStack_108;
    param_2[0xf] = uStack_104;
    fStack_208 = param_13;
    fStack_204 = param_13;
    if (param_13 <= *param_10) {
      fStack_204 = *param_10;
    }
    uStack_1bc = uStack_24c;
    uStack_1b8 = fStack_248;
    uStack_1b4 = uStack_244;
    uStack_1b0 = fStack_250;
    uStack_1a8 = fStack_248;
    uStack_1a4 = uStack_244;
    fStack_198 = 1.0 / ((fStack_204 + fVar6) - (fVar6 - param_13));
    uStack_1a0 = fStack_250;
    uStack_19c = uStack_24c;
    uStack_190 = fStack_250;
    uStack_18c = uStack_24c;
    uStack_188 = fStack_248;
    uStack_184 = 0x3f800000;
    fStack_194 = -(fStack_198 * (fVar6 - param_13));
    uStack_1ac = 0x3f800000;
    uStack_1c0 = 0x3f800000;
    FUN_0006ec90();
    FUN_0006ed80();
    FUN_0006ed80();
    *param_3 = uStack_120;
    param_3[1] = uStack_11c;
    param_3[2] = uStack_118;
    param_3[3] = uStack_114;
    return 1;
  }
  return 0;
}
