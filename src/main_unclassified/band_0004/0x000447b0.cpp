/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A86635895430027C0BF9C2D9198F45D9651D376547C264485AE9A53D67947C49
 * Entry: 0x000447b0, Ghidra index: 533, label: FUN_000447b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t PTR_FUN_003a479c;
extern uint32_t PTR_FUN_003a4f64;
extern uint32_t PTR_LAB_003a4f50;
extern uint32_t UNK_0004507d;
void FUN_000447b0(int *param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  float10 fVar17;
  int *piStack_168;
  uint uStack_164;
  int *piStack_160;
  undefined ***pppuStack_15c;
  float local_140;
  int local_13c;
  int iStack_130;
  int local_12c;
  int *local_128;
  int local_124;
  int local_120;
  int *local_11c;
  uint uStack_118;
  float fStack_114;
  int iStack_110;
  uint uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined ***pppuStack_ec;
  undefined **local_e8;
  undefined **ppuStack_e4;
  int local_e0;
  int iStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined ***pppuStack_cc;
  int iStack_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  byte local_b0;
  byte local_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int local_9c;
  undefined **ppuStack_98;
  undefined **ppuStack_94;
  undefined4 uStack_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  byte bStack_60;
  byte bStack_5c;
  float fStack_50;
  float fStack_44;
  undefined **ppuStack_40;
  undefined **ppuStack_3c;
  undefined4 uStack_38;
  int iStack_30;
  int iStack_1c;
  
  iVar11 = param_1[0xd6];
  iVar14 = *(int *)(iVar11 + 8);
  iVar12 = **(int **)(iVar11 + 4);
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  local_12c = 0;
  local_128 = (int *)0x0;
  local_124 = 0;
  local_140 = 0.0;
  local_13c = iVar12;
  if (iVar12 != *(int *)(iVar11 + 4)) {
    do {
      uVar16 = *(uint *)(iVar12 + 0x10);
      if (iVar14 * iVar14 < (int)local_140) break;
      if (((*(int *)(iVar12 + 0x70) == 1) && (uVar16 != 0)) && ((*(byte *)(uVar16 + 0x70) & 1) != 0)
         ) {
        uVar15 = param_1[0x28];
        if ((uVar15 == 0) || ((uVar15 & -(uint)((*(byte *)(uVar15 + 0x26) & 0x40) != 0)) == 0)) {
          uVar15 = 0;
        }
        if (uVar15 == uVar16) {
          pppuStack_15c = (undefined ***)0x1;
          piStack_160 = param_1;
          uStack_164 = 0x44845;
          cVar9 = FUN_00043470();
        }
        else {
          pppuStack_15c = (undefined ***)param_1[0xd6];
          piStack_160 = (int *)0x44855;
          iVar11 = FUN_000388b0();
          cVar9 = iVar11 != 0;
          if ((bool)cVar9) {
            pppuStack_15c = (undefined ***)0x44860;
            FUN_0003eee0();
          }
        }
        if (cVar9 != '\0') {
          local_13c = **(int **)(param_1[0xd6] + 4);
          iVar12 = local_13c;
        }
      }
      else {
        pppuStack_15c = (undefined ***)0x44888;
        FUN_0001c5d0();
        iVar12 = local_13c;
      }
      local_140 = (float)((int)local_140 + 1);
    } while (iVar12 != *(int *)(param_1[0xd6] + 4));
  }
  iVar11 = param_1[0xd6];
  if (*(int *)(iVar11 + 8) == 0) {
    param_1[0x69] = (int)(param_2 + (float)param_1[0x69]);
  }
  else {
    param_1[0x69] = 0;
  }
  iVar14 = **(int **)(iVar11 + 4);
  bVar8 = true;
  if (iVar14 != *(int *)(iVar11 + 4)) {
    do {
      local_11c = *(int **)(iVar14 + 0x10);
      local_120 = iVar14 + 0xc;
      if (*(int *)(iVar14 + 0x70) == 5) {
        if ((*(uint *)(iVar14 + 0x8c) >> 3 & 1) != 0) {
          bVar8 = false;
        }
      }
      else if ((*(int *)(iVar14 + 0x70) == 1) && ((param_1[0xf1] & 0x100U) != 0)) {
        if (param_1[2] == 0) {
          piVar10 = param_1 + 3;
        }
        else {
          bVar5 = true;
          iStack_a4 = 0;
          piVar10 = &iStack_a8;
        }
        piVar10 = (int *)piVar10[1];
        if ((bVar5) && (bVar5 = false, iStack_a4 != 0)) {
          pppuStack_15c = (undefined ***)0x4497d;
          FUN_0008f6e0();
        }
        iVar11 = param_1[0x16];
        if (iVar11 == 1) {
          pppuStack_15c = (undefined ***)0x449b8;
          iVar11 = (**(code **)(piVar10[0x6d] + 8))();
          local_140 = *(float *)(iVar11 + 0x40);
        }
        else {
          if ((iVar11 != 3) && (iVar11 != 5)) goto LAB_00044b57;
          pppuStack_15c = (undefined ***)0x449a0;
          iVar11 = (**(code **)(piVar10[0x6d] + 8))();
          local_140 = *(float *)(iVar11 + 0x3c);
        }
        piVar1 = *(int **)(local_120 + 4);
        pppuStack_15c = (undefined ***)0x449cd;
        iVar11 = (**(code **)(*piVar10 + 0x40))();
        pppuStack_15c = (undefined ***)0x449d6;
        iVar12 = (**(code **)(*piVar1 + 0x40))();
        fStack_44 = *(float *)(iVar11 + 0x2c) - *(float *)(iVar12 + 0x2c);
        fVar2 = *(float *)(iVar11 + 0x28) - *(float *)(iVar12 + 0x28);
        fStack_114 = *(float *)(iVar11 + 0x24) - *(float *)(iVar12 + 0x24);
        if (fStack_44 * fStack_44 + fVar2 * fVar2 + fStack_114 * fStack_114 < local_140 * local_140)
        {
          bStack_5c = bStack_5c & 0xfe;
          bStack_60 = bStack_60 & 0xfe;
          ppuStack_98 = &PTR_FUN_003a479c;
          iStack_88 = 0;
          iStack_74 = 0;
          ppuStack_94 = &PTR_FUN_003a4f64;
          uStack_7c = 0;
          uStack_80 = 0;
          uStack_84 = 0;
          uStack_6c = 0;
          uStack_68 = 0;
          uStack_64 = 0;
          uStack_70 = 0;
          uStack_90 = 0x2d;
          piStack_160 = *(int **)(piVar10[2] + 0xbf4);
          ppuStack_e4 = (undefined **)((int)piVar10 + *(int *)(piVar10[0x13] + 4) + 0x50);
          local_e8 = (undefined **)((int)piVar10 + *(int *)(piVar10[0x13] + 4) + 0x4c);
          local_e0 = piStack_160[0x14];
          pppuStack_15c = &local_e8;
          pppuStack_cc = &ppuStack_98;
          uStack_d8 = 0;
          uStack_d4 = 0x2d;
          uStack_d0 = 0;
          uStack_164 = 0x44b17;
          iStack_dc = local_e0;
          FUN_000e4190();
          ppuStack_94 = &PTR_FUN_003a4f64;
          if (iStack_74 != 0) {
            pppuStack_15c = (undefined ***)0x44b37;
            FUN_0008f6e0();
          }
          if (iStack_88 != 0) {
            pppuStack_15c = (undefined ***)0x44b4c;
            FUN_0008f6e0();
          }
          ppuStack_98 = &PTR_LAB_003a4f50;
        }
      }
LAB_00044b57:
      if ((((*(uint *)(local_120 + 0x80) >> 5 & 1) != 0) &&
          ((*(uint *)(local_120 + 0x80) >> 2 & 1) != 0)) &&
         ((bVar8 = false, (*(byte *)(param_1 + 0x47) & 1) == 0 ||
          ((float)param_1[0x46] < 0.0 != ((float)param_1[0x46] == 0.0))))) {
        if (param_1[2] == 0) {
          piVar10 = param_1 + 3;
        }
        else {
          bVar6 = true;
          local_9c = 0;
          piVar10 = &local_a0;
        }
        piVar10 = (int *)piVar10[1];
        if ((bVar6) && (bVar6 = false, local_9c != 0)) {
          pppuStack_15c = (undefined ***)0x44bee;
          FUN_0008f6e0();
        }
        pppuStack_15c = (undefined ***)0x44bf9;
        iVar11 = (**(code **)(*local_11c + 0x40))();
        pppuStack_15c = (undefined ***)0x44c02;
        iVar12 = (**(code **)(*piVar10 + 0x40))();
        fStack_50 = *(float *)(iVar12 + 0x2c) - *(float *)(iVar11 + 0x2c);
        pppuStack_15c = (undefined ***)param_1;
        fVar2 = *(float *)(iVar12 + 0x28) - *(float *)(iVar11 + 0x28);
        fVar4 = *(float *)(iVar12 + 0x24) - *(float *)(iVar11 + 0x24);
        fVar3 = fStack_50 * fStack_50;
        piStack_160 = (int *)0x44c4f;
        fVar17 = (float10)FUN_0002e210();
        if ((float10)(fVar3 + fVar2 * fVar2 + fVar4 * fVar4) < fVar17 * fVar17) {
          param_1[0x48] = 0x3fc00000;
          param_1[0x46] = 0x3fc00000;
          *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) & 0xf9 | 1;
          for (uVar16 = 0;
              (param_1[0x103] != 0 && (uVar16 < (uint)(param_1[0x104] - param_1[0x103] >> 2)));
              uVar16 = uVar16 + 1) {
            if (*(int *)(*(int *)(param_1[0x103] + uVar16 * 4) + 4) == 0x55) goto LAB_00044d56;
          }
          pppuStack_15c = (undefined ***)0x55;
          piStack_160 = (int *)0x44ccf;
          FUN_00012320();
          local_f4 = uStack_38;
          pppuStack_ec = &ppuStack_40;
          pppuStack_15c = (undefined ***)&local_108;
          local_108 = 0;
          uStack_104 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          uStack_f8 = 0;
          uStack_f0 = 0;
          piStack_160 = (int *)0x44d12;
          (**(code **)(*param_1 + 0x1c))();
          ppuStack_3c = &PTR_FUN_003a4f64;
          if (iStack_1c != 0) {
            pppuStack_15c = (undefined ***)0x44d32;
            FUN_0008f6e0();
          }
          if (iStack_30 != 0) {
            pppuStack_15c = (undefined ***)0x44d47;
            FUN_0008f6e0();
          }
          ppuStack_40 = &PTR_LAB_003a4f50;
        }
      }
LAB_00044d56:
      /* 0x00044D63 shr ecx,4; 0x00044D66 and cl,1; 0x00044D6B
       * mov [esp+0x40],cl. Only the low byte is written; leave the
       * remaining 24 bits of this guest stack word unchanged. */
      ((uint8_t *)&uStack_118)[0] =
          (uint8_t)((*(uint *)(local_120 + 0x80) >> 4) & 1U);
      if (param_1[2] == 0) {
        piVar10 = param_1 + 3;
      }
      else {
        bVar7 = true;
        uStack_10c = 0;
        piVar10 = &iStack_110;
      }
      iVar11 = piVar10[1];
      if (((bVar7) && (bVar7 = false, uStack_10c != 0)) && ((uStack_10c & 1) == 0)) {
        iVar13 = uStack_10c * 0x19660d;
        uStack_10c = 0;
        iVar12 = *(int *)(&DAT_00414da0 + (iVar13 + 0x3c6ef35fU >> 0x15) * 4);
        piVar10 = (int *)(&DAT_00414da0 + (iVar13 + 0x3c6ef35fU >> 0x15) * 4);
        while (iVar12 != 0) {
          piVar1 = (int *)*piVar10;
          if (piVar1 == &iStack_110) {
            *piVar10 = *(int *)*piVar10;
            break;
          }
          piVar10 = piVar1;
          iVar12 = *piVar1;
        }
      }
      piStack_168 = *(int **)(iVar11 + 0x24c);
      pppuStack_15c = (undefined ***)uStack_118;
      piStack_160 = (int *)(*(uint *)(local_120 + 0x80) >> 3 & 0xffffff01);
      uStack_164 = *(uint *)(local_120 + 0x80) >> 5 & 0xffffff01;
      cVar9 = FUN_00054950(param_2);
      piVar10 = local_128;
      iVar11 = local_12c;
      if (cVar9 == '\0') {
        if ((local_12c == 0) ||
           ((uint)(local_124 - local_12c >> 2) <= (uint)((int)local_128 - local_12c >> 2))) {
          pppuStack_15c = (undefined ***)&local_11c;
          piStack_160 = local_128;
          uStack_164 = 0x44e73;
          FUN_000a7d80();
          iVar11 = local_12c;
        }
        else {
          pppuStack_15c = (undefined ***)uStack_118;
          piStack_160 = &iStack_130;
          uStack_164 = 1;
          piStack_168 = local_128;
          FUN_0003efa0();
          local_128 = piVar10 + 1;
        }
      }
      pppuStack_15c = (undefined ***)0x44e80;
      FUN_0001c5d0();
    } while (iVar14 != *(int *)(param_1[0xd6] + 4));
    if (!bVar8) {
      if ((char)param_1[0xf1] < '\0') {
        param_1[0xf1] = param_1[0xf1] & 0xffffff7f;
      }
      goto LAB_00045004;
    }
  }
  iVar11 = local_12c;
  if (-1 < (char)param_1[0xf1]) {
    param_1[0xf1] = param_1[0xf1] | 0x80;
    local_b0 = local_b0 & 0xfe;
    pppuStack_15c = (undefined ***)&local_108;
    local_e0 = 0x1d;
    local_f4 = 0x1d;
    pppuStack_ec = &local_e8;
    local_ac = local_ac & 0xfe;
    local_e8 = &PTR_FUN_003a479c;
    uStack_d8 = 0;
    uStack_c4 = 0;
    ppuStack_e4 = &PTR_FUN_003a4f64;
    pppuStack_cc = (undefined ***)0x0;
    uStack_d0 = 0;
    uStack_d4 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_c0 = 0;
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    piStack_160 = (int *)0x44f5c;
    (**(code **)(*param_1 + 0x1c))();
    ppuStack_e4 = &PTR_FUN_003a4f64;
    if ((uStack_c4 != 0) && ((uStack_c4 & 1) == 0)) {
      iVar14 = uStack_c4 * 0x19660d;
      uStack_c4 = 0;
      iVar11 = *(int *)(&DAT_00414da0 + (iVar14 + 0x3c6ef35fU >> 0x15) * 4);
      piVar10 = (int *)(&DAT_00414da0 + (iVar14 + 0x3c6ef35fU >> 0x15) * 4);
      while (iVar11 != 0) {
        piVar1 = (int *)*piVar10;
        if (piVar1 == &iStack_c8) {
          *piVar10 = *(int *)*piVar10;
          break;
        }
        piVar10 = piVar1;
        iVar11 = *piVar1;
      }
    }
    iVar11 = local_12c;
    if ((uStack_d8 != 0) && ((uStack_d8 & 1) == 0)) {
      iVar12 = uStack_d8 * 0x19660d;
      uStack_d8 = 0;
      iVar14 = *(int *)(&DAT_00414da0 + (iVar12 + 0x3c6ef35fU >> 0x15) * 4);
      piVar10 = (int *)(&DAT_00414da0 + (iVar12 + 0x3c6ef35fU >> 0x15) * 4);
      while (iVar14 != 0) {
        piVar1 = (int *)*piVar10;
        if (piVar1 == &iStack_dc) {
          *piVar10 = *(int *)*piVar10;
          break;
        }
        piVar10 = piVar1;
        iVar14 = *piVar1;
      }
    }
  }
LAB_00045004:
  for (uVar16 = 0; (iVar11 != 0 && (uVar16 < (uint)((int)local_128 - iVar11 >> 2)));
      uVar16 = uVar16 + 1) {
    pppuStack_15c = (undefined ***)param_1[0xd6];
    piStack_160 = (int *)0x45026;
    iVar14 = FUN_000388b0();
    if (iVar14 != 0) {
      pppuStack_15c = (undefined ***)0x45031;
      FUN_0003eee0();
    }
  }
  FUN_001e0dd0(&piStack_168);
  FUN_00042be0(param_1 + 0x101);
  pppuStack_15c = (undefined ***)0x45073;
  FUN_00045090();
  if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    piStack_160 = (int *)&UNK_0004507d;
    pppuStack_15c = (undefined ***)iVar11;
    thunk_FUN_00237ec0();
  }
  return;
}
