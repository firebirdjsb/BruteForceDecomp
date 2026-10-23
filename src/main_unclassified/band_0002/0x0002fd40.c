/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C0FD97EC4B53FBD129F7C42EC281468BB3083E1E8BCC68168AD5BAD1193B29D
 * Entry: 0x0002fd40, Ghidra index: 317, label: FUN_0002fd40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a3fe4;
extern uint32_t PTR_FUN_003a4f68;
undefined4 FUN_0002fd40(float *param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  float *pfVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  int in_ECX;
  int *extraout_EDX;
  int unaff_EBX;
  float *pfVar15;
  float10 fVar16;
  int *piStack_25c;
  int local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  float local_24c;
  float fStack_248;
  int *piStack_244;
  int *local_240;
  undefined8 uStack_23c;
  float fStack_234;
  float local_230;
  int *local_22c;
  float local_228;
  undefined **ppuStack_224;
  float fStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined **ppuStack_20c;
  float fStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined1 auStack_1e0 [36];
  undefined1 auStack_1bc [64];
  undefined1 auStack_17c [376];
  
  piVar7 = (int *)FUN_000120f0();
  local_22c = piVar7;
  if (*(int *)(in_ECX + 0x3ec) == 0) {
    FUN_00055a60(in_ECX + 0x3dc);
  }
  local_24c = (float)(*(int *)(in_ECX + 1000) + *(int *)(in_ECX + 0x3ec));
  uVar8 = (int)local_24c - 1;
  if (*(uint *)(in_ECX + 0x3e4) <= uVar8) {
    uVar8 = uVar8 - *(uint *)(in_ECX + 0x3e4);
  }
  piVar10 = *(int **)(*(int *)(*(int *)(in_ECX + 0x3e0) + uVar8 * 4) + 0x58);
  local_228 = 0.0;
  local_240 = piVar10;
  if ((piVar10 != (int *)0x0) && ((*(byte *)(piVar10 + 0x1c) & 1) == 0)) {
    local_228 = (float)FUN_000388b0(*(undefined4 *)(in_ECX + 0x318));
  }
  if (local_228 == 0.0) {
    iVar9 = FUN_00055aa0();
    if ((*(uint *)(iVar9 + 0x88) >> 0xd & 1) == 0) {
      return 0;
    }
    local_228 = (float)FUN_00049c60();
    piVar10 = (int *)FUN_00049ca0();
    local_240 = piVar10;
  }
  *(undefined4 *)(in_ECX + 0x860) = 0x3f800000;
  *(undefined1 *)(in_ECX + 0x85d) = 0;
  if ((*(byte *)(in_ECX + 0x4f4) & 1) != 0) {
    return 2;
  }
  if (*(int *)(in_ECX + 0x4d0) == 0) {
    return 0;
  }
  local_230 = 4.2039e-45;
  cVar5 = FUN_00012620();
  if (cVar5 == '\0') {
    iVar9 = (**(code **)(*piVar7 + 0x40))();
    fVar2 = *(float *)(iVar9 + 0x24) - *(float *)(*(int *)(in_ECX + 0x4d0) + 0x14);
    fVar3 = *(float *)(iVar9 + 0x2c) - *(float *)(*(int *)(in_ECX + 0x4d0) + 0x1c);
    *(uint *)(in_ECX + 0x4f4) = *(uint *)(in_ECX + 0x4f4) & 0xfffffffd;
    *(uint *)(in_ECX + 0x4f4) = *(uint *)(in_ECX + 0x4f4) & 0xfffffffb;
    uStack_254 = 3;
    uStack_250 = (undefined **)CONCAT13(1,(undefined3)uStack_250);
    local_24c = fVar2 * fVar2 + fVar3 * fVar3;
    if (((25.0 < local_24c) && (13.0 < *(float *)(in_ECX + 0x500))) &&
       (iVar9 = FUN_000238e0(piVar7), iVar9 < 0x32)) {
      uStack_250 = (undefined **)((uint)uStack_250 & 0xffffff);
      uStack_254 = 4;
    }
    *(undefined1 *)(in_ECX + 0x85c) = 1;
    local_230 = 1.0;
    ppuStack_20c = &PTR_FUN_003a4f68;
    fStack_1f8 = 0.0;
    FUN_00058b60();
    cVar5 = FUN_00058bc0();
    ppuStack_20c = &PTR_FUN_003a4f68;
    if (fStack_1f8 != 0.0) {
      FUN_0008f6e0();
    }
    if (cVar5 != '\0') {
      local_230 = 0.15;
    }
    if (local_24c < 2.25) {
      fVar16 = (float10)FUN_0002fba0(in_ECX + -0x40,*(int *)(in_ECX + 0x4d0) + 0x14,0x3f666666);
      *(float *)(in_ECX + 0x860) = (float)fVar16;
      *(undefined1 *)(in_ECX + 0x85d) = 1;
    }
    cVar5 = FUN_00026d80(in_ECX + -0x40,in_ECX + 0x8f0,in_ECX + 0x438,0,local_230);
    local_230 = *(float *)(in_ECX + 0x440);
    local_24c = *(float *)(in_ECX + 0x43c);
    uStack_218 = *(undefined4 *)(in_ECX + 0x438);
    uStack_214 = local_24c;
    uStack_210 = local_230;
    FUN_000255d0(param_1,0);
    if (cVar5 == '\0') {
      fVar16 = (float10)FUN_00023900(0x3f800000,0x40200000);
      *(float *)(in_ECX + 0x4d4) = (float)fVar16;
      *(undefined4 *)(in_ECX + 0x4d8) = 1;
      iVar9 = FUN_00055aa0();
      *(uint *)(iVar9 + 0x88) = *(uint *)(iVar9 + 0x88) | 2;
      param_1[2] = 0.0;
      param_1[1] = 0.0;
      *param_1 = 0.0;
      return 1;
    }
    FUN_0004d970(in_ECX + -0x40,param_1,uStack_254,1,1);
    if (((*(byte *)(in_ECX + 0x424) & 4) != 0) && ((*(uint *)(in_ECX + 0x4f4) & 0x100) == 0)) {
      iVar9 = FUN_00055aa0();
      *(uint *)(iVar9 + 0x88) = *(uint *)(iVar9 + 0x88) & 0xfff1ffff;
      iVar9 = FUN_00024540(in_ECX + -0x40,0x2c,1,piVar10,0,0x3fa66666,0);
      if (iVar9 != 1) {
        return 1;
      }
      iVar9 = FUN_00055aa0();
      *(uint *)(iVar9 + 0x88) = *(uint *)(iVar9 + 0x88) | 0x10000;
      *(uint *)(in_ECX + 0x4f4) = *(uint *)(in_ECX + 0x4f4) | 0x100;
      return 1;
    }
    *(undefined4 *)(in_ECX + 0x450) = 0;
    *(undefined4 *)(in_ECX + 0x44c) = 0;
    *(undefined4 *)(in_ECX + 0x448) = 0;
    if (piVar10 == (int *)0x0) {
      return 1;
    }
    if (uStack_250._3_1_ == '\0') {
      return 1;
    }
    (**(code **)(*local_22c + 0x40))();
    (**(code **)(*piVar10 + 0x40))();
    FUN_0004c480(in_ECX + 0x448);
    FUN_00024f80(in_ECX + -0x40,local_240,0x41a00000,0);
    return 1;
  }
  (*(code *)**(undefined4 **)(in_ECX + 0x51c))(*(undefined4 *)(in_ECX + 0x400));
  if (piStack_25c[0x136] == 0) {
    return 0;
  }
  cVar5 = FUN_0002f960(piStack_25c[0x136] == 2,0);
  if (cVar5 != '\0') {
LAB_00030dc1:
    FUN_0003f0e0(0);
    return 2;
  }
  (**(code **)(*(int *)(piStack_25c[0x134] + 0xc) + 8))();
  pfVar11 = (float *)FUN_0001fdd0();
  fStack_220 = -pfVar11[2];
  uStack_250 = (undefined **)-pfVar11[1];
  piStack_25c[0x112] = (int)-*pfVar11;
  piStack_25c[0x113] = (int)uStack_250;
  piStack_25c[0x114] = (int)fStack_220;
  piStack_25c[0x135] = (int)((float)piStack_25c[0x135] - (float)piStack_25c[0x100]);
  ppuStack_224 = uStack_250;
  switch(piStack_25c[0x136]) {
  case 1:
    piStack_25c[0x13f] = 0;
    piStack_25c[0x136] = 2;
    piStack_25c[0x13e] = 0;
    piStack_25c[0x13c] = 0;
    piStack_25c[0x13b] = 0;
    piStack_25c[0x13a] = 0;
    if (((piStack_25c[0xe1] & 0x100U) == 0) &&
       (FUN_000384a0(piStack_25c + 0x134), 4 < (uint)piStack_25c[0x153])) {
      FUN_00038470();
    }
    if (piVar10 != (int *)0x0) {
      piVar12 = (int *)FUN_000456c0();
      if (piVar12 == piVar7) {
        FUN_000122d0(0x43);
        FUN_00045250(piStack_25c + -0x10,auStack_17c,0);
        FUN_00012320(0x41);
        FUN_00045250(piStack_25c + -0x10,auStack_1bc,0);
        FUN_00012440();
        FUN_00012440();
        piVar10 = piStack_244;
      }
      uVar1 = *(undefined4 *)(piVar7[2] + 0x1f8);
      cVar5 = FUN_000571e0(&uStack_250);
      if (cVar5 != '\0') {
        FUN_00057730(uVar1);
      }
    }
  case 2:
    if ((((0.0 < (float)piStack_25c[0x13f]) && (piVar10 != (int *)0x0)) && (local_22c != (int *)0x0)
        ) && (((uint)local_22c[0x20] >> 5 & 1) != 0)) {
      iVar9 = (**(code **)(*piVar10 + 0x40))();
      iVar13 = (**(code **)(*piVar7 + 0x40))();
      fVar2 = *(float *)(iVar13 + 0x2c) - *(float *)(iVar9 + 0x2c);
      uStack_250 = (undefined **)(*(float *)(iVar13 + 0x28) - *(float *)(iVar9 + 0x28));
      fVar3 = *(float *)(iVar13 + 0x24) - *(float *)(iVar9 + 0x24);
      uStack_23c = CONCAT44(fVar2,uStack_250);
      if ((float)uStack_250 * (float)uStack_250 + fVar2 * fVar2 + fVar3 * fVar3 < 64.0) {
        FUN_00048030();
        return 0;
      }
    }
    piStack_25c[0x13f] = (int)((float)piStack_25c[0x100] + (float)piStack_25c[0x13f]);
    bVar6 = *(byte *)(piStack_25c[0x134] + 100) >> 2 & 1;
    if (((bVar6 == 0) || ((*(byte *)(piVar7[3] + 0x1a9) & 1) == 0)) ||
       ((*(byte *)(piStack_25c[0x134] + 100) & 0x10) != 0)) {
      bVar4 = false;
      if (bVar6 != 0) {
        FUN_0003f0e0(1);
      }
      iVar9 = (**(code **)(*piVar7 + 0x40))();
      pfVar11 = (float *)(**(code **)(*(int *)(piStack_25c[0x134] + 8) + 4))();
      fVar2 = *(float *)(iVar9 + 0x24) - *pfVar11;
      fVar3 = *(float *)(iVar9 + 0x2c) - pfVar11[2];
      if (0.80999994 < fVar2 * fVar2 + fVar3 * fVar3) {
        return 0;
      }
    }
    else {
      bVar4 = true;
      FUN_0003f0e0(1);
      if (((*(byte *)(piStack_25c[0x134] + 100) & 8) != 0) && (piVar7[0x7e] == 6)) {
        piStack_25c[0x136] = 9;
      }
    }
    FUN_000239d0(piVar7);
    piVar10 = (int *)FUN_0004ad00(piStack_25c + -0x10);
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 0x40))();
      FUN_0004dd70();
      FUN_00024f80(piStack_25c + -0x10,piVar10,0x420c0000,0);
      piStack_25c[0x135] = (int)((float)piStack_25c[0x100] + (float)piStack_25c[0x135]);
      iVar9 = (**(code **)(*piVar7 + 0x40))();
      iVar13 = (**(code **)(*piStack_244 + 0x40))();
      piStack_244 = (int *)(*(float *)(iVar13 + 0x2c) - *(float *)(iVar9 + 0x2c));
      uStack_250 = (undefined **)(*(float *)(iVar13 + 0x28) - *(float *)(iVar9 + 0x28));
      uStack_23c = CONCAT44(piStack_244,uStack_250);
      piStack_25c[0x112] = (int)(*(float *)(iVar13 + 0x24) - *(float *)(iVar9 + 0x24));
      piStack_25c[0x113] = (int)uStack_250;
      piStack_25c[0x114] = (int)piStack_244;
      piStack_25c[0x113] = 0;
      FUN_0001fd40();
    }
    if ((((float)piStack_25c[0x135] < 0.0 == ((float)piStack_25c[0x135] == 0.0)) ||
        (cVar5 = FUN_0002fa90(), cVar5 == '\0')) && ((float)piStack_25c[0x13f] < 10.0)) break;
    piVar7 = local_22c;
    if ((piVar10 != (int *)0x0) ||
       ((fVar16 = (float10)FUN_00012520(), fVar16 < (float10)0.0 != (fVar16 == (float10)0.0) &&
        (iVar9 = FUN_00055aa0(), (*(uint *)(iVar9 + 0x88) >> 0xd & 1) == 0)))) {
      iVar9 = FUN_0002f270(piStack_25c + -0x10,piStack_25c[0x141],piStack_25c[0x142],1);
      if (iVar9 == 1) {
        piStack_25c[0x136] = 0;
        uStack_250 = &PTR_FUN_003a3fe4;
        fVar16 = (float10)FUN_0002f250();
        local_24c = (float)fVar16;
        FUN_000454b0(&uStack_250);
        break;
      }
      fVar16 = (float10)FUN_0002f250();
      FUN_000124f0((float)fVar16);
    }
    if (bVar4) {
      piStack_25c[0x136] = 8;
      fVar16 = (float10)FUN_00023900(0x40b00000,0x40c00000);
      FUN_000124f0((float)fVar16);
    }
    else {
      bVar6 = *(byte *)(piStack_25c[0x134] + 100) & 1;
      if ((*(byte *)(piStack_25c[0x134] + 100) >> 1 & 1) == 0) {
        if (bVar6 == 0) {
          piStack_25c[0x139] = 0;
          piStack_25c[0x138] = 0;
          piStack_25c[0x137] = 0;
          piStack_25c[0x136] = 10;
          fVar16 = (float10)FUN_00023900(0x40400000,0x40800000);
          piStack_25c[0x135] = (int)(float)fVar16;
          goto LAB_00030605;
        }
LAB_000305f2:
        FUN_00047b40();
      }
      else {
        if (bVar6 != 0) {
          if (piVar7 == (int *)0x0) {
            fVar16 = (float10)FUN_00233b90();
            local_258 = 1;
            if (fVar16 <= (float10)0.5) {
              local_258 = -1;
            }
            (**(code **)(*(int *)(*extraout_EDX + 0xc) + 8))();
            pfVar11 = (float *)FUN_0001fd10();
            uStack_23c._4_4_ = (float)local_258 + (float)local_258;
            local_240 = (int *)(uStack_23c._4_4_ * *pfVar11);
            uStack_23c._0_4_ = uStack_23c._4_4_ * (float)*(undefined8 *)(pfVar11 + 1);
            uStack_23c._4_4_ =
                 uStack_23c._4_4_ * (float)((ulonglong)*(undefined8 *)(pfVar11 + 1) >> 0x20);
          }
          else if ((*(byte *)(piStack_25c + 0x13d) & 0x20) == 0) {
            iVar9 = (**(code **)(*(int *)piVar7[1] + 0x40))();
            local_240 = *(int **)(iVar9 + 0x24);
            uStack_23c._4_4_ = *(float *)(iVar9 + 0x2c);
          }
          else {
            pfVar11 = (float *)FUN_000237b0(piVar7,auStack_1e0,0x3f800000);
            local_240 = (int *)*pfVar11;
            uStack_23c._4_4_ = pfVar11[2];
          }
          piStack_25c[0x13d] = piStack_25c[0x13d] & 0xffffffef;
          piStack_25c[0x13d] = piStack_25c[0x13d] & 0xfffffff7;
          uStack_250 = (undefined **)uStack_23c._4_4_;
          pfVar11 = (float *)(**(code **)(*(int *)(piStack_25c[0x134] + 8) + 4))();
          uStack_250 = (undefined **)(uStack_23c._4_4_ - pfVar11[2]);
          local_240 = (int *)((float)local_240 - *pfVar11);
          uStack_23c = CONCAT44(uStack_250,(float)uStack_23c);
          (**(code **)(*(int *)(piStack_25c[0x134] + 0xc) + 8))();
          FUN_0001fd10();
          if (local_24c * 0.0 + uStack_23c._4_4_ * fStack_248 + (float)uStack_250 * (float)local_240
              <= 0.0) goto LAB_000305f2;
        }
        FUN_00047d40();
      }
      FUN_0003f0e0(0);
    }
