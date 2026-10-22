/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24C8D8456BD556F0E2801B190F61956E805ED90214C60FC32E216492F71D0410
 * Entry: 0x002c2fc0, Ghidra index: 10046, label: FUN_002c2fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *_DAT_00402790;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_002c2fc0(int *param_1,float *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  float10 fVar18;
  undefined1 in_XMM0 [16];
  float local_288;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  undefined4 local_258;
  float local_254;
  float local_250;
  float local_24c;
  undefined4 local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  undefined4 local_22c;
  undefined4 local_154;
  undefined4 local_150;
  float local_140;
  float local_124;
  float local_120;
  float *local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [104];
  undefined1 local_a0 [96];
  float local_40;
  float local_10;
  
  iVar17 = param_1[0x10];
  fVar4 = (float)param_1[0x15] * (float)param_1[0x11] * *param_2;
  if (fVar4 < 1e-06) {
    return (float10)0.0;
  }
  FUN_002c3730();
  iVar5 = *(int *)(iVar17 + 0x68);
  iVar16 = *(int *)(iVar17 + 0x6c);
  if ((((iVar5 != 0) && (iVar6 = *(int *)(iVar5 + 0x10), iVar6 != 0)) && (iVar16 == 0)) &&
     ((*param_1 == 0 || (*(float *)(*param_1 + 0x54) == 0.0)))) {
    iVar7 = *(int *)(iVar6 + 4);
    iVar8 = *(int *)(iVar7 + 0x74);
    local_278 = *(float *)(iVar6 + 8 + iVar8 * 4);
    local_26c = 0.0;
    local_274 = *(float *)(iVar6 + 0x18 + iVar8 * 4);
    local_22c = 0;
    local_270 = *(float *)(iVar6 + 0x28 + iVar8 * 4);
    FUN_002b7070();
    local_248 = 0;
    local_258 = 0;
    FUN_002b66b0();
    fVar18 = (float10)FUN_0010ff10(&local_254);
    if ((float10)0.001 <= fVar18) {
      FUN_002b65a0(&local_254);
      FUN_002b66b0();
      puVar1 = (undefined4 *)(iVar17 + 0x20);
      local_23c = local_254 * *(float *)(iVar17 + 0x70) +
                  local_24c * *(float *)(iVar17 + 0x78) + local_250 * *(float *)(iVar17 + 0x74);
      local_244 = local_264 * *(float *)(iVar17 + 0x70) +
                  local_25c * *(float *)(iVar17 + 0x78) + local_260 * *(float *)(iVar17 + 0x74);
      fVar10 = local_254 * *(float *)(iVar17 + 0x80) +
               local_24c * *(float *)(iVar17 + 0x88) + local_250 * *(float *)(iVar17 + 0x84);
      fVar11 = local_264 * *(float *)(iVar17 + 0x80) +
               local_25c * *(float *)(iVar17 + 0x88) + local_260 * *(float *)(iVar17 + 0x84);
      local_268 = local_23c * (float)param_1[0xe] + fVar10 * (float)param_1[0xf];
      local_240 = local_244 * (float)param_1[0xe] + fVar11 * (float)param_1[0xf];
      FUN_002d9b50(0,puVar1,0);
      fVar9 = local_140;
      FUN_002c3730();
      iVar16 = *(int *)(**(int **)(iVar7 + 0x90) + 0x90);
      local_114 = &local_264;
      local_110 = 0;
      local_10c = 0;
      local_40 = 0.0;
      local_10 = 0.0;
      if (iVar16 != 0) {
        FUN_002d96b0(&local_114,puVar1,iVar16,local_108,local_a0,0x3f800000);
      }
      fVar12 = local_268 * param_2[1] - local_124;
      fVar13 = local_240 * param_2[1] - (local_10 * 0.0 + local_120);
      iVar16 = FUN_002c6290(local_154,local_150,local_150,local_140,&local_278,&local_26c);
      if (iVar16 != 1) goto LAB_002c34ba;
      iVar16 = *(int *)(iVar5 + 0x10);
      fVar14 = local_278 * fVar12 + local_274 * fVar13;
      fVar12 = local_270 * fVar12 + local_26c * fVar13;
      fVar13 = ((ABS(local_230 * local_25c + local_234 * local_260 + local_238 * local_264) /
                local_40) * fVar9 + 1.0) * 0.3;
      fVar14 = fVar14 * fVar14;
      fVar15 = fVar12 * fVar12;
      uVar2 = *(undefined4 *)(iVar17 + 0x24);
      uVar3 = *(undefined4 *)(iVar17 + 0x28);
      *(undefined4 *)(iVar16 + 0x48) = *puVar1;
      *(undefined4 *)(iVar16 + 0x4c) = uVar2;
      *(undefined4 *)(iVar16 + 0x50) = uVar3;
      fVar9 = param_2[2];
      iVar17 = *(int *)(iVar5 + 0x10);
      *(undefined4 *)(iVar17 + 0x60) = *(undefined4 *)((int)fVar9 + 0x108);
      *(undefined4 *)(iVar17 + 100) = *(undefined4 *)((int)fVar9 + 0x10c);
      if (*(int *)(*(int *)(iVar5 + 0x10) + 0x68) == 0) {
        fVar9 = fVar4 * fVar4;
        if (fVar9 < fVar13 * fVar15 * fVar13 + fVar14) {
          if (fVar9 < fVar15 + fVar14) {
            fVar18 = (float10)FUN_002b6490(fVar15 + fVar14);
            fVar18 = fVar18 * (float10)fVar4;
            goto LAB_002c3459;
          }
          local_288 = SQRT(fVar9 - fVar14);
          if (fVar12 <= 0.0) {
            local_288 = -local_288;
          }
          fVar4 = (local_288 * _DAT_00402790) / (fVar12 * fVar13);
          *(float *)(*(int *)(iVar5 + 0x10) + 0x58) =
               (1.0 - fVar4) * *(float *)(*(int *)(**(int **)(iVar7 + 0x90) + 0x90) + 0x40) *
               (float)param_1[0x15] * 0.3;
          if (fVar4 < 1.0) {
            param_1[0xe] = (int)(local_268 * local_23c + local_244 * fVar4 * local_240);
            param_1[0xf] = (int)(local_268 * fVar10 + fVar4 * local_240 * fVar11);
          }
        }
      }
      else {
        fVar10 = (fVar15 + fVar14) * fVar13 * fVar13;
        if (fVar4 * fVar4 < fVar10) {
          fVar18 = (float10)FUN_002b6490(fVar10);
          fVar18 = (fVar18 * (float10)fVar13 * (float10)fVar4) / (float10)fVar13;
LAB_002c3459:
          param_1[0xe] = (int)(float)(fVar18 * (float10)(float)param_1[0xe]);
          param_1[0xf] = (int)(float)(fVar18 * (float10)(float)param_1[0xf]);
          *(float *)(*(int *)(iVar5 + 0x10) + 0x58) =
               (float)(((float10)1.0 - fVar18) *
                       (float10)*(float *)(*(int *)(**(int **)(iVar7 + 0x90) + 0x90) + 0x40) *
                      (float10)(float)param_1[0x15]);
        }
        else {
          *(undefined4 *)(*(int *)(iVar5 + 0x10) + 0x58) = 0;
        }
      }
      FUN_002d9be0(0);
      goto LAB_002c34ba;
    }
  }
  FUN_002d9b50(iVar16,iVar17 + 0x20,0);
  fVar10 = (float)param_1[0xe] * param_2[1] - local_124;
  fVar11 = (float)param_1[0xf] * param_2[1] - local_120;
  iVar17 = FUN_002c6290(local_154,local_150,local_150,local_140,&local_278,&local_26c);
  if (iVar17 == 1) {
    fVar9 = local_278 * fVar10 + local_274 * fVar11;
    fVar10 = local_270 * fVar10 + local_26c * fVar11;
    fVar10 = fVar9 * fVar9 + fVar10 * fVar10;
    if (fVar4 * fVar4 < fVar10) {
      rsqrtss(in_XMM0,fVar10);
    }
    FUN_002d9be0(iVar16);
    fVar10 = SQRT(*param_2 * *param_2 * fVar10 *
                  ((float)param_1[0xe] * (float)param_1[0xe] +
                  (float)param_1[0xf] * (float)param_1[0xf])) * 0.5;
    fVar4 = (float)param_1[0x14];
    param_1[0x14] = (int)fVar10;
    return (float10)(fVar10 - fVar4);
  }
LAB_002c34ba:
  return (float10)0.0;
}
