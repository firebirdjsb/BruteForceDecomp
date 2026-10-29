/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8013F12F3527F514E2303C79BAAEF2AA8E16A23BA1AF53DA0B733A4C10CC7318
 * Entry: 0x00224a90, Ghidra index: 7624, label: FUN_00224a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
#pragma STDC FENV_ACCESS ON
/* Scoped x87/SSE operations; inherited SIMD state, original ABI and game
 * behavior remain UNVERIFIED. Host float10 precision is still a proxy. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469aac;
extern uint32_t PTR_LAB_0039cc18;
extern uint32_t _DAT_003bc6f0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00224a90(byte *param_1)

{
  int *piVar1;
  bool bVar2;
  int *in_EAX;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  float10 fVar6;
  float fVar7;
  undefined8 uVar9;
  int *local_21c;
  /* S+0x14/+0x18/+0x1c: contiguous F32 direction words. */
  float direction[3];
  float *pfStack_20c;
  int *local_208;
  float local_204;
  float fStack_200;
  int local_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  int *piStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  float fStack_1d0;
  int local_1cc;
  int local_1c8;
  float fStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  /* S+0xa0/+0xa4/+0xa8: separate three-F32 output span. */
  float scaled_direction[3];
  undefined4 uStack_180;
  undefined1 auStack_17c [12];
  float fStack_170;
  undefined1 auStack_168 [12];
  undefined1 auStack_15c [12];
  int aiStack_150 [11];
  undefined **appuStack_124 [73];
  
  if ((*param_1 & 1) != 0) {
    fVar7 = *(float *)(param_1 + 0x2c);
    in_EAX = (int *)CONCAT22((short)((uint)in_EAX >> 0x10),
                             (ushort)(fVar7 < 0.0) << 8 | (ushort)isnan(fVar7) << 10 |
                             (ushort)(fVar7 == 0.0) << 0xe);
    if (fVar7 == 0.0) {
      local_1cc = *(int *)(*(int *)(param_1 + 0x34) + 0x18);
      in_EAX = (int *)0x0;
      if (local_1cc != 0) {
        local_1c8 = *(int *)(local_1cc + 0x30);
        in_EAX = (int *)0x0;
        if (local_1c8 != 0) {
          local_1fc = *(int *)(local_1c8 + 4);
          local_204 = 1.0;
          direction[0] = 0.0f;
          direction[1] = 1.0f;
          direction[2] = 0.0f;
          in_EAX = (int *)FUN_000e0af0();
          if (in_EAX != (int *)0x0) {
            do {
              piVar1 = (int *)in_EAX[0x27];
              if (piVar1 != (int *)0x0) {
                local_208 = in_EAX;
                if (((*piVar1 == 0) || (*piVar1 == 1)) && (piVar1[1] != 0)) {
                  iVar3 = *(int *)(param_1 + 0x5c);
                  in_EAX = (int *)FUN_00225d20();
                  if (*in_EAX == iVar3) {
                    local_21c = local_208;
                    if ((*piVar1 == 0) || (*piVar1 == 1)) {
                      piVar5 = (int *)piVar1[1];
                    }
                    else {
                      piVar5 = (int *)0x0;
                    }
                    iVar3 = (**(code **)(*piVar5 + 0x40))();
                    /* 0x224bb4..0x224c15: spill Z/Y, retain extended X for
                     * (Z*Z+X*X)+Y*Y, then spill once before SQRTSS. */
                    fStack_1b8 = (float)((float10)*(float *)(param_1 + 0xc) -
                                        (float10)*(float *)(iVar3 + 0x2c));
                    fStack_1c4 = (float)((float10)*(float *)(param_1 + 8) -
                                        (float10)*(float *)(iVar3 + 0x28));
                    float10 delta_x = (float10)*(float *)(param_1 + 4) -
                                      (float10)*(float *)(iVar3 + 0x24);
                    direction[0] = (float)delta_x;
                    direction[1] = fStack_1c4;
                    direction[2] = fStack_1b8;
                    float norm_word = (float)(((float10)fStack_1b8 * (float10)fStack_1b8 +
                                               delta_x * delta_x) +
                                              (float10)fStack_1c4 * (float10)fStack_1c4);
                    fStack_200 = _mm_cvtss_f32(_mm_sqrt_ss(_mm_load_ss(&norm_word)));
                    if (fStack_200 < 0.0 == (fStack_200 == 0.0)) {
                      /* MOVSS/MOVHPS forms {X,+0,Y,Z}; RCPSS is broadcast
                       * and MULPS writes exactly the three stored lanes. */
                      pfStack_20c = direction;
                      __m128 reciprocal = _mm_rcp_ss(_mm_load_ss(&fStack_200));
                      reciprocal = _mm_shuffle_ps(reciprocal, reciprocal, 0);
                      __m128 vector = _mm_load_ss(direction);
                      vector = _mm_loadh_pi(vector, (const __m64 *)(direction + 1));
                      vector = _mm_mul_ps(vector, reciprocal);
                      _mm_store_ss(direction, vector);
                      _mm_storeh_pi((__m64 *)(direction + 1), vector);
                      local_204 = fStack_200;
                      fStack_1b0 = fStack_200;
                    }
                    else {
                      direction[1] = 1.0f;
                      local_204 = 0.0;
                    }
                    uStack_1e4 = *(undefined4 *)(param_1 + 0xc);
                    uStack_1e8 = *(undefined4 *)(param_1 + 8);
                    piStack_1ec = *(int **)(param_1 + 4);
                    bVar2 = true;
                    uStack_1d4 = uStack_1e8;
                    uStack_1c0 = uStack_1e4;
                    fStack_170 = fStack_1b8;
                    if ((*piVar1 == 0) && (in_EAX = (int *)piVar1[1], in_EAX != (int *)0x0)) {
                      if (*(int *)(in_EAX[3] + 4) == 0x15) goto LAB_00224fb3;
                    }
                    else {
                      iVar3 = FUN_00169d50();
                      in_EAX = (int *)0x0;
                      if (iVar3 != 0) {
                        if (((*param_1 & 0x10) == 0) || ((*(byte *)(piVar1[1] + 0x70) & 1) == 0)) {
                          piVar5 = aiStack_150;
                          for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
                            *piVar5 = 0;
                            piVar5 = piVar5 + 1;
                          }
                          uVar4 = FUN_00169d50();
                          FUN_002249d0(uVar4);
                          FUN_002b3970();
                          fStack_1b4 = fStack_194;
                          fStack_1d0 = fStack_198;
                          fStack_1f8 = fStack_19c - *(float *)(param_1 + 4);
                          fStack_1f4 = fStack_198 - *(float *)(param_1 + 8);
                          fStack_1f0 = fStack_194 - *(float *)(param_1 + 0xc);
                          FUN_00039410();
                          iVar3 = FUN_000df7a0(DAT_00469aac,auStack_17c,auStack_15c,auStack_168,
                                               aiStack_150,param_1 + 4,&fStack_1f8,appuStack_124,
                                               *(undefined4 *)(param_1 + 0x24),local_1cc);
                          if ((iVar3 != 0) &&
                             ((aiStack_150[1] == 0 ||
                              (uVar9 = FUN_00169a10(), (int)((ulonglong)uVar9 >> 0x20) != (int)uVar9
                              )))) {
                            bVar2 = false;
                          }
                          appuStack_124[0] = &PTR_LAB_0039cc18;
                        }
                        else {
                          bVar2 = false;
                        }
                        iVar3 = (**(code **)(*(int *)piVar1[1] + 0x40))();
                        uStack_1e4 = *(undefined4 *)(iVar3 + 0x2c);
                        uStack_1e8 = *(undefined4 *)(iVar3 + 0x28);
                        in_EAX = *(int **)(iVar3 + 0x24);
                        piStack_1ec = in_EAX;
                        uStack_1e0 = uStack_1e4;
                        uStack_1bc = uStack_1e8;
                        if (!bVar2) goto LAB_00224fb3;
                        iVar3 = piVar1[1];
                        in_EAX = (int *)FUN_000d44a0();
                        if (((char)in_EAX != '\0') && ((*(byte *)(iVar3 + 0x7d8) & 2) == 0)) {
                          in_EAX = *(int **)(iVar3 + 0x500);
                          local_21c = in_EAX;
                        }
                      }
                    }
                    if (local_21c != (int *)0x0) {
                      fVar7 = *(float *)(*(int *)(param_1 + 0x54) + 0x234);
                      in_EAX = (int *)FUN_00224320(param_1,local_21c,&piStack_1ec,direction,0,0);
                      if (((((char)in_EAX != '\0') && (1.0 <= fVar7)) &&
                          (in_EAX = (int *)FUN_00169d50(), in_EAX == (int *)0x0)) &&
                         (((*param_1 & 0x10) == 0 &&
                          (in_EAX = (int *)FUN_001546b0(), (char)in_EAX == '\0')))) {
                        fVar7 = 1.2 - local_204 / *(float *)(param_1 + 0x24);
                        fVar6 = (float10)FUN_00225060();
                        uStack_1a0 = 0;
                        uStack_180 = 0;
                        uStack_1ac = *(undefined4 *)(param_1 + 4);
                        fVar6 = -((float10)fVar7 * (float10)fVar7 * fVar6 * (float10)_DAT_003bc6f0);
                        uStack_1a4 = *(undefined4 *)(param_1 + 0xc);
                        uStack_1a8 = *(undefined4 *)(param_1 + 8);
                        scaled_direction[0] = (float)((float10)direction[0] * fVar6);
                        scaled_direction[1] = (float)((float10)direction[1] * fVar6);
                        scaled_direction[2] = (float)((float10)direction[2] * fVar6);
                        in_EAX = (int *)FUN_002b3bc0(&uStack_1ac,scaled_direction);
                      }
                    }
                  }
                }
                else {
                  uStack_1d8 = 0x3f800000;
                  uStack_1dc = 0;
                  direction[0] = 0.0f;
                  direction[1] = 1.0f;
                  direction[2] = 0.0f;
                  in_EAX = (int *)FUN_00224320(param_1,in_EAX,param_1 + 4,direction,0,0);
                }
              }
LAB_00224fb3:
              if (local_1fc < 0) break;
              while( true ) {
                in_EAX = *(int **)(local_1fc * 8 + 4 + *(int *)(local_1c8 + 0xc));
                local_1fc = local_1fc + -1;
                if (in_EAX != (int *)0x0) break;
                if (local_1fc < 0) goto LAB_00224fda;
              }
            } while( true );
          }
        }
      }
    }
  }
LAB_00224fda:
  return (uint)in_EAX & 0xffffff00;
}