LAB_00030605:
    piStack_25c[0x13d] = piStack_25c[0x13d] & 0xffffffdf;
    break;
  case 3:
    (**(code **)(piVar7[0x6d] + 0x28))();
    pfVar11 = (float *)FUN_0001fdd0();
    fVar2 = pfVar11[2];
    uStack_250 = (undefined **)-pfVar11[1];
    uStack_23c = CONCAT44(-fVar2,uStack_250);
    piStack_25c[0x112] = (int)-*pfVar11;
    piStack_25c[0x113] = (int)uStack_250;
    piStack_25c[0x114] = (int)-fVar2;
    iVar9 = (**(code **)(*piVar7 + 0x40))();
    pfVar15 = (float *)(iVar9 + 0x24);
    pfVar11 = (float *)(**(code **)(*(int *)(piStack_25c[0x134] + 8) + 4))();
    fStack_220 = pfVar11[2] - *(float *)(iVar9 + 0x2c);
    uStack_250 = (undefined **)(pfVar11[1] - *(float *)(iVar9 + 0x28));
    local_228 = *pfVar11 - *pfVar15;
    ppuStack_224 = uStack_250;
    pfVar11 = (float *)FUN_0001fd40();
    fVar2 = pfVar11[2];
    uStack_250 = (undefined **)pfVar11[1];
    *param_1 = *pfVar11;
    param_1[1] = (float)uStack_250;
    param_1[2] = fVar2;
    (**(code **)(piVar7[0x6d] + 0x3c))(param_1);
    FUN_00024f80(unaff_EBX + -0x40,fStack_248,0x420c0000,0);
    puVar14 = (undefined4 *)(**(code **)(piVar7[0x6d] + 0x10))();
    uStack_1e4 = puVar14[2];
    uStack_1ec = *puVar14;
    uStack_1f0 = *(undefined4 *)(iVar9 + 0x2c);
    fStack_1f8 = *pfVar15;
    uStack_250 = *(undefined ***)(piStack_25c[0x134] + 0x1c);
    local_240 = *(int **)(piStack_25c[0x134] + 0x14);
    uStack_1e8 = 0;
    uStack_1f4 = 0;
    uStack_23c = ZEXT48(uStack_250) << 0x20;
    cVar5 = FUN_00025870(0x3e4ccccd);
    if (cVar5 == '\0') {
      pfVar11 = (float *)(**(code **)(*(int *)(piStack_25c[0x134] + 8) + 4))();
      fVar2 = *(float *)(iVar9 + 0x2c) - pfVar11[2];
      if ((*pfVar15 - *pfVar11) * (*pfVar15 - *pfVar11) + fVar2 * fVar2 < 1.0) {
        fStack_234 = 2.8026e-45;
      }
    }
    else {
      piStack_25c[0x136] = 1;
      fVar16 = (float10)FUN_00023900(0x40000000,0x40400000);
      piStack_25c[0x135] = (int)(float)fVar16;
      param_1[2] = 0.0;
      param_1[1] = 0.0;
      *param_1 = 0.0;
    }
    break;
  case 4:
    iVar9 = (**(code **)(*piVar7 + 0x40))();
    pfVar15 = (float *)(iVar9 + 0x24);
    (**(code **)(*(int *)(piStack_25c[0x134] + 0xc) + 8))();
    pfVar11 = (float *)FUN_0001fdd0();
    uStack_250 = (undefined **)-pfVar11[1];
    local_240 = (int *)-*pfVar11;
    uStack_23c = CONCAT44(-pfVar11[2],uStack_250);
    cVar5 = FUN_0004cab0(*(undefined4 *)(piStack_25c[-0xc] + 8),pfVar15,0x41700000,0x40a00000);
    if (cVar5 == '\0') {
      fVar2 = (float)piStack_25c[0x13a];
      if ((float)piStack_25c[0x13c] * (float)piStack_25c[0x13c] +
          (float)piStack_25c[0x13b] * (float)piStack_25c[0x13b] + fVar2 * fVar2 < 1.1920929e-07) {
        iVar13 = *(int *)(iVar9 + 0x2c);
        uStack_250 = *(undefined ***)(iVar9 + 0x28);
        piStack_25c[0x13a] = (int)*pfVar15;
        piStack_25c[0x13b] = (int)uStack_250;
        piStack_25c[0x13c] = iVar13;
      }
      pfVar11 = (float *)(**(code **)(*(int *)(piStack_25c[0x134] + 8) + 4))();
      fVar2 = *(float *)(iVar9 + 0x2c) - pfVar11[2];
      local_230 = *pfVar15 - (float)piStack_25c[0x13a];
      fVar3 = *(float *)(iVar9 + 0x2c) - (float)piStack_25c[0x13c];
      if (((*pfVar15 - *pfVar11) * (*pfVar15 - *pfVar11) + fVar2 * fVar2 < 4.0) ||
         (local_230 * local_230 + fVar3 * fVar3 < 2.25)) {
        fVar2 = (float)piStack_25c[0x139];
        uStack_250 = (undefined **)piStack_25c[0x138];
        *param_1 = (float)piStack_25c[0x137];
        param_1[1] = (float)uStack_250;
        param_1[2] = fVar2;
      }
      else {
        piStack_25c[0x136] = 7;
        fVar16 = (float10)FUN_00023900(0x40a00000,0x40e00000);
        piStack_25c[0x135] = (int)(float)fVar16;
        FUN_000124f0(piStack_25c[0x135]);
      }
    }
    else {
      fVar2 = (float)piStack_25c[0x139];
      uStack_250 = (undefined **)piStack_25c[0x138];
      *param_1 = (float)piStack_25c[0x137];
      param_1[1] = (float)uStack_250;
      param_1[2] = fVar2;
    }
    break;
  case 5:
    iVar9 = (**(code **)(*piStack_25c + 0x390))(param_1);
    if (iVar9 != 1) {
      iVar9 = (**(code **)(*piVar7 + 0x40))();
      pfVar11 = (float *)(**(code **)(*(int *)(piStack_25c[0x134] + 8) + 4))();
      fVar2 = *(float *)(iVar9 + 0x24) - *pfVar11;
      fVar3 = *(float *)(iVar9 + 0x2c) - pfVar11[2];
      if (fVar2 * fVar2 + fVar3 * fVar3 <= 0.040000003) {
        piStack_25c[0x136] = 1;
        fVar16 = (float10)FUN_00023900(0x3fe00000,0x40200000);
        piStack_25c[0x135] = (int)(float)fVar16;
      }
      else {
        piStack_25c[0x136] = 3;
        fVar16 = (float10)FUN_00023900(0,0x40400000);
        piStack_25c[0x135] = (int)(float)fVar16;
      }
    }
    break;
  case 6:
    iVar9 = (**(code **)(*piStack_25c + 0x390))(param_1);
    if (iVar9 != 1) {
      piStack_25c[0x136] = 7;
      fVar16 = (float10)FUN_00023900(0x40a00000,0x40e00000);
      FUN_000124f0((float)fVar16);
    }
    break;
  case 7:
    if (local_22c != (int *)0x0) {
      if (((uint)local_22c[0x20] >> 5 & 1) == 0) {
        if ((piStack_25c[0x13d] & 0x20U) == 0) {
          if ((char)piStack_25c[0x13d] < '\0') {
            *(byte *)(piStack_25c[0x134] + 100) = *(byte *)(piStack_25c[0x134] + 100) | 0x40;
            piStack_25c[0x13d] = piStack_25c[0x13d] & 0xffffffdf;
            piStack_25c[0x13d] = piStack_25c[0x13d] & 0xffffff7f;
            uVar8 = piStack_25c[0x13d];
            if ((uVar8 & 4) == 0) {
              if ((uVar8 & 2) != 0) {
                piStack_25c[0x13d] = uVar8 & 0xfffffffd;
                FUN_00047b40();
                piVar10 = piStack_244;
              }
            }
            else {
              piStack_25c[0x13d] = uVar8 & 0xfffffffb;
              FUN_00047d40();
              piVar10 = piStack_244;
            }
          }
          else if ((((uint)local_22c[0x20] >> 3 & 1) == 0) &&
                  (fVar16 = (float10)FUN_00012520(), (float10)3.0 < fVar16)) {
            FUN_000124f0(0x3f800000);
          }
        }
      }
      else {
        piStack_25c[0x13d] = piStack_25c[0x13d] | 0x20;
      }
    }
    (**(code **)piStack_25c[0x143])(piStack_25c[0x100]);
    if (piVar10 != (int *)0x0) {
      if ((*(byte *)(piStack_25c + 0x109) & 4) == 0) {
        FUN_00024f80(piStack_25c + -0x10,piVar10,0x420c0000,0);
      }
      else {
        fVar16 = (float10)FUN_00012520();
        if (fVar16 != (float10)0.0) {
          piStack_25c[0xc] = 0;
          piStack_25c[10] = 0;
          *(byte *)(piStack_25c + 0xb) = *(byte *)(piStack_25c + 0xb) & 0xfa | 2;
          iVar9 = FUN_00055aa0();
          *(uint *)(iVar9 + 0x88) = *(uint *)(iVar9 + 0x88) & 0xfff1ffff;
          iVar9 = FUN_00024540(piStack_25c + -0x10,0x2c,1,piVar10,0,0x3fa66666,0);
          if (iVar9 == 1) {
            iVar9 = FUN_00055aa0();
            *(uint *)(iVar9 + 0x88) = *(uint *)(iVar9 + 0x88) | 0x10000;
          }
          piStack_25c[0x146] = 0;
          piStack_25c[0x144] = 0;
          *(byte *)(piStack_25c + 0x145) = *(byte *)(piStack_25c + 0x145) & 0xfa | 2;
        }
      }
    }
    fVar16 = (float10)FUN_00012520();
    if (fVar16 < (float10)0.0 != (fVar16 == (float10)0.0)) {
      cVar5 = FUN_0002f960(0,1);
      if (cVar5 != '\0') goto LAB_00030dc1;
      FUN_00047f20();
    }
    break;
  case 8:
    FUN_0003f0e0(0);
    cVar5 = FUN_00126ba0();
    if ((cVar5 != '\0') && (piVar7[0x7e] != 6)) {
      if (piStack_244 == (int *)0x0) goto LAB_00030862;
      if ((*(byte *)(piStack_25c + 0x109) & 4) == 0) {
        FUN_00024f80(piStack_25c + -0x10,piStack_244,0x41c80000,0);
      }
      else {
        fVar16 = (float10)FUN_00012520();
        if (fVar16 != (float10)0.0) {
          piStack_25c[0xc] = 0;
          piStack_25c[10] = 0;
          *(byte *)(piStack_25c + 0xb) = *(byte *)(piStack_25c + 0xb) & 0xfa | 2;
          iVar9 = FUN_00055aa0();
          *(uint *)(iVar9 + 0x88) = *(uint *)(iVar9 + 0x88) & 0xfff1ffff;
          iVar9 = FUN_00024540(piStack_25c + -0x10,0x2c,1,piStack_244,0,0x3fa66666,0);
          if (iVar9 == 1) {
            iVar9 = FUN_00055aa0();
            *(uint *)(iVar9 + 0x88) = *(uint *)(iVar9 + 0x88) | 0x10000;
          }
          piStack_25c[0x146] = 0;
          piStack_25c[0x144] = 0;
          *(byte *)(piStack_25c + 0x145) = *(byte *)(piStack_25c + 0x145) & 0xfa | 2;
          piStack_25c[0x136] = 1;
          fVar16 = (float10)FUN_00023900(0x40000000,0x40400000);
          piStack_25c[0x135] = (int)(float)fVar16;
        }
      }
    }
    if (piStack_244 != (int *)0x0) {
      piStack_25c[0x114] = 0;
      piStack_25c[0x113] = 0;
      piStack_25c[0x112] = 0;
      iVar9 = (**(code **)(*piVar7 + 0x40))();
      iVar13 = (**(code **)(*piStack_244 + 0x40))();
      fStack_234 = *(float *)(iVar13 + 0x2c) - *(float *)(iVar9 + 0x2c);
      uStack_250 = (undefined **)(*(float *)(iVar13 + 0x28) - *(float *)(iVar9 + 0x28));
      *param_1 = *(float *)(iVar13 + 0x24) - *(float *)(iVar9 + 0x24);
      param_1[1] = (float)uStack_250;
      param_1[2] = fStack_234;
      FUN_0004d970(piStack_25c + -0x10,param_1,1,1,1);
    }
