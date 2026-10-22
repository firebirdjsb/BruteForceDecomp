/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F4841EF6B2DC844C92C9DF00E2CB3AF94C8DF612B1A154BE188DECEDD2462657
 * Entry: 0x00216b50, Ghidra index: 7461, label: FUN_00216b50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00407060;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_00216b50(undefined4 param_1,int param_2,float *param_3,float param_4,undefined4 *param_5,
            undefined4 *param_6,float *param_7,float *param_8,float *param_9,float *param_10,
            float *param_11,float *param_12,float *param_13,undefined4 param_14,undefined4 param_15)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  float *pfVar11;
  undefined1 *puVar12;
  undefined1 uVar13;
  byte bVar14;
  int iVar15;
  float10 fVar16;
  float fVar17;
  undefined1 in_XMM0 [16];
  undefined1 auVar18 [16];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_6c;
  float local_64;
  float local_60;
  float local_5c;
  float local_58 [2];
  float *local_50 [20];
  
  cVar10 = FUN_00216350(*param_10,*param_11,*param_12,*param_5,*param_6);
  if (((cVar10 == '\0') &&
      (cVar10 = FUN_00216350(param_10[1],param_11[1],param_12[1],param_5[1],param_6[1]),
      cVar10 == '\0')) &&
     (cVar10 = FUN_00216350(param_10[2],param_11[2],param_12[2],param_5[2],param_6[2]),
     cVar10 == '\0')) {
    local_64 = *param_11 - *param_10;
    local_60 = param_11[1] - param_10[1];
    local_5c = param_11[2] - param_10[2];
    local_7c = *param_12 - *param_10;
    local_78 = param_12[1] - param_10[1];
    local_74 = param_12[2] - param_10[2];
    fVar16 = (float10)FUN_00220120(param_3,param_10,&local_64,&local_7c,param_4,local_50,local_58,0)
    ;
    local_6c = (float)((float10)param_4 * (float10)param_4);
    uVar13 = 0;
    if ((fVar16 < (float10)param_4 * (float10)param_4) &&
       (cVar10 = FUN_00220030(), uVar13 = 0, cVar10 != '\0')) {
      local_50[4] = param_11;
      local_50[0] = param_13;
      local_50[2] = (float *)param_15;
      local_50[3] = param_10;
      local_74 = param_3[2] - param_10[2];
      local_50[5] = param_12;
      local_50[1] = (float *)param_14;
      local_78 = param_3[1] - param_10[1];
      local_80 = ABS((*param_3 - *param_10) * local_90 + local_8c * local_78 + local_88 * local_74);
      fVar7 = local_8c * param_7[1] + local_88 * param_7[2] + local_90 * *param_7;
      if (fVar7 <= 0.995) {
        if (-0.995 <= fVar7) {
          fVar7 = local_8c * *param_7 - local_90 * param_7[1];
          fVar1 = local_90 * param_7[2] - local_88 * *param_7;
          local_90 = local_88 * param_7[1] - local_8c * param_7[2];
          in_XMM0 = rsqrtss(in_XMM0,local_90 * local_90 + fVar1 * fVar1 + fVar7 * fVar7);
          local_84 = in_XMM0._0_4_;
          local_90 = local_84 * local_90;
          local_8c = fVar1 * local_84;
          local_88 = fVar7 * local_84;
          fVar16 = (float10)FUN_00306c80();
          FUN_0001fc70(&local_7c,&local_90,(float)(fVar16 * (float10)57.295776));
          FUN_002333b0(&local_7c);
          FUN_0001f9c0();
          local_64 = local_7c;
          local_60 = local_78;
          local_5c = local_74;
          FUN_0001f9c0();
        }
        else {
          local_64 = -*param_8;
          local_60 = -param_8[1];
          local_74 = param_9[2];
          local_78 = param_9[1];
          local_7c = *param_9;
          local_5c = -param_8[2];
        }
      }
      else {
        local_5c = param_8[2];
        local_60 = param_8[1];
        local_64 = *param_8;
        local_74 = param_9[2];
        local_78 = param_9[1];
        local_7c = *param_9;
      }
      param_4 = local_80 / param_4;
      local_58[0] = 1.0 - param_4 * param_4 * param_4;
      local_6c = local_6c - local_80 * local_80;
      auVar18 = rsqrtss(in_XMM0,local_6c);
      fVar7 = auVar18._0_4_ * 0.5;
      FUN_002183c0();
      iVar2 = *(int *)(*(int *)(param_2 + 4) + 4);
      pfVar11 = (float *)(iVar2 + 0x10);
      bVar14 = 0;
      puVar12 = (undefined1 *)(iVar2 + 0x2d);
      iVar15 = 0;
      do {
        pfVar3 = *(float **)((int)local_50 + iVar15 + 0xc);
        fVar1 = param_3[2] - pfVar3[2];
        fVar8 = param_3[1] - pfVar3[1];
        fVar9 = *param_3 - *pfVar3;
        pfVar4 = *(float **)((int)local_50 + iVar15);
        pfVar11[-2] = _DAT_00407060 * *pfVar4 + *pfVar3;
        pfVar11[-1] = _DAT_00407060 * pfVar4[1] + pfVar3[1];
        *pfVar11 = _DAT_00407060 * pfVar4[2] + pfVar3[2];
        fVar17 = (fVar9 * local_64 + fVar8 * local_60 + fVar1 * local_5c) * fVar7 + 0.5;
        puVar12[-1] = (char)((uint)fVar17 >> 8);
        *puVar12 = (char)((uint)fVar17 >> 0x10);
        puVar12[1] = (char)((uint)fVar17 >> 0x18);
        fVar17 = (fVar9 * local_7c + local_78 * fVar8 + local_74 * fVar1) * fVar7 + 0.5;
        puVar12[2] = (char)((uint)fVar17 >> 8);
        puVar12[3] = (char)((uint)fVar17 >> 0x10);
        puVar12[4] = (char)((uint)fVar17 >> 0x18);
        auVar18 = rsqrtss(auVar18,fVar9 * fVar9 + fVar8 * fVar8 + fVar1 * fVar1);
        fVar17 = auVar18._0_4_;
        fVar1 = fVar17 * fVar9 * *pfVar4 + fVar8 * fVar17 * pfVar4[1] + fVar1 * fVar17 * pfVar4[2];
        if (fVar1 <= -1.0) {
          fVar1 = 0.0;
        }
        else {
          fVar1 = 1.0 - (fVar1 - -1.0) * 0.5;
          fVar1 = 1.0 - fVar1 * fVar1;
        }
        bVar5 = bVar14 & 0x1f;
        bVar6 = bVar14 & 0x1f;
        pfVar11 = pfVar11 + 3;
        iVar15 = iVar15 + 4;
        puVar12 = puVar12 + 6;
        bVar14 = bVar14 + 5;
        *(ushort *)(iVar2 + 0x3e) =
             ~(ushort)(0x1f << bVar5) & *(ushort *)(iVar2 + 0x3e) |
             (ushort)((int)(fVar1 * local_58[0] * 31.0 + 0.5) << bVar6);
      } while (iVar15 < 0xc);
      uVar13 = 1;
    }
    return uVar13;
  }
  return 0;
}
