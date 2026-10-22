/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 171FAF9B97973C2469AE7F6CDAD248BD8BABC85A71474FF0FD2FE99B9F530D93
 * Entry: 0x000d3550, Ghidra index: 2629, label: FUN_000d3550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d3550(int param_1,int param_2,int *param_3,char param_4,char param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  char cVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  int local_168;
  int iStack_164;
  undefined1 local_160;
  int *piStack_15c;
  int iStack_158;
  undefined4 local_154;
  undefined4 local_150;
  int iStack_14c;
  undefined1 local_148;
  float fStack_144;
  undefined4 uStack_140;
  float fStack_13c;
  float fStack_138;
  undefined4 uStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined4 *puStack_100;
  undefined1 *puStack_fc;
  float *pfStack_f8;
  int **ppiStack_f4;
  undefined4 *puStack_f0;
  int iStack_ec;
  int *piStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  int iStack_d4;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [48];
  undefined1 auStack_30 [48];
  
  if ((param_3 == (int *)0x0) && ((*(byte *)(param_1 + 0xf008) & 1) == 0)) {
    iVar3 = param_1 + *(int *)(param_1 + 0xf000) * 4;
    FUN_000d3af0(param_1,iVar3,iVar3 - param_1 >> 2);
    iVar3 = param_1 + (0xa00 - *(int *)(param_1 + 0xf004)) * 4;
    FUN_000d3af0(iVar3,param_1 + 0x2800,(param_1 + 0x2800) - iVar3 >> 2);
    *(byte *)(param_1 + 0xf008) = *(byte *)(param_1 + 0xf008) | 1;
  }
  local_148 = 1;
  local_154 = 0;
  local_150 = 0;
  local_170 = 0x65;
  local_160 = 1;
  local_16c = 0;
  local_174 = 0;
  local_168 = 0;
  iVar3 = (**(code **)(*(int *)(*(int *)(param_2 + 0x8c) + 0x48) + 0x14))();
  FUN_0003d6c0(auStack_60,iVar3,iVar3 + 0x24);
  puStack_f0 = &local_174;
  pfStack_f8 = &fStack_130;
  ppiStack_f4 = &piStack_15c;
  puStack_100 = &uStack_90;
  puStack_fc = auStack_60;
  iStack_ec = 0;
  iStack_17c = 0;
  iStack_180 = 0;
  iStack_184 = 0;
  piVar8 = (int *)0x0;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0x1c))(param_3,param_2);
    piVar8 = param_3;
  }
  iVar3 = *(int *)(param_1 + 0xf000);
  iStack_188 = iVar3 + -1;
  iStack_18c = 0;
  if (param_5 != '\0') {
    iVar3 = *(int *)(param_1 + 0xf004);
    iStack_18c = 0xa00 - iVar3;
    iStack_188 = 0x9ff;
  }
  if (iVar3 < 1) {
LAB_000d3acf:
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0x24))(piVar8,param_2);
    }
    return;
  }
  do {
    piVar2 = *(int **)(param_1 + iStack_18c * 4);
    iVar3 = piVar2[3];
    if (*piVar2 == iStack_17c) {
LAB_000d372a:
      iVar5 = piVar2[1];
      if (iVar5 != iStack_184) {
        uStack_90 = *(undefined4 *)(iVar5 + 0x14);
        uStack_8c = *(undefined4 *)(iVar5 + 0x18);
        uStack_88 = *(undefined4 *)(iVar5 + 0x1c);
        uStack_84 = *(undefined4 *)(iVar5 + 0x20);
        uStack_70 = *(undefined4 *)(iVar5 + 0x34);
        uStack_80 = *(undefined4 *)(iVar5 + 0x24);
        uStack_7c = *(undefined4 *)(iVar5 + 0x28);
        uStack_78 = *(undefined4 *)(iVar5 + 0x2c);
        uStack_74 = *(undefined4 *)(iVar5 + 0x30);
        uStack_134 = *(undefined4 *)(iVar5 + 0x3c);
        uStack_140 = *(undefined4 *)(iVar5 + 0x40);
        uStack_6c = *(undefined4 *)(iVar5 + 0x38);
        uStack_68 = uStack_134;
        uStack_64 = uStack_140;
        pfVar4 = (float *)FUN_002338c0(auStack_30,auStack_60,&uStack_90);
        fStack_130 = *pfVar4;
        fStack_12c = pfVar4[1];
        fStack_128 = pfVar4[2];
        fStack_124 = pfVar4[3];
        fStack_110 = pfVar4[8];
        fStack_120 = pfVar4[4];
        fStack_11c = pfVar4[5];
        fStack_118 = pfVar4[6];
        fStack_114 = pfVar4[7];
        fStack_144 = pfVar4[0xb];
        fStack_13c = pfVar4[10];
        fStack_10c = pfVar4[9];
        iStack_184 = iVar5;
        fStack_138 = fStack_13c;
        fStack_108 = fStack_13c;
        fStack_104 = fStack_144;
        fStack_9c = fStack_10c;
        fStack_98 = fStack_13c;
        fStack_94 = fStack_144;
        fStack_c0 = fStack_130;
        fStack_bc = fStack_12c;
        fStack_b8 = fStack_128;
        fStack_b4 = fStack_124;
        fStack_b0 = fStack_120;
        fStack_ac = fStack_11c;
        fStack_a8 = fStack_118;
        fStack_a4 = fStack_114;
        fStack_a0 = fStack_110;
      }
      if (piVar2[3] != iStack_180) {
        if (param_4 != '\0') {
          fStack_cc = fStack_128 * *(float *)(iVar3 + 0x14) +
                      fStack_12c * *(float *)(iVar3 + 0x10) + fStack_130 * *(float *)(iVar3 + 0xc) +
                      fStack_10c;
          fStack_c8 = fStack_11c * *(float *)(iVar3 + 0x14) +
                      fStack_120 * *(float *)(iVar3 + 0x10) + fStack_124 * *(float *)(iVar3 + 0xc) +
                      fStack_108;
          fStack_c4 = fStack_110 * *(float *)(iVar3 + 0x14) +
                      fStack_114 * *(float *)(iVar3 + 0x10) + fStack_118 * *(float *)(iVar3 + 0xc) +
                      fStack_104;
          iVar5 = (**(code **)(*(int *)(*(int *)(param_2 + 0x8c) + 0x48) + 0x50))
                            (&fStack_cc,*(undefined4 *)(iVar3 + 8));
          if (iVar5 < 3) goto LAB_000d3ab2;
        }
        piVar7 = param_3;
        if ((param_3 == (int *)0x0) && (piVar7 = *(int **)(iVar3 + 4), piVar7 == (int *)0x0))
        goto LAB_000d3ab2;
        if (piVar7 != piVar8) {
          if (piVar8 != (int *)0x0) {
            (**(code **)(*piVar8 + 0x24))(piVar8,param_2);
          }
          (**(code **)(*piVar7 + 0x1c))(piVar7,param_2);
          piVar8 = piVar7;
        }
        iStack_ec = (piVar2[3] - *(int *)(piVar2[2] + 0x18)) / 0x2c;
        iStack_180 = piVar2[3];
        piStack_e8 = piVar8;
        iStack_d4 = iVar3;
      }
      piVar7 = *(int **)(iVar3 + 0x20);
      if (*(int **)(iVar3 + 0x1c) != piVar7) {
        piVar9 = *(int **)(iVar3 + 0x1c) + 6;
        do {
          iStack_158 = piVar9[-3];
          piStack_15c = piVar9 + 2;
          iStack_14c = piVar9[-2];
          local_168 = piVar9[5];
          iStack_164 = piVar9[-5];
          iStack_e4 = piVar2[4];
          if (*piVar9 < 0) {
            uStack_e0 = 0;
            uStack_dc = 0;
          }
          else {
            uStack_e0 = *(undefined4 *)(*(int *)(piVar2[2] + 8) + 4 + *piVar9 * 0x14);
            uStack_dc = *(undefined4 *)(*(int *)(piVar2[2] + 8) + 0x10 + *piVar9 * 0x14);
          }
          iStack_d8 = piVar9[1];
          if (piVar9[-6] == 0xe7ab726) {
            cVar6 = '\x05';
          }
          else {
            cVar6 = (piVar9[-6] == 0x1d62e437) + '\x05';
          }
          (**(code **)(*piVar8 + 0x20))
                    (piVar8,&puStack_100,cVar6,0,piVar9[-2],0,piVar9[-5],0,param_2);
          piVar1 = piVar9 + 6;
          piVar9 = piVar9 + 0xc;
        } while (piVar1 != piVar7);
      }
    }
    else {
      if (*(int *)(*(int *)(*piVar2 + 0xc) + 4) != 3) {
LAB_000d3717:
        iStack_17c = *piVar2;
        *(int *)(param_2 + 0x990) = iStack_17c;
        goto LAB_000d372a;
      }
      if (-1 < *(char *)(param_2 + 0x84)) {
        FUN_0023cf80();
        goto LAB_000d3717;
      }
    }
LAB_000d3ab2:
    if (iStack_18c == iStack_188) goto LAB_000d3acf;
    iStack_18c = iStack_18c + 1;
  } while( true );
}
