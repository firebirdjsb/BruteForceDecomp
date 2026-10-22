/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE315658B8BAFBF7A3A534BE60EBCBCD56F60C644433F392FF3F493FFC96757F
 * Entry: 0x000cea20, Ghidra index: 2557, label: FUN_000cea20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000cea20(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
                 undefined4 *param_6)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  uint uVar11;
  float local_138;
  float local_134;
  int local_130;
  float local_12c;
  uint local_128;
  uint local_124;
  float local_118;
  float local_10c;
  int local_108;
  uint local_104;
  undefined4 local_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  char local_f0;
  uint local_cc;
  uint local_c8;
  float afStack_c0 [4];
  float afStack_b0 [4];
  char local_a0;
  uint local_7c;
  uint local_78;
  undefined4 auStack_70 [4];
  int aiStack_60 [4];
  uint local_50;
  int local_4c;
  undefined4 auStack_48 [8];
  undefined4 auStack_28 [8];
  undefined4 local_8;
  undefined4 *local_4;
  
  uVar7 = 0;
  uVar11 = 0;
  uVar6 = 0x7fffffff;
  local_134 = 3.4028235e+38;
  local_124 = 0x7fffffff;
  local_108 = 0;
  local_104 = 0;
  if (0 < (int)param_4) {
    local_130 = 0;
    pfVar10 = (float *)(param_3 + 8);
    do {
      fVar3 = *pfVar10;
      local_12c = pfVar10[-2];
      FUN_001f4740(param_2,&local_108,&local_104,local_12c,fVar3);
      if ((fVar3 < local_134) ||
         ((local_104 == uVar6 && (local_12c < *(float *)(local_130 + param_3))))) {
        local_124 = local_104;
        local_134 = *pfVar10;
        local_130 = (-8 - param_3) + (int)pfVar10;
        uVar6 = local_104;
        uVar11 = uVar7;
      }
      uVar7 = uVar7 + 1;
      pfVar10 = pfVar10 + 3;
    } while ((int)uVar7 < (int)param_4);
  }
  uVar7 = uVar11;
  if ((int)uVar11 < 1) {
    uVar7 = param_4;
  }
  uVar8 = uVar7 - 1;
  if (1.1920929e-07 < ABS(*(float *)(param_3 + 8 + (uVar7 - 1) * 0xc) - local_134)) {
    uVar8 = uVar11;
  }
  local_128 = (uVar11 + 1 == param_4) - 1 & uVar11 + 1;
  local_130 = uVar8 - 1;
  if (local_130 < 0) {
    local_130 = param_4 - 1;
  }
  FUN_000cfec0();
  iVar9 = param_3 + local_130 * 0xc;
  FUN_000cfec0();
  local_10c = *(float *)(param_3 + local_128 * 0xc + 8);
  local_118 = *(float *)(iVar9 + 8);
  local_8 = param_5;
  local_134 = *(float *)(iVar9 + 4);
  local_4 = param_6;
  *param_6 = 0;
  local_4c = uVar6 + 1;
  local_50 = uVar6;
  auStack_48[uVar6 & 7] = 0x7fffffff;
  auStack_28[uVar6 & 7] = 0x80000000;
  if (local_cc == local_c8) {
    local_138 = local_118;
    if (local_f0 == '\0') {
      FUN_000d01c0();
      if (local_cc != local_c8) goto LAB_000cecd0;
      bVar5 = false;
    }
    else {
      bVar5 = false;
    }
  }
  else {
LAB_000cecd0:
    local_12c = afStack_b0[local_c8];
    local_138 = afStack_c0[local_c8];
    local_c8 = local_c8 + 1 & 3;
    bVar5 = true;
  }
  if (local_7c == local_78) {
    if (local_a0 != '\0') {
      bVar4 = false;
      iVar9 = local_108;
      goto LAB_000ced70;
    }
    FUN_000d01c0();
    if (local_7c == local_78) {
      bVar4 = false;
      iVar9 = local_108;
      goto LAB_000ced70;
    }
    local_134 = (float)auStack_70[local_78];
  }
  else {
    local_134 = (float)auStack_70[local_78];
  }
  piVar2 = aiStack_60 + local_78;
  local_78 = local_78 + 1 & 3;
  bVar4 = true;
  iVar9 = *piVar2;
LAB_000ced70:
  do {
    if (bVar5) {
      do {
        FUN_000ce2a0(param_2,local_138,local_12c);
        if ((local_cc == local_c8) && ((local_f0 != '\0' || (FUN_000d01c0(), local_cc == local_c8)))
           ) {
          bVar5 = false;
          local_128 = local_128 + 1 & (local_128 + 1 == param_4) - 1;
          iVar1 = param_3 + local_128 * 0xc;
          if (*(float *)(param_3 + 8 + local_128 * 0xc) < local_10c) break;
          FUN_000cfec0();
          if (local_cc == local_c8) {
            if (local_f0 == '\0') {
              FUN_000d01c0();
              if (local_cc != local_c8) goto LAB_000cee89;
              bVar5 = false;
            }
            else {
              bVar5 = false;
            }
          }
          else {
LAB_000cee89:
            local_12c = afStack_b0[local_c8];
            local_138 = afStack_c0[local_c8];
            local_c8 = local_c8 + 1 & 3;
            bVar5 = true;
          }
          local_10c = *(float *)(iVar1 + 8);
          local_100 = *(undefined4 *)(iVar1 + 4);
          local_f8 = local_10c;
        }
        else {
          local_138 = afStack_c0[local_c8];
          local_12c = afStack_b0[local_c8];
          local_c8 = local_c8 + 1 & 3;
          bVar5 = true;
        }
      } while ((int)local_12c <= (int)local_124);
    }
    if (bVar4) {
      do {
        FUN_000ce2a0(param_2,local_134,iVar9);
        if (local_7c == local_78) {
          if ((local_a0 == '\0') && (FUN_000d01c0(), local_7c != local_78)) {
            local_134 = (float)auStack_70[local_78];
            iVar9 = aiStack_60[local_78];
            local_78 = local_78 + 1 & 3;
            bVar4 = true;
          }
          else {
            bVar4 = false;
            local_130 = local_130 + -1;
            if (local_130 < 0) {
              local_130 = param_4 - 1;
            }
            iVar1 = param_3 + local_130 * 0xc;
            if (*(float *)(param_3 + 8 + local_130 * 0xc) < local_118) break;
            FUN_000cfec0();
            if (local_7c == local_78) {
              if (local_a0 == '\0') {
                FUN_000d01c0();
                if (local_7c != local_78) {
                  local_134 = (float)auStack_70[local_78];
                  goto LAB_000cf031;
                }
                bVar4 = false;
              }
              else {
                bVar4 = false;
              }
            }
            else {
              local_134 = (float)auStack_70[local_78];
LAB_000cf031:
              iVar9 = aiStack_60[local_78];
              local_78 = local_78 + 1 & 3;
              bVar4 = true;
            }
            local_118 = *(float *)(iVar1 + 8);
            local_fc = *(undefined4 *)(iVar1 + 4);
            local_f4 = local_118;
          }
        }
        else {
          local_134 = (float)auStack_70[local_78];
          iVar9 = aiStack_60[local_78];
          local_78 = local_78 + 1 & 3;
          bVar4 = true;
        }
      } while (iVar9 <= (int)local_124);
    }
    local_124 = local_124 + 1;
    if ((!bVar5) || (!bVar4)) {
      FUN_000ce390(param_2);
      return;
    }
  } while( true );
}