LAB_00030862:
    fVar16 = (float10)FUN_00012520();
    if (fVar16 < (float10)0.0 == (fVar16 == (float10)0.0)) {
      return 1;
    }
    piStack_25c[0x136] = 1;
    fVar16 = (float10)FUN_00023900(0x3f800000,0x40200000);
    piStack_25c[0x135] = (int)(float)fVar16;
    return 1;
  case 9:
    FUN_0003f0e0(1);
    if (piStack_244 == (int *)0x0) {
      return 1;
    }
    piStack_25c[0x114] = 0;
    piStack_25c[0x113] = 0;
    piStack_25c[0x112] = 0;
    iVar9 = (**(code **)(*piVar7 + 0x40))();
    iVar13 = (**(code **)(*piStack_244 + 0x40))();
    fStack_234 = *(float *)(iVar13 + 0x2c) - *(float *)(iVar9 + 0x2c);
    uStack_250 = (undefined **)(*(float *)(iVar13 + 0x28) - *(float *)(iVar9 + 0x28));
    *param_1 = *(float *)(iVar13 + 0x24) - *(float *)(iVar9 + 0x24);
    param_1[1] = (float)uStack_250;
    param_1[2] = fStack_234;
    FUN_0004d970(piStack_25c + -0x10,param_1,1,1,1);
    FUN_00024f80(piStack_25c + -0x10,piStack_244,0x41c80000,0);
    return 1;
  case 10:
    FUN_00024f80(piStack_25c + -0x10,piVar10,0x41c80000,0);
    if ((float)piStack_25c[0x135] < 0.0 != ((float)piStack_25c[0x135] == 0.0)) {
      piStack_25c[0x136] = 1;
      fVar16 = (float10)FUN_00023900(0,0x3f800000);
      piStack_25c[0x135] = (int)(float)fVar16;
    }
  }
  FUN_0004d970(piStack_25c + -0x10,param_1,fStack_234,1,1);
  return 1;
}
