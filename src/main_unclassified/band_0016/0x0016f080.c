/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 664D2C6E56274B6AF05B9C5D1956D319A6F983D99C1253697A46DCAEF8940BFC
 * Entry: 0x0016f080, Ghidra index: 4833, label: FUN_0016f080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_0016f1c6_caseD_0[];
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 FUN_0016f080(int param_1,float param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 uVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float local_170;
  int32_t guest_key_count; /* x86 quotient (end - begin) / 20, not an SSE float */
  float local_164;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  undefined8 local_ec;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  byte local_24;
  
  uVar8 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    guest_key_count = 0;
  }
  else {
    guest_key_count = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x14;
  }
  if (*(char *)(param_1 + 0x24) == '\0') {
    if (*(int *)(param_1 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(int *)(param_1 + 0x18));
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    iVar13 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        local_24 = local_24 & 0xf0;
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        local_2c = 0;
        local_28 = 0;
        FUN_00170900();
        FUN_00170f50();
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  switch(guest_key_count) {
  case 0:
    goto switchD_0016f1c6_caseD_0;
  case 1:
    pfVar10 = *(float **)(param_1 + 4);
    fVar11 = pfVar10[2];
    fVar14 = pfVar10[3];
    fVar6 = pfVar10[1];
    *param_3 = *pfVar10;
    param_3[1] = fVar6;
    param_3[2] = fVar11;
    param_3[3] = fVar14;
    return 1;
  case 2:
    pfVar10 = *(float **)(param_1 + 4);
    fVar11 = pfVar10[4];
    if ((uint)param_2 < (uint)fVar11) {
      local_164 = pfVar10[3];
      local_170 = pfVar10[2];
      fVar11 = pfVar10[1];
      fVar14 = *pfVar10;
    }
    else {
      if ((uint)param_2 <= (uint)pfVar10[9]) {
        fVar14 = (float)((int)param_2 - (int)fVar11);
        if ((int)param_2 - (int)fVar11 < 0) {
          fVar14 = fVar14 + 4.2949673e+09;
        }
        iVar13 = (int)pfVar10[9] - (int)fVar11;
        fVar11 = (float)iVar13;
        if (iVar13 < 0) {
          fVar11 = fVar11 + 4.2949673e+09;
        }
        pfVar10 = (float *)FUN_0012b250(pfVar10,fVar14 / fVar11);
        fVar11 = pfVar10[3];
        fVar14 = pfVar10[2];
        fVar6 = pfVar10[1];
        *param_3 = *pfVar10;
        param_3[1] = fVar6;
        param_3[2] = fVar14;
        param_3[3] = fVar11;
        return 1;
      }
      local_164 = pfVar10[8];
      local_170 = pfVar10[7];
      fVar11 = pfVar10[6];
      fVar14 = pfVar10[5];
    }
LAB_0016f24a:
    *param_3 = fVar14;
    param_3[1] = fVar11;
    param_3[2] = local_170;
    param_3[3] = local_164;
    return 1;
  case 3:
    uVar8 = FUN_00170e50();
    return uVar8;
  default:
    pfVar10 = *(float **)(param_1 + 4);
    if ((uint)param_2 <= (uint)pfVar10[4]) {
      fVar11 = pfVar10[3];
      fVar14 = pfVar10[2];
      fVar6 = pfVar10[1];
      *param_3 = *pfVar10;
      param_3[1] = fVar6;
      param_3[2] = fVar14;
      param_3[3] = fVar11;
      return 1;
    }
    iVar13 = *(int *)(param_1 + 8);
    if ((uint)*(float *)(iVar13 + -4) <= (uint)param_2) {
      local_164 = *(float *)(iVar13 + -8);
      local_170 = *(float *)(iVar13 + -0xc);
      fVar11 = *(float *)(iVar13 + -0x10);
      fVar14 = *(float *)(iVar13 + -0x14);
      goto LAB_0016f24a;
    }
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    for (iVar13 = *(int *)(param_1 + 0x18); iVar13 != *(int *)(param_1 + 0x1c);
        iVar13 = iVar13 + 100) {
      if (((uint)*(float *)(*(int *)(iVar13 + 0x60) + 0x10) <= (uint)param_2) &&
         ((uint)param_2 < (uint)*(float *)(*(int *)(iVar13 + 0x60) + 0x38))) {
        *(int *)(param_1 + 0x28) = (iVar13 - *(int *)(param_1 + 0x18)) / 100;
        break;
      }
    }
    iVar13 = *(int *)(param_1 + 0x28);
    if (iVar13 != -1) {
      if ((iVar13 < *(int *)(param_1 + 0x10) + -1) &&
         (iVar13 = *(int *)(iVar13 * 100 + *(int *)(param_1 + 0x18) + 0x60),
         (uint)*(float *)(iVar13 + 0x24) <= (uint)param_2)) {
        iVar12 = (int)param_2 - *(int *)(iVar13 + 0x24);
        fVar11 = (float)iVar12;
        if (iVar12 < 0) {
          fVar11 = fVar11 + 4.2949673e+09;
        }
        iVar13 = *(int *)(iVar13 + 0x38) - *(int *)(iVar13 + 0x24);
        fVar14 = (float)iVar13;
        if (iVar13 < 0) {
          fVar14 = fVar14 + 4.2949673e+09;
        }
        fVar11 = fVar11 / fVar14;
        FUN_00170e50();
        FUN_00170e50();
        local_b8 = local_150 + local_160;
        fVar14 = fStack_14c + fStack_15c;
        local_dc = fStack_148 + fStack_158;
        local_d8 = fStack_144 + fStack_154;
        _fStack_b4 = CONCAT44(local_dc,fVar14);
        fStack_f8 = fStack_148 - fStack_158;
        fStack_f4 = fStack_144 - fStack_154;
        if (fVar14 * fVar14 + local_dc * local_dc + local_d8 * local_d8 + local_b8 * local_b8 <
            (local_150 - local_160) * (local_150 - local_160) +
            (fStack_14c - fStack_15c) * (fStack_14c - fStack_15c) +
            fStack_f8 * fStack_f8 + fStack_f4 * fStack_f4) {
          local_160 = local_160 * -1.0;
          fStack_15c = fStack_15c * -1.0;
          fStack_158 = fStack_158 * -1.0;
          fStack_154 = fStack_154 * -1.0;
          local_100 = local_160;
          fStack_fc = fStack_15c;
          fStack_f8 = fStack_158;
          fStack_f4 = fStack_154;
        }
        fStack_ac = local_d8;
        pfVar9 = (float *)FUN_0016b1d0();
        pfVar10 = pfVar9 + 1;
        local_d4 = local_160 * *pfVar9 -
                   (fStack_15c * *pfVar10 + fStack_154 * pfVar9[3] + fStack_158 * pfVar9[2]);
        fVar14 = *pfVar9;
        local_f0 = fVar14 * fStack_15c;
        local_ec = CONCAT44(fVar14 * fStack_154,fVar14 * fStack_158);
        local_c8 = (fStack_15c * pfVar9[2] - fStack_158 * *pfVar10) +
                   local_160 * (float)((ulonglong)*(undefined8 *)(pfVar9 + 2) >> 0x20) +
                   fVar14 * fStack_154;
        local_cc = (fStack_154 * *pfVar10 - fStack_15c * pfVar9[3]) +
                   local_160 * (float)*(undefined8 *)(pfVar9 + 2) + fVar14 * fStack_158;
        local_d0 = local_160 * *pfVar10 + local_f0 +
                   (fStack_158 * pfVar9[3] - fStack_154 * pfVar9[2]);
        pfVar10 = (float *)FUN_0016ee90();
        fVar14 = fVar11 * fVar11 * fVar11;
        local_104 = fVar11 * fVar11 * 3.0 - (fVar14 + fVar14);
        local_10c = local_104 * *pfVar10;
        local_108 = local_104 * (float)*(undefined8 *)(pfVar10 + 1);
        local_104 = local_104 * (float)((ulonglong)*(undefined8 *)(pfVar10 + 1) >> 0x20);
        pfVar9 = (float *)FUN_0016ef80(&local_10c);
        pfVar10 = pfVar9 + 1;
        fVar14 = *pfVar10;
        fVar6 = pfVar9[2];
        fVar2 = pfVar9[3];
        fVar3 = *pfVar10;
        fVar4 = pfVar9[2];
        fVar7 = *pfVar9;
        fVar5 = pfVar9[3];
        fVar11 = *pfVar10;
        uVar1 = *(undefined8 *)(pfVar9 + 2);
        *param_3 = local_150 * *pfVar9 -
                   (fStack_14c * *pfVar10 + fStack_144 * pfVar9[3] + fStack_148 * pfVar9[2]);
        param_3[1] = fVar7 * fStack_14c + local_150 * fVar11 +
                     (fStack_144 * fVar4 - fStack_148 * fVar5);
        param_3[2] = (fStack_14c * fVar2 - fStack_144 * fVar3) +
                     fVar7 * fStack_148 + local_150 * (float)uVar1;
        param_3[3] = (fStack_148 * fVar14 - fStack_14c * fVar6) +
                     fVar7 * fStack_144 + local_150 * (float)((ulonglong)uVar1 >> 0x20);
        return 1;
      }
      FUN_00170e50();
    }
    uVar8 = 1;
switchD_0016f1c6_caseD_0:
    return uVar8;
  }
}
