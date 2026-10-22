/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54E1D98453530C28D8A4680616FA9D0689ABAA12D0E949941DF4B52554BBC044
 * Entry: 0x000ea0a0, Ghidra index: 2889, label: FUN_000ea0a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d034;
undefined4
FUN_000ea0a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,float *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,float *param_10,undefined4 param_11,float *param_12,float param_13,
            undefined4 param_14,int param_15)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  undefined4 uStack_24c;
  float fStack_248;
  undefined4 uStack_244;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  float local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  float fStack_198;
  float fStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  float fStack_158;
  float fStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 local_80 [124];
  
  local_258 = param_12[2];
  local_260 = *param_12;
  local_25c = param_12[1] - param_13;
  cVar1 = FUN_000dc510(*(undefined4 *)(param_15 + 0x80),param_6,param_4,param_9,param_10,&local_260,
                       param_14,param_15);
  *param_4 = 0.0;
  param_4[1] = 1.0;
  param_4[2] = 0.0;
  if (cVar1 != '\0') {
    local_21c = *param_4 * 0.0 - param_4[1];
    local_228 = param_4[2] - *param_4 * 0.0;
    local_234 = param_4[1] * 0.0 - param_4[2] * 0.0;
    auVar5 = rsqrtss(in_XMM0,local_234 * local_234 + local_228 * local_228 + local_21c * local_21c);
    fVar4 = auVar5._0_4_;
    local_234 = fVar4 * local_234;
    local_228 = local_228 * fVar4;
    local_21c = local_21c * fVar4;
    local_220 = local_234 * param_4[1] - local_228 * *param_4;
    local_22c = local_21c * *param_4 - local_234 * param_4[2];
    local_250 = local_228 * param_4[2] - local_21c * param_4[1];
    auVar5 = rsqrtss(auVar5,local_250 * local_250 + local_22c * local_22c + local_220 * local_220);
    fVar4 = auVar5._0_4_;
    local_238 = fVar4 * local_250;
    local_22c = local_22c * fVar4;
    local_220 = local_220 * fVar4;
    local_230 = *param_4;
    local_224 = param_4[1];
    local_218 = param_4[2];
    fStack_248 = param_13 * (float)((ulonglong)*(undefined8 *)(param_4 + 1) >> 0x20);
    local_254 = fStack_248 + param_12[2];
    local_210 = param_13 * (float)*(undefined8 *)(param_4 + 1) + param_12[1];
    local_214 = param_13 * *param_4 + *param_12;
    local_20c = local_254;
    uVar2 = FUN_00061eb0();
    iVar3 = FUN_002338c0(&local_140,&DAT_0046d034,uVar2);
    FUN_0003d6c0(local_80,iVar3,iVar3 + 0x24);
    FUN_0003d730(&local_238,local_80);
    local_200 = 1.0 / param_13;
    local_1fc = 0;
    local_1f8 = 0;
    local_1f4 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e4 = 0;
    uStack_17c = 0;
    uStack_178 = 0;
    uStack_174 = 0;
    local_170 = 0;
    uStack_168 = 0;
    uStack_164 = 0;
    local_160 = 0;
    uStack_15c = 0;
    fStack_158 = 1.0 / ((param_13 + param_13) - (param_13 - param_13));
    local_150 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    local_1e0 = 0;
    local_1dc = 0;
    local_1d8 = 0x3f800000;
    local_1d4 = 0;
    local_1d0 = 0;
    local_1cc = 0;
    local_1c8 = 0;
    local_1c4 = 0x3f800000;
    local_250 = 0.0;
    uStack_24c = 0;
    fStack_248 = 0.0;
    uStack_244 = 0;
    uStack_144 = 0x3f800000;
    uStack_16c = 0x3f800000;
    local_180 = 0x3f800000;
    fStack_154 = -(fStack_158 * (param_13 - param_13));
    local_1ec = local_200;
    FUN_0006ec90();
    FUN_0006ed80();
    FUN_0006ed80();
    *param_2 = local_140;
    param_2[1] = uStack_13c;
    param_2[2] = uStack_138;
    param_2[3] = uStack_134;
    param_2[4] = local_130;
    param_2[5] = uStack_12c;
    param_2[6] = uStack_128;
    param_2[7] = uStack_124;
    param_2[8] = local_120;
    param_2[9] = uStack_11c;
    param_2[10] = uStack_118;
    param_2[0xb] = uStack_114;
    param_2[0xc] = local_110;
    param_2[0xd] = uStack_10c;
    param_2[0xe] = uStack_108;
    param_2[0xf] = uStack_104;
    local_254 = *param_10;
    local_208 = param_13;
    local_204 = param_13;
    if (param_13 <= local_254) {
      local_204 = local_254;
    }
    fStack_198 = 1.0 / ((local_204 + param_13) - (param_13 - param_13));
    uStack_1bc = uStack_24c;
    uStack_1b8 = fStack_248;
    uStack_1b4 = uStack_244;
    local_1b0 = local_250;
    uStack_1a8 = fStack_248;
    uStack_1a4 = uStack_244;
    local_1a0 = local_250;
    uStack_19c = uStack_24c;
    local_190 = local_250;
    uStack_18c = uStack_24c;
    uStack_188 = fStack_248;
    uStack_184 = 0x3f800000;
    fStack_194 = -(fStack_198 * (param_13 - param_13));
    uStack_1ac = 0x3f800000;
    local_1c0 = 0x3f800000;
    FUN_0006ec90();
    FUN_0006ed80();
    FUN_0006ed80();
    *param_3 = local_120;
    param_3[1] = uStack_11c;
    param_3[2] = uStack_118;
    param_3[3] = uStack_114;
    return 1;
  }
  return 0;
}
