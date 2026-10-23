/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B01583FCF62562D24B86F5F3BB70FE5F0D60A7F1A8EC12CD0CE553250AD0E14
 * Entry: 0x001137e0, Ghidra index: 3566, label: FUN_001137e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443314;
extern uint32_t PTR_FUN_003bc654;
extern uint32_t PTR_LAB_0039df40;
extern uint32_t _DAT_0040cc10;
extern uint32_t _DAT_0040cc14;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001137e0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float **ppfVar7;
  float **ppfVar8;
  float *pfVar9;
  float *pfVar10;
  int *piVar11;
  int iVar12;
  float fVar13;
  float10 fVar14;
  float10 fVar15;
  float *pfStack_2b0;
  float *pfStack_2ac;
  undefined1 auStack_2a8 [4];
  float *pfStack_2a4;
  undefined4 uStack_2a0;
  undefined1 uStack_299;
  int iStack_298;
  float fStack_294;
  float fStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  int iStack_284;
  float fStack_280;
  float local_27c;
  int iStack_278;
  float fStack_274;
  float fStack_270;
  float *pfStack_26c;
  float fStack_268;
  float *pfStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  int *piStack_250;
  int *piStack_24c;
  undefined4 uStack_248;
  float *pfStack_244;
  undefined4 uStack_240;
  float *pfStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  float *pfStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  float *pfStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 *puStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined1 auStack_200 [8];
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  int local_1d8 [4];
  float fStack_1c8;
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
  undefined1 auStack_184 [20];
  float fStack_170;
  float *pfStack_164;
  undefined1 auStack_150 [4];
  int iStack_14c;
  undefined1 auStack_148 [48];
  undefined4 uStack_118;
  undefined4 uStack_114;
  float fStack_110;
  undefined1 *puStack_108;
  int iStack_d0;
  int iStack_4;
  
  fVar4 = *(float *)(param_1 + 0xc);
  local_1d8[1] = local_1d8[1] & 0xfffffffcU | 4;
  local_1f8 = 0x1a4e765d;
  local_1f4 = 0;
  local_1f0 = 0x3f800000;
  local_1e4 = 0;
  local_1e8 = 0;
  local_1e0 = 0x3f800000;
  local_1dc = 0xf9d40e62;
  local_1d8[0] = 0;
  local_1ec = 0x3f800000;
  local_27c = fVar4;
  iVar2 = (**(code **)(*DAT_00443314 + 0x18))(DAT_00443314,(int)fVar4 + 0x67c);
  if (iVar2 == 0) {
    return;
  }
  iStack_278 = FUN_0023d240(*(undefined4 *)(param_1 + 500),(int)fVar4 + 0x680,auStack_200,0);
  FUN_002368d0(1);
  piStack_250 = (int *)0x0;
  piStack_24c = (int *)0x0;
  uStack_248 = 0;
  pfStack_21c = (float *)0x0;
  uStack_218 = 0;
  uStack_214 = 0;
  pfStack_22c = (float *)0x0;
  uStack_228 = 0;
  uStack_224 = 0;
  puStack_20c = (undefined4 *)0x0;
  uStack_208 = 0;
  uStack_204 = 0;
  iVar2 = *(int *)((int)fVar4 + 0x178);
  if (*(int *)((int)fVar4 + 0x178) != *(int *)((int)fVar4 + 0x17c)) {
    do {
      iVar12 = iVar2 + 0x38;
      iVar2 = FUN_00235d50(iVar2);
      if ((iVar2 != 0) && (iVar2 != -1)) {
        *(uint *)(iVar2 + 0x44) = *(uint *)(iVar2 + 0x44) | 0x20;
        FUN_001611d0();
        FUN_00052d50();
        FUN_00052d50();
        FUN_001611d0();
      }
      iVar2 = iVar12;
    } while (iVar12 != *(int *)((int)fVar4 + 0x17c));
  }
  iStack_298 = 0;
  fStack_294 = 0.0;
  fStack_290 = 0.0;
  uStack_28c = 0;
  uStack_288 = 0;
  auStack_2a8[0] = uStack_299;
  pfStack_2a4 = (float *)FUN_00138fe0(auStack_2a8);
  *(undefined1 *)((int)pfStack_2a4 + 0x21) = 1;
  pfStack_2a4[1] = (float)pfStack_2a4;
  *pfStack_2a4 = (float)pfStack_2a4;
  pfStack_2a4[2] = (float)pfStack_2a4;
  uStack_2a0 = 0;
  pfStack_2b0 = pfStack_21c;
  pfStack_2ac = pfStack_22c;
  if (piStack_250 != piStack_24c) {
    uStack_28c = 0;
    piVar11 = piStack_250;
    puVar3 = puStack_20c;
    do {
      iVar2 = *piVar11;
      fStack_294 = *pfStack_2b0;
      pfStack_2b0 = pfStack_2b0 + 1;
      fStack_290 = *pfStack_2ac;
      pfStack_2ac = pfStack_2ac + 1;
      uStack_288 = *puVar3;
      puVar3 = puVar3 + 1;
      piVar11 = piVar11 + 1;
      iStack_298 = iVar2;
      FUN_00129690(&iStack_298);
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar2 == 0) {
        iStack_298 = 0;
      }
      else {
        iStack_298 = *(int *)(iVar2 + 100);
      }
      fStack_290 = fStack_290 * 10.0;
      FUN_00129690(&iStack_298);
    } while (piVar11 != piStack_24c);
  }
  pfVar6 = (float *)*pfStack_2a4;
  iVar12 = local_1d8[0];
  iVar2 = iStack_4;
  do {
    while( true ) {
      local_1d8[0] = iVar12;
      iStack_4 = iVar2;
      if (pfVar6 == pfStack_2a4) {
        fVar4 = *(float *)(iStack_284 + 0x178);
        if (fVar4 != *(float *)(iStack_284 + 0x17c)) {
          do {
            fVar13 = (float)((int)fVar4 + 0x38);
            fStack_280 = fVar13;
            fVar5 = (float)FUN_00235d50(fVar4);
            fVar4 = fVar13;
            if ((((fVar5 != 0.0) && (fVar5 != -NAN)) &&
                (iVar12 = *(int *)((int)fVar5 + 0x10), iVar12 != 0)) &&
               ((pfStack_2b0 = *(float **)(iVar12 + 100), pfStack_2b0 != (float *)0x0 &&
                (pfStack_2b0 != (float *)0xffffffff)))) {
              FUN_00234f00();
              FUN_002333b0(auStack_184);
              pfStack_23c = pfStack_164;
              fVar15 = (float10)fpatan(-(float10)fStack_170,(float10)(float)pfStack_164);
              fVar14 = fVar15;
              if ((float10)_DAT_0040cc14 <= fVar15) {
                fVar14 = (float10)_DAT_0040cc14;
              }
              *(float *)(*(int *)(iVar12 + 0x3c) + 0x10) = (float)fVar14;
              if (fVar15 <= (float10)_DAT_0040cc10) {
                fVar15 = (float10)_DAT_0040cc10;
              }
              *(float *)(*(int *)(iVar12 + 0x3c) + 0x14) = (float)fVar15;
              pfVar6 = (float *)pfStack_2a4[1];
              cVar1 = *(char *)((int)pfVar6 + 0x21);
              pfVar9 = pfVar6;
              pfStack_2ac = pfStack_2a4;
              while (pfVar10 = pfVar9, cVar1 == '\0') {
                if ((uint)pfVar10[3] < (uint)fVar5) {
                  pfVar9 = (float *)pfVar10[2];
                  pfVar10 = pfStack_2ac;
                }
                else {
                  pfVar9 = (float *)*pfVar10;
                }
                cVar1 = *(char *)((int)pfVar9 + 0x21);
                pfStack_2ac = pfVar10;
              }
              if ((pfStack_2ac == pfStack_2a4) || ((uint)fVar5 < (uint)pfStack_2ac[3])) {
                pfStack_244 = pfStack_2a4;
                ppfVar8 = &pfStack_244;
              }
              else {
                ppfVar8 = &pfStack_2ac;
              }
              cVar1 = *(char *)((int)pfVar6 + 0x21);
              pfStack_2ac = pfStack_2a4;
              while (pfVar9 = pfVar6, cVar1 == '\0') {
                if ((float *)pfVar9[3] < pfStack_2b0) {
                  pfVar6 = (float *)pfVar9[2];
                  pfVar9 = pfStack_2ac;
                }
                else {
                  pfVar6 = (float *)*pfVar9;
                }
                cVar1 = *(char *)((int)pfVar6 + 0x21);
                pfStack_2ac = pfVar9;
              }
              if ((pfStack_2ac == pfStack_2a4) || (pfStack_2b0 < (float *)pfStack_2ac[3])) {
                pfStack_264 = pfStack_2a4;
                ppfVar7 = &pfStack_264;
              }
              else {
                ppfVar7 = &pfStack_2ac;
              }
              fVar4 = (*ppfVar8)[6];
              fVar13 = (*ppfVar7)[6];
              FUN_002b8f20();
              uStack_118 = *(undefined4 *)(iVar12 + 4);
              uStack_114 = *(undefined4 *)(iVar12 + 8);
              fStack_290 = *(float *)(iVar12 + 0xc);
              puStack_108 = auStack_148;
              fStack_110 = fStack_290;
              FUN_002b9370(auStack_150,0,0,3,3,fVar4,0);
              if (((iStack_14c != 0) || (iStack_d0 != 0)) &&
                 (iVar2 = FUN_002ea01d(0x110), iVar2 != 0)) {
                FUN_002ce1f0(auStack_150);
              }
              pfStack_26c = pfStack_2b0;
              fStack_274 = fVar5;
              fStack_270 = fVar4;
              fStack_268 = fVar13;
              FUN_001376b0();
              iVar2 = iStack_4;
              fVar4 = fStack_280;
            }
          } while (fVar4 != *(float *)(iStack_284 + 0x17c));
        }
        if (iStack_278 != 0) {
          FUN_0023d3e0();
        }
        *(byte *)(iVar2 + 0x7d8) = *(byte *)(iVar2 + 0x7d8) | 4;
        FUN_00129fd0(&iStack_278,*pfStack_2a4,pfStack_2a4);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(pfStack_2a4);
      }
      FUN_00139260();
      if (pfVar6[7] != 0.0) break;
      pfVar6[6] = 0.0;
      iVar12 = local_1d8[0];
      iVar2 = iStack_4;
    }
    puVar3 = (undefined4 *)FUN_002ea01d(8);
    iVar2 = iStack_4;
    if (puVar3 != (undefined4 *)0x0) {
      fVar4 = pfVar6[7];
      *puVar3 = &PTR_LAB_0039df40;
      puVar3[1] = fVar4;
    }
    fVar4 = pfVar6[5];
    local_1d8[0] = 0;
    uStack_1b4 = 0;
    uStack_19c = 0;
    piVar11 = local_1d8;
    for (iVar12 = 0x13; iVar12 != 0; iVar12 = iVar12 + -1) {
      *piVar11 = 0;
      piVar11 = piVar11 + 1;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 8) + 0xa44);
    local_1d8[3] = *(undefined4 *)(iVar2 + 0xe4);
    uStack_1b0 = 0x3cf5c28f;
    if (0.5 <= fVar4) {
      uStack_1c0 = 0x3f800000;
    }
    else {
      uStack_1c0 = 0x40a00000;
    }
    fVar4 = pfVar6[3];
    fStack_1c8 = pfVar6[5];
    fStack_274 = *(float *)((int)fVar4 + 0x38);
    fStack_270 = *(float *)((int)fVar4 + 0x3c);
    pfStack_26c = *(float **)((int)fVar4 + 0x40);
    local_1d8[1] = 0;
    uStack_1c4 = 1;
    uStack_1ac = 0x40200000;
    uStack_1a8 = 0x40200000;
    uStack_1a4 = 0x40200000;
    uStack_1a0 = 0x40200000;
    fStack_268 = 0.0;
    uStack_1bc = uStack_1c0;
    uStack_1b8 = uStack_1c0;
    FUN_002339d0(&uStack_240);
    iVar2 = *(int *)(iVar2 + 0xe0);
    pfStack_264 = pfStack_23c;
    uStack_260 = uStack_238;
    uStack_25c = uStack_234;
    uStack_258 = uStack_240;
    iVar12 = FUN_002ea01d(0xa0);
    if (iVar12 == 0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = (float)FUN_002ccc70(iVar12,**(undefined4 **)(iVar2 + 0xc),&pfStack_264);
    }
    *(int *)((int)fVar4 + 0x9c) = iStack_4 + 0x518;
    *(uint *)((int)fVar4 + 0x8c) = **(uint **)pfVar6[3] | 0x80000000;
    FUN_002b3c60();
    pfVar6[6] = fVar4;
    iVar2 = *(int *)((int)pfVar6[3] + 0x10);
    if (iVar2 == 0) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = *(float *)(iVar2 + 100);
    }
    cVar1 = *(char *)((int)pfStack_2a4[1] + 0x21);
    pfVar9 = (float *)pfStack_2a4[1];
    pfStack_2ac = pfStack_2a4;
    while (pfVar10 = pfVar9, cVar1 == '\0') {
      if ((uint)pfVar10[3] < (uint)fVar5) {
        pfVar9 = (float *)pfVar10[2];
        pfVar10 = pfStack_2ac;
      }
      else {
        pfVar9 = (float *)*pfVar10;
      }
      cVar1 = *(char *)((int)pfVar9 + 0x21);
      pfStack_2ac = pfVar10;
    }
    if ((pfStack_2ac == pfStack_2a4) || ((uint)fVar5 < (uint)pfStack_2ac[3])) {
      pfStack_2b0 = pfStack_2a4;
      ppfVar8 = &pfStack_2b0;
    }
    else {
      ppfVar8 = &pfStack_2ac;
    }
    if (*ppfVar8 == pfStack_2a4) {
      FUN_00114f20(iStack_4,fVar4,iStack_4 + 0x4e4);
    }
    else {
      fStack_280 = pfVar6[3];
      local_27c = fVar4;
      FUN_00064490();
    }
    iVar12 = 0;
    iVar2 = iStack_4;
  } while (local_1d8[0] == 0);
  (*(code *)PTR_FUN_003bc654)(local_1d8[0]);
  return;
}
